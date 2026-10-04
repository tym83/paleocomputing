[Русская версия](FINDING-15-browser.ru.md)

# Claim U1 closed: Project Oberon runs in the browser on the real RTL

Not an emulator and not a retelling. Wirth's `RISC5.v` core, synthesisable Verilog, is run
by Verilator cycle by cycle, built by Emscripten into WASM, and brings up Project Oberon
in an ordinary tab. Screenshot: `docs/oberon-in-browser.png`.

On screen: the system log with the banner `Oberon V5  NW 14.4.2013`, the `System.Tool` panel
with all commands (`ORP.Compile`, `System.Directory`, `Hilbert.Draw`, `Tools.Inspect`…),
tiled windows, the mouse cursor. A complete desktop.

## Delivery sizes (measured)

| Artifact | Raw | gzip |
|---|---|---|
| `risc5.wasm` (core + Verilator runtime) | 180 648 | **74 811** |
| `risc5.js` (Emscripten glue) | 15 280 | 5 367 |
| `index.html` | 7 596 | 3 378 |
| `prom_sd.mem` (boot loader) | 4 608 | 770 |
| `oberon.dsk` (system image) | 989 184 | 249 402 |
| **TOTAL** | | **333 590 = 326 KB** |

This matches the review's prediction (177 KB raw / 75 KB gzip for the model) to within a percent.

## Speed

| Build | Result |
|---|---|
| native | 4.37 MHz-equivalent |
| **WASM (Node, ES module)** | **4.27 MHz-equivalent** |

**The WASM loss is 2.3%.** The review predicted 5–8%; it came out better.

The framebuffer checksum after 12 million instructions is `B5DFC933` **in all three
builds**: native with a file-backed disk, native with an in-memory disk, and WASM.
Bit-for-bit identical.

## What had to be solved

**Thread affinity stubs.** The Verilator runtime pulls in `pthread_getaffinity_np`,
`pthread_setaffinity_np`, `sched_getcpu`, which are absent from the wasm sysroot. The review warned about this.
The stub signatures must match, otherwise `wasm-ld` complains about a type mismatch.

**`VRISC5__Dpi.cpp` is excluded**: it pulls in `svdpi.h`, which uses `uint8_t` without
including `<stdint.h>`. We do not need DPI.

**`verilated_threads.cpp` is mandatory**: without it `VlThreadPool` is not found.

**Link with `em++`, not `emcc`**: otherwise the C++ standard
library is not pulled in.

**An in-memory disk.** WASM has no file system; the image comes from JS. The logic of the SD
protocol over SPI was carried over from the reference emulator word for word and verified by a bit-for-bit
match of the screen checksum with the file-backed version.

**SharedArrayBuffer is NOT used**: a deliberate decision following the review's recommendation.
Verilator threads are pointless for a design of this size, and giving up shared memory
removes the requirement for COOP/COEP headers and makes the page embeddable anywhere,
including GitHub Pages.

## A bug caught live

**If a tab STARTS hidden, `requestAnimationFrame` is not called at all, and the chain
of frames never starts, even when the tab is opened later.**

It showed up in automation, where the tab is hidden: the page initialised, WASM
ran, but the screen stayed black and the frame counter showed zero. The cure is subscribing to
`visibilitychange` and restarting the chain.

This is not a theoretical risk: anyone who opened the link in a background tab and switched
to it later would have got a black screen.

## Input

**Mouse.** The source of truth is `e.buttons` (a bitmask), not individual events: Oberon
needs the **simultaneous** state of all three buttons for interclicks. The buttons sit in
bits 26/25/24 of the mouse register. `preventDefault` on `mousedown` with the middle button and on
`auxclick` suppresses autoscroll; on `contextmenu`, the right-button menu.
**The middle button is emulated with left Alt, not Ctrl**: on macOS the system turns
`Ctrl+click` into a right click, so such a mapping is physically unreachable.

**Keyboard.** A PS/2 scan code set 2 table, mapped from `KeyboardEvent.code`.

## Rendering

Expansion of 1 bit → RGBA in plain JS via a 256-entry table of 8 pixels each.
The review measured 0.33 ms per frame: there is nothing to optimise, WebGL and SIMD are not needed.
**The framebuffer is stored bottom-up** (`VID.v`: `vidadr = Org + {3'b0, ~vcnt, hword}`);
without flipping, the screen is upside down.

With `ALLOW_MEMORY_GROWTH` the heap buffer can be replaced, so the view onto the framebuffer
is rebuilt every frame rather than once at startup.
