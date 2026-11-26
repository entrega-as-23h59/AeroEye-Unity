using System.Collections.Generic;
using UnityEngine;
using AprilTag;

public class AprilTagAnchorManager : MonoBehaviour
{
    [Header("Detector Camera & Render Texture")]
    [Tooltip("Flat virtual camera rendering the 360 Skybox into DetectorRT")]
    public Camera detectorCamera;
    public RenderTexture detectorRT;

    [Header("Vertical Head Tracking Follow")]
    [Tooltip("Assign Main Camera so DetectorCamera tilts vertically (pitch) with your head")]
    public Transform headCameraTransform;
    public bool followVerticalRotationOnly = true;

    [Header("Tag & Panel Distance Settings")]
    public float tagSizeMeters = 0.80f;
    public float panelDistanceMeters = 4.0f;
    [Range(1, 4)]
    public int decimation = 2;

    [Header("Anti-Drift Stabilization")]
    [Tooltip("Ignore small detection shifts below this distance (meters) so the panel stays rock-solid")]
    public float positionDeadzoneMeters = 0.08f;
    [Tooltip("Ignore small angle jitter below this threshold (degrees)")]
    public float rotationDeadzoneDegrees = 3.0f;

    [Header("Annotation Anchor")]
    public GameObject tagAnchorPrefab;

    [Header("Debug Logs")]
    public bool enableDebugLogs = true;
    public float logIntervalSeconds = 1.0f;

    private TagDetector detector;
    private Texture2D readbackTex;
    private Color32[] pixelBuffer;
    private Dictionary<int, Transform> activeAnchors = new Dictionary<int, Transform>();
    private float nextLogTime = 0f;
    private float fixedYaw;
    private float fixedRoll;

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
        }

        // Remember the initial horizontal (Y) and roll (Z) angles set on DetectorCamera
        Vector3 initialEuler = detectorCamera.transform.eulerAngles;
        fixedYaw = initialEuler.y;
        fixedRoll = initialEuler.z;

        int w = detectorRT.width;
        int h = detectorRT.height;

        detector = new TagDetector(w, h, decimation);
        readbackTex = new Texture2D(w, h, TextureFormat.RGBA32, false);
        pixelBuffer = new Color32[w * h];
    }

    void Update()
    {
        if (detector == null || detectorRT == null || detectorCamera == null) return;

        // Keep DetectorCamera centered at the 360 Skybox origin
        detectorCamera.transform.localPosition = Vector3.zero;

        // Follow ONLY vertical pitch (X-axis) from Main Camera; keep Y and Z fixed
        if (followVerticalRotationOnly && headCameraTransform != null)
        {
            float headPitchX = headCameraTransform.eulerAngles.x;
            detectorCamera.transform.rotation = Quaternion.Euler(headPitchX, fixedYaw, fixedRoll);
        }

        // 1. Read pixels from DetectorRT
        RenderTexture currentRT = RenderTexture.active;
        RenderTexture.active = detectorRT;
        readbackTex.ReadPixels(new Rect(0, 0, detectorRT.width, detectorRT.height), 0, 0);
        readbackTex.Apply();
        RenderTexture.active = currentRT;

        pixelBuffer = readbackTex.GetPixels32();

        // 2. Run AprilTag detection
        float horizontalFov = Camera.VerticalToHorizontalFieldOfView(
            detectorCamera.fieldOfView,
            detectorCamera.aspect
        );
        detector.ProcessImage(pixelBuffer, horizontalFov, tagSizeMeters);

        int detectedCount = 0;
        foreach (var tag in detector.DetectedTags)
        {
            detectedCount++;

            // Convert tag center from detectorCamera space to World Space
            Vector3 rawWorldPos = detectorCamera.transform.TransformPoint(tag.Position);
            Vector3 rayDir = (rawWorldPos - detectorCamera.transform.position).normalized;
            Vector3 targetPos = detectorCamera.transform.position + rayDir * panelDistanceMeters;
            Quaternion targetRot = detectorCamera.transform.rotation * tag.Rotation;

            if (!activeAnchors.TryGetValue(tag.ID, out Transform anchor))
            {
                GameObject anchorObj = tagAnchorPrefab != null
                    ? Instantiate(tagAnchorPrefab)
                    : new GameObject($"Anchor_Tag_{tag.ID}");

                anchorObj.name = $"Anchor_Tag_{tag.ID}";
                anchor = anchorObj.transform;
                anchor.position = targetPos;
                anchor.rotation = targetRot;
                activeAnchors[tag.ID] = anchor;

                if (enableDebugLogs)
                    Debug.Log($"[AprilTag] 🎯 Locked Anchor_Tag_{tag.ID} at {targetPos:F2}");
            }
            else
            {
                float posDelta = Vector3.Distance(anchor.position, targetPos);
                float rotDelta = Quaternion.Angle(anchor.rotation, targetRot);

                if (posDelta > positionDeadzoneMeters)
                {
                    anchor.position = Vector3.Lerp(anchor.position, targetPos, Time.deltaTime * 10f);
                }
                if (rotDelta > rotationDeadzoneDegrees)
                {
                    anchor.rotation = Quaternion.Slerp(anchor.rotation, targetRot, Time.deltaTime * 10f);
                }
            }
        }

        if (enableDebugLogs && Time.time >= nextLogTime)
        {
            nextLogTime = Time.time + logIntervalSeconds;
            if (detectedCount == 0 && activeAnchors.Count == 0)
            {
                Debug.Log($"[AprilTag] 🔍 Scanning... 0 tags found | CamRot={detectorCamera.transform.eulerAngles:F0}");
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