[Русская версия](FINDING-16-fmax.ru.md)

# Finding 16: Fmax closed, and the area delta varies fourfold with the flow

> ⚠ **The numbers below were obtained on Nangate45**, which had to be excluded from
> the publication: its license forbids redistribution. The measurements were moved to
> the free Sky130, and the relative conclusions held there, while the absolute values
> changed (frequency three times lower: 130 nm versus 45 nm). See
> [finding 36](FINDING-36-sky130.md).


The last open item of the design. Reproducible: `python3 syn/fmax.py`.

## 🔴 MAIN POINT: the sign of the frequency delta is NOT DETERMINED

⚠ **CORRECTED AFTER THE AUDIT.** The first edition published "−1.81% frequency" as
a confirmed result, citing the review's prediction. The auditor checked a second
flow, and the sign turned out to be **the opposite**. Re-measured:

| Mapping flow | Baseline | With CHK | Δ frequency |
|---|---|---|---|
| **default abc** | 2215.32 ps (451.4 MHz) | 2180.45 ps (458.6 MHz) | **+1.60%**: CHK is **faster** |
| **delay-driven** | 2096.03 ps (477.1 MHz) | 2134.60 ps (468.5 MHz) | **−1.81%**: CHK is slower |

**The sign is opposite between two reasonable flows of the same tool
on the same RTL.**

Publishing "−1.81%" was a choice of flow, not a measurement. The honest wording:

> The effect of the hardware bounds check on the critical path **lies within the spread
> of the synthesis flow: from −1.6% to +1.8% in frequency**, the sign is undetermined. At this level of
> precision it is **impossible** to say whether the extension speeds the core up or slows it down.

### The review's prediction remains unconfirmed

The review wrote: "the comparators will almost certainly land on the critical path; a small core
loses on delay structurally". The prediction is **plausible and not refuted**,
but also **not confirmed**: our tooling does not have the resolution to check it.
That needs a full static timing analysis on the netlist, which we do not have.

### A note on the step shape

The area-versus-target curve is stepped: at a target ≥3000 ps the delay-driven flow gives
2383.6 ps, at ≤2000 it gives 2096.0 and does not improve further. Meanwhile at a loose target (5000 ps)
the delta is −6.5% in frequency, and at a tight one −1.81%. **The choice of point on this curve moves
the published number threefold**: one more argument against a single value.

## 🔴 The area delta varies 2.65× with the mapping script

⚠ **CORRECTED AFTER THE AUDIT.** The first edition said here "fourfold, with identical
RTL". That was **factually wrong**: `+30.06` was taken from the configuration without `CHK_SPLIT`
(limit in `IR[15:4]`), and `+123.16` from `CHK_SPLIT` (limit in two pieces). Two different
schemes for assembling the limit were being compared. The auditor caught this within a minute, having the repository.

Re-measured on **one and the same** configuration, the adopted one (`CHK_SPLIT`):

| Mapping script | Baseline, µm² | With CHK, µm² | Δ | Δ, GE | Δ, % |
|---|---|---|---|---|---|
| abc **default** | 14 620.42 | 14 666.97 | **+46.55** | 58 | +0.32% |
| explicit **delay-driven** | 14 560.84 | 14 684.00 | **+123.16** | 154 | +0.85% |

**The delta spread is 2.65×** with identical RTL, library and tool version.
Only the sequence of mapping commands changes.

For the rejected encoding (12 contiguous bits) the spread is smaller: +59.58 versus +79.53 = 1.33×.
That is, **the sensitivity to the flow itself depends on what exactly is added**.

### What follows, and it is harsher than what was written before

The syntax noise floor (finding 4) is **±51 µm² = ±64 GE**.

- the default delta **+46.55 µm² = 58 GE is INSIDE the noise floor**
- the delay-driven delta **+123.16 µm² = 154 GE** is 2.4 times above the floor

**That is, with one of two reasonable flows the effect is indistinguishable from noise.**

The honest wording, and there can be no other:

> The area of the hardware bounds check on this core is **58…154 gate
> equivalents (+0.32%…+0.85%)** depending on the technology mapping script,
> with a noise floor of ±64 GE from logically neutral edits of the source. The lower bound
> of the range is indistinguishable from the tool's noise. The number is usable only as an order of magnitude.

Publishing a single value is not allowed.

## What these numbers do NOT mean

**`WireLoad = "none"`: wire delays are not taken into account at all.** 477 MHz is an estimate
of the combinational logic after technology mapping, not a silicon frequency.
At 45 nm with real routing and a clock tree it will be noticeably lower.

**The critical path of the real system is not visible here.** In the SoC it goes through external
asynchronous memory: `B + sext(off)` → SRAM → `inbus` → `regmux` in one cycle. The core's netlist
does not contain this memory at all, so the real limit is not determined by what was measured.

**There is no full static timing analysis.** OpenSTA is not on the system and is not packaged in Homebrew;
a full analysis on the netlist with constraints remains open.
The abc estimate is good for a **relative** comparison of two configurations within one
flow, which is exactly what it is used for here.

## Summary of all the release's measurements

| Metric | Value |
|---|---|
| Checks, code size | 6.2% (compilation), 15.5% (computational) |
| Checks, cycles | **2.74%** (compilation), **10.16%** (computational) |
| Hardware removes | **13.7%** (compilation), **50.0%** (computational) |
| Area cost | **+0.32%…+0.85% (58…154 GE)**, the lower bound is inside the noise |
| Frequency cost | **undetermined: from −1.6% to +1.8% depending on the flow** |
| Baseline: core | 18.21 kGE, 993 flip-flops (**512 of them are the register file, which in Wirth's design is in LUT-RAM; this is an ASIC number, not the size of the original**), 451–477 MHz (abc estimate, `WireLoad = none`) |
| Flow noise | ±0.35% (±64 GE) from syntax, ×2.65 from the mapping script |
