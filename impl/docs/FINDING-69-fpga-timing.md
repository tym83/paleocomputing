[Русская версия](FINDING-69-fpga-timing.ru.md)

# Finding 69. Wire delays: the core on real FPGA fabric

The project page carried a caveat: "not run on a live board; synthesis has
been run, but wire delays are not taken into account". The board has not been
bought yet, but the main thing it is needed for can be obtained without it:
place and route the RISC5 core on real FPGA fabric with open tools and run
static timing analysis, wires included.

## How

The chip is a Lattice ECP5 LFE5U-85F, as on the ULX3S board (which has a fully
open flow and an existing Oberon port, EMARD's `ulx3s_v20_top.v`). The flow is
yosys → nextpnr-ecp5 in a Debian trixie image pinned by digest, with package
versions pinned per architecture (`impl/fpga/Dockerfile`). Two wrappers:

* **core**: the core alone; inputs and outputs through registers;
* **soc**: the core plus the boot ROM on the inverted clock plus the code
  multiplexer, as in `RISC5Top.v`; the external SRAM is replaced by
  registers.

The target is 25 MHz: that is what the original design gives (`RISC5Top.v`
divides 50 MHz by two), and the ULX3S port clocks the processor at the same
rate. Five runs with different placement seeds per variant; CI fails if even
one does not meet the target.

## Results

Median over five seeds, MHz (CI, amd64; the local run on arm64 is in
`impl/fpga/results.md` and differs within the seed spread):

| variant | without CHK | with CHK | margin over 25 MHz |
|---|---:|---:|---:|
| core | 47.5 | 48.2 | 1.8× |
| soc | 33.0 | 33.7 | 1.26–1.29× |

* **25 MHz is met with margin** in all twenty placements.
* **CHK does not affect the frequency.** The difference in medians is smaller
  than the seed spread within one variant, and its sign differs between CI
  and the local run.
* **Wires are most of the delay.** On the core's critical path (the
  floating-point adder, `fpaddx`) wires account for 12.9 ns of 20.8; in soc
  (from the register file output to the memory address, half a cycle on the
  inverted edge) for 11.2 of 14.2. The caveat on the page was justified:
  without wires the maximum frequency would have come out 2.6 times higher for
  the core and 4.7 times higher for soc.
* Resources: about 2.9 thousand LUT4s and 0.6 thousand flip-flops, a few
  percent of the LFE5U-85F.

## What this does not show

* This is timing analysis, not operation on a board: no SDRAM (the ULX3S has
  it instead of SRAM, and EMARD's port adapts to it), no video, no clock
  cycles measured on hardware. Cycles per instruction still come from the RTL
  model.
* An FPGA frequency is not an ASIC chip frequency; there was a separate
  synthesis for ASIC (Finding 3), and wires were not accounted for there
  either.

## When the board arrives

`impl/fpga/README.md`: flashing with openFPGALoader, what to put on the card,
how to run the boot and the bounds-check measurement on hardware and compare
with Verilator.
