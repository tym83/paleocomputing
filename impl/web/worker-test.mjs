// Test of the worker thread protocol without a browser.
//
// The point: the page and the thread talk through messages, and they can drift
// apart silently: the picture simply stops updating. Here the same logic (its core
// was moved out of worker.js precisely for this) runs in node on a real machine.
import fs from 'node:fs';
import { createHandler } from './worker-core.js';

const prom = fs.readFileSync('prom_sd.mem', 'utf8').trim().split('\n').map(l => parseInt(l, 16));
const img = new Uint8Array(fs.readFileSync('oberon.dsk'));

let bad = 0;
const say = (ok, s) => { console.log(`  ${ok ? '✅' : '❌'} ${s}`); if (!ok) bad++; };

const out = [];
const transfers = [];
const handle = createHandler((msg, t) => { out.push(msg); transfers.push(t || null); });
const last = t => [...out].reverse().find(m => m.t === t);

await handle({ t: 'init', prom: new Uint32Array(prom).buffer, img: img.buffer });
say(!!last('ready'), 'the machine comes up on the init message');

// ── frames ──────────────────────────────────────────────────────────────────
await handle({ t: 'run', quota: 100000 });
const first = last('frame');
say(!!first && first.buf.byteLength === 96 * 1024, 'a frame arrives as a raw 96 KB buffer');
say(transfers[out.indexOf(first)]?.[0] === first.buf, 'the frame buffer is handed over with ownership transfer');

const before = first.insns;
await handle({ t: 'run', quota: 100000 });
say(last('frame').insns > before, 'instructions are counted from frame to frame');

// ── buffers circulate ───────────────────────────────────────────────────────
const recycled = last('frame').buf;
await handle({ t: 'recycle', buf: recycled });
await handle({ t: 'run', quota: 1000 });
say(last('frame').buf === recycled, 'a returned buffer is reused rather than allocated anew');

// ── the system really boots ──────────────────────────────────────────────────
for (let i = 0; i < 14; i++) {
  await handle({ t: 'recycle', buf: last('frame').buf });
  await handle({ t: 'run', quota: 1000000 });
}
const fb = new Uint32Array(last('frame').buf);
let ink = 0;
for (const w of fb) ink += (w === 0 ? 0 : 1);
say(ink > 500, `there is an image on screen (${ink} non-empty words out of ${fb.length})`);

// ── input ───────────────────────────────────────────────────────────────────
const insBefore = last('frame').insns;
await handle({ t: 'chord', x: 100, y: 100, first: 4, then: 5, gap: 50000 });
await handle({ t: 'recycle', buf: last('frame').buf });
await handle({ t: 'run', quota: 1000 });
say(last('frame').insns - insBefore > 50000, 'a chord gives the machine time to run between the two presses');

await handle({ t: 'key', code: 0x1C });
await handle({ t: 'mouse', x: 10, y: 10, btn: 0 });
say(!last('error'), 'keyboard and mouse are accepted');

// ── reset ───────────────────────────────────────────────────────────────────
const runFor = last('frame').insns;
await handle({ t: 'reset' });
const after = last('frame');
say(after.reset === true && after.insns < runFor, `reset returns the machine to the start (${runFor} → ${after.insns})`);

// ── unknown message ─────────────────────────────────────────────────────────
await handle({ t: 'no-such-message' });
say(!!last('error'), 'an unknown message is not silently swallowed');

// ── labs are checked next to the machine ─────────────────────────────────────
// A task check reads registers, memory and the screen. If it ran on the page,
// the whole state would have to be pulled across the thread boundary.
await handle({ t: 'check', id: 10, lab: 1, step: 0 });
const early = last('check');
say(early && early.ok === false, 'on an empty machine the first step of lab 1 is not counted');

for (let i = 0; i < 14; i++) {
  await handle({ t: 'recycle', buf: last('frame').buf });
  await handle({ t: 'run', quota: 1000000 });
}
await handle({ t: 'check', id: 11, lab: 1, step: 0 });
const grown = last('check');
say(grown && grown.ok === true, `after boot it is counted: ${grown && grown.msg}`);

await handle({ t: 'poke', adr: 0x200, val: 0xC0FFEE });
await handle({ t: 'peek', id: 12, adr: 0x200 });
say((last('peek').word >>> 0) === 0xC0FFEE,
    `the written word reads back: ${(last('peek').word >>> 0).toString(16).toUpperCase()}`);

// ── second hardware ──────────────────────────────────────────────────────────
// The core with hardware bounds checking must run the same system bit for bit
// identically: an instruction set extension that changes the behaviour of old
// code is not an extension but a different machine.
const out2 = [];
const handle2 = createHandler(msg => out2.push(msg));
const last2 = t => [...out2].reverse().find(m => m.t === t);
await handle2({ t: 'init', variant: 'chk', prom: new Uint32Array(prom).buffer, img: img.buffer });
say(last2('ready')?.variant === 'chk', 'the thread brings up the selected hardware variant');
for (let i = 0; i < 15; i++) {
  await handle2({ t: 'run', quota: 1000000 });
  await handle2({ t: 'recycle', buf: last2('frame').buf });
}
await handle({ t: 'peek', id: 1 });
await handle2({ t: 'peek', id: 2 });
// The base machine has already been reset by this point, so we run it for the same amount.
const outA = [];
const handleA = createHandler(m => outA.push(m));
const lastA = t => [...outA].reverse().find(m => m.t === t);
await handleA({ t: 'init', prom: new Uint32Array(prom).buffer, img: img.buffer });
for (let i = 0; i < 15; i++) {
  await handleA({ t: 'run', quota: 1000000 });
  await handleA({ t: 'recycle', buf: lastA('frame').buf });
}
await handleA({ t: 'peek', id: 3 });
const a = lastA('peek'), c = last2('peek');
say(a.crc === c.crc && a.insns === c.insns,
    `both cores boot the system identically: CRC ${(a.crc >>> 0).toString(16).toUpperCase()}, ${a.insns} instructions`);

console.log(bad ? `\n❌ worker protocol: ${bad} mismatches` : '\n✅ worker thread protocol intact');
process.exit(bad ? 1 : 0);
