// Reusable harness for the RISC5 machine in the browser.
//
// Extracted from index.html so the labs do not have to rewrite rendering,
// input and the run loop. Everything a lab needs to CHECK a task is available
// here as well: registers, flags, memory, the framebuffer and the disk image.
//
// The framebuffer is stored bottom-up (VID.v: vidadr = Org + {3'b0, ~vcnt, hword}),
// so rows are flipped when drawing.

// ⚠ The hardware variant is loaded BY NAME, not imported: there are two models,
// the stock one and one with hardware bounds checking, and the page switches
// between them on the fly. A static import would pull both into every build.
export const VARIANTS = {
  base: { file: './risc5.js',     title: { en: 'stock core',            ru: 'стоковое ядро' } },
  chk:  { file: './risc5-chk.js', title: { en: 'core with CHK',          ru: 'ядро с CHK' } },
};

const loaded = new Map();
export async function loadVariant(name = 'base') {
  const v = VARIANTS[name] || VARIANTS.base;
  if (!loaded.has(name)) loaded.set(name, (await import(v.file)).default);
  return loaded.get(name);
}

const W = 1024, H = 768;

// The modifier that gives the middle button. It is physically one key, but its
// name differs: on a Mac it is labelled Option, and an "Alt" hint there is
// misleading, since people look for a key that does not exist. Ctrl does not
// work in this role at all: macOS turns Ctrl+click into a right click before
// the page sees it.
const MAC = (() => {
  if (typeof navigator === 'undefined') return false;
  const n = navigator;
  return /Mac|iPhone|iPad|iPod/.test(
    (n.userAgentData && n.userAgentData.platform) || n.platform || n.userAgent || '');
})();

export const ALT_LABEL = MAC ? '\u2325 Option' : 'Alt';

/** Set the modifier label in every .k-alt element inside the node. */
export function labelAltKeys(root) {
  const r = root || (typeof document === 'undefined' ? null : document);
  if (!r) return;
  for (const el of r.querySelectorAll('.k-alt')) el.textContent = ALT_LABEL;
}


// PS/2 scan codes, set 2. Exactly the ones Input.Mod understands.
export const PS2 = {
  KeyA:0x1C,KeyB:0x32,KeyC:0x21,KeyD:0x23,KeyE:0x24,KeyF:0x2B,KeyG:0x34,KeyH:0x33,
  KeyI:0x43,KeyJ:0x3B,KeyK:0x42,KeyL:0x4B,KeyM:0x3A,KeyN:0x31,KeyO:0x44,KeyP:0x4D,
  KeyQ:0x15,KeyR:0x2D,KeyS:0x1B,KeyT:0x2C,KeyU:0x3C,KeyV:0x2A,KeyW:0x1D,KeyX:0x22,
  KeyY:0x35,KeyZ:0x1A,
  Digit1:0x16,Digit2:0x1E,Digit3:0x26,Digit4:0x25,Digit5:0x2E,Digit6:0x36,
  Digit7:0x3D,Digit8:0x3E,Digit9:0x46,Digit0:0x45,
  Minus:0x4E,Equal:0x55,BracketLeft:0x54,BracketRight:0x5B,Backslash:0x5D,
  Semicolon:0x4C,Quote:0x52,Backquote:0x0E,Comma:0x41,Period:0x49,Slash:0x4A,
  Space:0x29,Enter:0x5A,Backspace:0x66,Tab:0x0D,Escape:0x76,
  ShiftLeft:0x12,ShiftRight:0x59,ControlLeft:0x14,ControlRight:0x14,
};

// String -> scan codes wrapped in Shift, the way a keyboard does it.
export function typeCodes(text) {
  // ⚠ There was a bug here: the digit table started with ')', so SHIFTED[0]
  // mapped to a nonexistent code and the closing parenthesis simply was not
  // typed. The text was saved silently corrupted, and a "file exists" check
  // lets that through. Shift over the digits: 0->) 1->! 2->@ ... 9->(
  const SHIFTED = ')!@#$%^&*(', DIG = '0123456789';
  const out = []; let shift = false;
  const push = (c, need) => {
    if (need && !shift) { out.push(0x12); shift = true; }
    else if (!need && shift) { out.push(0xF0, 0x12); shift = false; }
    out.push(c, 0xF0, c);
  };
  for (const ch of text) {
    if (ch >= 'a' && ch <= 'z') push(PS2['Key' + ch.toUpperCase()], false);
    else if (ch >= 'A' && ch <= 'Z') push(PS2['Key' + ch], true);
    else if (ch >= '0' && ch <= '9') push(PS2['Digit' + ch], false);
    else if (SHIFTED.includes(ch)) push(PS2['Digit' + DIG[SHIFTED.indexOf(ch)]], true);
    else {
      const map = {' ':['Space',0],'\n':['Enter',0],'\r':['Enter',0],'.':['Period',0],
        ',':['Comma',0],'/':['Slash',0],';':['Semicolon',0],"'":['Quote',0],
        '[':['BracketLeft',0],']':['BracketRight',0],'\\':['Backslash',0],
        '-':['Minus',0],'=':['Equal',0],'`':['Backquote',0],
        '~':['Backquote',1],'_':['Minus',1],'+':['Equal',1],':':['Semicolon',1],
        '"':['Quote',1],'<':['Comma',1],'>':['Period',1],'?':['Slash',1],
        '{':['BracketLeft',1],'}':['BracketRight',1],'|':['Backslash',1]};
      const m = map[ch];
      if (!m) throw new Error(`no scan code for ${JSON.stringify(ch)}`);
      push(PS2[m[0]], !!m[1]);
    }
  }
  if (shift) out.push(0xF0, 0x12);
  return out;
}

export class Machine {
  static async create(prom, img, variant = 'base') {
    const M = await (await loadVariant(variant))();
    const m = new Machine();
    m.M = M; m.prom = prom; m.img = img; m.variant = variant;
    m._load();
    return m;
  }

  _load() {
    const M = this.M;
    if (this.pP) { M._free(this.pP); M._free(this.pI); }
    if (this._radioBuf) { M._free(this._radioBuf); this._radioBuf = null; }
    this.pP = M._malloc(this.prom.length * 4);
    M.HEAPU8.set(new Uint8Array(this.prom.buffer), this.pP);
    this.pI = M._malloc(this.img.length);
    M.HEAPU8.set(this.img, this.pI);
    M._soc_init(this.pP, this.prom.length, this.pI, this.img.length);
    this.fbPtr = M._soc_framebuffer();
    this.fbN = M._soc_fb_words();
  }

  /** Full reset: the machine and the disk image return to their initial state. */
  reset() { this._load(); }

  /** Power off and on: memory and processor start afresh, the disk keeps what was written. */
  reboot() { this.M._soc_reboot(); }

  run(n) { return this.M._soc_run(n | 0); }

  get insns()  { return this.M._soc_insns(); }
  get cycles() { return this.M._soc_cycles(); }
  get pc()     { return this.M._soc_pc(); }

  reg(i)   { return this.M._soc_reg(i) >>> 0; }
  flags()  { return this.M._soc_flags() >>> 0; }
  h()      { return this.M._soc_h() >>> 0; }
  ram(a)   { return this.M._soc_ram(a >>> 0) >>> 0; }
  poke(a, v) { this.M._soc_poke(a >>> 0, v >>> 0); }
  fbCrc()  { return this.M._soc_fb_crc() >>> 0; }
  disk(off){ return this.M._soc_disk_word(off >>> 0) >>> 0; }
  diskSize(){ return this.M._soc_disk_size() >>> 0; }

  // ── the air and the serial line, for machines that talk to each other ──
  /** The frames this machine sent since the last call (channel + 32 bytes each). */
  radioTake() {
    const M = this.M, p = this._radioBuf ??= M._malloc(33), out = [];
    while (M._soc_radio_take(p)) out.push(M.HEAPU8.slice(p, p + 33));
    return out;
  }
  /** A frame of another machine, as the air delivers it. */
  radioGive(frame) {
    const M = this.M, p = this._radioBuf ??= M._malloc(33);
    M.HEAPU8.set(frame.subarray(0, 33), p);
    M._soc_radio_give(p);
  }
  /** Cycles per millisecond of the machine's clock (25000 is the board's 25 MHz). */
  timescale(c) { this.M._soc_timescale(c | 0); }

  /** Text on RS232 receive: Boot.Mod runs it as commands at start. */
  serial(text) {
    const M = this.M, b = new TextEncoder().encode(text), p = M._malloc(b.length + 1);
    M.HEAPU8.set(b, p); M._soc_serial(p, b.length); M._free(p);
  }

  key(code) { this.M._soc_key(code | 0); }
  mouse(x, y, b) { this.M._soc_mouse(x | 0, y | 0, b | 0); }

  /** Type text. The machine must run between characters: the queue is finite. */
  type(text, step = 4000) {
    for (const c of typeCodes(text)) { this.key(c); this.run(step); }
  }

  /** Click at a screen point. y is given as in the picture, top to bottom. */
  click(x, y, button = 2, hold = 150000) {
    this.mouse(x, 767 - y, 0); this.run(hold);
    this.mouse(x, 767 - y, button); this.run(hold);
    this.mouse(x, 767 - y, 0); this.run(hold);
  }

  fb() {
    const M = this.M;
    return new Uint32Array(M.HEAPU32.buffer, this.fbPtr, this.fbN);
  }

  /** How many black pixels are in a rectangle. Used by checks: "a viewer appeared". */
  ink(x0, y0, x1, y1) {
    const fb = this.fb(); let n = 0;
    for (let y = y0; y < y1; y++) {
      const row = (767 - y) * 32;
      for (let x = x0; x < x1; x++)
        if ((fb[row + (x >> 5)] >>> (x & 31)) & 1) n++;
    }
    return n;
  }
}

/**
 * Expands the framebuffer onto a canvas. Separate from the machine: it receives
 * the RAW buffer, one bit per pixel, from anywhere, either from a machine in the
 * same thread or from a worker thread via a message.
 */
export function makeRenderer(canvas) {
  const ctx = canvas.getContext('2d', { alpha: false });
  const img = ctx.createImageData(W, H);
  const px = new Uint32Array(img.data.buffer);
  const LUT = new Uint32Array(256 * 8);
  for (let b = 0; b < 256; b++)
    for (let k = 0; k < 8; k++)
      LUT[b * 8 + k] = (b >> k) & 1 ? 0xFF000000 : 0xFFFFFFFF;   // 1 is black

  // The framebuffer is stored BOTTOM-UP (VID.v: vidadr = Org + {3'b0, ~vcnt, hword}),
  // so rows are flipped when drawing.
  return function draw(fb) {
    for (let y = 0; y < H; y++) {
      const src = (767 - y) * 32, dst = y * W;
      for (let w = 0; w < 32; w++) {
        const v = fb[src + w], o = dst + w * 32;
        for (let byte = 0; byte < 4; byte++) {
          const t = ((v >>> (byte * 8)) & 0xFF) * 8, q = o + byte * 8;
          px[q]=LUT[t]; px[q+1]=LUT[t+1]; px[q+2]=LUT[t+2]; px[q+3]=LUT[t+3];
          px[q+4]=LUT[t+4]; px[q+5]=LUT[t+5]; px[q+6]=LUT[t+6]; px[q+7]=LUT[t+7];
        }
      }
    }
    ctx.putImageData(img, 0, 0);
  };
}

/**
 * Mouse and keyboard for the canvas. Input goes to `sink`, which can be a machine
 * in the same thread or a worker thread behind `postMessage`. Coordinates are
 * already in Oberon's system (bottom-up).
 *
 * sink: { mouse(x, y, btn), key(code), chord(x, y, first, then) }
 */
export function bindInput(canvas, sink) {
  let mx = 512, my = 384, btn = 0;
  const push = () => sink.mouse(mx, 767 - my, btn);
  // Which Oberon button the physical left button acts as. 4 is left, 2 is middle,
  // 1 is right (Input.Mod numbering).
  //
  // ⚠ Without this switch part of the system is unreachable on a laptop. Selecting
  // text in Oberon is a DRAG with the right button, and a Mac trackpad has no
  // right drag: two fingers mean scrolling there. So you could neither select
  // nor, for example, change the font with Edit.ChangeFont, since that command
  // works on the selection.
  let forced = 4;

  const btnsFrom = e => {
    // The source of truth is e.buttons: Oberon needs the SIMULTANEOUS state of
    // all three buttons for interclicks.
    let b = 0;
    if (e.buttons & 1) b |= (e.altKey ? 2 : forced);  // Alt always gives middle
    if (e.buttons & 4) b |= 2;                        // real middle
    if (e.buttons & 2) b |= 1;                        // real right
    return b;
  };
  // ⚠ Interclick. Part of the system requires PRESSING TWO BUTTONS AT ONCE:
  // for example, the second mark in the drawing editor is set with left plus an
  // added right (GraphicFrames.Edit: branch k1 = {2, 0}). Without the second mark
  // Rectangles.Make and Curves.MakeCircle silently do nothing.
  //
  // A trackpad cannot press two buttons at once, so the chord is built here:
  // with Shift, left is sent first, the machine gets to see it, and only then
  // right is added. Order matters: the system looks at how the click started.
  let chord = false;
  canvas.addEventListener('mousemove', e => {
    const r = canvas.getBoundingClientRect();
    mx = Math.round((e.clientX - r.left) * W / r.width);
    my = Math.round((e.clientY - r.top) * H / r.height);
    if (chord && (e.buttons & 1)) { push(); return; }   // hold the chord, move only the point
    chord = false; btn = btnsFrom(e); push();
  });
  canvas.addEventListener('mousedown', e => {
    e.preventDefault();
    if (e.shiftKey && !e.altKey && (e.buttons & 1)) {
      chord = true; btn = 4 | 1;
      sink.chord(mx, 767 - my, 4, 4 | 1);   // left first, then right added to it
      return;
    }
    chord = false; btn = btnsFrom(e); push();
  });
  addEventListener('mouseup', e => { chord = false; btn = btnsFrom(e); push(); });
  canvas.addEventListener('contextmenu', e => e.preventDefault());
  canvas.addEventListener('auxclick', e => e.preventDefault());

  // ⚠ The handlers sit on the whole window, not on the canvas, and used to swallow
  // EVERY key press whose code is in the PS/2 table. That had two consequences,
  // found on the live site: copying (Cmd/Ctrl+C) did not work, and, worse, you
  // could not type an address into the lab's input fields, so the memory-write
  // task could not be done at all. The lab checks did not catch this: they drive
  // the machine directly, bypassing the DOM.
  //
  // The keyboard goes to the machine only if the person is not typing in an input
  // field and is not holding a system modifier. Oberon needs neither Cmd nor Ctrl
  // for input.
  function typingElsewhere(e) {
    const t = e.target;
    if (!t) return false;
    if (t.isContentEditable) return true;
    const tag = t.tagName;
    return tag === 'INPUT' || tag === 'TEXTAREA' || tag === 'SELECT';
  }
  function keyGoesToBrowser(e) {
    return e.metaKey || e.ctrlKey || typingElsewhere(e);
  }
  addEventListener('keydown', e => {
    if (keyGoesToBrowser(e)) return;
    const c = PS2[e.code]; if (c === undefined) return;
    e.preventDefault(); sink.key(c);
  });
  addEventListener('keyup', e => {
    if (keyGoesToBrowser(e)) return;
    const c = PS2[e.code]; if (c === undefined) return;
    e.preventDefault(); sink.key(0xF0); sink.key(c);
  });

  return { setButton(b) { forced = b; } };
}

/** Draws the framebuffer onto a canvas and wires up mouse and keyboard. */
export function attach(machine, canvas) {
  const render = makeRenderer(canvas);
  const draw = () => render(machine.fb());
  const input = bindInput(canvas, {
    mouse: (x, y, b) => machine.mouse(x, y, b),
    key: c => machine.key(c),
    chord: (x, y, first, then) => {
      machine.mouse(x, y, first); machine.run(20000); machine.mouse(x, y, then);
    },
  });
  machine.setButton = b => input.setButton(b);

  let raf = 0, running = false;
  const QUOTA = 70000;      // ~4.2 MHz at 60 fps; without a quota the tab eats a whole core
  function frame() {
    if (!running) return;
    machine.run(QUOTA);
    draw();
    raf = requestAnimationFrame(frame);
  }
  return {
    draw,
    start() { if (!running) { running = true; frame(); } },
    stop() { running = false; cancelAnimationFrame(raf); },
    get running() { return running; },
  };
}
