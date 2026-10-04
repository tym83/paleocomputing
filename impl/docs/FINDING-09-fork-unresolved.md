[Русская версия](FINDING-09-fork-unresolved.ru.md)

# Finding 9: the encoding fork is NOT closed by data; statics predict dynamics poorly

A correction to finding 8. The decision taken there based on the distribution of array lengths turned out
to be wrongly justified, and this only came to light after a measurement on the second workload.

## Full measurement matrix

| Option | Compilation (pointers) | Computational (arrays) |
|---|---|---|
| **12 bits**, diagnostics broken | 13.9% | **50.0%** |
| **8 bits**, diagnostics intact | 13.0% | **15.8%** |

(the share of the cost of checks that hardware support removes)

Absolute numbers:

| | Compilation | Computational |
|---|---|---|
| without checks | 29 121 384 | 54 371 193 |
| software | 29 919 963 (+2.74%) | 59 894 995 (+10.16%) |
| CHK 12 bits | 29 808 859 (+2.36%) | 57 133 094 (+5.08%) |
| CHK 8 bits | 29 816 137 (+2.39%) | 59 022 793 (+8.56%) |

## Where I went wrong

The decision in finding 8 relied on **the distribution over check sites**: a median limit of
32, eight bits are enough for 70–85% of sites. The conclusion seemed obvious.

But **check sites are a poor predictor of the dynamic gain**. In computational code the hot
loops work precisely on **large** arrays: in the benchmark, sorting works on 1000
elements, matrix multiplication on 3600. **6 checks out of 15** fell under the 8-bit limit,
and exactly not the ones executed millions of times.

Hence the collapse: 50.0% → 15.8%, that is, **more than threefold**, even though statically
coverage dropped by only 17 percentage points.

**A general lesson:** encoding decisions need a **dynamic profile**
(which arrays are indexed more often), not a static count of sites. I had the latter,
and it was misleading.

## Three options, all with a measured price

| Option | Gain in cycles | Diagnostics | Price |
|---|---|---|---|
| 12 bits, one word | 13.9% … **50.0%** | 🔴 **reports THE WRONG error** | trust in diagnostics |
| 8 bits, one word | 13.0% … 15.8% | ✅ error name intact | 3× of the gain on computational code |
| two words | ~50% in cycles, 0 in code | ✅ full | one word per check |

## Why the two-word option is not a way out either

It would seem two words solve everything: a full limit and intact diagnostic fields.
But the processor would have to **skip the second word**, and that is a cycle, so the gain in cycles
disappears along with the gain in code. A two-word CHK is no faster than the software pair.

## The architecturally correct answer, which cannot be implemented here

`CHK idx, Rlim`: the limit in a **register**, not in an immediate field. Then:
- the limit is a full 32 bits, coverage 100%
- `IR[15:4]` is entirely free for the trap number and the position, diagnostics are complete
- one word, one cycle

The condition: the limit must be **hoisted out of the loop**. For a loop over an array of fixed length
this is an obvious optimisation: load the limit once before the loop.

**But the Oberon code generator cannot hoist loop invariants** and will not learn to without
rewriting `ORG` (it has no register allocator, and the `Item` model reloads
values from memory on every statement). Without hoisting, `CHK idx, Rlim` needs a `MOV`
for every check: two words and two cycles again.

## Honest outcome

**The fork is not closed by data.** Each of the three implementable options pays with something
substantial, and the choice depends on what matters more for a particular system:

- maximum speed on computational code is needed and diagnostics are not critical → 12 bits
- the system is valued for naming errors correctly → 8 bits
- the code generator can be rewritten with invariant hoisting → a register limit,
  and then all three properties come at once

For the release this is better than an unambiguous decision: **a real engineering fork is shown
with the measured price of each branch**, rather than a choice rationalised after the fact.

## What remains unmeasured

**The dynamic indexing profile**: how many times per run the check of each
array executes, broken down by length. This would close the question for good and is cheap:
a counter on each CHK in the emulator, grouped by limit.
