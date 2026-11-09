using System;
using System.Collections;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using Unity.WebRTC;

public class LivreStreamReceiver : MonoBehaviour
{
    [Header("WHEP Server Configuration")]
    [Tooltip("Target WHEP endpoint from MediaMTX")]
    [SerializeField] private string whepUrl = "http://127.0.0.1:8889/test/whep";

    [Header("Target Output")]
    [Tooltip("Assign your pre-existing RenderTexture here")]
    [SerializeField] private RenderTexture targetRenderTexture;

    [Header("Options")]
    [Tooltip("Max seconds to wait for ICE gathering before sending the offer")]
    [SerializeField] private float iceGatheringTimeout = 3f;

    [Tooltip("Log every codec this Unity WebRTC build can receive")]
    [SerializeField] private bool logCodecs = true;

    [Tooltip("Flip the image vertically when copying (WebRTC textures are often upside down)")]
    [SerializeField] private bool flipVertical = true;

    private RTCPeerConnection peerConnection;
    private Coroutine webRtcUpdateRoutine;
    private Texture receivedTexture; // native texture owned by the video track, updated automatically
    private string resourceUrl; // Location header returned by the WHEP server (used for DELETE)

    private void Start()
    {
        if (targetRenderTexture == null)
        {
            Debug.LogError("[WHEP] Missing Target RenderTexture! Please assign one in the Inspector.");
            return;
        }

        // Required: pumps WebRTC so video frames are actually delivered.
        // Must be started exactly once.
        webRtcUpdateRoutine = StartCoroutine(WebRTC.Update());

        StartCoroutine(StartWhepSession());
    }

    private IEnumerator StartWhepSession()
    {
        // 1. Create peer connection
        RTCConfiguration config = default;
        config.iceServers = new RTCIceServer[0]; // local network, no STUN needed
        peerConnection = new RTCPeerConnection(ref config);

        peerConnection.OnIceConnectionChange = state =>
            Debug.Log($"[WebRTC] ICE connection state: {state}");
        peerConnection.OnConnectionStateChange = state =>
            Debug.Log($"[WebRTC] Connection state: {state}");

        bool iceGatheringDone = false;
        peerConnection.OnIceGatheringStateChange = state =>
        {
            if (state == RTCIceGatheringState.Complete)
                iceGatheringDone = true;
        };

        // 2. Receive-only video transceiver
        RTCRtpTransceiverInit init = new RTCRtpTransceiverInit
        {
            direction = RTCRtpTransceiverDirection.RecvOnly
        };
        RTCRtpTransceiver transceiver = peerConnection.AddTransceiver(TrackKind.Video, init);

        // 3. Force VP8 into the offer so it matches the stream published by server.ts
        RTCRtpCapabilities capabilities = RTCRtpReceiver.GetCapabilities(TrackKind.Video);

        if (logCodecs)
        {
            foreach (var c in capabilities.codecs)
                Debug.Log($"[WebRTC] Supported receive codec: {c.mimeType} | {c.sdpFmtpLine}");
        }

        RTCRtpCodecCapability[] vp8Codecs = capabilities.codecs
            .Where(c => c.mimeType.Equals("video/VP8", StringComparison.OrdinalIgnoreCase))
            .ToArray();

        if (vp8Codecs.Length == 0)
        {
            Debug.LogError("[WebRTC] This Unity WebRTC build has NO VP8 receive support.");
            yield break;
        }

        RTCErrorType codecError = transceiver.SetCodecPreferences(vp8Codecs);
        if (codecError != RTCErrorType.None)
        {
            Debug.LogError($"[WebRTC] SetCodecPreferences failed: {codecError}");
            yield break;
        }

        // 4. Handle incoming video track
        peerConnection.OnTrack = (RTCTrackEvent evt) =>
        {
            if (evt.Track is VideoStreamTrack videoTrack)
            {
                Debug.Log("[WebRTC] Video track received.");
                // OnVideoReceived fires when the receive texture is created/resized,
                // NOT on every frame. The native side keeps updating this same texture,
                // so we only store it here and copy it into the RenderTexture in Update().
                videoTrack.OnVideoReceived += (Texture incomingTexture) =>
                {
                    Debug.Log($"[WebRTC] Video texture ready: {incomingTexture.width}x{incomingTexture.height}");
                    receivedTexture = incomingTexture;
                };
            }
        };

        // 5. Create and set local offer
        var offerOp = peerConnection.CreateOffer();
        yield return offerOp;

        if (offerOp.IsError)
        {
            Debug.LogError($"[WebRTC] Failed to create SDP offer: {offerOp.Error.message}");
            yield break;
        }

        RTCSessionDescription offerDesc = offerOp.Desc;
        var setLocalOp = peerConnection.SetLocalDescription(ref offerDesc);
        yield return setLocalOp;

        if (setLocalOp.IsError)
        {
            Debug.LogError($"[WebRTC] SetLocalDescription failed: {setLocalOp.Error.message}");
            yield break;
        }

        // 6. Wait for ICE gathering so the offer contains candidates
        float waited = 0f;
        while (!iceGatheringDone && waited < iceGatheringTimeout)
        {
            waited += Time.unscaledDeltaTime;
            yield return null;
        }

        string offerSdp = peerConnection.LocalDescription.sdp;

        if (!offerSdp.Contains("VP8"))
            Debug.LogWarning("[WebRTC] Offer SDP does not contain VP8! Check codec preferences.");

        Debug.Log($"[WebRTC] Sending offer SDP:\n{offerSdp}");

        // 7. POST the offer to the WHEP endpoint
        using (UnityWebRequest request = new UnityWebRequest(whepUrl, "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(offerSdp));
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/sdp");

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(
                    $"[WHEP] Handshake Failed: {request.error} | Response: {request.downloadHandler.text}");
                yield break;
            }

            // Remember the session URL so we can cleanly DELETE it later
            string location = request.GetResponseHeader("Location");
            if (!string.IsNullOrEmpty(location))
            {
                resourceUrl = location.StartsWith("http", StringComparison.OrdinalIgnoreCase)
                    ? location
                    : new Uri(new Uri(whepUrl), location).ToString();
            }

            // 8. Apply the SDP answer
            RTCSessionDescription answerDesc = new RTCSessionDescription
            {
                type = RTCSdpType.Answer,
                sdp = request.downloadHandler.text
            };

            var setRemoteOp = peerConnection.SetRemoteDescription(ref answerDesc);
            yield return setRemoteOp;

            if (setRemoteOp.IsError)
            {
                Debug.LogError($"[WebRTC] SetRemoteDescription failed: {setRemoteOp.Error.message}");
                yield break;
            }

            Debug.Log("[WHEP] Handshake complete. Waiting for video frames...");
        }
    }

    private void Update()
    {
        if (receivedTexture == null || targetRenderTexture == null)
            return;

        if (flipVertical)
            Graphics.Blit(receivedTexture, targetRenderTexture, new Vector2(1f, -1f), new Vector2(0f, 1f));
        else
            Graphics.Blit(receivedTexture, targetRenderTexture);
    }

    private void OnDestroy()
    {
        // Tell the server the session is over (best effort)
        if (!string.IsNullOrEmpty(resourceUrl))
        {
            UnityWebRequest.Delete(resourceUrl).SendWebRequest();
        }

        receivedTexture = null;

        if (webRtcUpdateRoutine != null)
        {
            StopCoroutine(webRtcUpdateRoutine);
            webRtcUpdateRoutine = null;
        }

        if (peerConnection != null)
        {
            peerConnection.Close();
            peerConnection.Dispose();
            peerConnection = null;
        }
    }
}