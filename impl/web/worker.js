// Worker thread wrapper: all the logic lives in worker-core.js so that it can be
// tested in node, which has neither `self` nor `postMessage`.
import { createHandler } from './worker-core.js';

const handle = createHandler((msg, transfer) => self.postMessage(msg, transfer || []));

// Queue: messages arrive faster than a frame is computed, and they must not be
// handled overlapping each other: there is only one machine.
let chain = Promise.resolve();
self.onmessage = e => { chain = chain.then(() => handle(e.data)).catch(err =>
  self.postMessage({ t: 'error', message: String(err && err.stack || err) })); };
