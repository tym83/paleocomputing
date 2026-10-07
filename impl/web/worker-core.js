/*
 * Worker thread core: the RISC5 machine lives here, the page only draws.
 *
 * Why a thread. The RTL model computes continuously and on the main thread eats
 * the whole frame: scrolling the page that embeds the machine starts to stutter.
 * In a separate thread it gets in nobody's way.
 *
 * ⚠ SharedArrayBuffer is deliberately NOT used here (v0.2 design).
 * It would require COOP/COEP headers, and GitHub Pages sets no headers at all,
 * so the page could not be embedded in someone else's blog. A frame travels
 * by ordinary postMessage with ownership transfer: 96 KB in O(1), no copy.
 *
 * The framebuffer is sent RAW, one bit per pixel. Expanding it to RGBA here is
 * not an option: that is 3 MB per frame instead of 96 KB. Expansion costs
 * 0.33 ms on the main thread (measured), thirty times cheaper than the transfer.
 *
 * The logic is split out of worker.js so it can be tested in node: there is no
 * `self` there, and the protocol needs testing.
 */
import { Machine, typeCodes } from './machine.js';
import { LABS } from './labs.js';

/**
 * Builds the message handler. `post(msg, transfer)` works like postMessage.
 * Returns an async function that incoming messages are fed to.
 */
export function createHandler(post) {
  let m = null;
  let loop = null;
let script = [];            // input the running loop plays slice by slice: [action, cycles]            // the machine's own run loop (go / halt)
  // Let incoming messages in, then go on. Not setTimeout: in a background tab
  // timers fire about once a second, in workers too, and the machine crawled.
  const chan = typeof MessageChannel === 'undefined' ? null : new MessageChannel();
  let next = null;
  if (chan) chan.port1.onmessage = () => { const f = next; next = null; f && f(); };
  const yieldThen = f => { if (chan) { next = f; chan.port2.postMessage(0); } else setTimeout(f, 0); };
  // Lab state by id: lab steps accumulate it between checks.
  const state = {};
  // Frame buffers circulate: the page returns a drawn one with a `recycle`
  // message. Without this, 96 KB is allocated per frame and the garbage
  // collector wakes up sixty times a second.
  const pool = [];

  function frame(extra) {
    const fb = m.fb();
    const buf = pool.pop() || new ArrayBuffer(fb.length * 4);
    new Uint32Array(buf).set(fb);
    // The screen checksum travels with the frame: from it the page shows the one
    // thing a person cares about, whether the machine is drawing or has frozen.
    // The frames this machine's radio sent go out with the screen: the page
    // is the air and hands them to the other machines (kube-air.js).
    const air = m.radioTake();
    post({ t: 'frame', buf, insns: m.insns, cycles: m.cycles, pc: m.pc,
           crc: m.fbCrc(), air, ...extra }, [buf]);
  }

  return async function handle(msg) {
    switch (msg.t) {
      case 'init':
        m = await Machine.create(new Uint32Array(msg.prom), new Uint8Array(msg.img),
                                 msg.variant || 'base');
        // The commands it runs at start, on RS232 (Boot.Mod): a Kube role.
        if (msg.serial) m.serial(msg.serial);
        if (msg.timescale) m.timescale(msg.timescale);
        post({ t: 'ready', variant: m.variant });
        return;

      // ── several machines on one air ───────────────────────────────────────
      case 'air':
        for (const f of msg.frames) m.radioGive(new Uint8Array(f));
        return;

      // A command line typed under the last line of System.Tool and run with
      // the middle button, as a person would.
      case 'command': {
        // Long presses: with a fast machine clock (timescale) the background
        // tasks run often, a pass of the system's loop takes longer, and a short
        // press could fall between two looks at the mouse. Typed as a script
        // the running loop plays a slice at a time: done in one go, the
        // machine spent seconds of its time deaf to the air, and the plane
        // took both nodes for NotReady.
        const H = 1500000, steps = [];
        const click = (x, y, b) => {
          steps.push([() => m.mouse(x, 767 - y, 0), H], [() => m.mouse(x, 767 - y, b), H],
                     [() => m.mouse(x, 767 - y, 0), H]);
        };
        click(900, 557, 4);
        for (const c of typeCodes('\n' + msg.text)) steps.push([() => m.key(c), 4000]);
        steps.push([null, 2000000]);            // the editor takes the last keys before the click
        click(680, 569, 2);
        if (loop) { script.push(...steps); return; }
        for (const [f, n] of steps) { f && f(); m.run(n); }
        return;
      }

      // Power off and on; the disk keeps what was written, Kube's store too.
      case 'reboot':
        m.reboot(); script = [];
        if (msg.serial) m.serial(msg.serial);
        frame({ reset: true });
        return;

      case 'run':
        // The page requests frames, the thread does not push them: while the tab
        // is hidden or the machine is off screen, there are no requests and the
        // thread burns nothing.
        m.run(msg.quota | 0);
        frame();
        return;

      // Several machines on one air (kube.html): the machine runs on its own,
      // in slices of msg.quota instructions, and the radio's frames go out after
      // every slice; the screen at most every 200 ms. The loop is the thread's,
      // not the page's: a page's timers in a background tab fire once a second,
      // and a machine waiting for them ran at a quarter of its speed.
      case 'go': {
        if (loop) return;
        let last = 0;
        const tick = () => {
          if (!loop) return;
          for (let i = 0; i < (msg.slices | 0 || 8); i++) {
            const q = msg.quota | 0 || 25000;
            if (script.length) {
              const s = script[0];
              if (s[0]) { s[0](); s[0] = null; }
              const n = Math.min(s[1], q); m.run(n); s[1] -= n;
              if (s[1] <= 0) script.shift();
            } else m.run(q);
            const air = m.radioTake();
            if (air.length) post({ t: 'air', air });
          }
          const now = Date.now();
          if (now - last > 200) { last = now; frame(); }
          yieldThen(tick);
        };
        loop = true;
        yieldThen(tick);
        return;
      }
      case 'halt':
        loop = null;
        return;

      // ── labs ──────────────────────────────────────────────────────────────
      // A task check reads the machine's registers, memory and screen, so it
      // runs HERE, next to the machine. Otherwise the page would drag the whole
      // state across the thread boundary on every click.
      case 'check': {
        const lab = LABS.find(l => l.id === msg.lab);
        const step = lab && lab.steps[msg.step];
        if (!step) { post({ t: 'check', id: msg.id, ok: false, msg: 'no such step' }); return; }
        state[msg.lab] ??= {};
        let r;
        try {
          r = step.check(m, { state: state[msg.lab], answer: msg.answer || '', lang: msg.lang });
        } catch (e) {
          r = { ok: false, msg: String(e && e.message || e) };
        }
        post({ t: 'check', id: msg.id, ok: !!r.ok, msg: r.msg || '' });
        return;
      }

      // Lab state lives next to the machine: steps rely on what the previous one
      // remembered, and they share the machine.
      case 'forget':
        state[msg.lab] = {};
        return;

      case 'poke':
        m.poke(msg.adr >>> 0, msg.val >>> 0);
        return;

      case 'reset':
        m.reset();
        frame({ reset: true });
        return;

      case 'recycle':
        if (pool.length < 3) pool.push(msg.buf);
        return;

      // For labs and checks: look inside the machine.
      case 'peek':
        post({ t: 'peek', id: msg.id, regs: Array.from({ length: 16 }, (_, i) => m.reg(i)),
               flags: m.flags(), h: m.h(), pc: m.pc, insns: m.insns, crc: m.fbCrc(),
               // The word at an address, for labs where a person writes to memory
               // and must see what exactly landed there.
               word: msg.adr === undefined ? undefined : m.ram(msg.adr >>> 0) });
        return;

      default:
        post({ t: 'error', message: `unknown message: ${msg.t}` });
    }
  };
}
