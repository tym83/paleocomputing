[Русская версия](07-browser-embed.ru.md)

# Browser embedding: what is already available

Checked on 2026-09-21.

---

## 1. Burroughs B5500: retro-b5500 (Paul Kimpel) ✅

- **100% JavaScript**, runs in the browser, live instance: https://www.phkimpel.us/B5500/webUI/B5500Console.html
- Repository: https://github.com/pkimpel/retro-b5500 (+ the WebUIGettingStarted wiki)
- Software separately: https://github.com/retro-software/B5500-software
- **The ALGOL compiler is included**: `ALGOL/DISK` loads in the standard Cold Start, plus `XALGOL/DISK` (Compatible Algol) optionally
- → **you can compile your own code, the overflow demo is feasible**

**What you need to run it:** the `emulator/` and `webUI/` files from the repo, the SYSTEM tape image,
the `COLDSTART-XIII.card` deck. Storage is IndexedDB, by default one EU of 200,000
segments (~6 million B5500 words).

**Browsers:** Firefox 21+, Chrome 35+, the new Edge, Safari 9.0.2+. Mobile browsers are not supported.

**⚠ Pitfalls:**
- **Safari deletes all local storage if the site has not been visited for 7 days**: "came back a week later, the system is gone"
- Browsers limit the size of IndexedDB without explicit user confirmation
- Starting is not one click: a cold start procedure is required → **for embedding it will have to be automated** (a prefilled IndexedDB or a scripted cold start)

**Verdict:** the estimate "an evening for a demo" holds, plus half a day to a day for automating the
cold start, if we want a "run" button without a three-paragraph instruction.

---

## 2. QNX: v86 (copy.sh) ✅✅

- A ready-made profile: https://copy.sh/v86/?profile=qnx: **QNX 4.05, a 1.4 MB image**
- v86 = an x86 emulator with JIT recompilation of x86 into WASM. https://github.com/copy/v86
- **Embeds as a library:** `libv86.js`, the `v86` npm package, TypeScript definitions
  `v86.d.ts`, documentation via `make doc`, a separate wiki page "How to Compile v86 (Both for
  embedded use and with the GUI)"

```javascript
var emulator = new V86({
  screen_container: document.getElementById("screen_container"),
  bios: { url: "../../bios/seabios.bin" },
  vga_bios: { url: "../../bios/vgabios.bin" },
  fda: { url: "../../images/qnx.img" },
  autostart: true,
});
```

**Legality of the image:** the QNX demo floppy was released by QNX itself in 1999 as a promo and
circulated freely; several copies are on the Internet Archive and on WinWorld. It can be hosted.

**Limitation:** v86 is 32-bit only → TempleOS (64-bit) and a number of modern things are out.

**Verdict:** **almost zero work**. And this is not one demo but a ready engine for the entire x86 line
of the series: QNX, KolibriOS, FreeDOS, ReactOS, potentially NetWare.

---

## 3. Oberon: OberonEmulator (Michael Schierl) ✅ with a caveat

- Live demo: https://schierlm.github.io/OberonEmulator/
- Repo: https://github.com/schierlm/OberonEmulator
- Three variants: **JavaScript**, **JavaScript + WebAssembly (faster)**, Java (downloadable)
- Images from minimal ones of ~100 KB to rich ones, RAM configurable from 1 to 64 MB, VRAM optional

**⚠ Caveat on "authenticity":** the JS variant **does not support the original SPI** (network and
SD card) or the original keyboard interface; instead it has paravirtualized
interfaces for the keyboard, clipboard, SD card and power. Hence **patched images are needed**
(images with the Hardware Enumerator work without changes).

**Other:** the clipboard works fully only in Chrome/Chromium Edge; in Firefox only writing works.
"You need a fairly fast PC or patience while it loads".

**Alternatives for an honest build:**
- https://github.com/pdewacht/oberon-risc-emu: the reference C itself, trivially built with Emscripten
- https://github.com/fzipp/oberon: a Go variant
- https://github.com/solbjorg/oberon-riscv: a port of Oberon to RISC-V

**Verdict:** for an overview article the ready-made one is enough. For the track 3 triad, our own
Emscripten build of `pdewacht/oberon-risc-emu` is better: no paravirtualization, the machine is real.

---

## 4. Verilator → WASM ✅ confirmed, and the genre has already been shown

The path works and is well trodden: Verilator turns RTL into cycle-by-cycle C++, Emscripten turns that into WASM.

Live precedents:
- **tiny-tpu**: a SystemVerilog systolic array compiled to WASM; the browser
  executes **the real RTL cycle by cycle and animates every element, every activation and
  every partial sum straight from the hardware signals**. This is exactly the genre we need:
  not a story about a processor but a processor at work with its insides visible.
- **RTL Studio** (rtlstudio.dev): Verilator, Yosys, waveforms as WASM in a browser tab
- **VeriSim**: Icarus Verilog in WASM
- verilator#1402: about compiling Verilator itself to WASM; we do not need that, we need its output

**Verdict:** RISC5 can run in the browser cycle by cycle with a visible pipeline. The fast
model (`oberon-risc-emu` in WASM) is for work; the RTL model is for "look how it
works inside".

---

## What this means for the plan

1. **The first three episodes really are half done.** Burroughs: the emulator and compiler are ready. QNX: everything is ready, including the image. Oberon: ready with a caveat.
2. **v86 becomes the embedding base for the entire x86 line**, not a one-off solution for QNX. I underestimated this: one engine covers several episodes at once.
3. **The embedding component still has to be written**, but it is simpler than it seemed: v86 already provides an API and screen handling, the B5500 is browser-based by itself, Oberon exists in two ready variants. The main work is a unified look, an image loader and automating the B5500 cold start.
4. **A risk to close in advance:** Safari's seven-day storage deletion for the B5500. For embedding, do not rely on saved state; always be able to come up from the image in one step.
