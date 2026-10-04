[Русская версия](FINDING-03-synthesis-traps.ru.md)

# Finding 3: two traps of the open synthesis flow, both measured

> ⚠ **The numbers below were obtained on Nangate45**, which had to be excluded from
> the publication: its license forbids redistribution. The measurements were moved to
> the free Sky130, and the relative conclusions held there, while the absolute values
> changed (frequency three times lower: 130 nm versus 45 nm). See
> [finding 36](FINDING-36-sky130.md).


Tools: yosys 0.69, Nangate45 typical. Scripts: `syn/sweep.py`, `syn/demo_cmos_bug.ys`.

## Trap 1: `stat -tech cmos` silently loses 76% of the flip-flops

The review warned that `stat -tech cmos` only knows `$_DFF_P_`/`$_DFF_N_`.
Checked on our core:

| Flip-flop type in the netlist | Count | Counted? |
|---|---|---|
| `$_DFFE_PP_` | 570 | ❌ zero transistors |
| `$_DFF_P_` | 235 | ✅ |
| `$_SDFF_PP0_` | 129 | ❌ |
| `$_DFFE_PN_` | 33 | ❌ |
| `$_SDFF_PN0_` | 24 | ❌ |
| `$_SDFFE_PN0P_` | 1 | ❌ |
| `$_SDFF_PP1_` | 1 | ❌ |
| **total** | **993** | **235 counted (24%)** |

**758 flip-flops, 76%, are lost silently.** The only signal of this is a plus sign at the end of
the line `Estimated number of transistors: 67154+`.

## Trap 2: `-D` without `-constr` is ignored COMPLETELY

The review did not foresee this, and it is worse than the first trap, because here there is no signal at all.

| Command | Area, µm² |
|---|---|
| `abc -liberty L` (no delay target) | 13 862.856000 |
| `abc -liberty L -D 200` (tight) | **13 862.856000** |
| `abc -liberty L -D 50000` (loose) | **13 862.856000** |
| `abc -liberty L -constr C -D 200` | 14 532.112000 |
| `abc -liberty L -constr C -D 50000` | 14 461.356000 |

**Identical to the last digit with a 250× difference in the target.** Without a constraints file
(`set_driving_cell`, `set_load`) the delay target never reaches the mapper, and the result is
the minimum-area point which, as the review rightly noted, "no tapeout uses".
Meanwhile the report looks perfectly normal.

## Consequence: there is no area-vs-period curve here

A sweep over eight points from 20 ns to 0.5 ns with `-constr` gives **only two values**:

| Period | Area, µm² | kGE |
|---|---|---|
| ≥ 3000 ps | 14 461.36 | 18.12 |
| ≤ 2000 ps | 14 532.11 | 18.21 |

The difference is **0.5%**. That is, the flow practically does not trade area for speed for this
design. This is both bad and good:

- **bad:** the "area-vs-period plot that closes most of a reviewer's questions" recommended by the review cannot be built from anything: it is flat
- **good:** the area delta from the ISA extension will be **clean**; it does not need defending against the suspicion "you just picked a convenient timing point"

**Fmax cannot be obtained from this flow at all**: that needs OpenSTA on the netlist. This is separate
work, and without it the second half of U3 (frequency) remains open.

## Project baseline (recorded)

RISC5 core (31.8.2018, with interrupts and FPU), Nangate45 typical, `-constr`, `-D 2000`:

| Metric | Value |
|---|---|
| Area | **14 532.11 µm²** |
| **kGE** (÷ NAND2_X1 = 0.798 µm²) | **18.21** |
| Sequential logic | 4 490.35 µm² (**30.9%**) |
| Cells | 10 938 |
| Flip-flops | **993** |

Cross-check with the review: the estimate of "~955 flip-flops" from counting bits in the sources versus
the measured **993** is a 4% discrepancy, explained by synthesis details. The core size estimate
"~10–20 kGE" is confirmed: **18.21 kGE**.

⚠ The mandatory caveat for the article still stands: the open flow lags behind
a commercial one by 25–60% in area; the numbers are good for a **relative** comparison
within one flow, not as an absolute silicon cost.
