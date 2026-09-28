// Чтение файловой системы Оберона прямо из образа, лежащего в памяти машины.
// Порт tools/oberonfs.py; раскладка снята с исходников системы:
//   Kernel.Mod:  сектор adr лежит по смещению (adr DIV 29 - 1) * 1024
//   FileDir.Mod: DirPage = mark, m, p0, fill[52], e[24]; запись = имя 32, adr, p
//                FileHeader = mark, name[32], aleng, bleng, date, ext[12], sec[64]
//   Files.Mod:   длина = aleng * 1024 + bleng - 352
//
// Нужен лабораториям, чтобы проверять результат по ДИСКУ, а не по надписи
// на экране: «скомпилировалось» и «файл на диске изменился» — разные вещи.

const SS = 1024, HS = 352, DIRROOT = 29;

/** Разбор объектного файла (.rsc). Раскладка та же, что в tools/rsc.py,
    снята с ORTool.DecObj: имя, ключ, версия, размер, импорты, дескрипторы
    типов, размер данных, строки, КОД. Нужен лабораториям, чтобы сравнивать
    размер порождённого кода и ключ интерфейса. */
export function parseRsc(bytes) {
  let i = 0;
  const str = () => { let s = ''; while (bytes[i]) s += String.fromCharCode(bytes[i++]); i++; return s; };
  const int = () => { const v = bytes[i] | bytes[i+1]<<8 | bytes[i+2]<<16 | bytes[i+3]<<24; i += 4; return v; };
  const name = str(), key = int() >>> 0, version = bytes[i++], size = int();
  const imports = [];
  for (let n = str(); n; n = str()) imports.push([n, int() >>> 0]);
  const tdBytes = int(); i += tdBytes;
  const datasize = int();
  const slen = int(); i += slen;
  const nwords = int();
  const code = new Uint32Array(nwords);
  for (let k = 0; k < nwords; k++) code[k] = int() >>> 0;
  return { name, key, version, size, imports, tdBytes, datasize, codeWords: nwords, code };
}

/** Команда CHK ядра с аппаратной проверкой границ (RISC5.v, WITH_CHK +
    CHK_SPLIT): F0, v=1, op=1, регистр c = MT (12), номер ловушки 1 в IR[7:4].
    Стоковый компилятор LSL с v=1 не порождает никогда, поэтому в стоковом
    коде таких слов ноль — счёт отличает код двух компиляторов. */
export const isChk = w => (w >>> 28) === 1 && ((w >>> 16) & 15) === 1
                          && ((w >>> 4) & 15) === 1 && (w & 15) === 12;

/** Ловушка проверки индекса, которую ставит СТОКОВЫЙ ORG: ORG.Trap(10, 1) =
    Put3(BLR, 10, pos*100H + 1*10H + MT) — условный переход по регистру MT
    (старший байт DA: F3, u = 0, BLR, условие 10) с номером ловушки 1 в IR[7:4].
    Вызовы процедур так не выглядят: у BL с адресом u = 1 (F7), у вызова по
    регистру условие 7 (D7); у других ловушек другой номер (NIL — 4, тип — 2).
    Перед ней всегда стоит сравнение, так что одна такая команда = одна
    программная проверка в два слова. */
export const isIndexTrap = w => (w >>> 24) === 0xDA && ((w >>> 4) & 15) === 1
                                && (w & 15) === 12;

/**
 * Положить файл в образ диска ДО загрузки системы.
 *
 * Зачем. Лаборатории нужен файл, которого на эталонном образе нет (исходник
 * компилятора, знающего команду CHK), а набирать сорок килобайт с клавиатуры
 * бессмысленно. Писать в диск работающей системы нельзя: карта занятых
 * секторов живёт у неё в памяти (Kernel.sectorMap), и чужая запись рано или
 * поздно легла бы поверх её собственной. А ДО загрузки карты ещё нет:
 * FileDir.Init строит её обходом каталога, и добавленный сюда файл система
 * найдёт и пометит сама, как любой другой.
 *
 * Раскладка — по FileDir.Mod: заголовок = mark, name[32], aleng, bleng, date,
 * ext[12], sec[64] (352 байта), первые 672 байта данных лежат в том же
 * секторе; sec[0] — сам заголовок. Каталог — B-дерево, запись вставляется в
 * лист. Деление переполненной страницы не реализовано сознательно: на
 * эталонном образе в нужном листе есть место, а если его нет — лучше громкая
 * ошибка, чем тихо испорченный каталог.
 *
 * Возвращает НОВЫЙ массив (образ может вырасти); исходный не трогает.
 */
export function addFile(img, name, bytes, date = 0) {
  const DIRMARK = 0x9B1EA38D, HDRMARK = 0x9BA71D86, PGSIZE = 24;
  if (name.length >= 32) throw new Error(`имя длиннее 31 знака: ${name}`);
  const total = bytes.length + HS;
  let aleng = Math.floor(total / SS), bleng = total % SS;
  // Files.Mod не ждёт пустого последнего сектора: bleng = 0 — длина-граница.
  if (bleng === 0) throw new Error(`длина ${bytes.length} кратна сектору: добавьте байт`);
  if (aleng >= 64) throw new Error(`файл ${name} длиннее 64 секторов: таблицы расширения не поддержаны`);

  let d = new Uint8Array(img);
  const dv = () => new DataView(d.buffer);
  const off = adr => ((adr / DIRROOT | 0) - 1) * SS;
  const rd = o => (o + 4 <= d.length ? dv().getUint32(o, true) : 0);
  const wr = (o, v) => dv().setUint32(o, v >>> 0, true);
  const nameAt = o => { let s = ''; for (let i = 0; i < 32 && d[o + i]; i++) s += String.fromCharCode(d[o + i]); return s; };

  // Занятые секторы — тем же обходом, что FileDir.Init.
  const used = new Set();
  const markFile = hdr => {
    const b = off(hdr), al = rd(b + 36) | 0;
    if (rd(b) !== HDRMARK) throw new Error(`испорчен заголовок файла в секторе ${hdr / DIRROOT}`);
    for (let j = 0; j <= Math.min(al, 63); j++) used.add(rd(b + 96 + j * 4) / DIRROOT);
    if (al >= 64) {
      const n = ((al - 64) / 256) | 0;
      for (let i = 0; i <= n; i++) {
        const ext = rd(b + 48 + i * 4); used.add(ext / DIRROOT);
        const cnt = i < n ? 256 : (al - 64) % 256 + 1;
        for (let j = 0; j < cnt; j++) used.add(rd(off(ext) + j * 4) / DIRROOT);
      }
    }
  };
  const walk = pg => {
    const b = off(pg);
    if (rd(b) !== DIRMARK) throw new Error(`испорчена страница каталога ${pg / DIRROOT}`);
    used.add(pg / DIRROOT);
    const m = rd(b + 4) | 0, p0 = rd(b + 8);
    for (let i = 0; i < m; i++) markFile(rd(b + 64 + i * 40 + 32));
    if (p0) { walk(p0); for (let i = 0; i < m; i++) walk(rd(b + 64 + i * 40 + 36)); }
  };
  walk(DIRROOT);

  // Лист, куда ляжет имя: спуск, как в FileDir.Search. Сравнение — побайтовое.
  let pg = DIRROOT, R = 0;
  for (;;) {
    const b = off(pg), m = rd(b + 4) | 0;
    R = 0; while (R < m && nameAt(b + 64 + R * 40) < name) R++;
    if (R < m && nameAt(b + 64 + R * 40) === name) throw new Error(`файл ${name} на образе уже есть`);
    const next = R === 0 ? rd(b + 8) : rd(b + 64 + (R - 1) * 40 + 36);
    if (!next) break;
    pg = next;
  }
  if ((rd(off(pg) + 4) | 0) >= PGSIZE) throw new Error(`лист каталога для ${name} полон`);

  // Свободные секторы. Номера ниже 64 система не выдаёт никогда
  // (Kernel.InitSecMap помечает их занятыми), держимся того же.
  const secs = [];
  for (let s = 64; secs.length < aleng + 1; s++) if (!used.has(s)) secs.push(s);
  const need = secs[secs.length - 1] * SS;
  if (need > d.length) { const g = new Uint8Array(need); g.set(d); d = g; }

  const h = off(secs[0] * DIRROOT);
  d.fill(0, h, h + SS);
  wr(h, HDRMARK);
  for (let i = 0; i < name.length; i++) d[h + 4 + i] = name.charCodeAt(i);
  wr(h + 36, aleng); wr(h + 40, bleng); wr(h + 44, date);
  secs.forEach((s, j) => wr(h + 96 + j * 4, s * DIRROOT));
  d.set(bytes.subarray(0, SS - HS), h + HS);
  for (let j = 1; j <= aleng; j++) {
    const o = off(secs[j] * DIRROOT);
    d.fill(0, o, o + SS);
    d.set(bytes.subarray(SS - HS + (j - 1) * SS, SS - HS + j * SS), o);
  }

  // Запись в лист: сдвиг вправо и вставка на место R.
  const b = off(pg), m = rd(b + 4) | 0;
  d.copyWithin(b + 64 + (R + 1) * 40, b + 64 + R * 40, b + 64 + m * 40);
  const e = b + 64 + R * 40;
  d.fill(0, e, e + 40);
  for (let i = 0; i < name.length; i++) d[e + i] = name.charCodeAt(i);
  wr(e + 32, secs[0] * DIRROOT); wr(e + 36, 0);
  wr(b + 4, m + 1);
  return d;
}

/** Текст Оберона из файла.

    Файлы, сохранённые редактором, лежат НЕ в виде голого ASCII: первый байт —
    метка формата (F1H), затем смещение текста, затем описания кусков со
    шрифтами. Наивное чтение даёт мусор в начале, а концы строк — возврат
    каретки, а не перевод. Разбор по Texts.Mod: Open читает метку, Load —
    смещение и куски. */
export function readText(bytes) {
  if (bytes[0] !== 0xF1) return new TextDecoder('latin1').decode(bytes);   // простой ASCII
  const off = bytes[1] | bytes[2] << 8 | bytes[3] << 16 | bytes[4] << 24;
  return new TextDecoder('latin1').decode(bytes.subarray(off)).replace(/\r/g, '\n');
}

export class OberonFS {
  constructor(machine) { this.m = machine; }

  secOff(adr) { return ((adr / DIRROOT | 0) - 1) * SS; }
  word(adr, i) { return this.m.disk(this.secOff(adr) + i * 4); }

  byte(adr, i) {
    const w = this.m.disk(this.secOff(adr) + (i & ~3));
    return (w >>> ((i & 3) * 8)) & 0xFF;
  }

  name(adr, off) {
    let s = '';
    for (let i = 0; i < 32; i++) {
      const c = this.byte(adr, off + i);
      if (!c) break;
      s += String.fromCharCode(c);
    }
    return s;
  }

  *entries(adr = DIRROOT) {
    if (!adr) return;
    const m = this.word(adr, 1) | 0, p0 = this.word(adr, 2) | 0;
    yield* this.entries(p0);
    for (let i = 0; i < m; i++) {
      const base = 64 + i * 40;
      const nm = this.name(adr, base);
      const hdr = this.m.disk(this.secOff(adr) + base + 32) | 0;
      const p = this.m.disk(this.secOff(adr) + base + 36) | 0;
      yield [nm, hdr];
      yield* this.entries(p);
    }
  }

  files() {
    const out = new Map();
    for (const [n, h] of this.entries()) out.set(n, h);
    return out;
  }

  length(hdr) {
    const aleng = this.m.disk(this.secOff(hdr) + 36) | 0;
    const bleng = this.m.disk(this.secOff(hdr) + 40) | 0;
    return aleng * SS + bleng - HS;
  }

  read(hdr) {
    const base = this.secOff(hdr);
    const aleng = this.m.disk(base + 36) | 0, bleng = this.m.disk(base + 40) | 0;
    const len = aleng * SS + bleng - HS;
    const out = new Uint8Array(len);
    let o = 0;
    const copy = (off, n) => {
      for (let i = 0; i < n && o < len; i += 4) {
        const w = this.m.disk(off + i);
        for (let b = 0; b < 4 && o < len; b++) out[o++] = (w >>> (b * 8)) & 0xFF;
      }
    };
    copy(base + HS, SS - HS);
    for (let i = 1; i <= aleng; i++) {
      let a;
      if (i < 64) a = this.m.disk(base + 96 + i * 4) | 0;
      else {
        const ext = this.m.disk(base + 48 + (((i - 64) / 256) | 0) * 4) | 0;
        a = this.m.disk(this.secOff(ext) + ((i - 64) % 256) * 4) | 0;
      }
      copy(this.secOff(a), SS);
    }
    return out;
  }
}
