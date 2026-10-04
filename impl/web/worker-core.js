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
import { Machine } from './machine.js';
import { LABS } from './labs.js';

/**
 * Builds the message handler. `post(msg, transfer)` works like postMessage.
 * Returns an async function that incoming messages are fed to.
 */
export function createHandler(post) {
  let m = null;
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
    post({ t: 'frame', buf, insns: m.insns, cycles: m.cycles, pc: m.pc,
           crc: m.fbCrc(), ...extra }, [buf]);
  }

  return async function handle(msg) {
    switch (msg.t) {
      case 'init':
        m = await Machine.create(new Uint32Array(msg.prom), new Uint8Array(msg.img),
                                 msg.variant || 'base');
        post({ t: 'ready', variant: m.variant });
        return;

      case 'run':
        // The page requests frames, the thread does not push them: while the tab
        // is hidden or the machine is off screen, there are no requests and the
        // thread burns nothing.
        m.run(msg.quota | 0);
        frame();
        return;

      case 'key':   m.key(msg.code | 0); return;
      case 'mouse': m.mouse(msg.x | 0, msg.y | 0, msg.btn | 0); return;

      // A two-button chord: the machine must run between the presses, otherwise
      // the system will not see which button the click started with.
      case 'chord':
        m.mouse(msg.x | 0, msg.y | 0, msg.first | 0);
        m.run(msg.gap | 0 || 20000);
        m.mouse(msg.x | 0, msg.y | 0, msg.then | 0);
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
          r = step.check(m, { state: state[msg.lab], answer: msg.answer || '' });
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
