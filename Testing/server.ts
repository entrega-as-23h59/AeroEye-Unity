import { spawn } from "bun";

// ───────────── Tuning knobs ─────────────
const WIDTH = 2560;      // 360 video needs lots of pixels. Try 1920 / 2560 / 3840 (3840 needs a strong CPU)
const FPS = 30;
const BITRATE = "10M";   // average target. Localhost, so you can go high (8M–20M)
const CRF = 8;           // lower = better quality (4–15). Used with BITRATE as a quality cap
const CPU_USED = 4;      // libvpx speed: 0 = best quality/slowest ... 8 = fastest/worst. Lower if your CPU keeps up
const THREADS = 8;       // set to your CPU core count
const GOP = FPS * 2;     // keyframe every 2s. Fine on localhost (no packet loss)
// ────────────────────────────────────────

// 1. Start MediaMTX server
const mediamtx = spawn(["./mediamtx"], {
  stdout: "inherit",
  stderr: "inherit",
});

console.log(`[MediaMTX] Started with PID: ${mediamtx.pid}`);

// Give MediaMTX a moment to bind its ports before FFmpeg connects
await Bun.sleep(1000);

// 2. FFmpeg: VP8, constrained-quality, realtime-friendly
const ffmpeg = spawn(
  [
    "ffmpeg",
    "-re",
    "-stream_loop", "-1",
    "-i", "360london_on_tower_bridge_4k.mp4",
    "-vf", `scale=${WIDTH}:-2:flags=lanczos`,
    "-r", String(FPS),
    "-c:v", "libvpx",
    "-pix_fmt", "yuv420p",
    "-deadline", "realtime",
    "-cpu-used", String(CPU_USED),
    "-threads", String(THREADS),
    "-slices", "4",
    "-lag-in-frames", "0",
    "-auto-alt-ref", "0",
    "-error-resilient", "1",
    "-g", String(GOP),
    "-crf", String(CRF),
    "-b:v", BITRATE,
    "-maxrate", BITRATE,
    "-bufsize", "2M", // small buffer = low latency
    "-an",
    "-fflags", "nobuffer",
    "-flags", "low_delay",
    "-rtsp_transport", "tcp",
    "-f", "rtsp",
    "rtsp://127.0.0.1:8554/test",
  ],
  {
    stdout: "inherit",
    stderr: "inherit",
  }
);

console.log(`[FFmpeg] Started streaming with PID: ${ffmpeg.pid}`);
console.log(`\n[WebRTC Browser Viewer] http://127.0.0.1:8889/test/`);
console.log(`[WHEP API Endpoint (HTTP POST)] http://127.0.0.1:8889/test/whep\n`);

// Handle process termination (e.g., CTRL+C)
const cleanup = () => {
  console.log("\nStopping processes...");
  mediamtx.kill();
  ffmpeg.kill();
  process.exit(0);
};

process.on("SIGINT", cleanup);
process.on("SIGTERM", cleanup);

await Promise.all([mediamtx.exited, ffmpeg.exited]);