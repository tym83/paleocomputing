[Русская версия](FINDING-21-clean-numbers.ru.md)

# Finding 21: the release's main number decomposed by a cross build

The fifth auditor showed how to separate the cost of **executing** checks from the compiler's work
**generating** them. I reproduced his setup, and the decomposition turned out to be exact.

Reproducible: `tools/measure_cross.sh`.

## Setup

Configuration A differed from B in **two things at once**: it has no checks inside **and**
it does not emit checks for the workload. The A↔B difference summed two different quantities.

We build all four combinations:

| | checks inside the compiler | emits checks | how obtained |
|---|---|---|---|
| **A** | no | no | patched `ORG.Mod` built by compiler A |
| **A′** | no | **yes** | **stock** `ORG.Mod` built by compiler A |
| **B′** | yes | **no** | patched `ORG.Mod` built by compiler B |
| **B** | yes | yes | stock `ORG.Mod` built by compiler B |

## Result

| | Cycles | Instructions | Code, words |
|---|---|---|---|
| A | 29 121 384 | 17 407 595 | 5 775 |
| A′ | 29 277 745 | 17 508 073 | **6 348** |
| B′ | 29 761 304 | 17 987 770 | **5 775** |
| B | 29 919 963 | 18 090 546 | 6 348 |

**Setup control:** A′ and B each produce 6 348 words, B′ and A each 5 775.
The match is exact, so the pairs are compared on identical output.

### Decomposition

In total **B − A = 798 579 cycles = 2.74%**, and it decomposes exactly:

| Component | Estimate 1 | Estimate 2 | Discrepancy |
|---|---|---|---|
| **executing checks** | B − A′ = 642 218 (**2.21%**) | B′ − A = 639 920 (**2.20%**) | 0.4% |
| **generating checks** | A′ − A = 156 361 (0.54%) | B − B′ = 158 659 (0.54%) | 1.4% |
| sum | 798 579 | = B − A | ✅ exact |

The two independent estimates of each component agree; there are no cross terms.

## What changes in the published numbers

| Was | Now |
|---|---|
| "the cost of checks is **2.74%** of cycles" | **2.20%**, the cost of execution. 2.74% is an upper estimate that includes 0.54% of compiler work |
| "hardware removes **13.7%**" | **17.1%**, with the clean denominator of 642 218 cycles rather than 798 579 |
| "3.92% in instructions" | **3.33%** |

The wording that remains correct:

> Runtime checks cost **2.20% of cycles** on the workload "the compiler compiles
> five modules of the system". Another **0.54%** goes to the compiler's own work generating
> them: that is the cost not of the checks but of emitting them, and adding these quantities into one
> number is incorrect, even though a direct comparison of configurations does exactly that.

## Correction to finding 5

It says there: "the first measurement gave 0.43%, and that number was **wrong**; the difference between
the wrong and the right measurement is sixfold".

The auditor showed that this is incorrect **twice over**:

1. **The workloads differ.** 0.43% was taken on ten modules, 2.67% on five. On one and the same
   workload stage 1 gives **0.53%**, that is, **5.1×**, not 6×.
2. **0.43% is not an error but a component.** It is exactly the compiler's work generating
   checks, which costs 0.54% in the decomposition above. Stage 1 and stage 2 measure **different
   components of one quantity**, not "wrong versus right".

The wording "the number is off by a factor of six" is withdrawn.
