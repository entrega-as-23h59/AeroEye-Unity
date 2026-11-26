using System.Collections.Generic;
using UnityEngine;
using AprilTag;

public class AprilTagAnchorManager : MonoBehaviour
{
    [Header("Detector Camera & Render Texture")]
    [Tooltip("Flat virtual camera rendering the 360 Skybox into DetectorRT")]
    public Camera detectorCamera;
    public RenderTexture detectorRT;

    [Header("Head Tracking Follow")]
    [Tooltip("Assign Main Camera so DetectorCamera rotates where you look")]
    public Transform headCameraTransform;
    public bool followHeadRotation = true;

    [Header("Tag Settings")]
    [Tooltip("Physical width of the black square border in meters (e.g., 0.20 = 20cm)")]
    public float tagSizeMeters = 0.20f;
    [Range(1, 4)]
    public int decimation = 2;

    [Header("Annotation Anchor")]
    [Tooltip("Prefab with a large invisible BoxCollider plane for raycast drawing")]
    public GameObject tagAnchorPrefab;

    [Header("Debug Logs")]
    public bool enableDebugLogs = true;
    public float logIntervalSeconds = 1.0f;

    private TagDetector detector;
    private Texture2D readbackTex;
    private Color32[] pixelBuffer;
    private Dictionary<int, Transform> activeAnchors = new Dictionary<int, Transform>();
    private float nextLogTime = 0f;

    void Start()
    {
        if (detectorCamera == null || detectorRT == null)
        {
            Debug.LogError("[AprilTag] ❌ Missing detectorCamera or detectorRT in Inspector!");
            return;
        }

        if (headCameraTransform == null && Camera.main != null)
        {
            headCameraTransform = Camera.main.transform;
            Debug.Log($"[AprilTag] Auto-assigned Head Camera: {headCameraTransform.name}");
        }

        int w = detectorRT.width;
        int h = detectorRT.height;

        detector = new TagDetector(w, h, decimation);
        readbackTex = new Texture2D(w, h, TextureFormat.RGBA32, false);
        pixelBuffer = new Color32[w * h];

        Debug.Log($"[AprilTag] ✅ Initialized detector ({w}x{h}, decimation={decimation}, tagSize={tagSizeMeters}m). Note: jp.keijiro.apriltag expects tagStandard41h12!");
    }

    void Update()
    {
        if (detector == null || detectorRT == null || detectorCamera == null) return;

        // Sync DetectorCamera rotation with Main Camera if enabled
        if (followHeadRotation && headCameraTransform != null)
        {
            detectorCamera.transform.rotation = headCameraTransform.rotation;
        }

        // 1. Read pixels from the rectilinear RenderTexture
        RenderTexture currentRT = RenderTexture.active;
        RenderTexture.active = detectorRT;
        readbackTex.ReadPixels(new Rect(0, 0, detectorRT.width, detectorRT.height), 0, 0);
        readbackTex.Apply();
        RenderTexture.active = currentRT;

        pixelBuffer = readbackTex.GetPixels32();

        // 2. Run AprilTag detection (expects Horizontal FOV in degrees)
        float horizontalFov = Camera.VerticalToHorizontalFieldOfView(
            detectorCamera.fieldOfView,
            detectorCamera.aspect
        );
        detector.ProcessImage(pixelBuffer, horizontalFov, tagSizeMeters);

        int detectedCount = 0;
        foreach (var tag in detector.DetectedTags)
        {
            detectedCount++;

            if (!activeAnchors.TryGetValue(tag.ID, out Transform anchor))
            {
                GameObject anchorObj = tagAnchorPrefab != null
                    ? Instantiate(tagAnchorPrefab)
                    : new GameObject($"Anchor_Tag_{tag.ID}");

                anchorObj.name = $"Anchor_Tag_{tag.ID}";
                anchor = anchorObj.transform;
                activeAnchors[tag.ID] = anchor;

                Debug.Log($"[AprilTag] 🎯 NEW TAG DETECTED! ID={tag.ID} | Spawned {anchorObj.name}");
            }

            // Convert tag pose from detectorCamera local space to Unity World Space
            Vector3 worldPos = detectorCamera.transform.TransformPoint(tag.Position);
            Quaternion worldRot = detectorCamera.transform.rotation * tag.Rotation;

            anchor.position = Vector3.Lerp(anchor.position, worldPos, Time.deltaTime * 15f);
            anchor.rotation = Quaternion.Slerp(anchor.rotation, worldRot, Time.deltaTime * 15f);

            if (enableDebugLogs && Time.time >= nextLogTime)
            {
                Debug.Log($"[AprilTag] 📍 Tracking ID={tag.ID} | WorldPos={anchor.position:F2} | CamRot={detectorCamera.transform.eulerAngles:F0}");
            }
        }

        // Periodic status log when scanning
        if (enableDebugLogs && Time.time >= nextLogTime)
        {
            nextLogTime = Time.time + logIntervalSeconds;
            if (detectedCount == 0)
            {
                // Sample center pixel to confirm DetectorRT is not pure black/blank
                Color32 centerPixel = pixelBuffer[pixelBuffer.Length / 2];
                Debug.Log($"[AprilTag] 🔍 Scanning... 0 tags found | CamYaw={detectorCamera.transform.eulerAngles.y:F0}° Pitch={detectorCamera.transform.eulerAngles.x:F0}° | CenterPixelRGB=({centerPixel.r},{centerPixel.g},{centerPixel.b})");
            }
        }
    }

    public Transform GetAnchor(int tagId)
    {
        activeAnchors.TryGetValue(tagId, out Transform anchor);
        return anchor;
    }

    void OnDestroy()
    {
        detector?.Dispose();
    }
}