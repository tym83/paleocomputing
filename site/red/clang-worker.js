// Compiles the C that redc or greenc produced and links it with the runtime,
// using clang and lld compiled to WebAssembly. Runs in a worker: the first
// compile downloads the compiler (about 20 MB) and the page must stay alive.
import { CFLAGS, CLANG_URL, ldflags } from './flags.js';
import { unpack, tree } from './pack.js';

let ready = null;

async function load(progress) {
  const [{ runClang }, toolchain] = await Promise.all([
    import(CLANG_URL),
    fetch(new URL('toolchain.bin', import.meta.url))
      .then((r) => r.body.pipeThrough(new DecompressionStream('deflate')))
      .then((s) => new Response(s).arrayBuffer())
      .then((b) => tree(unpack(new Uint8Array(b)))),
  ]);
  return { runClang, toolchain, progress };
}

self.onmessage = async (ev) => {
  const { id, c } = ev.data;
  const progress = (e) => postMessage({ id, t: 'progress', done: e.doneLength, total: e.totalLength });
  let stderr = '';
  const opts = { stderr: (b) => { if (b) stderr += new TextDecoder().decode(b); }, fetchProgress: progress };
  try {
    ready ||= load();
    const { runClang, toolchain } = await ready;
    const o = await runClang(['clang', ...CFLAGS, '-c', '/program.c', '-o', '/program.o'],
      { ...toolchain, 'program.c': c }, opts);
    const w = await runClang(['clang', '/program.o', '/paleo.o', ...ldflags('/program.wasm', 8)],
      { ...toolchain, 'program.o': o['program.o'] }, opts);
    postMessage({ id, t: 'wasm', wasm: w['program.wasm'] });
  } catch (e) {
    postMessage({ id, t: 'error', error: stderr || String(e && e.message || e) });
  }
};
