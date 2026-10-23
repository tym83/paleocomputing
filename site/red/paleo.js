// The whole path in the browser: a RED, GREEN, BLUE or YELLOW source is
// translated to C by redc, greenc, bluec or yellowc (themselves wasm), the C is
// compiled by clang in a worker, and the program runs with a worker per task.
import { runWasm } from './run.js';

const TRANSLATORS = { red: 'redc.wasm', green: 'greenc.wasm', blue: 'bluec.wasm', yellow: 'yellowc.wasm' };
const compilers = {};
async function compilerFor(lang) {
  if (!compilers[lang]) {
    const url = new URL(TRANSLATORS[lang], import.meta.url);
    compilers[lang] = fetch(url).then((r) => r.arrayBuffer()).then(async (b) => {
      const bytes = new Uint8Array(b);
      return { bytes, module: await WebAssembly.compile(bytes) };
    });
  }
  return compilers[lang];
}

// A YELLOW program is translated after the standard prelude, as yellow/yc does.
let prelude = null;
const preludeText = () => (prelude ||= fetch(new URL('prelude.yel', import.meta.url)).then((r) => r.text()));

let clang = null, nextId = 0;
const waiting = new Map();
function clangWorker() {
  if (!clang) {
    clang = new Worker(new URL('clang-worker.js', import.meta.url), { type: 'module' });
    clang.onmessage = (ev) => {
      const w = waiting.get(ev.data.id);
      if (!w) return;
      if (ev.data.t === 'progress') w.progress && w.progress(ev.data);
      else { waiting.delete(ev.data.id); w.resolve(ev.data); }
    };
  }
  return clang;
}
function compileC(c, progress) {
  const id = nextId++;
  return new Promise((resolve) => {
    waiting.set(id, { resolve, progress });
    clangWorker().postMessage({ id, c });
  });
}

// Translate a source; {c} on success, {error, line} on a translator error.
export async function translate(lang, source) {
  const { bytes, module } = await compilerFor(lang);
  const before = lang === 'yellow' ? await preludeText() : '';
  const r = await runWasm(bytes, { module, input: before + source, timeoutMs: 60000 });
  if (r.code === 0) return { c: r.out };
  // the message is the last line that names a line; the line numbers count
  // the source as typed, without the prelude
  const lines = (r.out + r.err).trimEnd().split('\n');
  const skip = before.split('\n').length - 1;
  let error = lines.filter((l) => /\bline \d+/.test(l)).pop() || lines[lines.length - 1] || `translator exit code ${r.code}`;
  const m = /\bline (\d+)/.exec(error);
  const line = m ? Math.max(Number(m[1]) - skip, 0) : 0;
  if (m && skip) error = error.replace(/\bline \d+/, `line ${line}`);
  return { error, line };
}

// stage(name) is called as the work moves on: 'translate', 'compile', 'run'.
export async function run(lang, source, { input = '', onOut, stage = () => {}, progress } = {}) {
  stage('translate');
  const t = await translate(lang, source);
  if (t.error) return { stage: 'translate', ...t };
  stage('compile');
  const c = await compileC(t.c, progress);
  if (c.t === 'error') return { stage: 'compile', error: c.error };
  stage('run');
  const r = await runWasm(c.wasm, { input, onOut, timeoutMs: 120000 });
  return { stage: 'run', ...r };
}
