using UnityEngine;
using UnityEngine.InputSystem;

public class TagAnnotationPlacer : MonoBehaviour
{
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

    void OnEnable() => triggerAction.action?.Enable();
    void OnDisable() => triggerAction.action?.Disable();

    void Start()
    {
        if (rightHandRayOrigin == null)
            Debug.LogError("[TagPlacer] ❌ Right Hand Ray Origin is NOT assigned!");
        if (drawingSurfaceMask.value == 0)
            Debug.LogWarning("[TagPlacer] ⚠️ Drawing Surface Mask is set to 'Nothing' — raycast will never hit!");
        if (triggerAction.action == null)
            Debug.LogError("[TagPlacer] ❌ Trigger Action is NOT bound!");
    }

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

        if (triggerAction.action.WasReleasedThisFrame() && currentLine != null)
        {
            if (enableDebugLogs)
            {
                Debug.Log($"[TagPlacer] ✅ Finished stroke with {pointCount} points parented to '{currentAnchor.name}'");
            }
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
}