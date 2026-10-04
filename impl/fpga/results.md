[Русская версия](results.ru.md)

# Results: the RISC5 core on ECP5 fabric, with routing

Taken 2026-09-28, `make docker-all`, image from the `Dockerfile` in this directory.
Conclusions are in [finding 69](../docs/FINDING-69-fpga-timing.md).

## Tools

| tool | version (Debian trixie package) |
|---|---|
| base image | `debian:trixie-slim@sha256:a99cfc517144bc59b1978475ec53b46ecabec7e43635402ee5b77cc54cd1b20a` |
| yosys | 0.52 (git sha1 fee39a3284c9), package `0.52-2` |
| nextpnr-ecp5 | 0.7, package `0.7-1+b3` |
| prjtrellis (ecppack, chip database) | package `fpga-trellis 1.4-2+b5` |
| openFPGALoader | 0.13.1, package `0.13.1-1` |

Run: colima on Apple Silicon, linux/arm64, 2 cores, no emulation. On
x86-64 in CI the package versions are the same; nextpnr's timing model does not depend on the host
architecture, but floating-point placement may diverge in the
last digit, so check against CI.

## Target

- Device **LFE5U-85F-6BG381C** (ULX3S 85F), speed grade 6:
  `nextpnr-ecp5 --85k --package CABGA381 --speed 6`.
- Target frequency **25 MHz**, the frequency of the original design. Verified against the
  source: `RISC5Top.v` halves the `CLK50M` input
  (`always @ (posedge CLK50M) clk <= ~clk`), and the millisecond timer
  counts 25,000 cycles (`limit = (cnt0 == 24999)`), so Wirth's system is
  designed for exactly 25 MHz. The EMARD port for ULX3S also runs the CPU at
  25 MHz (`clk_cpu`, `hdl/top/ulx3s_v20_top.v`).
- Placement seeds 1…5 (`--seed`), each with its own routing.

## Wrappers

- **soc**: core + boot ROM on the inverted clock + code
  multiplexer, as on the die in `RISC5Top.v`. External SRAM is replaced by registers.
- **core**: the core only; code, data, rst, irq, stallX come from registers, outputs
  go into registers.

**Neither of them is a system.** The path through external memory (address → pins →
SRAM → pins → core in one cycle) cannot be measured without a board. See README.md.

## fmax, MHz

| wrapper / core | seed 1 | seed 2 | seed 3 | seed 4 | seed 5 | min | median | max | margin over 25 MHz (by min) |
|---|---|---|---|---|---|---|---|---|---|
| soc / base | 33.26 | 33.60 | 35.62 | 33.97 | 36.35 | 33.26 | 33.97 | 36.35 | 1.33× |
| soc / chk  | 37.29 | 36.08 | 37.77 | 36.89 | 36.02 | 36.02 | 36.89 | 37.77 | 1.44× |
| core / base | 47.29 | 45.76 | 48.91 | 46.60 | 47.07 | 45.76 | 47.07 | 48.91 | 1.83× |
| core / chk  | 45.46 | 45.56 | 44.37 | 45.21 | 46.25 | 44.37 | 45.46 | 46.25 | 1.77× |

All 20 runs hold 25 MHz. For soc the frequency already accounts for the
ROM path being a half-cycle path: nextpnr converts it to a full period.

**Effect of CHK:**

| wrapper | base median | chk median | Δ of medians | seed spread within base |
|---|---|---|---|---|
| soc  | 33.97 | 36.89 | **+8.6 %** (CHK faster) | 33.26…36.35 (9.3 %) |
| core | 47.07 | 45.46 | **−3.4 %** (CHK slower) | 45.76…48.91 (6.9 %) |

The sign of the delta flips when the wrapper changes, and in both cases the seed ranges
overlap (soc: 36.02…36.35, core: 45.76…46.25). In none of the 20
runs does the CHK comparator lie on the critical path.

## Critical path

Breakdown from the nextpnr report (`--report`), seed 1; the other seeds
start and end in the same blocks.

| wrapper / core | edges | delay | logic | routing | routing share |
|---|---|---|---|---|---|
| soc / base  | posedge → negedge | 15.03 ns | 3.25 | 11.78 | 78 % |
| soc / chk   | posedge → negedge | 13.41 ns | 3.11 | 10.30 | 77 % |
| core / base | posedge → posedge | 21.15 ns | 7.89 | 13.26 | 63 % |
| core / chk  | posedge → posedge | 21.99 ns | 8.02 | 13.97 | 64 % |

- **soc**: instruction register `IR` → operation decode → stall signals of the
  multiplier, divider and floating-point blocks (`stallM`, `stallD`,
  `stallF*`) → `stall` → `pcmux` → `adr` → address input of the ROM memory block.
  The ROM is clocked by `~clk`, so this path has **half a period**: 20 ns at
  25 MHz. This is the "next instruction address must arrive before the falling clock edge" path.
- **core**: register `Sum` of the floating-point adder → negation and
  normalization (`FPAdder.v`: `s = (Sum[26] ? -Sum : Sum) + 1`, leading-one
  search, shift) → `fsum` → `aluRes` → `regmux` → zero flag
  (`zz = regmux == 0`) → `SPC` (saving the flags on interrupt entry).
  The path lies entirely in Wirth's code; CHK does not touch it.

## Resources

yosys `synth_ecp5` (`stat`) and nextpnr (packed cells). Less than 5 % of the device's
83,640 LUTs are used.

| wrapper / core | LUT4 | CCU2C (carry) | TRELLIS_COMB (nextpnr) | FF | LUTRAM (DPR16X4) | BRAM (DP16KD) | DSP (MULT18X18D) |
|---|---|---|---|---|---|---|---|
| soc / base  | 2948 | 329 | 3872 | 582 | 24 | 1 | 0 |
| soc / chk   | 3001 | 345 | 3961 | 582 | 24 | 1 | 0 |
| core / base | 2908 | 329 | 3832 | 614 | 24 | 0 | 0 |
| core / chk  | 2936 | 345 | 3896 | 614 | 24 | 0 | 0 |

- CHK: **+16 CCU2C** (the `B >= chkLim` comparator on the carry chain, 32 bits)
  and **+64…89 TRELLIS_COMB (+1.7…2.3 %)**. It adds no flip-flops.
- The register file (three read ports, one write port) went into LUT memory:
  24 `TRELLIS_DPR16X4` = 8 per read port × 3 copies.
- Zero DSPs: Wirth's multiplier is sequential (33 cycles, shift and
  add), as is the divider. The ROM is one DP16KD block (512 × 32).
- The wrappers' FFs (input shift register, output latches) are included in the numbers;
  core has 32 more of them because of the code input.

## Reproduction

```sh
cd impl/fpga
make docker-all                  # about 25 minutes on 2 arm64 cores
cat build/summary.md
```

## Fast FP multiplier (episode 2)

Taken 2026-09-28, `make docker-fmul`, the same image. Conclusions are in
[finding 76](../docs/FINDING-76-fast-fpmul-on-ecp5.md). The original core was
re-measured in the same series so that everything is compared within one table.

| variant | fmax min / median / max, MHz | margin over 25 MHz | LUT4 | CCU2C | FF | DSP |
|---|---|---:|---:|---:|---:|---:|
| core-base | 46.17 / 47.40 / 48.14 | 1.85x | 2937 | 329 | 614 | 0 |
| core-fmul | 33.73 / 36.20 / 37.52 | 1.35x | 2850 | 346 | 561 | 4 |
| core-fmul2 | 45.91 / 47.30 / 49.00 | 1.84x | 2828 | 346 | 588 | 4 |
| soc-base | 31.57 / 33.47 / 37.03 | 1.26x | 2965 | 329 | 582 | 0 |
| soc-fmul | 34.17 / 35.71 / 36.94 | 1.37x | 2962 | 346 | 529 | 4 |
| soc-fmul2 | 34.31 / 35.01 / 38.83 | 1.37x | 2892 | 346 | 556 | 4 |

Critical path of core-fmul (seed 1): from the register file through the multiplier
to the SPC register, 27.07 ns = logic 11.55 + routing 15.52, 53 levels. In
core-fmul2 it is back in the floating-point adder (20.68 ns), as in base.
## Run with the third core (desc), 2026-09-28

`make docker-all` after adding `VARIANT=desc` (`-DWITH_CHK -DCHK_SPLIT
-DWITH_DESC`, episode 14). All three cores in one run, the same image. Conclusions are
in [finding 84](../docs/FINDING-84-descriptor-fpga.md).

| variant | fmax min / median / max, MHz | margin over 25 MHz | LUT4 | CCU2C | FF | critical path (seed 1) |
|---|---|---|---|---|---|---|
| core-base | 46.72 / 46.96 / 48.49 | 1.87× | 2896 | 329 | 614 | fpaddx.Sum → SPC, 20.62 ns |
| core-chk | 42.83 / 44.72 / 47.45 | 1.71× | 2958 | 345 | 614 | fpaddx.Sum → SPC, 21.72 ns |
| core-desc | 46.78 / 47.47 / 47.64 | 1.87× | 3067 | 362 | 614 | fpaddx.Sum → SPC, 21.05 ns |
| soc-base | 32.26 / 33.27 / 37.49 | 1.29× | 2961 | 329 | 582 | IR → ROM address, 13.96 ns |
| soc-chk | 34.94 / 37.30 / 39.80 | 1.40× | 3016 | 345 | 582 | IR → ROM address, 12.56 ns |
| soc-desc | 31.86 / 34.65 / 38.06 | 1.27× | 3097 | 362 | 582 | register file → idxFault → pcmux → ROM address, 14.91 ns |

The base and chk numbers of this run differ from the tables above (a different run, the same
versions) within the seed spread.
