[Русская версия](THIRD-PARTY.ru.md)

# What here belongs to others, and on what terms

Our part is under Apache-2.0 (the `LICENSE` file). Below is everything taken ready-made.
The terms of all three components are permissive and require one thing: keep the
authorship notice. It has been kept.

## Project Oberon: Niklaus Wirth, Jürg Gutknecht, Paul Reed

* `impl/rtl/`: the description of the RISC5 processor and peripherals
* `impl/ext/oberon-src/`, `impl/ext/po2013-src/`: the system sources
* `impl/ext/disk/Oberon-2016-08-02.dsk`: the system image
* `impl/web/oberon.dsk`: the same image for the browser

Source: [projectoberon.net](http://www.projectoberon.net/).
Notice text: `impl/ext/norebo/license.txt`.

Our change: 53 lines in `RISC5.v`, the added bounds-check instruction that the
measurement was set up for. `Registers.v` was rewritten from Xilinx primitives into a
behavioral description so that the module builds with open tooling.

## project-norebo: Peter De Wachter

* `impl/ext/norebo/`: the Oberon compiler, run from the command line

Source: [github.com/pdewacht/project-norebo](https://github.com/pdewacht/project-norebo).
Terms: the same as Project Oberon (`impl/ext/norebo/license.txt`).

Our change: a cycle counter and a profiler in the runtime.

## oberon-risc-emu: Peter De Wachter

* `impl/ext/refemu/`: the reference emulator that the step-by-step comparison runs against

Source: [github.com/pdewacht/oberon-risc-emu](https://github.com/pdewacht/oberon-risc-emu).
Notice: `impl/ext/refemu/LICENSE`, carried over from the README of that
repository, which has no separate license file.

Our change: a cycle counter and tracing for the differential test bench.

## Cell library: Sky130 (SkyWater)

* `impl/syn/lib/sky130_fd_sc_hd__tt_025C_1v80.lib`: area and frequency estimates

Apache-2.0, taken from
[OpenROAD-flow-scripts](https://github.com/The-OpenROAD-Project/OpenROAD-flow-scripts).
It is not committed to the repository because of its size (12 MB); it is fetched by the
`make lib` target, which `make syn` also calls.

This is a real process technology; chips are physically made on it.

### Why not Nangate45

Earlier measurements used it, and its header **explicitly forbids publication**: *"provided
pursuant to a License Agreement containing restrictions on its use"*, *"does not
indicate actual or intended publication of this file"*. Because of this, synthesis did not
work from a clean clone.

Changing the process technology changes the absolute numbers (130 nm versus 45 nm), but our
claims are relative deltas, and they survive the switch: the area cost of the bounds-check
instruction is **+1.04 %** versus +0.32…0.85 % on Nangate45.
The order of magnitude and the sign are the same.
