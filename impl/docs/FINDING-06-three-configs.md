[Русская версия](FINDING-06-three-configs.ru.md)

# Finding 6: a hardware bounds check removes only 14% of the cost of checks

> ## ⚠ FINDING WITHDRAWN, AND NOT REPRODUCIBLE
> In addition to what is said below: **configuration C does not run in the current tree**.
> The emulator `ext/norebo/Runtime/risc-cpu.c` decodes CHK hard-wired to the encoding of variant E
> (limit in two pieces), while `patches/ORG-cfgC.Mod` emits the limit in `IR[15:4]`. The decoder
> reads it as `lim DIV 16`, the check fires on legitimate indices, and the compiler
> crashes after ~1.7 million cycles. The C numbers below were taken before the emulator was switched to split
> and cannot be reproduced from the tree.
>
> ## ⚠ FINDING WITHDRAWN
> The numbers below refer to configuration **C** (a 12-bit limit in `IR[15:4]`), which was
> **rejected**: it breaks diagnostics, the system reports the wrong error (finding 8).
> The adopted configuration is **E**, a limit in two pieces (finding 10). For it the hardware's
> contribution is **13.7%** on compilation and **50.0%** on the computational workload.
> Read together with findings 9 and 10.


**This closes the main experiment of the release: three configurations on a fully open stack.**
A negative result, and it is more interesting than a positive one.

Reproducible: `tools/measure3.sh`.

## Three configurations

| | What | How it was obtained |
|---|---|---|
| **A** | no checks | `check := FALSE` in `ORG.Open`; the build did not exist, it was created |
| **B** | software (stock) | `CMP` + `BLR` = 2 words / 2 cycles per indexing |
| **C** | hardware | new instruction `CHK` = 1 word / 1 cycle |

The workload is **"the compiler compiles five modules of the system"**, that is, "the system
rebuilds itself". Exactly the one the review called the only one nobody has measured.

**Two bootstrap stages are mandatory.** A direct comparison of the compilers measures not the cost
of the checks but the compiler's work generating them; I already got this wrong once,
by a factor of six (see finding 5).

## Result

| Configuration | Cycles | Instructions | Code, words |
|---|---|---|---|
| A: no checks | 29 121 384 | 17 407 595 | 5 775 |
| B: software | 29 919 963 | 18 090 546 | 6 348 |
| C: hardware | 29 808 859 | 17 986 329 | 6 290 |

**Cost of checks relative to their absence:**

| | Cycles | Instructions | Code |
|---|---|---|---|
| B: software | **+2.74%** | +3.92% | +9.92% |
| C: hardware | **+2.36%** | +3.32% | +8.92% |

**What hardware support gives (C versus B):**

| | Absolute | Share of the workload |
|---|---|---|
| cycles | 111 104 | **0.37%** |
| instructions | 104 217 | 0.58% |
| code | 58 words | 0.91% |

## Main conclusion

**A hardware bounds check removes only 14% of the cost of checks** (0.38 of 2.74 percentage
points) and costs **0.32%…0.85% of the core area**.

That is, in this system **adding hardware support buys almost nothing**,
and the reason is not that it is badly done but that **array bounds checks are not where
the cost lies**.

## Why: three reasons, all measured

1. **NIL checks dominate, not bounds checks.** In `ORP`, of 402 traps **390 are
   pointer dereferences**, and they cost one word and one cycle each. CHK does not
   touch them at all.
2. **CHK covers only arrays shorter than 4096 elements**, a consequence of the 12-bit limit
   in the free field `IR[15:4]`. Arrays such as `code: ARRAY 8000` fall back to the old path.
3. **Open arrays stay at two instructions**: the length arrives as a hidden parameter,
   it has to be loaded, and that also costs two cycles for the load.

## What follows for the CHERI/MTE agenda

A careful wording that can be defended:

> On a system where checks have existed since 1988 and are implemented in software, their full cost
> is **2.74% of cycles**. Moving the most frequent of them into hardware removes
> **0.37 percentage points** at a cost of **0.32%…0.85% of the core area**. Most of the cost
> falls not on array bounds checks but on NIL pointer checks, and hardware
> acceleration of bounds does not touch it.

This is not an argument against hardware memory safety. It is an argument that **before
moving a check into hardware, one should measure which check actually costs money**, and that
in systems designed with checks from the start the answer may turn out
not to be the one intuition from the C world suggests.

## All the release's numbers side by side

| Metric | Value |
|---|---|
| Checks: code size | 6.2% (on a sample of 10 modules) |
| Checks: cycles | **2.74%** |
| Hardware support removes | **0.37 pp** of cycles = 14% of the cost |
| Area of hardware support | **+0.32%…+0.85% (58…154 GE, depends on the mapping script; the lower bound is inside the noise)** |
| Synthesis noise floor | ±51 µm², **twice the measured effect** |
| Baseline: RISC5 core | 14 532 µm² = 18.21 kGE, 993 flip-flops |

## Limitations, recorded honestly

- There is one workload and it is a compiler workload: many pointers, little dense indexing.
  On a computational workload the share of bounds checks will be higher, and CHK's contribution more noticeable.
- The 12-bit CHK limit is a deliberate trade-off in favour of using a **provably** free
  encoding field. A wider limit would require taking an alias of an existing
  instruction, and RISC5 has no trap on an unknown instruction.
- The cycles were obtained with a latency model checked against the RTL cycle by cycle (61 instructions,
  0 mismatches), not by running the whole workload on the RTL: that would need a SoC wrapper.
