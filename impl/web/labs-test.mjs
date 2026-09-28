// Безголовая проверка лабораторий: каждая обязана переходить из «не сделано»
// в «сделано» от предусмотренных действий. Лаборатория, проверка которой
// всегда зелёная или всегда красная, бесполезна и должна ломать сборку.
import fs from 'node:fs';
import { Machine } from './machine.js';
import { LABS, SOURCES, BUILTIN, MEM } from './labs.js';
import { OberonFS, readText, addFile } from './oberonfs.js';

const prom = new Uint32Array(
  fs.readFileSync('prom_sd.mem', 'utf8').trim().split('\n').map(l => parseInt(l, 16)));
const img = new Uint8Array(fs.readFileSync('oberon.dsk'));

let bad = 0;
const say = (ok, s) => { console.log(`    ${ok ? '✅' : '❌'} ${s}`); if (!ok) bad++; };

// `node labs-test.mjs 10 12` — прогнать только названные лабораторные (весь
// набор идёт четверть часа). Статическая проверка страницы идёт всегда.
const ONLY = new Set(process.argv.slice(2).map(Number));

// Машина под лабораторную: железо и файлы сверх эталона — из её поля
// `machine`, ровно как их поднимает страница (embed.js).
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
  console.log(`\n  Лаба ${L.id} «${L.title}» (${L.level})`);
  await script(m, L);
  return m;
}

// ── Лаба 1: смотреть ────────────────────────────────────────────────────────
await lab(1, async (m, L) => {
  say(!L.steps[0].check(m).ok, 'шаг 1 до загрузки — не пройден');
  for (let i = 0; i < 12; i++) m.run(1e6);
  const r1 = L.steps[0].check(m); say(r1.ok, 'шаг 1 после загрузки: ' + r1.msg);
  say(!L.steps[1].check(m).ok, 'шаг 2 до щелчка — не пройден');
  m.click(700, 461, 2);                       // средний щелчок по System.ShowModules
  for (let i = 0; i < 4; i++) m.run(1e6);
  const r2 = L.steps[1].check(m); say(r2.ok, 'шаг 2 после щелчка: ' + r2.msg);
});

// ── Лаба 4: ломать ──────────────────────────────────────────────────────────
await lab(4, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m).ok, 'шаг 1 до порчи — не пройден');
  m.poke(0xE7F00, 0xFFFFFFFF);
  const r1 = L.steps[0].check(m); say(r1.ok, 'шаг 1 после порчи экрана: ' + r1.msg);
  say(!L.steps[1].check(m).ok, 'шаг 2 до порчи кода — не пройден');
  m.poke(m.pc, 0xE7FFFFFF);          // переход на самого себя по текущему адресу
  const r2 = L.steps[1].check(m); say(r2.ok, 'шаг 2 после порчи кода: ' + r2.msg);
  m.reset();
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(m.fbCrc() === 0xB5DFC933, 'откат вернул машину в исходное состояние');
});

// ── Лаба 7: строить ─────────────────────────────────────────────────────────
await lab(7, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  const r1 = L.steps[0].check(m); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(!L.steps[1].check(m).ok, 'шаг 2 до пересборки — не пройден');
  m.click(700, 620, 4);                       // левый щелчок: курсор в конец текста
  m.type('ORP.Compile Math.Mod/s ~');
  m.run(2e6);
  m.click(690, 569, 2);                       // средний щелчок по набранной команде
  for (let i = 0; i < 40; i++) m.run(1e6);
  const r2 = L.steps[1].check(m); say(r2.ok, 'шаг 2 после пересборки: ' + r2.msg);
});

// ── Лаба 5: измерять ────────────────────────────────────────────────────────
await lab(5, async (m, L) => {
  const ctx = { state: {}, answer: '' };
  say(!L.steps[0].check(m, ctx).ok, 'шаг 1 до загрузки — не пройден');
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(L.steps[0].check(m, ctx).ok, 'шаг 1: отсчёт зафиксирован');
  ctx.answer = 'мусор';
  say(!L.steps[1].check(m, ctx).ok, 'шаг 2 с нечисловым ответом — не пройден');
  ctx.answer = '9.99';
  say(!L.steps[1].check(m, ctx).ok, 'шаг 2 с неверным числом — не пройден');
  ctx.answer = (m.cycles / m.insns).toFixed(2);
  const r2 = L.steps[1].check(m, ctx); say(r2.ok, 'шаг 2: ' + r2.msg);
  say(!L.steps[2].check(m, ctx).ok, 'шаг 3 до компиляции — не пройден');
  m.click(700, 620, 4); m.type('ORP.Compile Math.Mod/s ~'); m.run(2e6);
  m.click(690, 569, 2);
  for (let i = 0; i < 45; i++) m.run(1e6);
  ctx.answer = ((m.cycles - ctx.state.c0) / (m.insns - ctx.state.i0)).toFixed(2);
  const r3 = L.steps[2].check(m, ctx); say(r3.ok, 'шаг 3: ' + r3.msg);
});

// ── Лаба 6: куча внутри команды ─────────────────────────────────────────────
await lab(6, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  m.click(700, 620, 4);
  m.type('ORP.Compile ORS.Mod/s ORB.Mod/s ORG.Mod/s ORP.Mod/s PIO.Mod/s ~');
  m.run(2e6);
  m.click(690, 569, 2);
  for (let i = 0; i < 220; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, {}); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(!L.steps[1].check(m, {}).ok, 'шаг 2 до отдельной сборки — не пройден');
  m.type('\n');                                   // перевод строки
  m.type('ORP.Compile PIO.Mod/s ~'); m.run(2e6);
  m.click(690, 581, 2);
  for (let i = 0; i < 40; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, {}); say(r2.ok, 'шаг 2: ' + r2.msg);
});

// ── Лаба 8: два поколения ───────────────────────────────────────────────────
await lab(8, async (m, L) => {
  const ctx = { state: {}, answer: '' };
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m, ctx).ok, 'шаг 1 до сборки — не пройден');
  m.click(700, 620, 4);
  m.type('ORP.Compile ORS.Mod/s ~'); m.type('\n');
  m.type('System.Free ORP ORG ORB ORS ~'); m.type('\n');
  m.type('ORP.Compile ORS.Mod/s ~'); m.run(2e6);
  m.click(690, 569, 2);
  for (let i = 0; i < 60; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, ctx); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(L.steps[1].check(m, ctx).ok, 'шаг 2: выгрузка объявлена');
  say(!L.steps[2].check(m, ctx).ok, 'шаг 3 до второй сборки — не пройден');
  m.click(685, 581, 2);                            // System.Free
  for (let i = 0; i < 10; i++) m.run(1e6);
  m.click(690, 593, 2);                            // вторая сборка
  for (let i = 0; i < 70; i++) m.run(1e6);
  const r3 = L.steps[2].check(m, ctx); say(r3.ok, 'шаг 3: ' + r3.msg);
});

// Набор текста через настоящий редактор. Проверяется сквозным кругом:
// строка -> скан-коды -> Оберон -> файл на диске -> обратно. Ловит класс
// ошибок, из-за которого текст сохраняется молча искажённым (так уже было:
// не набиралась закрывающая скобка, а файл при этом исправно создавался).
const EDIT = { open: [680, 569], area: [100, 60], store: [345, 6] };
async function makeFile(m, name, src) {
  m.click(700, 620, 4); m.type(`Edit.Open ${name} ~`); m.run(2e6);
  m.click(...EDIT.open, 2); for (let i = 0; i < 8; i++) m.run(1e6);
  m.click(...EDIT.area, 4); m.run(500000);
  m.type(src, 6000); m.run(2e6);
  m.click(...EDIT.store, 2); for (let i = 0; i < 10; i++) m.run(1e6);
}

// ── Лаба 2: первый свой модуль ──────────────────────────────────────────────
const HELLO = 'MODULE Hello;\n  VAR n*: INTEGER;\n  PROCEDURE Add*(x: INTEGER);\n  BEGIN n := n + x\n  END Add;\nBEGIN n := 0\nEND Hello.\n';
await lab(2, async (m, L) => {
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m, {}).ok, 'шаг 1 до набора — не пройден');
  await makeFile(m, 'Hello.Mod', HELLO);
  const r1 = L.steps[0].check(m, {}); say(r1.ok, 'шаг 1: ' + r1.msg);
  const back = readText(new OberonFS(m).read(new OberonFS(m).files().get('Hello.Mod')));
  say(back.trim() === HELLO.trim(), 'набранный текст совпал с исходником посимвольно');
  say(!L.steps[1].check(m, {}).ok, 'шаг 2 до компиляции — не пройден');
  m.click(700, 620, 4); m.type('\nORP.Compile Hello.Mod ~'); m.run(2e6);
  m.click(690, 581, 2); for (let i = 0; i < 25; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, {}); say(r2.ok, 'шаг 2: ' + r2.msg);
});

// ── Лаба 3: ключ интерфейса ─────────────────────────────────────────────────
await lab(3, async (m, L) => {
  const c = { state: {} };
  for (let i = 0; i < 12; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'шаг 2 до пересборки — не пройден');
  m.click(700, 620, 4); m.type('ORP.Compile Blink.Mod/s ~'); m.run(2e6);
  m.click(690, 569, 2); for (let i = 0; i < 30; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, c); say(r2.ok, 'шаг 2: ' + r2.msg);
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'шаг 3: ' + r3.msg);
});

// ── Лаба 9: внутри кодогенератора ───────────────────────────────────────────
const IDX = 'MODULE\nIdx;\n  VAR a: ARRAY 100 OF INTEGER;\n  PROCEDURE Sum*(n: INTEGER): INTEGER;\n    VAR i, s: INTEGER;\n  BEGIN s := 0; i := 0;\n    WHILE i < n DO s := s + a[i]; INC(i) END;\n    RETURN s\n  END Sum;\nEND Idx.\n';
await lab(9, async (m, L) => {
  const c = { state: {} };
  for (let i = 0; i < 12; i++) m.run(1e6);
  say(!L.steps[0].check(m, c).ok, 'шаг 1 до сборки — не пройден');
  await makeFile(m, 'Idx.Mod', IDX);
  m.click(700, 620, 4); m.type('\nORP.Compile Idx.Mod/s ~'); m.run(2e6);
  m.click(690, 581, 2); for (let i = 0; i < 25; i++) m.run(1e6);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'шаг 2 до звёздочки — не пройден');
  m.click(20, 37, 4); m.run(500000); m.type('*', 6000); m.run(1e6);
  m.click(...EDIT.store, 2); for (let i = 0; i < 8; i++) m.run(1e6);
  m.click(690, 581, 2); for (let i = 0; i < 30; i++) m.run(1e6);
  const r2 = L.steps[1].check(m, c); say(r2.ok, 'шаг 2: ' + r2.msg);
});

// Строки команд, набранные после makeFile. Курсор ставится щелчком ПРАВЕЕ
// конца текста: щелчок по (700, 620) попадает в последнюю строку на x = 700,
// то есть в середину «Edit.Open …», и хвост этой строки прилипает к
// набранному («Junk.Make» превращался в «Junk.Makeen Junk.Mod ~», и команда
// не находилась). Набор медленнее обычного: в длинной строке с заглавными
// теряется Shift.
const LINE = y => 581 + 12 * y;           // 0 — первая строка после Edit.Open
function typeLines(m, lines) {
  m.click(1010, 620, 4);
  for (const l of lines) { m.type('\n' + l, 10000); m.run(1e6); }
}
const go = (m, n) => { for (let i = 0; i < n; i++) m.run(1e6); };

// ── Лаба 10: сборщик мусора изнутри ─────────────────────────────────────────
await lab(10, async (m, L) => {
  const c = { state: {}, answer: '' };
  go(m, 12);
  c.answer = '7';
  say(!L.steps[0].check(m, c).ok, 'шаг 1 с неверным числом — не пройден');
  c.answer = '20';
  const r0 = L.steps[0].check(m, c); say(r0.ok, 'шаг 1: ' + r0.msg);
  const k0 = MEM.heap(m);
  say(k0.ok && k0.allocated > 0 && k0.allocated < 100000,
      `Kernel.allocated найден по адресу из дескриптора Kernel: ${k0.allocated} байт после загрузки`);
  say(!L.steps[1].check(m, c).ok, 'шаг 2 до сборки — не пройден');
  await makeFile(m, 'Junk.Mod', SOURCES.Junk);
  say(readText(new OberonFS(m).read(new OberonFS(m).files().get('Junk.Mod'))) === SOURCES.Junk,
      'Junk.Mod набран посимвольно');
  typeLines(m, ['ORP.Compile Junk.Mod ~', 'Junk.Make']);
  m.click(690, LINE(0), 2); go(m, 20);
  const r1 = L.steps[1].check(m, c); say(r1.ok, 'шаг 2: ' + r1.msg);
  say(!L.steps[2].check(m, c).ok, 'шаг 3 до Junk.Make — не пройден');
  m.click(670, LINE(1), 2); go(m, 3);
  m.click(845, 282, 2); go(m, 3);                // System.Watch
  const r2 = L.steps[2].check(m, c); say(r2.ok, 'шаг 3: ' + r2.msg);
  // Сборщик просыпается раз в секунду (≈16 млн команд) — и ничего не делает.
  go(m, 30);
  say(!L.steps[3].check(m, c).ok, 'шаг 4: две секунды простоя — мусор на месте, уборки не было');
  m.click(940, 282, 2); go(m, 20);               // System.Collect
  const r3 = L.steps[3].check(m, c); say(r3.ok, 'шаг 4 после System.Collect: ' + r3.msg);
  say(!L.steps[4].check(m, c).ok, 'шаг 5 до двойного Junk.Make — не пройден');
  m.click(670, LINE(1), 2); go(m, 3);
  m.click(670, LINE(1), 2); go(m, 3);
  const r4 = L.steps[4].check(m, c); say(r4.ok, 'шаг 5: ' + r4.msg);
  // Обещание из проверки: по второму поводу сборщик приходит сам.
  go(m, 20);
  const k5 = MEM.heap(m);
  say(k5.allocated < 100000, `через секунду без System.Collect в куче ${k5.allocated} байт — сборщик пришёл сам`);
});

// ── Лаба 11: одна задача за раз ─────────────────────────────────────────────
await lab(11, async (m, L) => {
  const c = { state: {}, answer: '' };
  go(m, 12);
  say(!L.steps[0].check(m, c).ok, 'шаг 1 до сборки — не пройден');
  await makeFile(m, 'Tick.Mod', SOURCES.Tick);
  typeLines(m, ['ORP.Compile Tick.Mod ~', 'Tick.Start', 'Tick.Spin', 'Tick.Break']);
  m.click(690, LINE(0), 2); go(m, 20);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'шаг 2 до Tick.Start — не пройден');
  m.click(665, LINE(1), 2); go(m, 3);
  const r2 = L.steps[1].check(m, c); say(r2.ok, 'шаг 2: ' + r2.msg);
  say(!L.steps[2].check(m, c).ok, 'шаг 3 до Tick.Spin — не пройден');
  m.click(665, LINE(2), 2); go(m, 30);
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'шаг 3: ' + r3.msg);
  say(!L.steps[3].check(m, c).ok, 'шаг 4 до Tick.Break — не пройден');
  m.click(665, LINE(3), 2); go(m, 3);
  const r4 = L.steps[3].check(m, c); say(r4.ok, 'шаг 4: ' + r4.msg);
  // Конфигурация A: тот же круг с ORG.NoChk.Mod.
  const cB = c.state.codeB, cE = c.state.codeE;
  say(cB.traps > 0 && cB.chk === 0 && cE.traps === 0 && cE.chk > 0,
      `машинный признак различает B и E: B — ${cB.traps} ловушек, ${cB.chk} CHK; E — ${cE.traps} ловушек, ${cE.chk} CHK`);
  say(!L.steps[4].check(m, c).ok, 'шаг 5 до сборки ORG.NoChk.Mod — не пройден');
  const h1 = F().files().get('ORG.rsc');
  m.click(690, LINE(4), 2);
  n = 0;
  while (F().files().get('ORG.rsc') === h1 && n < 300) { go(m, 5); n += 5; }
  go(m, 5);
  const r5 = L.steps[4].check(m, c); say(r5.ok, `шаг 5 (≈ ${n} млн команд): ` + r5.msg);
  say(!L.steps[5].check(m, c).ok, 'шаг 6 до пересборки Cost — не пройден');
  m.click(690, LINE(3), 2); go(m, 5);            // System.Free
  m.click(690, LINE(0), 2); go(m, 30);           // ORP.Compile Cost.Mod
  m.click(670, LINE(1), 2); go(m, 10);           // Cost.Run
  const r6 = L.steps[5].check(m, c); say(r6.ok, 'шаг 6: ' + r6.msg);
  const cA = MEM.codeInMemory(m, 'Cost');
  say(r6.ok && cA.words === cE.words - cE.chk && cE.words === cB.words - cB.traps,
      `размеры сходятся по командам: B ${cB.words} = E ${cE.words} + ${cB.traps} ловушка(и), E = A ${cA.words} + ${cE.chk} CHK`);
});

// ── Лаба 12: цена проверки своими руками ────────────────────────────────────
const costOnce = async (m) => {
  await makeFile(m, 'Cost.Mod', SOURCES.Cost);
  typeLines(m, ['ORP.Compile Cost.Mod ~', 'Cost.Run', 'ORP.Compile ORG.Chk.Mod ~', 'System.Free Cost ORP ORG ~',
                'ORP.Compile ORG.NoChk.Mod ~']);
  m.click(690, LINE(0), 2); go(m, 25);
  m.click(670, LINE(1), 2); go(m, 10);
};
let tBase = null;
await lab(12, async (m, L) => {
  // Сначала то же самое на СТОКОВОМ ядре: лаборатория утверждает, что
  // стоковая система на ядре с CHK работает такт в такт так же.
  const b = await machineFor(L, 'base');
  go(b, 12); await costOnce(b);
  tBase = MEM.modVar(b, 'Cost', 0);

  const c = { state: {}, answer: '' };
  go(m, 12);
  say(m.variant === 'chk' && new OberonFS(m).files().has('ORG.Chk.Mod'),
      'машина на ядре с CHK, ORG.Chk.Mod лежит на диске и виден системе');
  say(!L.steps[0].check(m, c).ok, 'шаг 1 до Cost.Run — не пройден');
  await costOnce(m);
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(c.state.tB === tBase, `стоковое ядро дало то же время: ${tBase} мс против ${c.state.tB}`);
  say(!L.steps[1].check(m, c).ok, 'шаг 2 до сборки ORG.Chk.Mod — не пройден');
  const F = () => new OberonFS(m), h0 = F().files().get('ORG.rsc');
  m.click(690, LINE(2), 2);
  let n = 0;
  while (F().files().get('ORG.rsc') === h0 && n < 300) { go(m, 5); n += 5; }
  go(m, 5);
  const r2 = L.steps[1].check(m, c); say(r2.ok, `шаг 2 (компиляция ORG ≈ ${n} млн команд): ` + r2.msg);
  say(!L.steps[2].check(m, c).ok, 'шаг 3 до пересборки Cost — не пройден');
  m.click(690, LINE(3), 2); go(m, 5);            // System.Free
  m.click(690, LINE(0), 2); go(m, 30);           // ORP.Compile Cost.Mod
  m.click(670, LINE(1), 2); go(m, 10);           // Cost.Run
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'шаг 3: ' + r3.msg);
  c.answer = 'мусор';
  say(!L.steps[3].check(m, c).ok, 'шаг 4 с нечисловым ответом — не пройден');
  c.answer = '50';
  say(!L.steps[3].check(m, c).ok, 'шаг 4 с неверным числом — не пройден');
  c.answer = ((c.state.tB - c.state.tE) * 100 / c.state.tB).toFixed(1);
  const r4 = L.steps[3].check(m, c); say(r4.ok, 'шаг 4: ' + r4.msg);
  // Конфигурация A: тот же круг с ORG.NoChk.Mod.
  const cB = c.state.codeB, cE = c.state.codeE;
  say(cB.traps > 0 && cB.chk === 0 && cE.traps === 0 && cE.chk > 0,
      `машинный признак различает B и E: B — ${cB.traps} ловушек, ${cB.chk} CHK; E — ${cE.traps} ловушек, ${cE.chk} CHK`);
  say(!L.steps[4].check(m, c).ok, 'шаг 5 до сборки ORG.NoChk.Mod — не пройден');
  const h1 = F().files().get('ORG.rsc');
  m.click(690, LINE(4), 2);
  n = 0;
  while (F().files().get('ORG.rsc') === h1 && n < 300) { go(m, 5); n += 5; }
  go(m, 5);
  const r5 = L.steps[4].check(m, c); say(r5.ok, `шаг 5 (≈ ${n} млн команд): ` + r5.msg);
  say(!L.steps[5].check(m, c).ok, 'шаг 6 до пересборки Cost — не пройден');
  m.click(690, LINE(3), 2); go(m, 5);            // System.Free
  m.click(690, LINE(0), 2); go(m, 30);           // ORP.Compile Cost.Mod
  m.click(670, LINE(1), 2); go(m, 10);           // Cost.Run
  const r6 = L.steps[5].check(m, c); say(r6.ok, 'шаг 6: ' + r6.msg);
  const cA = MEM.codeInMemory(m, 'Cost');
  say(r6.ok && cA.words === cE.words - cE.chk && cE.words === cB.words - cB.traps,
      `размеры сходятся по командам: B ${cB.words} = E ${cE.words} + ${cB.traps} ловушка(и), E = A ${cA.words} + ${cE.chk} CHK`);
});

// ── Лаба 13: своя встроенная процедура ──────────────────────────────────────
// Правка компилятора — теми же руками, что у человека: образец набирается в
// System.Tool, выделяется протяжкой правой кнопки, Edit.Search в заголовке
// файла ставит курсор за образцом, туда набирается вставка, Edit.Store.
const MENU = { close: [95, 6], search: [285, 6], store: [345, 6] };
function selectLine(m, y) {
  m.mouse(1000, 767 - 740, 0); m.run(300000);          // стрелку — с глаз долой
  let a = 9999, b = -1;
  for (let x = 645; x < 1015; x++) if (m.ink(x, y - 5, x + 1, y + 3)) { a = Math.min(a, x); b = x; }
  const Y = 767 - y;
  m.mouse(a + 1, Y, 0); m.run(150000); m.mouse(a + 1, Y, 1); m.run(150000);
  for (let x = a + 5; x < b; x += 6) { m.mouse(x, Y, 1); m.run(100000); }
  m.mouse(b, Y, 1); m.run(150000); m.mouse(b, Y, 0); m.run(150000);
}
async function patchFile(m, k, edit) {            // k — строка «Edit.Open …»
  // Сроки — с запасом на самый длинный файл: ORG.Mod почти 1900 строк, и
  // четырёх миллионов команд поиску в нём не хватало — вставка набиралась
  // туда, где курсор стоял до поиска.
  m.click(680, LINE(k), 2); go(m, 20);
  selectLine(m, LINE(k + 1) - 3); go(m, 1);
  m.click(...MENU.search, 2); go(m, 30);
  // Шаг набора — 30 тысяч команд на символ. На десяти тысячах клавиатура
  // модели теряла нажатия в плотной серии символов с Shift: «(VAR x» ложилось
  // в файл как «(VX» — пропадали буквы, и Shift оставался нажатым.
  m.type(edit.insert, 30000); go(m, 1);
  m.click(...MENU.store, 2); go(m, 40);
  m.click(...MENU.close, 2); go(m, 3);
}
await lab(13, async (m, L) => {
  const c = { state: {}, answer: '' };
  go(m, 12);
  say(!L.steps[0].check(m, c).ok, 'шаг 1 до правки — не пройден');
  typeLines(m, [
    ...BUILTIN.flatMap(e => [`Edit.Open ${e.file}`, e.after]),
    'ORP.Compile ORB.Mod/s ORG.Mod/s ORP.Mod/s ~', 'System.Free ORP ORG ORB ~',
    'Edit.Open Sq.Mod', 'ORP.Compile Sq.Mod ~', 'Sq.Run']);
  await patchFile(m, 0, BUILTIN[0]);
  const r0 = L.steps[0].check(m, c);
  say(!r0.ok, 'шаг 1 после одной вставки из трёх — не пройден: ' + r0.msg);
  await patchFile(m, 2, BUILTIN[1]);
  await patchFile(m, 4, BUILTIN[2]);
  for (const e of BUILTIN) {
    const t = readText(new OberonFS(m).read(new OberonFS(m).files().get(e.file))).replace(/\r/g, '\n');
    say(t.includes(e.after + e.insert), `${e.file}: вставка легла сразу за «${e.after}»`);
    if (process.env.DEBUG_BUILTIN && !t.includes(e.after + e.insert)) {
      const i = t.indexOf(e.after), j = t.indexOf('Sqr');
      console.log(`      [${e.file}] за образцом: ${JSON.stringify(t.slice(i, i + 160))}`);
      console.log(`      [${e.file}] Sqr: ${j < 0 ? 'нет' : JSON.stringify(t.slice(Math.max(0, j - 80), j + 120))}`);
    }
  }
  const r1 = L.steps[0].check(m, c); say(r1.ok, 'шаг 1: ' + r1.msg);
  say(!L.steps[1].check(m, c).ok, 'шаг 2 до пересборки — не пройден');
  const F = () => new OberonFS(m), h0 = F().files().get('ORP.rsc');
  m.click(690, LINE(6), 2);
  let n = 0;
  while (F().files().get('ORP.rsc') === h0 && n < 400) { go(m, 5); n += 5; }
  go(m, 5);
  const r2 = L.steps[1].check(m, c); say(r2.ok, `шаг 2 (≈ ${n} млн команд): ` + r2.msg);
  // Sq старым компилятором, ещё не выгруженным: SQR ему неизвестна.
  await makeSq(m);
  m.click(690, LINE(9), 2); go(m, 20);
  say(!new OberonFS(m).files().has('Sq.rsc'), 'старый компилятор в памяти Sq.Mod не собирает: SQR ему неизвестна');
  say(!L.steps[2].check(m, c).ok, 'шаг 3 до System.Free — не пройден');
  m.click(690, LINE(7), 2); go(m, 5);            // System.Free ORP ORG ORB
  m.click(690, LINE(9), 2); go(m, 30);           // ORP.Compile Sq.Mod
  m.click(665, LINE(10), 2); go(m, 5);           // Sq.Run
  const r3 = L.steps[2].check(m, c); say(r3.ok, 'шаг 3: ' + r3.msg);
  say(!L.steps[3].check(m, c).ok, 'шаг 4 до пересборки новым компилятором — не пройден');
  const h1 = F().files().get('ORP.rsc');
  m.click(690, LINE(6), 2);
  n = 0;
  while (F().files().get('ORP.rsc') === h1 && n < 400) { go(m, 5); n += 5; }
  go(m, 5);
  const r4 = L.steps[3].check(m, c); say(r4.ok, `шаг 4 (≈ ${n} млн команд): ` + r4.msg);
});
async function makeSq(m) {
  m.click(680, LINE(8), 2); go(m, 8);
  m.click(...EDIT.area, 4); m.run(500000);
  m.type(SOURCES.Sq, 6000); m.run(2e6);
  m.click(...EDIT.store, 2); go(m, 10);
  say(readText(new OberonFS(m).read(new OberonFS(m).files().get('Sq.Mod'))) === SOURCES.Sq,
      'Sq.Mod набран посимвольно');
}

// ── статическая проверка страницы-оболочки ──────────────────────────────────
// Браузер здесь не поднять, поэтому хотя бы убеждаемся, что разметка и скрипт
// не разошлись: каждый getElementById должен находить свой элемент, а каждый
// импорт — существующий файл. Это ловит самую частую поломку — переименование.
{
  console.log('\n  Страница lab.html');
  const html = fs.readFileSync('lab.html', 'utf8');
  const ids = new Set([...html.matchAll(/id="([^"]+)"/g)].map(m => m[1]));
  const used = new Set([...html.matchAll(/\$\('([^']+)'\)/g)].map(m => m[1]));
  const missing = [...used].filter(x => !ids.has(x));
  say(missing.length === 0, missing.length
    ? `в разметке нет элементов: ${missing.join(', ')}`
    : `все ${used.size} обращений к элементам находят свой id`);
  const imports = [...html.matchAll(/from '(\.[^']+)'/g)].map(m => m[1]);
  const lost = imports.filter(f => !fs.existsSync(f));
  say(lost.length === 0, lost.length ? `нет файлов: ${lost.join(', ')}` : `импорты на месте: ${imports.join(', ')}`);
  // Кодогенератор лабораторной 12 — принятая конфигурация E из patches/, и
  // отличаться от неё он вправе только штампом версии: иначе лаборатория
  // меряет не ту проверку, что главный опыт проекта.
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
        'ORG.Chk.Mod = patches/ORG-cfgE.Mod, кроме штампа версии');
    // Конфигурация A лабораторной — patches/ORG-cfgA.Mod плюс комментарий о
    // штампе версии, и ничего больше.
    const noc = lines(fs.readFileSync('ORG.NoChk.Mod', 'latin1'));
    const cfa = lines(fs.readFileSync('../patches/ORG-cfgA.Mod', 'latin1'));
    const a = noc.findIndex(x => x.includes('(*LAB VARIANT'));
    const z = noc.findIndex((x, n) => n >= a && x.trim().endsWith('*)'));
    say(a > 0 && z > a && same(noc.slice(0, a).concat(noc.slice(z + 1)), cfa),
        'ORG.NoChk.Mod = patches/ORG-cfgA.Mod, кроме комментария о штампе версии');
  }
  const labIds = LABS.map(l => l.id);
  say(new Set(labIds).size === labIds.length, `номера лабораторий уникальны: ${labIds.join(', ')}`);
  for (const L of LABS) {
    const bads = L.steps.filter(s => typeof s.check !== 'function' || !s.text);
    say(bads.length === 0, `лаба ${L.id}: ${L.steps.length} шагов, у каждого есть текст и проверка`);
    // Ссылка на главу методички, которой нет, выглядит рабочей — поэтому проверяем.
    const lost = (L.read || []).filter(([f]) => !fs.existsSync('book/' + f));
    say(lost.length === 0, lost.length
      ? `лаба ${L.id}: нет глав ${lost.map(x => x[0]).join(', ')}`
      : `лаба ${L.id}: ссылки на методичку ведут в существующие главы`);
  }
}

console.log(bad ? `\n❌ провалов: ${bad}` : '\n✅ все лаборатории проходят свой сценарий');
process.exit(bad ? 1 : 0);
