// Reads the Oberon file system straight from the image in the machine's memory.
// A port of tools/oberonfs.py; the layout is taken from the system sources:
//   Kernel.Mod:  sector adr is at offset (adr DIV 29 - 1) * 1024
//   FileDir.Mod: DirPage = mark, m, p0, fill[52], e[24]; entry = name 32, adr, p
//                FileHeader = mark, name[32], aleng, bleng, date, ext[12], sec[64]
//   Files.Mod:   length = aleng * 1024 + bleng - 352
//
// The labs need it to check the result on the DISK rather than by a message on
// the screen: "it compiled" and "the file on disk changed" are different things.

const SS = 1024, HS = 352, DIRROOT = 29;

/** Parses an object file (.rsc). Same layout as in tools/rsc.py, taken from
    ORTool.DecObj: name, key, version, size, imports, type descriptors, data
    size, strings, CODE. The labs need it to compare the size of the generated
    code and the interface key. */
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

/** The CHK instruction of the core with hardware bounds checking (RISC5.v,
    WITH_CHK + CHK_SPLIT): F0, v=1, op=1, register c = MT (12), trap number 1
    in IR[7:4]. The stock compiler never emits LSL with v=1, so stock code
    contains zero such words: the count tells the two compilers' code apart. */
export const isChk = w => (w >>> 28) === 1 && ((w >>> 16) & 15) === 1
                          && ((w >>> 4) & 15) === 1 && (w & 15) === 12;

/** The index check trap emitted by the STOCK ORG: ORG.Trap(10, 1) =
    Put3(BLR, 10, pos*100H + 1*10H + MT), a conditional branch via register MT
    (top byte DA: F3, u = 0, BLR, condition 10) with trap number 1 in IR[7:4].
    Procedure calls do not look like this: BL with an address has u = 1 (F7), a
    call via register has condition 7 (D7); other traps have other numbers
    (NIL is 4, type is 2). It is always preceded by a comparison, so one such
    instruction = one two-word software check. */
export const isIndexTrap = w => (w >>> 24) === 0xDA && ((w >>> 4) & 15) === 1
                                && (w & 15) === 12;

/**
 * Puts a file into the disk image BEFORE the system boots.
 *
 * Why. A lab needs a file that the reference image does not have (the source of
 * a compiler that knows the CHK instruction), and typing forty kilobytes on the
 * keyboard is pointless. Writing to the disk of a running system is not allowed:
 * its map of used sectors lives in its memory (Kernel.sectorMap), and a foreign
 * write would sooner or later land on top of its own. BEFORE boot the map does
 * not exist yet: FileDir.Init builds it by walking the directory, and the system
 * finds and marks a file added here by itself, like any other.
 *
 * The layout follows FileDir.Mod: header = mark, name[32], aleng, bleng, date,
 * ext[12], sec[64] (352 bytes); the first 672 bytes of data are in the same
 * sector; sec[0] is the header itself. The directory is a B-tree; the entry is
 * inserted into a leaf. Splitting an overflowing page is deliberately not
 * implemented: on the reference image the target leaf has room, and if it does
 * not, a loud error is better than a silently corrupted directory.
 *
 * Returns a NEW array (the image may grow); the original is not touched.
 */
export function addFile(img, name, bytes, date = 0) {
  const DIRMARK = 0x9B1EA38D, HDRMARK = 0x9BA71D86, PGSIZE = 24;
  if (name.length >= 32) throw new Error(`name longer than 31 characters: ${name}`);
  const total = bytes.length + HS;
  let aleng = Math.floor(total / SS), bleng = total % SS;
  // Files.Mod does not expect an empty last sector: bleng = 0 is a boundary length.
  if (bleng === 0) throw new Error(`length ${bytes.length} is a multiple of the sector size: add a byte`);
  if (aleng >= 64) throw new Error(`file ${name} is longer than 64 sectors: extension tables are not supported`);

  let d = new Uint8Array(img);
  const dv = () => new DataView(d.buffer);
  const off = adr => ((adr / DIRROOT | 0) - 1) * SS;
  const rd = o => (o + 4 <= d.length ? dv().getUint32(o, true) : 0);
  const wr = (o, v) => dv().setUint32(o, v >>> 0, true);
  const nameAt = o => { let s = ''; for (let i = 0; i < 32 && d[o + i]; i++) s += String.fromCharCode(d[o + i]); return s; };

  // Used sectors, by the same walk as FileDir.Init.
  const used = new Set();
  const markFile = hdr => {
    const b = off(hdr), al = rd(b + 36) | 0;
    if (rd(b) !== HDRMARK) throw new Error(`corrupt file header in sector ${hdr / DIRROOT}`);
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
    if (rd(b) !== DIRMARK) throw new Error(`corrupt directory page ${pg / DIRROOT}`);
    used.add(pg / DIRROOT);
    const m = rd(b + 4) | 0, p0 = rd(b + 8);
    for (let i = 0; i < m; i++) markFile(rd(b + 64 + i * 40 + 32));
    if (p0) { walk(p0); for (let i = 0; i < m; i++) walk(rd(b + 64 + i * 40 + 36)); }
  };
  walk(DIRROOT);

  // The leaf the name goes into: descend as in FileDir.Search. Comparison is bytewise.
  let pg = DIRROOT, R = 0;
  for (;;) {
    const b = off(pg), m = rd(b + 4) | 0;
    R = 0; while (R < m && nameAt(b + 64 + R * 40) < name) R++;
    if (R < m && nameAt(b + 64 + R * 40) === name) throw new Error(`file ${name} already exists on the image`);
    const next = R === 0 ? rd(b + 8) : rd(b + 64 + (R - 1) * 40 + 36);
    if (!next) break;
    pg = next;
  }
  if ((rd(off(pg) + 4) | 0) >= PGSIZE) throw new Error(`directory leaf for ${name} is full`);

  // Free sectors. The system never allocates numbers below 64
  // (Kernel.InitSecMap marks them as used); we do the same.
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

  // Write to the leaf: shift right and insert at position R.
  const b = off(pg), m = rd(b + 4) | 0;
  d.copyWithin(b + 64 + (R + 1) * 40, b + 64 + R * 40, b + 64 + m * 40);
  const e = b + 64 + R * 40;
  d.fill(0, e, e + 40);
  for (let i = 0; i < name.length; i++) d[e + i] = name.charCodeAt(i);
  wr(e + 32, secs[0] * DIRROOT); wr(e + 36, 0);
  wr(b + 4, m + 1);
  return d;
}

/** Oberon text from a file.

    Files saved by the editor are NOT plain ASCII: the first byte is a format
    tag (F1H), then the text offset, then piece descriptors with fonts. A naive
    read yields garbage at the start, and line ends are carriage returns, not
    line feeds. Parsed per Texts.Mod: Open reads the tag, Load reads the offset
    and the pieces. */
export function readText(bytes) {
  if (bytes[0] !== 0xF1) return new TextDecoder('latin1').decode(bytes);   // plain ASCII
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
