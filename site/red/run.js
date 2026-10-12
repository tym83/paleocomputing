// Runs a wasm32-wasip1-threads program: redc, greenc or a translated program.
// Every thread gets a worker (thread.js); they share one memory.

const THREAD = new URL('thread.js', import.meta.url);

// The memory the module imports: its declared minimum and maximum, in pages.
function memoryLimits(bytes) {
  let p = 8;
  const u = () => { let r = 0, s = 0, b; do { b = bytes[p++]; r |= (b & 0x7f) << s; s += 7; } while (b & 0x80); return r >>> 0; };
  const name = () => { const n = u(); p += n; };
  while (p < bytes.length) {
    const id = bytes[p++], size = u(), end = p + size;
    if (id === 2) {
      for (let n = u(); n > 0; n--) {
        name(); name();
        const kind = bytes[p++];
        if (kind === 0) u();
        else if (kind === 1) { p++; const f = bytes[p++]; u(); if (f & 1) u(); }
        else if (kind === 2) { const f = bytes[p++]; const min = u(); const max = f & 1 ? u() : 65536; return { min, max }; }
        else if (kind === 3) { p += 2; }
        else if (kind === 4) { p++; u(); }
      }
    }
    p = end;
  }
  throw new Error('the module imports no memory');
}

export async function runWasm(bytes, { module = null, input = '', onOut = () => {}, timeoutMs = 60000 } = {}) {
  module = module || await WebAssembly.compile(bytes);
  const { min, max } = memoryLimits(bytes);
  const memory = new WebAssembly.Memory({ initial: min, maximum: max, shared: true });
  const ctl = new SharedArrayBuffer(16);
  const inBytes = new TextEncoder().encode(input);
  const inBuf = new SharedArrayBuffer(Math.max(inBytes.length, 1));
  new Uint8Array(inBuf).set(inBytes);
  new Int32Array(ctl)[2] = inBytes.length;

  const workers = new Set();
  const pending = new Map();
  let next = 0;
  const out = [], err = [], all = [];
  const dec = { 1: new TextDecoder(), 2: new TextDecoder() };

  return await new Promise((resolve) => {
    let finished = false;
    const finish = (r) => {
      if (finished) return;
      finished = true;
      clearTimeout(timer);
      for (const w of workers) w.terminate();
      resolve({ out: out.join(''), err: err.join(''), all: all.join(''), ...r });
    };
    const drain = () => {
      while (pending.has(next)) {
        const m = pending.get(next);
        pending.delete(next);
        if (m.t === 'exit') { finish({ code: m.code }); return; }
        const s = dec[m.fd].decode(m.bytes, { stream: true });
        (m.fd === 1 ? out : err).push(s);
        all.push(s);
        onOut(m.fd, s);
        next++;
      }
    };
    const start = (kind, tid, arg) => {
      const w = new Worker(THREAD, { type: 'module' });
      workers.add(w);
      w.onmessage = (ev) => {
        const m = ev.data;
        if (m.t === 'spawn') start('thread', m.tid, m.arg);
        else if (m.t === 'done') { w.terminate(); workers.delete(w); }
        else { pending.set(m.seq, m); drain(); }
      };
      w.onerror = (e) => {
        err.push('*** worker: ' + (e.message || e) + '\n');
        all.push(err[err.length - 1]);
        finish({ code: 134 });
      };
      w.postMessage({ module, memory, ctl, input: inBuf, kind, tid, arg });
    };
    const timer = setTimeout(() => finish({ code: 124, timedOut: true }), timeoutMs);
    start('main', 0, 0);
  });
}
