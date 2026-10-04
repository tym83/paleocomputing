[Русская версия](FINDING-29-portable-harness.ru.md)

# Finding 29. A portable harness framework (platform step 1)

## Why

In the platform plan the first step is "extract the RISC5 harness into a portable
framework": without this a second machine costs as much as the first.

## What was extracted

`tb/scenario.h`: everything that does not depend on the architecture:

* the scenario language (`M` mouse, `K` key, `S` screenshot), its parsing and
  playback by instruction number;
* dumping a frame to PBM, including row order and polarity (in P1 a one is
  BLACK; the reverse layout gives a negative, which we already tripped over once);
* the machine interface `harness::Host`: exactly three actions: set the pointer,
  send a key code, hand over the screen description.

What remains for the machine: the address and size of the framebuffer, the row order, the format of the
input registers. For RISC5 that is twenty lines in `tb/soc_tb.cpp`.

## Checking the separation

The extraction must not change behaviour by a single bit. After it:

* booting gives the same screen checksum `B5DFC933` as before;
* the two-generation bootstrap gives **the same 715 000 000 instructions and
  1 101 436 669 cycles**, and the generations still match bit for bit.

The figures matched to the instruction, so the separation is clean.

## What gets reused next

| asset | for the second machine |
|-------|-------------------|
| `tb/scenario.h` | in full |
| `tools/mkscript.py`, `tools/keymap.py` | the scenario language; its own layout |
| `tools/pbm2png.py`, `tools/stitch_log.py` | in full |
| `web/machine.js` | rendering and the loop in full; its own scan codes and frame layout |
| `web/lab.html`, `web/labs-test.mjs` | in full |
| `tools/alu_model.py`, `gen_alu_diff.py` | the method in full, its own model |
| `tools/roundtrip.py`, `sweep_encoding.py` | the method in full |

## What the framework does NOT prove yet

Portability is tested by a second machine, and there is none. For now this is a separation of
the interface, confirmed only by the fact that the first machine works after it
exactly as before. The real test is Lilith on the same framework, step 2
of the plan.
