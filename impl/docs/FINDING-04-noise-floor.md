[Русская версия](FINDING-04-noise-floor.ru.md)

# Finding 4: the area delta of the ISA extension lies BELOW the noise caused by syntax

This is a methodological result, and it matters more than the number itself.

## Experiment

Wirth's original `RISC5.v` was taken. **Logically neutral**
rewrites were applied to it: expressions identical to the originals once the constant is substituted:

| Change | What was done | Area, µm² | Δ from baseline |
|---|---|---|---|
| — | original | **14 532.112** | — |
| `regwr` | parentheses added, line break | 14 532.112 | **0** |
| `pcmux0` | branch `1'b0 ? … :` added | 14 532.112 | **0** |
| `ira0` | `BR ?` → `(BR \| 1'b0) ?` | 14 480.508 | **−51.6** |
| `regmux` | `(BR & v) ?` → `((BR & v) \| 1'b0) ?` | 14 480.774 | **−51.3** |
| all four together | — | 14 620.424 | **+88.3** |

Synthesis is deterministic: two runs of the same file agree to the last digit.

## What follows from this

**Logically neutral rewrites move the area by ±0.6%, and non-monotonically:**
two changes applied separately shrink the core by 51 µm² each, and together grow it
by 88. This is not a bug; it is the normal behaviour of the yosys+abc pair, where the structure of the source
sets the starting point of the heuristics.

**For comparison: the hardware bounds check's own delta is 30.06 µm².**

That is, **the effect we are measuring is half the size of the noise caused by how
an expression we did not even touch is written.**

## ⚠ CORRECTION AFTER THE AUDIT: the method below rests on an assumption that it itself refutes

The auditor pointed out a contradiction, and he is right. Above it is proven that the noise is **not additive**:
two changes give −51 each separately and +88 together. Below, the proposal is to subtract
a "constant offset", and that is exactly an assumption of additivity.

**What remains true:** comparing two builds from one file via `ifdef` is still
better than comparing two files, because it removes the textual difference outside the guarded block.
**What is wrong:** calling the difference a "clean delta". It remains an estimate with an error
on the order of the noise floor itself.

**Measured consequence (finding 16):** the delta of the adopted configuration is
+46.55 µm² with one mapping script and +123.16 with another. The first figure is **inside**
the ±51 noise floor. That is, with one of two reasonable flows the effect is **unmeasurable**.

Below is the original wording, kept for honesty of presentation.

## The correct method, which remains defensible

Compare **the same file** differing only in `ifdef`:

```verilog
`ifdef WITH_CHK
assign CHK     = ~p & ~q & v & (op == 1);
assign chkFail = CHK & (B >= chkLim);
`else
assign CHK     = 1'b0;
assign chkFail = 1'b0;
`endif
```

Both configurations are produced from **byte-identical text**, except the guarded block.
The constant offset (those same 88 µm² that my patch added to the original) is present
in both and is subtracted.

| Configuration | Area, µm² | kGE |
|---|---|---|
| patch, CHK off | 14 620.424 | 18.32 |
| patch, CHK on (the **rejected** encoding, 12 contiguous bits) | 14 650.482 | 18.36 |
| Δ | +30.058 | 37.7 GE, +0.21% |

⚠ **These numbers refer to the REJECTED encoding** (limit in `IR[15:4]`, which breaks
diagnostics). The adopted encoding (limit in two pieces) gives **+46.55 µm² = 58 GE**
with the same script and **+123.16 = 154 GE** with delay-driven mapping. See finding 16.
The value +0.21% has been **removed** from all summaries.

## Mandatory wording for the article

> ⚠ **OBSOLETE.** The wording referred to the rejected encoding. The current one is
> in finding 16: **58…154 GE (+0.32%…+0.85%)** depending on the mapping script.
> For calibration: logically neutral rewrites of the same source
> move the area by ±50 µm² (±0.35%), that is, **the measured effect is of the same order
> as the tool's noise**. The number was obtained by comparing two builds from a byte-identical
> source differing only in conditional compilation, and it is suitable for a relative
> comparison within this flow, not as an absolute silicon cost.

Without the second sentence the first one **must not be published**: it would rightly be torn apart.

## Why 37.7 GE and not 130–200, as the review estimated

The review estimated a full 32-bit unsigned comparator. Our CHK compares
against a 12-bit limit, so synthesis reduces the task to "the upper 20 bits of the index are not zero
OR the lower 12 are greater than the limit", which is noticeably cheaper than a full comparison.
The 4095-element limit is a deliberate trade-off, and its price is exactly what this number shows.
