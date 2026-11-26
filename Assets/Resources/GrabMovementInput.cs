using UnityEngine;
using UnityEngine.InputSystem;

public class GrabMovementInput : MonoBehaviour
{
    [Header("Meta Quest 3 Input Actions")]
    public InputActionProperty leftThumbstick;
    public InputActionProperty rightButtonA;
    public InputActionProperty rightButtonB;
    
    private void OnEnable()
    {
        leftThumbstick.action?.Enable();
        rightButtonA.action?.Enable();
        rightButtonB.action?.Enable();
    }

    private void OnDisable()
    {
        leftThumbstick.action?.Disable();
        rightButtonA.action?.Disable();
        rightButtonB.action?.Disable();
    }

    void Update()
    {
        // 1. Left Thumbstick (returns X and Y from -1.0 to 1.0)
        Vector2 stickValue = leftThumbstick.action != null 
            ? leftThumbstick.action.ReadValue<Vector2>() 
            : Vector2.zero;

        if (stickValue.magnitude > 0.1f) // Deadzone check
        {
            Debug.Log($"Left Stick: X={stickValue.x:F2}, Y={stickValue.y:F2}");
        }

        // 2. Right Controller 'A' Button (triggered once per press)
        if (rightButtonA.action != null && rightButtonA.action.WasPressedThisFrame())
        {
            Debug.Log("Right Button A Pressed!");
        }

        // 3. Right Controller 'B' Button (triggered once per press)
        if (rightButtonB.action != null && rightButtonB.action.WasPressedThisFrame())
        {
            Debug.Log("Right Button B Pressed!");
        }
    }
}
