/*
 * <oberon-machine>: Wirth's machine, embeddable in any page.
 *
 *   <script type="module" src="https://…/embed.js"></script>
 *   <oberon-machine base="https://…/" autostart></oberon-machine>
 *
 * The host page has no requirements: no headers, no build step, no framework.
 * This is a deliberate design constraint: SharedArrayBuffer would require
 * COOP/COEP, GitHub Pages sets no headers at all, and then the machine could
 * not be embedded in someone else's blog.
 *
 * Attributes:
 *   base       where to load risc5.js, prom_sd.mem and the disk image from
 *              (default: this file's directory)
 *   autostart  start immediately, without waiting for a click
 *   quota      cycles per frame (default 70000 ≈ 4.2 MHz at 60 fps)
 *   start-label label of the start button (English by default)
 *   variant    which hardware: `base` (stock) or `chk` (hardware array bounds
 *              checking). Changes on the fly; the machine is restarted
 *   files      space-separated files (relative to base) put onto the disk
 *              image BEFORE boot: a lab needs a file the reference image does
 *              not have. Changing it also restarts the machine
 *   width      CSS width of the canvas (default 100%)
 *
 * Methods and events: `.start()`, `.stop()`, `.reset()`, `.setButton(n)`,
 * `.poke(address, value)`, `.check(lab, step, answer)`; the last one runs next
 * to the machine, in the worker, and returns a promise;
 * events: `oberon-ready`, `oberon-frame` (twice a second, with the speed),
 * `oberon-buttons` (mouse button state), `oberon-error`.
 */
import { makeRenderer, bindInput } from './machine.js';
import { addFile } from './oberonfs.js';

const HERE = new URL('.', import.meta.url);

/**
 * Disk image: try the compressed one first, then the plain one. The unpacked
 * image goes into the Cache API; otherwise the megabyte is downloaded again on
 * every visit, and GitHub Pages serves it without brotli and with a short max-age.
 */
async function loadDisk(base) {
  const key = new URL('oberon.dsk', base).href;
  let cache = null;
  try { cache = await caches.open('oberon-v1'); } catch { /* private mode */ }
  if (cache) {
    const hit = await cache.match(key);
    if (hit) return new Uint8Array(await hit.arrayBuffer());
  }
  let bytes;
  const gz = await fetch(new URL('oberon.dsk.gz', base)).catch(() => null);
  if (gz && gz.ok && typeof DecompressionStream === 'function') {
    const stream = gz.body.pipeThrough(new DecompressionStream('gzip'));
    bytes = new Uint8Array(await new Response(stream).arrayBuffer());
  } else {
    bytes = new Uint8Array(await (await fetch(new URL('oberon.dsk', base))).arrayBuffer());
  }
  if (cache) { try { await cache.put(key, new Response(bytes)); } catch { /* quota */ } }
  return bytes;
}

async function loadProm(base) {
  const text = await (await fetch(new URL('prom_sd.mem', base))).text();
  return new Uint32Array(text.trim().split('\n').map(l => parseInt(l, 16)));
}

class OberonMachine extends HTMLElement {
  // The button label may arrive after the markup: the page learns its language
  // only after the element is up.
  static observedAttributes = ['start-label', 'variant', 'files'];
  attributeChangedCallback(name, old, value) {
    if (name === 'start-label' && this._button) this._button.textContent = value;
    // Changing the hardware or the disk contents = a new machine. The worker is
    // restarted and the image loads from cache, so a switch takes a fraction of
    // a second. A missing attribute equals the default: `variant` without a value
    // is base, and adding variant="base" to a running machine changes nothing.
    const norm = v => (name === 'variant' ? (v || 'base') : (v || '').trim());
    if ((name === 'variant' || name === 'files') && norm(old) !== norm(value) && this._worker) {
      // A lab changes both attributes in a row; the machine restarts only once.
      if (!this._rebootQueued) {
        this._rebootQueued = true;
        queueMicrotask(() => { this._rebootQueued = false; this._reboot(); });
      }
    }
  }

  async _reboot() {
    const wasRunning = this._running;
    this.stop();
    this._worker.terminate();
    this._worker = null; this._ready = false; this._pending = false;
    this._queued = [];
    this._t0 = 0;
    await this._boot();
    if (wasRunning) this.start();
  }

  connectedCallback() {
    if (this._built) return;
    this._built = true;
    const root = this.attachShadow({ mode: 'open' });
    root.innerHTML = `
      <style>
        :host { display:block; position:relative; }
        canvas { display:block; width:${this.getAttribute('width') || '100%'};
                 max-width:100%; height:auto; aspect-ratio:1024/768;
                 background:#fff; image-rendering:pixelated; cursor:crosshair; }
        .veil { position:absolute; inset:0; display:flex; align-items:center;
                justify-content:center; background:#1b1b1bcc; color:#ddd;
                font:14px/1.4 system-ui,sans-serif; cursor:pointer; text-align:center; }
        .veil[hidden] { display:none; }
        button { font:inherit; background:#2b2b2b; color:#ddd; border:1px solid #444;
                 border-radius:6px; padding:8px 14px; cursor:pointer; }
      </style>
      <canvas width="1024" height="768"></canvas>
      <div class="veil"><button part="start"></button></div>`;
    this._canvas = root.querySelector('canvas');
    this._veil = root.querySelector('.veil');
    // The button label comes from outside: the component is embedded in someone
    // else's page and does not know its language. English by default, as
    // everywhere in the project.
    this._button = root.querySelector('button');
    this._button.textContent = this.getAttribute('start-label') || 'Start the machine';
    this._veil.onclick = () => this.start();
    this._draw = makeRenderer(this._canvas);
    this._quota = +(this.getAttribute('quota') || 70000);
    this._base = new URL(this.getAttribute('base') || '.', HERE);
    this._running = false;
    this._raf = 0;
    this._askId = 0;
    this._waiting = new Map();

    // The machine need not compute while it is not visible: the tab is hidden or
    // the element has scrolled out of view. The RTL model cannot idle and burns
    // a core steadily.
    this._visible = true;
    if (typeof IntersectionObserver === 'function') {
      new IntersectionObserver(([e]) => {
        this._visible = e.isIntersecting;
        if (this._running) this._kick();
      }, { threshold: 0 }).observe(this);
    }
    document.addEventListener('visibilitychange', () => { if (this._running) this._kick(); });

    this._input = bindInput(this._canvas, {
      mouse: (x, y, btn) => {
        this._send({ t: 'mouse', x, y, btn });
        // Report outward so the page can highlight pressed buttons: on a trackpad
        // a person otherwise cannot see which of Oberon's three buttons they send.
        if (btn !== this._btn) {
          this._btn = btn;
          this.dispatchEvent(new CustomEvent('oberon-buttons', { detail: btn }));
        }
      },
      key: code => this._send({ t: 'key', code }),
      chord: (x, y, first, then) => {
        this._send({ t: 'chord', x, y, first, then });
        this._btn = then;
        this.dispatchEvent(new CustomEvent('oberon-buttons', { detail: then }));
      },
    });

    if (this.hasAttribute('autostart')) this.start();
  }

  async _boot() {
    if (this._worker) return;
    const w = this._worker = new Worker(new URL('worker.js', HERE), { type: 'module' });
    w.onmessage = e => this._onMessage(e.data);
    const [prom, disk] = await Promise.all([loadProm(this._base), loadDisk(this._base)]);
    let img = disk;
    for (const f of (this.getAttribute('files') || '').split(/\s+/).filter(Boolean)) {
      const bytes = new Uint8Array(await (await fetch(new URL(f, this._base))).arrayBuffer());
      img = addFile(img, f.split('/').pop(), bytes);
    }
    // While the image was loading, the machine may have been restarted (a lab
    // switched the hardware): this worker is already gone, nothing to send.
    if (this._worker !== w) return;
    // Images are sent with ownership transfer: no reason to copy a megabyte.
    w.postMessage({ t: 'init', variant: this.getAttribute('variant') || 'base',
                              prom: prom.buffer, img: img.buffer },
                             [prom.buffer, img.buffer]);
  }

  _onMessage(msg) {
    if (msg.t === 'ready') {
      this._ready = true;
      this._flush();
      this.dispatchEvent(new CustomEvent('oberon-ready'));
      this._kick();
      return;
    }
    if (msg.t === 'frame') {
      const fb = new Uint32Array(msg.buf);
      this._draw(fb);
      // Return the buffer to the worker: only two are needed for frames.
      this._worker.postMessage({ t: 'recycle', buf: msg.buf }, [msg.buf]);
      this._pending = false;
      this._stat(msg);
      this._kick();
      return;
    }
    if (msg.t === 'check') {
      const resolve = this._waiting.get(msg.id);
      if (resolve) { this._waiting.delete(msg.id); resolve(msg); }
      return;
    }
    if (msg.t === 'error') {
      this.dispatchEvent(new CustomEvent('oberon-error', { detail: msg.message }));
      console.error('[oberon]', msg.message);
    }
  }

  _stat(msg) {
    const now = performance.now();
    if (!this._t0) { this._t0 = now; this._c0 = msg.cycles; return; }
    if (now - this._t0 < 500) return;
    const mhz = (msg.cycles - this._c0) / (now - this._t0) / 1000;
    this._t0 = now; this._c0 = msg.cycles;
    this.dispatchEvent(new CustomEvent('oberon-frame', {
      detail: { insns: msg.insns, mhz, pc: msg.pc, crc: msg.crc } }));
  }

  /*
   * Messages sent before the machine is ready are NOT dropped; they wait for it.
   * Otherwise a "Check" click in the first seconds would go nowhere: the promise
   * would never resolve, and the button would silently stop working.
   */
  _send(msg) {
    if (!this._worker) { (this._queued ??= []).push(msg); return; }
    if (this._ready) { this._worker.postMessage(msg); return; }
    (this._queued ??= []).push(msg);
  }

  _flush() {
    const q = this._queued || [];
    this._queued = [];
    for (const msg of q) this._worker.postMessage(msg);
  }

  /**
   * A request with a reply. Needed where a frame is not enough for the page: a
   * task check reads the machine's state, and the machine lives in the worker.
   */
  _ask(msg) {
    return new Promise(resolve => {
      const id = ++this._askId;
      this._waiting.set(id, resolve);
      this._send({ ...msg, id });
    });
  }

  /** Check a lab step. Computed by the worker, next to the machine. */
  check(lab, step, answer) { return this._ask({ t: 'check', lab, step, answer }); }

  /** Forget a lab's accumulated state. */
  forget(lab) { this._send({ t: 'forget', lab }); }

  /** Write a word to the machine's memory. */
  poke(adr, val) { this._send({ t: 'poke', adr, val }); }

  /** Asks the worker for the next frame, if anyone is watching. */
  _kick() {
    cancelAnimationFrame(this._raf);
    if (!this._running || !this._ready || this._pending) return;
    if (document.hidden || !this._visible) return;
    this._raf = requestAnimationFrame(() => {
      this._pending = true;
      this._worker.postMessage({ t: 'run', quota: this._quota });
    });
  }

  start() {
    this._veil.hidden = true;
    this._running = true;
    this._boot().then(() => this._kick());
  }
  stop() { this._running = false; cancelAnimationFrame(this._raf); }
  reset() { this._send({ t: 'reset' }); }
  setButton(n) { this._input.setButton(+n); }
  get running() { return this._running; }
}

customElements.define('oberon-machine', OberonMachine);
export { OberonMachine };
