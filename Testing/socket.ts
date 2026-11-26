import { file } from "bun";

const PORT = 8080;
const DEADZONE = 0.1;
const DRAWS_FILE = "./annotations.json";

interface DroneControlPayload {
  leftStickX: number;
  leftStickY: number;
  rightStickX: number;
  rightStickY: number;
}

interface StrokePayload {
  tagId: number;
  colorHex: string;
  width: number;
  localPoints: { x: number; y: number; z: number }[];
}

interface SocketData {
  channel: "movement" | "draw";
}

function getMovementDirections(data: DroneControlPayload): string {
  const directions: string[] = [];

  if (data.leftStickY > DEADZONE) directions.push("forward");
  else if (data.leftStickY < -DEADZONE) directions.push("back");

  if (data.leftStickX > DEADZONE) directions.push("right");
  else if (data.leftStickX < -DEADZONE) directions.push("left");

  if (data.rightStickY > DEADZONE) directions.push("up");
  else if (data.rightStickY < -DEADZONE) directions.push("down");

  return directions.length > 0 ? directions.join(", ") : "stop";
}

async function saveStrokeToFile(stroke: StrokePayload) {
  let db: Record<string, StrokePayload[]> = {};
  const existingFile = file(DRAWS_FILE);

  if (await existingFile.exists()) {
    try {
      db = await existingFile.json();
    } catch {
      db = {};
    }
  }

  const key = String(stroke.tagId);
  if (!db[key]) db[key] = [];
  db[key].push(stroke);

  await Bun.write(DRAWS_FILE, JSON.stringify(db, null, 2));
}

Bun.serve<SocketData>({
  port: PORT,
  async fetch(req, server) {
    const url = new URL(req.url);

    // Channel 1: Drone movement
    if (url.pathname === "/ws/movement") {
      if (server.upgrade(req, { data: { channel: "movement" } })) {
        return undefined;
      }
      return new Response("Movement WebSocket upgrade failed", { status: 400 });
    }

    // Channel 2: Drawings / Annotations
    if (url.pathname === "/ws/draw") {
      if (server.upgrade(req, { data: { channel: "draw" } })) {
        return undefined;
      }
      return new Response("Draw WebSocket upgrade failed", { status: 400 });
    }

    // Optional HTTP GET endpoint for your Phone AR app to read saved strokes
    if (req.method === "GET" && url.pathname === "/annotations") {
      const existingFile = file(DRAWS_FILE);
      if (!(await existingFile.exists())) {
        return Response.json({});
      }
      return new Response(existingFile, {
        headers: { "Content-Type": "application/json" },
      });
    }

    return new Response("WebSocket server running on /ws/movement and /ws/draw");
  },

  websocket: {
    open(ws) {
      console.log(`🟢 Unity connected to [${ws.data.channel}] channel!`);
    },

    async message(ws, message) {
      const raw = String(message);

      if (ws.data.channel === "movement") {
        try {
          const payload = JSON.parse(raw) as DroneControlPayload;
          const direction = getMovementDirections(payload);
          console.log(`[MOVEMENT] Received: ${direction} ${raw}`);
        } catch {
          console.log(`[MOVEMENT] Received: unknown ${raw}`);
        }
        return;
      }

      if (ws.data.channel === "draw") {
        try {
          const stroke = JSON.parse(raw) as StrokePayload;
          await saveStrokeToFile(stroke);
          console.log(
            `[DRAW] 💾 Saved stroke for Tag ${stroke.tagId} (${stroke.localPoints.length} points) -> ${DRAWS_FILE}`
          );
        } catch (err) {
          console.error(`[DRAW] ❌ Failed to parse/save stroke: ${raw}`, err);
        }
      }
    },

    close(ws, code) {
      console.log(`🔴 Unity disconnected from [${ws.data.channel}] (${code})`);
    },
  },
});

console.log(`🚀 Listening on:`);
console.log(`   • Movement WS: ws://localhost:${PORT}/ws/movement`);
console.log(`   • Draw WS:     ws://localhost:${PORT}/ws/draw`);