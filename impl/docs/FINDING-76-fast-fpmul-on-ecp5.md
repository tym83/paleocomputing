[Русская версия](FINDING-76-fast-fpmul-on-ecp5.ru.md)

# Finding 76. The cost of the fast multiplier on an FPGA: four DSPs and one choice

The flow of finding 69 (yosys → nextpnr-ecp5, LFE5U-85F, 25 MHz target, five
placement seeds per variant, pinned image `fpga/Dockerfile`), applied to three
cores: the original, with the single-cycle multiplier, and with the two-cycle
multiplier (finding 73). All six combinations were taken in one run, so that
the comparison stays within one series.

| wrapper / core | fmax min / median / max, MHz | margin to 25 MHz (by min) | LUT4 | FF | DSP (MULT18X18D) |
|---|---|---:|---:|---:|---:|
| core / original | 46.17 / **47.40** / 48.14 | 1.85× | 2937 | 614 | 0 |
| core / 1 cycle | 33.73 / **36.20** / 37.52 | 1.35× | 2850 | 561 | 4 |
| core / 2 cycles | 45.91 / **47.30** / 49.00 | 1.84× | 2828 | 588 | 4 |
| soc / original | 31.57 / **33.47** / 37.03 | 1.26× | 2965 | 582 | 0 |
| soc / 1 cycle | 34.17 / **35.71** / 36.94 | 1.37× | 2962 | 529 | 4 |
| soc / 2 cycles | 34.31 / **35.01** / 38.83 | 1.37× | 2892 | 556 | 4 |

**25 MHz holds in all thirty place-and-route runs.**

## What this means

* **Area barely changes, but placement does.** The 24×24 multiplication went
  into 4 DSP blocks out of 156 on the chip. Logic did not grow; it shrank: the
  48-bit product register and the step counter disappeared together with the
  shift adder (−53 flip-flops for the single-cycle variant; the two-cycle
  variant needs only the top 26 bits of the product register, −26).
* **The single-cycle multiplier lands on the core's critical path.** The path
  from the register file through the multiplier, rounding and the result
  multiplexer to the registers is 27.1 ns, 53 logic levels; the core median
  drops from 47.4 to 36.2 MHz. There is still margin to 25 MHz (1.35×), but it
  is no longer "free".
* **The two-cycle variant leaves the frequency alone**: the critical path is
  again in Wirth's floating-point adder, as in the original core, with medians
  of 47.3 versus 47.4, a difference smaller than the spread between seeds.
* **In the soc wrapper there is no visible difference at all**: there the
  frequency is set by the half-cycle path to the ROM on the inverted edge
  (finding 69), and the multiplier never comes into play. Medians of
  33.5 / 35.7 / 35.0 are within the seed spread.

Combined with finding 74: the two-cycle multiplier gives 1.566× on the model
instead of 1.604×. It gives up 2.4% of the speedup and in return keeps the core
frequency untouched. Both are fine for a 25 MHz board; if the core is ever
clocked faster, the choice is the two-cycle one.

## What this does not show

* As in finding 69: this is timing analysis, not operation on a board; the
  wrappers have no external memory and no video.
* ASIC (Sky130) was not synthesized for the fast multiplier.
* The absolute numbers for the original core differ slightly from
  `fpga/results.md` (LUT4 2965 versus 2948 for soc): a different run, a
  different tree. Variants should be compared within one table.

## How to reproduce

```
cd impl/fpga
make docker-fmul          # 3 cores × 2 wrappers × 5 seeds, in a container, tens of minutes
cat build/summary.md
```
