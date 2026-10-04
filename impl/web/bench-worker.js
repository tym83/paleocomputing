// The headline benchmark runs in a separate thread, so the page does not freeze
// for several million cycles.
import { runBench, perCheck } from './bench.js';
import { loadVariant } from './machine.js';

self.onmessage = async e => {
  const { params, progB, progE } = e.data;
  try {
    const b = await runBench(await loadVariant('base'), new Uint32Array(progB), params);
    self.postMessage({ t: 'one', cfg: 'B', r: b });
    const x = await runBench(await loadVariant('chk'), new Uint32Array(progE), params);
    self.postMessage({ t: 'one', cfg: 'E', r: x });
    self.postMessage({ t: 'done', b, e: x, d: perCheck(b, x) });
  } catch (err) {
    self.postMessage({ t: 'error', message: String(err && err.stack || err) });
  }
};
