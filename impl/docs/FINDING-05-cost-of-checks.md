[Русская версия](FINDING-05-cost-of-checks.ru.md)

# Finding 5: runtime checks take up 6.2% of the Oberon system's code

**This is the main result of the release.** A number that is absent from the literature: the cost of the checks
that Oberon users have been paying since 1988 and that **cannot be switched off by normal means**.

Tools: Norebo (a command-line Oberon compiler), `tools/measure_checks.sh`,
`tools/count_traps.py`. Reproducible with one command.

## Why this number did not exist before

In `ORG.Open` (ORG.Mod:998): `check := v # 0; version := v;`
And `version = 0` occurs only for `MODULE*`: that is RISC-0, a mode without symbol files and without
exports, unsuitable for system code (and it also changes the module prologue).

**A "standard Oberon without checks" build does not exist.** It had to be created:
one line in `ORG.Mod`, `check := FALSE`, and a rebuild of the compiler.

## Method

- **Configuration B**: stock, the compiler from Wirth's unmodified sources
- **Configuration A**: the same compiler with `check := FALSE`
- Both were built by the same bootstrap compiler and differ in one line
- Both compile **the same workload**: ten modules of the system

The three-stage Norebo bootstrap was checked beforehand:
**"OK: Stage 2 and Stage 3 are identical"**, the fixed point is reached (test T-BOOT-3).

## Result

| Module | B, code words | A, code words | Δ | Δ% | B traps | A traps | Δ traps |
|---|---|---|---|---|---|---|---|
| ORS | 1756 | 1711 | −45 | 2.6% | 22 | 0 | 22 |
| ORB | 2325 | 2082 | −243 | **10.5%** | 234 | 10 | 224 |
| ORG | 6650 | 6411 | −239 | 3.6% | 202 | 0 | 202 |
| ORP | 6188 | 5798 | −390 | 6.3% | 402 | 12 | **390** |
| Kernel | 687 | 687 | 0 | 0.0% | 0 | 0 | 0 |
| Files | 879 | 835 | −44 | 5.0% | 36 | 4 | 32 |
| Modules | 1231 | 1135 | −96 | 7.8% | 71 | 0 | 71 |
| Texts | 2891 | 2592 | −299 | **10.3%** | 286 | 10 | 276 |
| Oberon | 719 | 654 | −65 | 9.0% | 51 | 4 | 47 |
| Fonts | 628 | 559 | −69 | **11.0%** | 46 | 3 | 43 |
| **TOTAL** | **23 954** | **22 464** | **−1490** | **6.2%** | | | |

## Cross-check

The measurement agrees with itself in three independent ways:

1. **`ORP`: Δ words = 390 and Δ traps = 390, an exact match.** That is how it should be:
   almost all of ORP's checks are NIL checks (360 of them) and NIL checks of a procedure variable (30),
   and those cost **exactly one word**, just the `BLR`, because the flags are already set
   by the preceding load.
2. **Where there is array indexing, Δ words > Δ traps**: a bounds check is
   **two** instructions (`SUB` + `BLR`), as the review predicted.
3. **`Kernel` gives zero in both configurations.**
   ⚠ **CORRECTED AFTER THE AUDIT.** I wrote that the reason was the `MODULE*` (RISC-0) mode.
   That is **wrong**: the source says `MODULE Kernel;` without an asterisk, and `ORP.Mod:901`
   sets `version := 0` only for `MODULE*`. The real reason is that the module is almost entirely
   written with `SYSTEM.GET`/`SYSTEM.PUT`, that is, it simply contains no array indexing
   and no pointer dereferencing, which are what generate checks.
   As "independent confirmation that the patch is correct" this is **not valid**, and it has been
   removed from the justification.

The remaining traps in configuration A (10–12 each in ORB and ORP) are **not an error**:
they are trap 0 (`NEW`, memory allocation) and trap 7 (`ASSERT`, a language construct).
They are emitted without the `check` guard and must remain.

## What exactly is checked in the system

By trap type in stock:

| Module | array index | NIL | type | division |
|---|---|---|---|---|
| ORP | — | 360 + 30 proc. | — | — |
| Texts | 21 | 251 + 4 proc. | 1 | — |
| ORG | 32 | 167 | 1 | 2 |

**NIL checks dominate, not array bounds checks.** This is an important refinement
to the framing of the experiment: the "cost of memory safety" in Oberon is first of all
the cost of pointer dereferencing, and only then of indexing.

## Wording for the article

> Runtime checks take up **6.2% of the code of a sample of ten modules**
> (1490 words out of 23 954). ⚠ Caveats without which this must not be published: **71% of the words in this
> sample are the compiler itself** (ORS/ORB/ORG/ORP); inside the compiler the checks take up
> 5.42%, outside it 8.14%; **the entire windowing subsystem** (Display, Viewers, TextFrames,
> Graphics, Draw), that is, the code with the densest indexing, **is not in the sample**.
> Across modules the spread is from 0% (`Kernel`) to **11%** (`Fonts`).

And a more caustic one, which follows from the comparison with finding 4:

> ⚠ **WITHDRAWN AFTER THE AUDIT.** The wording combined percentages with different denominators
> (code words and µm²) into a conclusion that does not follow from them. It also relied on an obsolete
> area value. Must not be published.

## ⚠ Corrections after the audit

**Denominator.** Below, **2.67%** is published: that is Δ divided by configuration B (stock).
In findings 6, 7 and 16 the same number is divided by A (without checks) and gives **2.74%**.
These are the same measurements with different denominators. The canonical choice for the release:
**divide by B**, that is, "checks account for 2.67% of the cycles of the running system".
The wording "they cost +2.74% relative to the system without them" is the same number with a different base.

**The code-generation confound has not been fully eliminated.** See the section below.

## Dynamic cost: 2.67% of cycles

Measured on the workload **"the compiler compiles five modules of the system"**, that is,
on exactly the "system rebuilds itself" case that the review called the only
real gap in the literature.

| | With checks | Without checks | Δ | |
|---|---|---|---|---|
| cycles | 29 919 963 | 29 121 384 | 798 579 | **2.67%** |
| instructions | 18 090 546 | 17 407 595 | 682 951 | **3.78%** |

The latency model is taken from `tb/cycle_model.h` and **checked against the real RTL
cycle by cycle on 61 instructions, with zero mismatches** (including all multi-cycle operations
and the back-to-back penalty).

### 🔴 The trap I fell into at first

The first measurement gave **0.43%**, and that number was **wrong**.

If you simply run the compilers of configurations A and B, the cycle difference only reflects
that compiler A **does not generate** checks, that is, it does less work during
code generation. That is not the cost of the checks at execution time.

What is actually needed is **the second bootstrap stage**: use compiler A to build the compiler
again, which yields binary code with no checks inside; do the same through B to get one
with checks. And only then run **the same workload** with both.

The difference between the wrong and the right measurement is **sixfold** (0.43% versus 2.67%).

## Static versus dynamic: a 2.3× discrepancy

| Metric | Value |
|---|---|
| **Code size** | **6.2%** |
| **Execution cycles** | **2.67%** |
| Instructions | 3.78% |

**Checks take up twice as much space as time.** The explanation is direct: they are scattered
throughout the code, but hot loops execute them disproportionately less often; and each check
is cheaper than the average instruction: a `BLR` that is not taken costs 1 cycle, `CMP` also 1, whereas
the average instruction on this workload costs **1.642 cycles** (because of two-cycle loads
and stores).

The same explains the gap within the dynamic numbers: 3.78% of instructions but 2.67% of cycles.

## ⚠ The comparison with the literature is WITHDRAWN

The first edition said here "Oberon is at the cheap end of the range Morello / Toooba /
MTE / MPX". The auditor found the primary sources, and three of the four numbers in my retelling
**distorted the meaning**:

| Number | Source | What it actually is |
|---|---|---|
| Morello 28.01% → 5.70%, "estimate 1.8–3.0%" | Watson et al., UCAM-CL-TR-986, Cambridge, 2023 | 5.70% is on the **Benchmark ABI**, which the authors explicitly declared unsuitable for security analysis, and on **unreleased** RTL. Full protection on the original design = **28.01%**. "1.8–3.0%" is the **P128 mode, which has no capability checks at all**: it is the cost of pointer width alone |
| Toooba 9% | Rugg, UCAM-CL-TR-984, 2023 | SPEC CINT2006 train, FPGA @ 25 MHz. What dominates is **not the execution of checks** but cache misses from metadata: for `xalancbmk` **70% of the added cycles are D-cache misses** |
| MTE 4.00% / 11.98% | Li et al., arXiv:2509.22027 | these are **ASYNC and SYNC, two different protection modes**, not the spread of one quantity. Heap only, without stack and globals |
| MPX "1.47–2.52×" | Oleksenko et al., POMACS 2(2):28, 2018 | **1.47–2.52× = +47…+152%**, not 1.47–2.52% |

**Comparing with our numbers is not possible, on four independent grounds:**

1. **Our machine structurally cannot show where the main cost in those works lies.**
   In Morello and Toooba most of the overhead is cache pressure from
   128-bit pointers. RISC5 is scalar, without caches, without a predictor, with zero-latency
   memory. This component is **zero by construction** for us.
2. **Different things are protected.** Ours: index and NIL within a type-safe language.
   CHERI: spatial and referential safety of arbitrary C/C++
   with provenance. MTE: probabilistic spatial **and temporal** safety.
3. **Different baselines.** Morello's baseline is hybrid aarch64 with doubled pointer width,
   and that alone costs 1.8–3.0% before any CHERI.
4. **The scale differs by four orders of magnitude:** 30 million cycles of self-build versus SPEC ref.

**The only defensible comparison** is with the MiBench numbers from the same Rugg dissertation
(Piccolo 14%/16%, Flute 16%/16%, Toooba 16%/10%): also a small code size, also without
pronounced cache effects. There our 2.20% is 5–6 times lower, and that is explained by the fact that
**Oberon does not pay for pointer widening**, not at all by "checks being done in software".

## The limitation that remains

There is one workload: compilation. It is saturated with pointer and structure work, that is,
favourable to NIL checks and unfavourable to bounds checks. The number for a workload
of a different profile (computational, with dense array indexing) will be different, and it should be
measured separately before generalising.
