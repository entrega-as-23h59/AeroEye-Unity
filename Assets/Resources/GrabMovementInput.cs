using System;
using System.Net.WebSockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.InputSystem;

[Serializable]
public class DroneControlPayload
{
    // Left Stick: Pitch (Y = forward/back) & Roll (X = strafe left/right)
    public float leftStickX;
    public float leftStickY;

    // Right Stick: Altitude (Y = up/down) & Yaw (X = rotate left/right)
    public float rightStickX;
    public float rightStickY;
}

public class GrabMovementInput : MonoBehaviour
{
    [Header("WebSocket Settings")]
    public string serverUrl = "ws://localhost:8080/ws";
    [Tooltip("Send rate in Hz while moving (e.g., 30 = 30 updates per second)")]
    public float sendRateHz = 30f;

    [Header("Meta Quest 3 Input Actions")]
    public InputActionProperty leftThumbstick;
    public InputActionProperty rightThumbstick;

    private ClientWebSocket webSocket;
    private CancellationTokenSource cts;
    private bool wasActiveLastFrame = false;
    private float nextSendTime = 0f;

    private async void Start()
    {
        await ConnectWebSocket();
    }

    private async Task ConnectWebSocket()
    {
        cts = new CancellationTokenSource();
        webSocket = new ClientWebSocket();

        try
        {
            await webSocket.ConnectAsync(new Uri(serverUrl), cts.Token);
            Debug.Log($"🟢 Connected to WebSocket: {serverUrl}");
        }
        catch (Exception ex)
        {
            Debug.LogWarning($"🔴 WebSocket connection failed: {ex.Message}");
        }
    }

    private void OnEnable()
    {
        leftThumbstick.action?.Enable();
        rightThumbstick.action?.Enable();
    }

    private void OnDisable()
    {
        leftThumbstick.action?.Disable();
        rightThumbstick.action?.Disable();
    }

    private void Update()
    {
        // 1. Read Left & Right Thumbsticks
        Vector2 leftStick = leftThumbstick.action != null
            ? leftThumbstick.action.ReadValue<Vector2>()
            : Vector2.zero;

        Vector2 rightStick = rightThumbstick.action != null
            ? rightThumbstick.action.ReadValue<Vector2>()
            : Vector2.zero;

        bool leftMoving = leftStick.magnitude > 0.1f;
        bool rightMoving = rightStick.magnitude > 0.1f;
        bool isActive = leftMoving || rightMoving;

        // 2. Send at fixed rate while moving, plus one final zero-packet on release so the drone stops
        if ((isActive && Time.time >= nextSendTime) || (!isActive && wasActiveLastFrame))
        {
            nextSendTime = Time.time + (1f / sendRateHz);

            DroneControlPayload payload = new DroneControlPayload
            {
                leftStickX = leftMoving ? (float)Math.Round(leftStick.x, 3) : 0f,
                leftStickY = leftMoving ? (float)Math.Round(leftStick.y, 3) : 0f,
                rightStickX = rightMoving ? (float)Math.Round(rightStick.x, 3) : 0f,
                rightStickY = rightMoving ? (float)Math.Round(rightStick.y, 3) : 0f
            };

            string json = JsonUtility.ToJson(payload);
            _ = SendMessageAsync(json);
        }

        wasActiveLastFrame = isActive;
    }

    private async Task SendMessageAsync(string message)
    {
        if (webSocket == null || webSocket.State != WebSocketState.Open) return;

        try
        {
            byte[] bytes = Encoding.UTF8.GetBytes(message);
            await webSocket.SendAsync(
                new ArraySegment<byte>(bytes),
                WebSocketMessageType.Text,
                true,
                cts.Token
            );
        }
        catch (Exception ex)
        {
            Debug.LogWarning($"WebSocket send error: {ex.Message}");
        }
    }

    private async void OnDestroy()
    {
        if (cts != null) cts.Cancel();

        if (webSocket != null)
        {
            if (webSocket.State == WebSocketState.Open)
            {
                await webSocket.CloseAsync(WebSocketCloseStatus.NormalClosure, "Closing", CancellationToken.None);
            }
            webSocket.Dispose();
        }
    }
}