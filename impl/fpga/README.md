[Русская версия](README.ru.md)

# FPGA: core timing on ECP5 fabric, and what to do on the day the board arrives

Here the RISC5 core is placed and routed on real Lattice ECP5 fabric with an
open flow (yosys → nextpnr-ecp5 → ecppack), and nextpnr's static timing
analysis gives the frequency **with wire delays**, which synthesis against a
cell library did not have (findings 3, 16, 36). The results are in [results.md](results.md),
the conclusions in [finding 69](../docs/FINDING-69-fpga-timing.md).

**There is no live hardware here.** This is the next step in accuracy short of a board: real
fabric, real routing, real delays from the speed-grade model of the
device. It does not replace a board: not a single edge has been checked on an oscilloscope.

## What gets built

| file | what it is |
|---|---|
| `Dockerfile` | pinned flow: Debian trixie by digest, yosys 0.52, nextpnr-ecp5 0.7, prjtrellis 1.4, openFPGALoader 0.13.1 |
| `core_timing_top.v` | **core timing wrapper, not a system**: core + ROM on ~clk (`soc` mode) or the core alone (`core` mode); memory, inputs and outputs go through registers |
| `ulx3s_core.lpf` | three groups of ULX3S pins: the 25 MHz oscillator, the UART input, the LEDs |
| `check_timing.py` | parsing nextpnr reports, frequency check, summary |
| `Makefile` | `synth`, `pnr`, `timing`, `bit`, `all`, `docker-all` |

The target is **LFE5U-85F-6BG381C** (ULX3S in the 85F variant, speed grade 6).
The target frequency is **25 MHz**: that is what Wirth's original design gives
(`RISC5Top.v`: `always @(posedge CLK50M) clk <= ~clk`, the millisecond
counter counts to 24999), and the same as the EMARD port for ULX3S.

```sh
make docker-all                 # everything in a container: 2 cores x 2 wrappers x 5 seeds
make timing WRAP=soc VARIANT=chk SEEDS=1   # one combination, tools installed locally
```

`make timing` exits with an error if even one placement seed is below the target.
CI works the same way (`.github/workflows/fpga.yml`).

### Why a wrapper and not the full system

Wirth's original board keeps memory in **external asynchronous SRAM**: the address
goes out to the pins, and data returns to the core in the same cycle. ULX3S has no such
SRAM; it has SDRAM, and the EMARD port puts a cache controller between the core and the SDRAM,
which stalls the core on misses. The "core → SRAM → core" path cannot be
measured without a board, and the "core → cache → SDRAM" path is a different design. So what is
measured here is what all variants share on the die: the core and the ROM.

Artix-7 (Arty A7-35T via openXC7 / nextpnr-xilinx) **was not done**: the chip
database for xc7a35t takes hours to build and needs gigabytes of memory, and there are no images with a
pinned version. ECP5 alone already shows the main point; see finding 69.

## The day the ULX3S arrives

### 0. What to buy and check

- ULX3S v3.x with **LFE5U-85F** (45F/25F/12F also work: the core takes about
  4k LUTs; for a different device change `DEVICE` in the Makefile and re-measure).
  Check the device marking: the digit after `F-` is the speed grade; we measured
  grade 6.
- A microSD card of any size (Oberon needs 64 MB), a USB cable to port US1
  (FTDI: both programming and UART), a monitor with HDMI (GPDI), a PS/2 keyboard
  or USB through the ESP32, as in the EMARD port.
- `openFPGALoader -V` no older than 0.13.1 (it is in the image: `make docker-image`).

### 1. The board is alive

```sh
openFPGALoader --detect -b ulx3s           # must find LFE5U-85F
```

The timing wrapper bitstream (`make bit`) can be loaded into the device SRAM to
confirm that the flow reaches the hardware; the LEDs will blink garbage:
it is the XOR of the outputs of a core running on a random stream from the UART.

```sh
make bit WRAP=soc VARIANT=base
openFPGALoader -b ulx3s build/soc-base/core_timing_top.bit    # into SRAM, until power-off
```

### 2. Reference: the EMARD port as is

Before substituting our core, bring up the system in the form in which it
already ran on ULX3S for others:
[emard/oberon](https://github.com/emard/oberon), commit `ced69d7`
(2020-12-06), project `proj/lattice/ulx3s/ulx3s-v20` (`makefile.trellis`).
It is a rework of the FleaFPGA port Basman74/Oberon_SDRAM: 25 MHz CPU,
100 MHz SDRAM through a cache, 1024×768 video over DVI.

- The EMARD flow includes VHDL (the DVI encoder), so it needs yosys with the GHDL plugin.
  Our image does not have it; it is simpler to take OSS CAD Suite, which does.
- `FPGA_SIZE` in its Makefile and `pixel_clock_MHz` in `hdl/top/ulx3s_v20_top.v`
  must match the device (85F → 75 MHz, 12F → 65 MHz).
- Flash it: `openFPGALoader -b ulx3s -f oberon.bit`.

**SD card.** Our image `impl/ext/disk/Oberon-2016-08-02.dsk` is truncated
(it starts with `8d a3 1e 9b`, the directory mark). Oberon expects its partition at
sector 524288 and does not touch the first two sectors, so the truncated image
is written at an offset of 524290 sectors (as in the EMARD README):

```sh
sha256sum -c ../ext/disk/SHA256SUMS
sudo dd if=../ext/disk/Oberon-2016-08-02.dsk of=/dev/sdX bs=512 seek=524290 conv=fsync
```

The boot loader in the ROM must be the SD one, `impl/rtl/prom_sd.mem`, not `prom.mem`
(that one boots over the serial line; finding 13).

Success: the Oberon screen with the system log, as in `docs/oberon-boot-screen.png`.

### 3. Our core in the EMARD system

What **does not exist yet** and has to be done on that day:

1. **Core interface.** EMARD's `RISC5.v` is an earlier branch with a `ce` port
   (clock enable): the cache controller stalls the core through `ce`, and `stallX`
   is tied to zero. Our `RISC5.v` (Wirth's version of 31.8.2018, with interrupts and
   floating point) has no `ce` port. Two ways: gate the core clock through
   `ce` in the wrapper (simple, but touches the clock tree) or route the cache
   miss signal into `stallX` (more correct; `stallX` exists for exactly this, the
   video controller uses it to stall the core). The second way must be checked on the
   Verilator bench with a cache model before flashing.
2. **Register file.** Our `Registers.v` is behavioural, with an `initial`
   reset to zero. On ECP5 yosys puts it in LUT memory (24 `TRELLIS_DPR16X4`,
   see results.md), and the zeroing comes from the bitstream, as with Wirth's RAM16X1D.
3. **CHK.** The core with `-DWITH_CHK -DCHK_SPLIT` is the same file list with a different
   define. The system on disk does not use CHK, so booting on the CHK core
   checks compatibility (like `make boot-chk` on Verilator).

Criterion: the system boots on both cores, and the screen matches the reference of the
Verilator bench (`make boot` and `make boot-chk` check the screen
checksum; on the board, compare by eye or grab a frame with an HDMI grabber and
compute the same CRC over the frame buffer).

### 4. Measuring the bounds check on hardware

The numbers of the central episode were taken on the Verilator model: **11.00 cycles per
indexing without CHK and 10.00 with CHK** (finding 55). The workload
`tests/bench_bounds_{b,e}.s` sits in the ROM (ORG 0xFFE000) and runs from
reset, 1,000,000 iterations. Expected at 25 MHz with zero-wait-state memory:
11 000 000 / 25 MHz = **440 ms** and 10 000 000 / 25 MHz = **400 ms** (plus
a dozen cycles of prologue).

What **does not exist yet**:

- **A way to take the time.** The program prints nothing: in simulation the iterations
  are read from R5. For the board the generator (`tools/gen_bounds_bench.py`) needs
  a mode that reads the millisecond counter (IO `-64`, 0xFFFFC0) before and after
  the loop and writes the difference to the LEDs (`-60`) or the UART (`-56`). There is one template
  for both configurations; add to it, not to copies (finding 55).
- **Swapping the ROM without re-routing.** The workload has to end up in the ROM instead of
  the boot loader. Re-routing is not needed: `ecpbram` from prjtrellis replaces the
  contents of a memory block directly in `out.config`:
  `ecpbram -i out.config -o bench.config -f prom_sd.mem -t bench_b.mem`,
  then `ecppack`. For this the original ROM contents must be unique
  (ecpbram finds them by matching), so check that no other BRAM
  starts the same way.

What to compare:

- **The B/E ratio**: 1.100 on the model. On hardware with a cache the array (64 words at
  address 0x1000) sits in the cache after the first pass, and every `LD` should
  cost the same as on the model. If the ratio drifts from 1.100 by more than a couple of
  tenths of a percent, the cache adds cycles unevenly, and that has to be
  explained before publication, not averaged away.
- **Absolute time** against 440/400 ms: the difference is the cost of the cache and SDRAM
  on this workload. It is about the port, not about CHK.
- Do not raise the frequency for a nicer number: at 25 MHz the result is
  comparable with Wirth's original. The frequency headroom from results.md is a separate
  experiment (a PLL at 40–50 MHz, the same workload; the B/E ratio must not
  change).

### 5. What to record

The device marking, board revision, tool versions, the bitstream hash,
a photo of the screen, both times and the ratio, in a new finding, linking
to this one and to 55. And fix the sentence on the site: "not run on a live board"
becomes untrue only after this step.

## Sources

- ULX3S: [emard/ulx3s](https://github.com/emard/ulx3s) (hardware, MIT-like
  license, LICENSE.md), pins checked against
  [emard/ulx3s-misc `constraints/ulx3s_v20.lpf`](https://github.com/emard/ulx3s-misc/blob/d0c6f15dd22608d15b60fdf3c3b3c16201eea0f6/constraints/ulx3s_v20.lpf)
  (the repository has no license, so the file was not copied; the pin numbers were written out).
- Oberon port to ULX3S: [emard/oberon](https://github.com/emard/oberon/tree/ced69d7e0150c34ad4e0acc55519a421fa9f8e37),
  derived from [Basman74/Oberon_SDRAM](https://github.com/Basman74/Oberon_SDRAM) (FleaFPGA).
