using System;
using System.Collections.Generic;
using System.Net.WebSockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.InputSystem;

[Serializable]
public class StrokePayload
{
    public int tagId;
    public string colorHex;
    public float width;
    public List<Vector3> localPoints = new List<Vector3>();
}

public class TagAnnotationPlacer : MonoBehaviour
{
    [Header("Draw WebSocket Settings")]
    public string drawServerUrl = "ws://localhost:8080/ws/draw";

    [Header("Drawing References")]
    public Transform rightHandRayOrigin;
    public LayerMask drawingSurfaceMask;
    public InputActionProperty triggerAction;
    public GameObject markerPrefab;
    public Material lineMaterial;

    [Header("Debug Logs")]
    public bool enableDebugLogs = true;

    private LineRenderer currentLine;
    private Transform currentAnchor;
    private int pointCount = 0;
    private bool wasHittingLastFrame = false;

    private ClientWebSocket drawSocket;
    private CancellationTokenSource cts;

    private async void Start()
    {
        if (rightHandRayOrigin == null)
            Debug.LogError("[TagPlacer] ❌ Right Hand Ray Origin is NOT assigned!");
        if (drawingSurfaceMask.value == 0)
            Debug.LogWarning("[TagPlacer] ⚠️ Drawing Surface Mask is set to 'Nothing' — raycast will never hit!");
        if (triggerAction.action == null)
            Debug.LogError("[TagPlacer] ❌ Trigger Action is NOT bound!");

        await ConnectDrawSocket();
    }

    private async Task ConnectDrawSocket()
    {
        cts = new CancellationTokenSource();
        drawSocket = new ClientWebSocket();

        try
        {
            await drawSocket.ConnectAsync(new Uri(drawServerUrl), cts.Token);
            if (enableDebugLogs)
                Debug.Log($"🟢 [TagPlacer] Connected to Draw WebSocket: {drawServerUrl}");
        }
        catch (Exception ex)
        {
            Debug.LogWarning($"🔴 [TagPlacer] Draw WebSocket connection failed: {ex.Message}");
        }
    }

    void OnEnable() => triggerAction.action?.Enable();
    void OnDisable() => triggerAction.action?.Disable();

    void Update()
    {
        if (triggerAction.action == null || rightHandRayOrigin == null) return;

        bool isPressed = triggerAction.action.IsPressed();
        bool justPressed = triggerAction.action.WasPressedThisFrame();

        if (justPressed && enableDebugLogs)
        {
            Debug.Log("[TagPlacer] 🔫 Trigger pressed!");
        }

        if (Physics.Raycast(rightHandRayOrigin.position, rightHandRayOrigin.forward, out RaycastHit hit, 10f, drawingSurfaceMask))
        {
            Transform anchor = hit.collider.transform.root;

            if (!wasHittingLastFrame && enableDebugLogs)
            {
                Debug.Log($"[TagPlacer] 🟢 Ray HIT surface '{hit.collider.name}' on anchor '{anchor.name}' at {hit.point:F2}");
            }
            wasHittingLastFrame = true;

            if (justPressed)
            {
                StartNewStroke(anchor, hit.point);
            }
            else if (isPressed && currentLine != null && currentAnchor == anchor)
            {
                AddPointToStroke(anchor, hit.point);
            }
        }
        else
        {
            if (wasHittingLastFrame && enableDebugLogs)
            {
                Debug.Log("[TagPlacer] ⚪ Ray left drawing surface.");
            }
            wasHittingLastFrame = false;

            if (justPressed && enableDebugLogs)
            {
                Debug.LogWarning("[TagPlacer] ⚠️ Trigger pressed, but ray missed any DrawingSurface collider!");
            }
        }

        // Send the completed stroke ONLY when the draw button is released
        if (triggerAction.action.WasReleasedThisFrame() && currentLine != null)
        {
            if (enableDebugLogs)
            {
                Debug.Log($"[TagPlacer] ✅ Released button — sending stroke ({pointCount} points) from '{currentAnchor.name}'");
            }

            SendCompletedStroke(currentAnchor, currentLine);

            currentLine = null;
            currentAnchor = null;
        }
    }

    private void StartNewStroke(Transform anchor, Vector3 worldHitPoint)
    {
        currentAnchor = anchor;
        GameObject strokeObj = new GameObject("AnchoredStroke");
        strokeObj.transform.SetParent(anchor, false);

        currentLine = strokeObj.AddComponent<LineRenderer>();
        currentLine.useWorldSpace = false;
        currentLine.material = lineMaterial;
        currentLine.startWidth = 0.015f;
        currentLine.endWidth = 0.015f;
        currentLine.positionCount = 0;
        pointCount = 0;

        if (enableDebugLogs)
        {
            Debug.Log($"[TagPlacer] ✏️ Started new stroke on '{anchor.name}'");
        }

        AddPointToStroke(anchor, worldHitPoint);
    }

    private void AddPointToStroke(Transform anchor, Vector3 worldHitPoint)
    {
        Vector3 localPos = anchor.InverseTransformPoint(worldHitPoint) + new Vector3(0f, 0f, -0.01f);

        if (pointCount == 0 || Vector3.Distance(currentLine.GetPosition(pointCount - 1), localPos) > 0.01f)
        {
            pointCount++;
            currentLine.positionCount = pointCount;
            currentLine.SetPosition(pointCount - 1, localPos);
        }
    }

    private void SendCompletedStroke(Transform anchor, LineRenderer line)
    {
        if (line.positionCount == 0) return;

        // Extract tagId from "Anchor_Tag_<ID>"
        int tagId = 0;
        if (anchor.name.StartsWith("Anchor_Tag_"))
        {
            int.TryParse(anchor.name.Replace("Anchor_Tag_", ""), out tagId);
        }

        Color lineColor = line.material != null && line.material.HasProperty("_BaseColor")
            ? line.material.GetColor("_BaseColor")
            : line.startColor;

        StrokePayload payload = new StrokePayload
        {
            tagId = tagId,
            colorHex = "#" + ColorUtility.ToHtmlStringRGBA(lineColor),
            width = line.startWidth
        };

        Vector3[] positions = new Vector3[line.positionCount];
        line.GetPositions(positions);
        payload.localPoints.AddRange(positions);

        string json = JsonUtility.ToJson(payload);
        _ = SendDrawMessageAsync(json);
    }

    private async Task SendDrawMessageAsync(string message)
    {
        if (drawSocket == null || drawSocket.State != WebSocketState.Open)
        {
            Debug.LogWarning("[TagPlacer] ⚠️ Draw WebSocket not connected — stroke was not sent.");
            return;
        }

        try
        {
            byte[] bytes = Encoding.UTF8.GetBytes(message);
            await drawSocket.SendAsync(
                new ArraySegment<byte>(bytes),
                WebSocketMessageType.Text,
                true,
                cts.Token
            );

            if (enableDebugLogs)
                Debug.Log("[TagPlacer] 📤 Stroke sent to server!");
        }
        catch (Exception ex)
        {
            Debug.LogWarning($"[TagPlacer] WebSocket send error: {ex.Message}");
        }
    }

    private async void OnDestroy()
    {
        if (cts != null) cts.Cancel();

        if (drawSocket != null)
        {
            if (drawSocket.State == WebSocketState.Open)
            {
                await drawSocket.CloseAsync(WebSocketCloseStatus.NormalClosure, "Closing", CancellationToken.None);
            }
            drawSocket.Dispose();
        }
    }
}