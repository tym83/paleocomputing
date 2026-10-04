[Русская версия](FINDING-84-descriptor-fpga.ru.md)

# Finding 84. Descriptors on ECP5 fabric: 25 MHz holds, but the IDX comparison lands on the critical path for the first time

The same flow as in finding 69: yosys → nextpnr-ecp5, LFE5U-85F-6BG381C (ULX3S),
25 MHz target, five placement seeds per variant, pinned image
`impl/fpga/Dockerfile`. A third core was added, **desc** = `-DWITH_CHK -DCHK_SPLIT
-DWITH_DESC` (core E + `IDX`, as in the RTL tests). All three cores were run again
in one launch, so that the numbers come from one session.

Reproduce with `make -C impl/fpga docker-all` (about half an hour on Apple
Silicon, colima, linux/arm64). In CI (`.github/workflows/fpga.yml`) the same
`make all` now runs three cores × two wrappers.

## fmax, MHz (min / median / max over five seeds)

| wrapper | base | chk | desc | desc margin to 25 MHz (by min) |
|---|---|---|---|---|
| soc | 32.26 / 33.27 / 37.49 | 34.94 / 37.30 / 39.80 | 31.86 / 34.65 / 38.06 | 1.27× |
| core | 46.72 / 46.96 / 48.49 | 42.83 / 44.72 / 47.45 | 46.78 / 47.47 / 47.64 | 1.87× |

* **25 MHz holds in all 30 place-and-route runs.**
* The differences between the core medians (soc: 33.3 / 37.3 / 34.7) are smaller
  than the seed spread within one core (soc base: 32.3…37.5), and their sign
  differs between the two wrappers, as with `CHK` in finding 69. Within the
  resolution of this measurement, descriptors do not change the frequency.

## Critical path: what is new compared with CHK

Finding 69: "in none of the 20 runs does the CHK comparator lie on the critical
path". For desc this is no longer true. In the soc wrapper, seed 1:

```
register file (read address) -> C0[12] -> idxFault -> stall/regwr -> pcmux -> ROM address
14.91 ns = logic 2.87 + routing 12.04, half a period (ROM on ~clk)
```

This is exactly the risk recorded in the design: the `IDX` trap controls the
stall, and the stall controls the address of the next fetch. For `CHK` the
comparison is against a constant from the instruction and controls only
`pcmux0`; for `IDX` it compares **two registers** (the index and the length from
the descriptor), so it sits after the register file read. The path still fits
(1.27× to 25 MHz for the worst seed), but soc has the least margin, and this is
the first candidate if the frequency is to be raised. In the core wrapper the
critical path is still in the floating-point adder, and `IDX` does not touch it.

The remedy, if needed (not done): a register on `idxFault`. The trap already
costs an extra cycle, so the decision can be made one cycle later, taking the
comparison off the fetch path.

## Resources

| wrapper / core | LUT4 | CCU2C | FF | vs base by LUT4 |
|---|---:|---:|---:|---:|
| soc / base | 2961 | 329 | 582 | — |
| soc / chk | 3016 | 345 | 582 | +1.9% |
| soc / desc | 3097 | 362 | 582 | **+4.6%** |
| core / base | 2896 | 329 | 614 | — |
| core / chk | 2958 | 345 | 614 | +2.1% |
| core / desc | 3067 | 362 | 614 | **+5.9%** |

`IDX` on top of `CHK` costs about a hundred LUT4 and 17 carry cells (a 20-bit
address adder and a 12-bit comparison). No flip-flops were added: the stall
cycle is implemented by replacing `IR`, with no separate state. The whole core is
less than 4% of the chip.

## What this does not show

* Operation on a board: this is static timing analysis, as in finding 69.
* The path through external memory (address → SRAM → data in one cycle) cannot
  be measured without a board.
