// Headless lab test: each lab must go from "not done" to "done"
// through the intended actions. A lab whose check is always green or
// always red is useless and must break the build.
import fs from 'node:fs';
import { Machine } from './machine.js';
import { LABS, SOURCES, BUILTIN, MEM } from './labs.js';
import { OberonFS, readText, addFile } from './oberonfs.js';

const prom = new Uint32Array(
  fs.readFileSync('prom_sd.mem', 'utf8').trim().split('\n').map(l => parseInt(l, 16)));
const img = new Uint8Array(fs.readFileSync('oberon.dsk'));

let bad = 0;
const say = (ok, s) => { console.log(`    ${ok ? '✅' : '❌'} ${s}`); if (!ok) bad++; };

// `node labs-test.mjs 10 12` runs only the named labs (the whole
// set takes a quarter of an hour). The static page check always runs.
const ONLY = new Set(process.argv.slice(2).map(Number));

// A machine for a lab: hardware and files beyond the reference come from its
// `machine` field, exactly as the page brings them up (embed.js).
async function machineFor(L, variant) {
  const want = L.machine || {};
  let disk = img;
  for (const f of want.files || []) disk = addFile(disk, f, new Uint8Array(fs.readFileSync(f)));
  return Machine.create(prom, disk, variant || want.variant || 'base');
}

async function lab(id, script) {
  const L = LABS.find(l => l.id === id);
  if (ONLY.size && !ONLY.has(id)) return null;
  const m = await machineFor(L);
  console.log(`\n  Lab ${L.id} "${L.title}" (${L.level})`);
  await script(m, L);
  return m;
}

// ── Lab 1: observe ───────────────────────────────────────────────────────────
await lab(1, async (m, L) => {
  say(!L.steps[0].check(m).ok, 'step 1 before boot: not passed');
  for (let i = 0; i < 12; i++) m.run(1e6);
  const r1 = L.steps[0].check(m); say(r1.ok, 'step 1 after boot: ' + r1.msg);
  say(!L.steps[1].check(m).ok, 'step 2 before click: not passed');
  m.click(700, 461, 2);                       // middle click on System.ShowModules
  for (let i = 0; i < 4; i++) m.run(1e6);
  const r2 = L.steps[1].check(m); say(r2.ok, 'step 2 after the click: ' + r2.msg);
});

// ── Lab 4: break ─────────────────────────────────────────────────────────────
await lab(4, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m).ok, 'step 1 before damage: not passed');
  m.poke(0xE7F00, 0xFFFFFFFF);
  const r1 = L.steps[0].check(m); say(r1.ok, 'step 1 after the screen damage: ' + r1.msg);
  say(!L.steps[1].check(m).ok, 'step 2 before code damage: not passed');
  m.poke(m.pc, 0xE7FFFFFF);          // jump to itself at the current address
  const r2 = L.steps[1].check(m); say(r2.ok, 'step 2 after the code damage: ' + r2.msg);
  m.reset();
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(m.fbCrc() === 0xB5DFC933, 'reset returned the machine to its initial state');
});

// ── Lab 7: build ─────────────────────────────────────────────────────────────
await lab(7, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  const r1 = L.steps[0].check(m); say(r1.ok, 'step 1: ' + r1.msg);
  say(!L.steps[1].check(m).ok, 'step 2 before rebuild: not passed');
  m.click(700, 620, 4);                       // left click: cursor to the end of the text
  m.type('ORP.Compile Math.Mod/s ~');
  m.run(2e6);
  m.click(690, 569, 2);                       // middle click on the typed command
  for (let i = 0; i < 40; i++) m.run(1e6);
  const r2 = L.steps[1].check(m); say(r2.ok, 'step 2 after the rebuild: ' + r2.msg);
});

// ── Lab 5: measure ───────────────────────────────────────────────────────────
await lab(5, async (m, L) => {
  const ctx = { state: {}, answer: '' };
  say(!L.steps[0].check(m, ctx).ok, 'step 1 before boot: not passed');
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(L.steps[0].check(m, ctx).ok, 'step 1: the starting point is recorded');
  ctx.answer = 'garbage';
  say(!L.steps[1].check(m, ctx).ok, 'step 2 with a non-numeric answer: not passed');
  ctx.answer = '9.99';
  say(!L.steps[1].check(m, ctx).ok, 'step 2 with a wrong number: not passed');
  ctx.answer = (m.cycles / m.insns).toFixed(2);
  const r2 = L.steps[1].check(m, ctx); say(r2.ok, 'step 2: ' + r2.msg);
  say(!L.steps[2].check(m, ctx).ok, 'step 3 before compilation: not passed');
  m.click(700, 620, 4); m.type('ORP.Compile Math.Mod/s ~'); m.run(2e6);
  m.click(690, 569, 2);
  for (let i = 0; i < 45; i++) m.run(1e6);
  ctx.answer = ((m.cycles - ctx.state.c0) / (m.insns - ctx.state.i0)).toFixed(2);
  const r3 = L.steps[2].check(m, ctx); say(r3.ok, 'step 3: ' + r3.msg);
});

// ── Lab 6: the heap inside a command ─────────────────────────────────────────
await lab(6, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  m.click(700, 620, 4);
  m.type('ORP.Compile ORS.Mod/s ORB.Mod/s ORG.Mod/s ORP.Mod/s PIO.Mod/s ~');
  m.run(2e6);
  m.click(690, 569, 2);
  for (let i = 0; i < 220; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, {}); say(r1.ok, 'step 1: ' + r1.msg);
  say(!L.steps[1].check(m, {}).ok, 'step 2 before separate build: not passed');
  m.type('\n');                                   // newline
  m.type('ORP.Compile PIO.Mod/s ~'); m.run(2e6);
  m.click(690, 581, 2);
  for (let i = 0; i < 40; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, {}); say(r2.ok, 'step 2: ' + r2.msg);
});

// ── Lab 8: two generations ───────────────────────────────────────────────────
await lab(8, async (m, L) => {
  const ctx = { state: {}, answer: '' };
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m, ctx).ok, 'step 1 before build: not passed');
  m.click(700, 620, 4);
  m.type('ORP.Compile ORS.Mod/s ~'); m.type('\n');
  m.type('System.Free ORP ORG ORB ORS ~'); m.type('\n');
  m.type('ORP.Compile ORS.Mod/s ~'); m.run(2e6);
  m.click(690, 569, 2);
  for (let i = 0; i < 60; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, ctx); say(r1.ok, 'step 1: ' + r1.msg);
  say(L.steps[1].check(m, ctx).ok, 'step 2: unloading declared');
  say(!L.steps[2].check(m, ctx).ok, 'step 3 before second build: not passed');
  m.click(685, 581, 2);                            // System.Free
  for (let i = 0; i < 10; i++) m.run(1e6);
  m.click(690, 593, 2);                            // second build
  for (let i = 0; i < 70; i++) m.run(1e6);
  const r3 = L.steps[2].check(m, ctx); say(r3.ok, 'step 3: ' + r3.msg);
});

// Typing text through the real editor. Checked end to end:
// string -> scan codes -> Oberon -> file on disk -> back. Catches the class
// of bugs where text is saved silently corrupted (this has happened: the
// closing parenthesis was not typed, while the file was created just fine).
const EDIT = { open: [680, 569], area: [100, 60], store: [345, 6] };
async function makeFile(m, name, src) {
  m.click(700, 620, 4); m.type(`Edit.Open ${name} ~`); m.run(2e6);
  m.click(...EDIT.open, 2); for (let i = 0; i < 8; i++) m.run(1e6);
  m.click(...EDIT.area, 4); m.run(500000);
  m.type(src, 6000); m.run(2e6);
  m.click(...EDIT.store, 2); for (let i = 0; i < 10; i++) m.run(1e6);
}

// ── Lab 2: your first module ─────────────────────────────────────────────────
const HELLO = 'MODULE Hello;\n  VAR n*: INTEGER;\n  PROCEDURE Add*(x: INTEGER);\n  BEGIN n := n + x\n  END Add;\nBEGIN n := 0\nEND Hello.\n';
await lab(2, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m, {}).ok, 'step 1 before typing: not passed');
  await makeFile(m, 'Hello.Mod', HELLO);
  const r1 = L.steps[0].check(m, {}); say(r1.ok, 'step 1: ' + r1.msg);
  const back = readText(new OberonFS(m).read(new OberonFS(m).files().get('Hello.Mod')));
  say(back.trim() === HELLO.trim(), 'the typed text matches the source character for character');
  say(!L.steps[1].check(m, {}).ok, 'step 2 before compilation: not passed');
  m.click(700, 620, 4); m.type('\nORP.Compile Hello.Mod ~'); m.run(2e6);
  m.click(690, 581, 2); for (let i = 0; i < 25; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, {}); say(r2.ok, 'step 2: ' + r2.msg);
});

// ── Lab 3: the interface key ─────────────────────────────────────────────────
await lab(3, async (m, L) => {
  const c = { state: {} };
  for (let i = 0; i < 12; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'step 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'step 2 before rebuild: not passed');
  m.click(700, 620, 4); m.type('ORP.Compile Blink.Mod/s ~'); m.run(2e6);
  m.click(690, 569, 2); for (let i = 0; i < 30; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, c); say(r2.ok, 'step 2: ' + r2.msg);
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'step 3: ' + r3.msg);
});

// ── Lab 9: inside the code generator ─────────────────────────────────────────
const IDX = 'MODULE\nIdx;\n  VAR a: ARRAY 100 OF INTEGER;\n  PROCEDURE Sum*(n: INTEGER): INTEGER;\n    VAR i, s: INTEGER;\n  BEGIN s := 0; i := 0;\n    WHILE i < n DO s := s + a[i]; INC(i) END;\n    RETURN s\n  END Sum;\nEND Idx.\n';
await lab(9, async (m, L) => {
  const c = { state: {} };
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m, c).ok, 'step 1 before build: not passed');
  await makeFile(m, 'Idx.Mod', IDX);
  m.click(700, 620, 4); m.type('\nORP.Compile Idx.Mod/s ~'); m.run(2e6);
  m.click(690, 581, 2); for (let i = 0; i < 25; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'step 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'step 2 before the asterisk: not passed');
  m.click(20, 37, 4); m.run(500000); m.type('*', 6000); m.run(1e6);
  m.click(...EDIT.store, 2); for (let i = 0; i < 8; i++) m.run(1e6);
  m.click(690, 581, 2); for (let i = 0; i < 30; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, c); say(r2.ok, 'step 2: ' + r2.msg);
});

// Command lines typed after makeFile. The cursor is placed by clicking to the
// RIGHT of the end of the text: a click at (700, 620) lands in the last line at
// x = 700, that is, in the middle of "Edit.Open …", and the tail of that line
// sticks to the typed text ("Junk.Make" turned into "Junk.Makeen Junk.Mod ~",
// and the command was not found). Typing is slower than usual: in a long line
// with capitals Shift gets lost.
const LINE = y => 581 + 12 * y;           // 0 is the first line after Edit.Open
function typeLines(m, lines) {
  m.click(1010, 620, 4);
  for (const l of lines) { m.type('\n' + l, 10000); m.run(1e6); }
}
const go = (m, n) => { for (let i = 0; i < n; i++) m.run(1e6); };

// ── Lab 10: the garbage collector from inside ────────────────────────────────
await lab(10, async (m, L) => {
  const c = { state: {}, answer: '' };
  go(m, 12);
  c.answer = '7';
  say(!L.steps[0].check(m, c).ok, 'step 1 with a wrong number: not passed');
  c.answer = '20';
  const r0 = L.steps[0].check(m, c); say(r0.ok, 'step 1: ' + r0.msg);
  const k0 = MEM.heap(m);
  say(k0.ok && k0.allocated > 0 && k0.allocated < 100000,
      `Kernel.allocated found at the address from the Kernel descriptor: ${k0.allocated} bytes after boot`);
  say(!L.steps[1].check(m, c).ok, 'step 2 before build: not passed');
  await makeFile(m, 'Junk.Mod', SOURCES.Junk);
  say(readText(new OberonFS(m).read(new OberonFS(m).files().get('Junk.Mod'))) === SOURCES.Junk,
      'Junk.Mod typed character for character');
  typeLines(m, ['ORP.Compile Junk.Mod ~', 'Junk.Make']);
  m.click(690, LINE(0), 2); go(m, 20);
  const r1 = L.steps[1].check(m, c); say(r1.ok, 'step 2: ' + r1.msg);
  say(!L.steps[2].check(m, c).ok, 'step 3 before Junk.Make: not passed');
  m.click(670, LINE(1), 2); go(m, 3);
  m.click(845, 282, 2); go(m, 3);                // System.Watch
  const r2 = L.steps[2].check(m, c); say(r2.ok, 'step 3: ' + r2.msg);
  // The collector wakes up once a second (≈16 M instructions) and does nothing.
  go(m, 30);
  say(!L.steps[3].check(m, c).ok, 'step 4: two seconds idle, the garbage is still there, no collection happened');
  m.click(940, 282, 2); go(m, 20);               // System.Collect
  const r3 = L.steps[3].check(m, c); say(r3.ok, 'step 4 after System.Collect: ' + r3.msg);
  say(!L.steps[4].check(m, c).ok, 'step 5 before double Junk.Make: not passed');
  m.click(670, LINE(1), 2); go(m, 3);
  m.click(670, LINE(1), 2); go(m, 3);
  const r4 = L.steps[4].check(m, c); say(r4.ok, 'step 5: ' + r4.msg);
  // The promise from the check: on the second occasion the collector comes by itself.
  go(m, 20);
  const k5 = MEM.heap(m);
  say(k5.allocated < 100000, `a second later without System.Collect the heap holds ${k5.allocated} bytes: the collector came by itself`);
});

// ── Lab 11: one task at a time ───────────────────────────────────────────────
await lab(11, async (m, L) => {
  const c = { state: {}, answer: '' };
  go(m, 12);
  say(!L.steps[0].check(m, c).ok, 'step 1 before build: not passed');
  await makeFile(m, 'Tick.Mod', SOURCES.Tick);
  typeLines(m, ['ORP.Compile Tick.Mod ~', 'Tick.Start', 'Tick.Spin', 'Tick.Break']);
  m.click(690, LINE(0), 2); go(m, 20);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'step 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'step 2 before Tick.Start: not passed');
  m.click(665, LINE(1), 2); go(m, 3);
  const r2 = L.steps[1].check(m, c); say(r2.ok, 'step 2: ' + r2.msg);
  say(!L.steps[2].check(m, c).ok, 'step 3 before Tick.Spin: not passed');
  m.click(665, LINE(2), 2); go(m, 30);
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'step 3: ' + r3.msg);
  say(!L.steps[3].check(m, c).ok, 'step 4 before Tick.Break: not passed');
  m.click(665, LINE(3), 2); go(m, 3);
  const r4 = L.steps[3].check(m, c); say(r4.ok, 'step 4: ' + r4.msg);
});

// ── Lab 12: the cost of a check, by hand ─────────────────────────────────────
const costOnce = async (m) => {
  await makeFile(m, 'Cost.Mod', SOURCES.Cost);
  typeLines(m, ['ORP.Compile Cost.Mod ~', 'Cost.Run', 'ORP.Compile ORG.Chk.Mod ~', 'System.Free Cost ORP ORG ~',
                'ORP.Compile ORG.NoChk.Mod ~']);
  m.click(690, LINE(0), 2); go(m, 25);
  m.click(670, LINE(1), 2); go(m, 10);
};
let tBase = null;
await lab(12, async (m, L) => {
  // First the same thing on the STOCK core: the lab claims that the stock
  // system on the core with CHK runs cycle for cycle the same.
  const b = await machineFor(L, 'base');
  go(b, 12); await costOnce(b);
  tBase = MEM.modVar(b, 'Cost', 0);

  const c = { state: {}, answer: '' };
  go(m, 12);
  say(m.variant === 'chk' && new OberonFS(m).files().has('ORG.Chk.Mod'),
      'the machine runs on the CHK core, ORG.Chk.Mod is on the disk and visible to the system');
  say(!L.steps[0].check(m, c).ok, 'step 1 before Cost.Run: not passed');
  await costOnce(m);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'step 1: ' + r1.msg);
  say(c.state.tB === tBase, `the stock core gave the same time: ${tBase} ms vs ${c.state.tB}`);
  say(!L.steps[1].check(m, c).ok, 'step 2 before building ORG.Chk.Mod: not passed');
  const F = () => new OberonFS(m), h0 = F().files().get('ORG.rsc');
  m.click(690, LINE(2), 2);
  let n = 0;
  while (F().files().get('ORG.rsc') === h0 && n < 300) { go(m, 5); n += 5; }
  go(m, 5);
  const r2 = L.steps[1].check(m, c); say(r2.ok, `step 2 (compiling ORG ≈ ${n} M instructions): ` + r2.msg);
  say(!L.steps[2].check(m, c).ok, 'step 3 before rebuilding Cost: not passed');
  m.click(690, LINE(3), 2); go(m, 5);            // System.Free
  m.click(690, LINE(0), 2); go(m, 30);           // ORP.Compile Cost.Mod
  m.click(670, LINE(1), 2); go(m, 10);           // Cost.Run
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'step 3: ' + r3.msg);
  c.answer = 'garbage';
  say(!L.steps[3].check(m, c).ok, 'step 4 with a non-numeric answer: not passed');
  c.answer = '50';
  say(!L.steps[3].check(m, c).ok, 'step 4 with a wrong number: not passed');
  c.answer = ((c.state.tB - c.state.tE) * 100 / c.state.tB).toFixed(1);
  const r4 = L.steps[3].check(m, c); say(r4.ok, 'step 4: ' + r4.msg);
  // Configuration A: the same round with ORG.NoChk.Mod.
  const cB = c.state.codeB, cE = c.state.codeE;
  say(cB.traps > 0 && cB.chk === 0 && cE.traps === 0 && cE.chk > 0,
      `the machine-level marker tells B and E apart: B has ${cB.traps} traps, ${cB.chk} CHK; E has ${cE.traps} traps, ${cE.chk} CHK`);
  say(!L.steps[4].check(m, c).ok, 'step 5 before building ORG.NoChk.Mod: not passed');
  const h1 = F().files().get('ORG.rsc');
  m.click(690, LINE(4), 2);
  n = 0;
  while (F().files().get('ORG.rsc') === h1 && n < 300) { go(m, 5); n += 5; }
  go(m, 5);
  const r5 = L.steps[4].check(m, c); say(r5.ok, `step 5 (≈ ${n} M instructions): ` + r5.msg);
  say(!L.steps[5].check(m, c).ok, 'step 6 before rebuilding Cost: not passed');
  m.click(690, LINE(3), 2); go(m, 5);            // System.Free
  m.click(690, LINE(0), 2); go(m, 30);           // ORP.Compile Cost.Mod
  m.click(670, LINE(1), 2); go(m, 10);           // Cost.Run
  const r6 = L.steps[5].check(m, c); say(r6.ok, 'step 6: ' + r6.msg);
  const cA = MEM.codeInMemory(m, 'Cost');
  say(r6.ok && cA.words === cE.words - cE.chk && cE.words === cB.words - cB.traps,
      `sizes add up by instruction: B ${cB.words} = E ${cE.words} + ${cB.traps} trap(s), E = A ${cA.words} + ${cE.chk} CHK`);
});

// ── Lab 13: your own built-in procedure ──────────────────────────────────────
// Editing the compiler with the same hands as a person: the pattern is typed in
// System.Tool, selected with a right-button drag, Edit.Search in the file's
// title bar puts the cursor after the pattern, the insertion is typed there, Edit.Store.
const MENU = { close: [95, 6], search: [285, 6], store: [345, 6] };
function selectLine(m, y) {
  m.mouse(1000, 767 - 740, 0); m.run(300000);          // move the arrow out of sight
  let a = 9999, b = -1;
  for (let x = 645; x < 1015; x++) if (m.ink(x, y - 5, x + 1, y + 3)) { a = Math.min(a, x); b = x; }
  const Y = 767 - y;
  m.mouse(a + 1, Y, 0); m.run(150000); m.mouse(a + 1, Y, 1); m.run(150000);
  for (let x = a + 5; x < b; x += 6) { m.mouse(x, Y, 1); m.run(100000); }
  m.mouse(b, Y, 1); m.run(150000); m.mouse(b, Y, 0); m.run(150000);
}
async function patchFile(m, k, edit) {            // k is the "Edit.Open …" line
  // Timeouts have headroom for the longest file: ORG.Mod is almost 1900 lines, and
  // four million instructions were not enough for the search in it; the insertion
  // was typed where the cursor stood before the search.
  m.click(680, LINE(k), 2); go(m, 20);
  selectLine(m, LINE(k + 1) - 3); go(m, 1);
  m.click(...MENU.search, 2); go(m, 30);
  // Typing step: 30 thousand instructions per character. At ten thousand the model's
  // keyboard lost key presses in a dense run of Shift characters: "(VAR x" landed
  // in the file as "(VX", letters went missing and Shift stayed pressed.
  m.type(edit.insert, 30000); go(m, 1);
  m.click(...MENU.store, 2); go(m, 40);
  m.click(...MENU.close, 2); go(m, 3);
}
await lab(13, async (m, L) => {
  const c = { state: {}, answer: '' };
  go(m, 12);
  say(!L.steps[0].check(m, c).ok, 'step 1 before the edit: not passed');
  typeLines(m, [
    ...BUILTIN.flatMap(e => [`Edit.Open ${e.file}`, e.after]),
    'ORP.Compile ORB.Mod/s ORG.Mod/s ORP.Mod/s ~', 'System.Free ORP ORG ORB ~',
    'Edit.Open Sq.Mod', 'ORP.Compile Sq.Mod ~', 'Sq.Run']);
  await patchFile(m, 0, BUILTIN[0]);
  const r0 = L.steps[0].check(m, c);
  say(!r0.ok, 'step 1 after one insertion of three: not passed: ' + r0.msg);
  await patchFile(m, 2, BUILTIN[1]);
  await patchFile(m, 4, BUILTIN[2]);
  for (const e of BUILTIN) {
    const t = readText(new OberonFS(m).read(new OberonFS(m).files().get(e.file))).replace(/\r/g, '\n');
    say(t.includes(e.after + e.insert), `${e.file}: the insertion landed right after "${e.after}"`);
    if (process.env.DEBUG_BUILTIN && !t.includes(e.after + e.insert)) {
      const i = t.indexOf(e.after), j = t.indexOf('Sqr');
      console.log(`      [${e.file}] after the pattern: ${JSON.stringify(t.slice(i, i + 160))}`);
      console.log(`      [${e.file}] Sqr: ${j < 0 ? 'none' : JSON.stringify(t.slice(Math.max(0, j - 80), j + 120))}`);
    }
  }
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'step 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'step 2 before rebuild: not passed');
  const F = () => new OberonFS(m), h0 = F().files().get('ORP.rsc');
  m.click(690, LINE(6), 2);
  let n = 0;
  while (F().files().get('ORP.rsc') === h0 && n < 400) { go(m, 5); n += 5; }
  go(m, 5);
  const r2 = L.steps[1].check(m, c); say(r2.ok, `step 2 (≈ ${n} M instructions): ` + r2.msg);
  // Sq with the old compiler, not yet unloaded: it does not know SQR.
  await makeSq(m);
  m.click(690, LINE(9), 2); go(m, 20);
  say(!new OberonFS(m).files().has('Sq.rsc'), 'the old compiler in memory does not build Sq.Mod: it does not know SQR');
  say(!L.steps[2].check(m, c).ok, 'step 3 before System.Free: not passed');
  m.click(690, LINE(7), 2); go(m, 5);            // System.Free ORP ORG ORB
  m.click(690, LINE(9), 2); go(m, 30);           // ORP.Compile Sq.Mod
  m.click(665, LINE(10), 2); go(m, 5);           // Sq.Run
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'step 3: ' + r3.msg);
  say(!L.steps[3].check(m, c).ok, 'step 4 before rebuilding with the new compiler: not passed');
  const h1 = F().files().get('ORP.rsc');
  m.click(690, LINE(6), 2);
  n = 0;
  while (F().files().get('ORP.rsc') === h1 && n < 400) { go(m, 5); n += 5; }
  go(m, 5);
  const r4 = L.steps[3].check(m, c); say(r4.ok, `step 4 (≈ ${n} M instructions): ` + r4.msg);
});
async function makeSq(m) {
  m.click(680, LINE(8), 2); go(m, 8);
  m.click(...EDIT.area, 4); m.run(500000);
  m.type(SOURCES.Sq, 6000); m.run(2e6);
  m.click(...EDIT.store, 2); go(m, 10);
  say(readText(new OberonFS(m).read(new OberonFS(m).files().get('Sq.Mod'))) === SOURCES.Sq,
      'Sq.Mod typed character for character');
}

// ── static check of the shell page ───────────────────────────────────────────
// A browser cannot be brought up here, so we at least make sure the markup and
// the script have not diverged: every getElementById must find its element, and
// every import an existing file. This catches the most common breakage, a rename.
{
  console.log('\n  Page lab.html');
  const html = fs.readFileSync('lab.html', 'utf8');
  const ids = new Set([...html.matchAll(/id="([^"]+)"/g)].map(m => m[1]));
  const used = new Set([...html.matchAll(/\$\('([^']+)'\)/g)].map(m => m[1]));
  const missing = [...used].filter(x => !ids.has(x));
  say(missing.length === 0, missing.length
    ? `elements missing from the markup: ${missing.join(', ')}`
    : `all ${used.size} element lookups find their id`);
  const imports = [...html.matchAll(/from '(\.[^']+)'/g)].map(m => m[1]);
  const lost = imports.filter(f => !fs.existsSync(f));
  say(lost.length === 0, lost.length ? `missing files: ${lost.join(', ')}` : `imports present: ${imports.join(', ')}`);
  // Lab 12's code generator is the accepted configuration E from patches/, and it
  // may differ from it only by the version stamp: otherwise the lab measures a
  // different check than the project's main experiment.
  {
    const lines = s => s.replace(/\r\n?/g, '\n').split('\n');
    const lab = lines(fs.readFileSync('ORG.Chk.Mod', 'latin1'));
    const cfg = lines(fs.readFileSync('../patches/ORG-cfgE.Mod', 'latin1'));
    const i = cfg.findIndex(x => x.includes('(*CONFIG E: modules using the CHK instruction'));
    const k = lab.findIndex(x => x.includes('(*LAB VARIANT'));
    const same = (a, b) => a.length === b.length && a.every((x, n) => x === b[n]);
    say(i > 0 && k === i && same(cfg.slice(0, i), lab.slice(0, k))
        && same(cfg.slice(i + 6), lab.slice(k + 5))
        && lab[k + 4].trim() === 'Files.WriteByte(R, version);',
        'ORG.Chk.Mod = patches/ORG-cfgE.Mod, except the version stamp');
    // Lab configuration A is patches/ORG-cfgA.Mod plus a comment about the
    // version stamp, and nothing else.
    const noc = lines(fs.readFileSync('ORG.NoChk.Mod', 'latin1'));
    const cfa = lines(fs.readFileSync('../patches/ORG-cfgA.Mod', 'latin1'));
    const a = noc.findIndex(x => x.includes('(*LAB VARIANT'));
    const z = noc.findIndex((x, n) => n >= a && x.trim().endsWith('*)'));
    say(a > 0 && z > a && same(noc.slice(0, a).concat(noc.slice(z + 1)), cfa),
        'ORG.NoChk.Mod = patches/ORG-cfgA.Mod, except the comment about the version stamp');
  }
  const labIds = LABS.map(l => l.id);
  say(new Set(labIds).size === labIds.length, `lab numbers are unique: ${labIds.join(', ')}`);
  for (const L of LABS) {
    const bads = L.steps.filter(s => typeof s.check !== 'function' || !s.text);
    say(bads.length === 0, `lab ${L.id}: ${L.steps.length} steps, each has text and a check`);
    // A link to a handbook chapter that does not exist looks working, so we check it.
    const lost = (L.read || []).filter(([f]) => !fs.existsSync('book/' + f));
    say(lost.length === 0, lost.length
      ? `lab ${L.id}: missing chapters ${lost.map(x => x[0]).join(', ')}`
      : `lab ${L.id}: handbook links lead to existing chapters`);
  }
}

console.log(bad ? `\n❌ failures: ${bad}` : '\n✅ all labs pass their scenario');
process.exit(bad ? 1 : 0);
