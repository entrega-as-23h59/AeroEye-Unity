const PORT = 8080;
const DEADZONE = 0.1;

interface DroneControlPayload {
  leftStickX: number;
  leftStickY: number;
  rightStickX: number;
  rightStickY: number;
}

function getMovementDirections(data: DroneControlPayload): string {
  const directions: string[] = [];

  // Left Stick Y -> forward / back
  if (data.leftStickY > DEADZONE) directions.push("forward");
  else if (data.leftStickY < -DEADZONE) directions.push("back");

  // Left Stick X -> right / left
  if (data.leftStickX > DEADZONE) directions.push("right");
  else if (data.leftStickX < -DEADZONE) directions.push("left");

  // Right Stick Y -> up / down
  if (data.rightStickY > DEADZONE) directions.push("up");
  else if (data.rightStickY < -DEADZONE) directions.push("down");

  // Optional: Right Stick X -> yaw right / yaw left
  // if (data.rightStickX > DEADZONE) directions.push("yaw-right");
  // else if (data.rightStickX < -DEADZONE) directions.push("yaw-left");

  return directions.length > 0 ? directions.join(", ") : "stop";
}

Bun.serve({
  port: PORT,
  fetch(req, server) {
    const url = new URL(req.url);

    if (url.pathname === "/ws") {
      if (server.upgrade(req)) {
        return undefined;
      }
      return new Response("WebSocket upgrade failed", { status: 400 });
    }

    return new Response("WebSocket server running on /ws");
  },
  websocket: {
    open(ws) {
      console.log("🟢 Unity connected!");
    },
    message(ws, message) {
      const raw = String(message);
      try {
        const payload = JSON.parse(raw) as DroneControlPayload;
        const direction = getMovementDirections(payload);
        console.log(`Received: ${direction} ${raw}`);
      } catch {
        console.log(`Received: unknown ${raw}`);
      }
    },
    close(ws, code) {
      console.log(`🔴 Unity disconnected (${code})`);
    },
  },
});

console.log(`🚀 Listening on ws://localhost:${PORT}/ws`);