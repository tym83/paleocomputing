[Русская версия](FINDING-28-labs.ru.md)

# Finding 28. The lab framework and the first three labs

## What was done

L2 and L3 of the plan: a framework for an interactive lab in the browser and three assignments
at the levels "look", "break", "build".

* `web/machine.js`: a reusable machine wrapper: framebuffer rendering,
  mouse and keyboard, a loop with a quota, typing text as scan codes and clicking
  at screen coordinates. Extracted from `index.html` so that each new
  lab does not rewrite this from scratch.
* `web/oberonfs.js`: reading the Oberon file system straight from the image in the machine's
  memory. A port of `tools/oberonfs.py`.
* `web/labs.js`: the labs themselves: the text of the steps and a **machine check** for
  each.
* `web/lab.html`: the shell: the canvas, the assignment panel, a roll-back button, a tool
  for writing to memory.
* `web/labs-test.mjs`: a headless run.

For the checks the browser build got access to the machine state:
`soc_reg`, `soc_flags`, `soc_h`, `soc_ram`, `soc_fb_crc`, `soc_disk_word`,
`soc_poke`. All except the last are read-only.

## The labs

**Lab 1, "look".** The system boots on the real `RISC5.v`. The check for
step 1 is that the screen checksum matches the reference `B5DFC933`, the same one
as in `make boot`. Step 2: open the module list with a middle click; the check
counts black dots in the strip where the viewer appears.

**Lab 4, "break".** The machine has neither a memory management unit nor protection
rings. Step 1: write garbage into the framebuffer; the screen gets corrupted, the system lives.
Step 2: write `E7FFFFFF` (a jump to itself) at the current address of the
program counter; the machine freezes dead, without a trap or a message.

A halt check based on the INSTRUCTION counter does not work: the jump to itself is also
executed, and the counter grows. So the check takes five samples of the PROGRAM
counter: before the corruption it wanders (`9480 11868 115B4 9560 95D8`), after it, it freezes.

**Lab 7, "build".** The student rebuilds the `Math` module inside the system and
discovers finding 27 with their own hands: `Math.rsc` on the image is 1877
bytes, after the rebuild 1869. The check reads the file length **from disk** via
`OberonFS` rather than trusting the text on the screen.

## Roll-back exposed a consequence of finding 19

The "Roll back" button did not work at first: after a repeated `soc_init` the system did not
boot, and the screen stayed empty.

The cause is a direct consequence of finding 19: **in `RISC5.v` the register
file, the flags, `H` and `IR` have no reset**. When the model is first created, Verilator zeroes them
itself, but on a repeated start the leftovers of the previous run remain there.

Fixed with explicit zeroing in `soc_init`. It is important to understand that this is a crutch of the
testbench: on a real FPGA there will be no such reset, and the machine starts with garbage.
The silicon checklist item remains open.

## The checks are checked

`make labs` runs each lab's scenario headlessly and requires
a transition from "not done" to "done": first the check must NOT pass,
then, after the intended actions, it must pass. A lab whose check is
always green or always red breaks the build.

In addition, the shell is checked statically: every `getElementById` must
find its element, every import an existing file. This catches
renaming, the most common breakage.

Checked for misses: substituting the expected length of `Math.rsc` breaks `make labs`.

## What could not be checked

The page could not be opened in a real browser here: Chrome in this environment could not
reach the local HTTP server, failing even on the directory listing, while
`curl` gets a 200. This is a property of the environment, not of the page, but honestly
it has to be said: the markup was checked only statically, and the behaviour only headlessly.
