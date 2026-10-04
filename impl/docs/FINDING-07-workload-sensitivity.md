[Русская версия](FINDING-07-workload-sensitivity.ru.md)

# Finding 7: the contribution of a hardware bounds check varies 3.5× with the workload

Reproducible: `bench/ArrBench.Mod` + `tools/measure3.sh`.

## Why a second workload was needed

In finding 6 the only workload was compilation: many pointers, little dense
indexing. This was recorded as a limitation. The second workload (`bench/ArrBench.Mod`) is
the opposite: sorting and matrix multiplication, **not a single pointer, not a single NIL**,
all array limits below 4096, that is, CHK works on every indexing.

## Result on the computational workload

| Configuration | Cycles | Instructions | Code, words |
|---|---|---|---|
| A: no checks | 54 371 193 | 22 341 662 | 193 |
| B: software | 59 894 995 | 27 863 514 | 223 |
| C: hardware | 57 133 094 | 25 102 588 | 208 |

| | Cycles | Instructions | Code |
|---|---|---|---|
| B: software | **+10.16%** | +24.72% | +15.54% |
| C: hardware | **+5.08%** | +12.36% | +7.77% |

**Hardware support removes exactly 50.0% of the cost of checks.**

The match is exact and explainable: a software check is two instructions (`CMP` + `BLR`)
of one cycle each, a hardware one is a single instruction. Exactly half of the overhead disappears.

## Main conclusion: a 3.5× spread

| Workload | Cost of checks (B) | Removed by hardware |
|---|---|---|
| **compilation** (pointers) | +2.74% cycles | **14%** |
| **computational** (arrays) | +10.16% cycles | **50%** |

This is the answer to the question "how much does a hardware bounds check give":
⚠ **CORRECTED AFTER THE AUDIT.** The wording "from 14 to 50 percent" presented two points
as the bounds of the phenomenon. The auditor built **a third workload** (`MixBench`, arrays 100/2000/8000)
and got **10.4%, below the claimed lower bound**.

Three measured points: **10.4%, 17.1%, 50.0%**. This is not the range of the phenomenon but three values
determined by the mix of array lengths in a particular workload. The 50% upper bound is set by
construction (two instructions replaced by one); the lower bound is not limited by anything.

Honestly: **the contribution of a hardware bounds check is determined by what share of the executed
checks falls under the encoding's limit. On three workloads it came out at 10.4%, 17.1% and 50.0%.**

The spread is explained by the mix of checks. In the compiler, NIL pointer checks dominate
(390 of 402 traps in `ORP`), and CHK does not touch them at all. In computational code
there are no pointers, and all checks are array bounds, that is, exactly what CHK speeds up.

## Two bugs found along the way

### 1. The configuration without checks silently corrupted memory, on my own code

The first version of the benchmark had `b[i*M+j]` with `M = 60` and `b: ARRAY 1000 OF INTEGER`.
The maximum index is 3599, that is, **out of bounds by a factor of 3.6**.

- Configuration **A (no checks) ran silently**, writing 2600 words beyond the array
- Configuration **B caught it**: `array index out of range at ArrBench pos 1641`

This is an accidental but perfect demonstration of why checks exist: **the bug was found
only because checks were enabled**, and it was found in code written by a person
confident that the code was correct.

### 2. CHK breaks Oberon's diagnostics: measured, not predicted

Configuration C on the same bug reported: `unknown trap 8 at ArrBench pos 318`.

The reason: `Kernel.Trap` reads the trap number from bits `IR[7:4]` of the word at `R15-4`
(`Kernel.Mod:256`), and the source position from bits 23:8. Our CHK puts
**the array limit** into `IR[15:4]`, which overlaps both fields. For a limit of 1000 = 0x3E8, bits 7:4
give 8, hence "trap 8", and position 318 is garbage too.

The review warned that the position would not fit. **What was not foreseen is that the trap number
itself would be corrupted**: the system does not just lose the location of the error, it does not understand what
error it is.

## The encoding fork that has to be closed

| Option | Limit | Diagnostics |
|---|---|---|
| **current**: limit in `IR[15:4]` | up to **4095** | **completely broken** |
| alternative: limit in `IR[15:8]`, trap number = 1 in `IR[7:4]` | up to **255** | number correct, position lost |
| two-word CHK | any | full |

The choice has to be made on data: how many arrays in the real system are shorter than 256 elements.
This can be measured and has not been measured yet.

## Summary of all the release's numbers

| Metric | Compilation | Computational |
|---|---|---|
| Checks, code size | 6.2% (10 modules) | 15.5% |
| Checks, cycles | **2.74%** | **10.16%** |
| With hardware support | 2.36% | 5.08% |
| Hardware removes | **17.1%** (with the clean denominator) | **50.0%** (the design ceiling) |
| Hardware area | +0.32%…+0.85% (58…154 GE, depends on the mapping script; the lower bound is inside the noise) | — |
| Synthesis noise floor | ±0.35%, **larger than the effect** | — |
