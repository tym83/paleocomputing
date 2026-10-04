[Русская версия](FINDING-10-split-encoding.ru.md)

# Finding 10: the fork is closed; a limit in two pieces gives everything at once

A correction to findings 8 and 9. Both assumed that the array limit and the diagnostic fields
compete for the same bits. That turned out to be wrong: there are more free bits
than I thought, they just do not sit next to each other.

## What I missed

The fields of format F0: `IR[27:24] = a`, `IR[23:20] = b`, `IR[19:16] = op`, `IR[3:0] = c`.

The CHK instruction **does not need field `a` at all**: when it fires, `ira0` is forced
to 15 (the link register); when it does not fire, no register is written at all.

And `Kernel.Trap` (Kernel.Mod:256) reads only these from the word:
- **bits 7:4**: the trap number
- **bits 23:8**: the source position

**`IR[27:24]` lies outside both fields.** So the limit can be assembled from two pieces:

```
   31:28  27:24   23:20  19:16   15:8    7:4   3:0
   0001   limit   index  0001   limit   trap   1100
         (upper 4)              (lower 8) number (=MT)
```

12 bits of limit, the trap number in place. Only the source position is lost,
exactly as in the 8-bit option.

## Check on a real error

An array of 1000 elements (beyond 8 bits, within 12), a deliberate out-of-bounds access:

| Configuration | Code | Coverage | System message |
|---|---|---|---|
| B: software | 20 words | — | `array index out of range` ✅ |
| C: 12 bits in IR[15:4] | 19 words | CHK ✅ | 🔴 `unknown trap 8` |
| D: 8 bits | **20 words** | **not covered**, falls back to software | `array index out of range` ✅ |
| **E: limit in two pieces** | **19 words** | **CHK ✅** | **`array index out of range` ✅** |

## Final matrix

The share of the cost of checks that hardware support removes:

| Option | Compilation | Computational | Diagnostics |
|---|---|---|---|
| 12 bits in `IR[15:4]` | 13.9% | 50.0% | 🔴 reports THE WRONG error |
| 8 bits in `IR[15:8]` | 13.0% | 15.8% | ✅ |
| **limit in two pieces** | **13.7%** | **50.0%** | ✅ |

Absolute cycles:

| | Compilation | Computational |
|---|---|---|
| without checks | 29 121 384 | 54 371 193 |
| software | 29 919 963 | 59 894 995 |
| **limit in two pieces** | **29 810 267** | **57 133 094** |

On the computational workload E gives **a bit-for-bit identical result** to the option with maximum
coverage (57 133 094 cycles, 15 CHK, 0 software traps).

**Option E dominates on every axis.** There is no fork any more.

## How it was found

Not by reasoning but by a dynamic profile. A profiler in the emulator counted how many
**times the check is executed** for each length class:

| Limit range | Compilation | Computational |
|---|---|---|
| 0…15 | 31.6% | 0% |
| 16…63 | 52.0% | 31.6% |
| 64…127 | 1.3% | 0% |
| 128…255 | 0.1% | 0.0% |
| **256…1023** | 1.9% | **68.3%** |
| 1024…4095 | 0.5% | 0.1% |
| 4096…65535 | 12.6% | 0% |

**68.3% of check executions on the computational workload fall on arrays of 256…1023**, exactly
the range the 8-bit limit does not cover. That explained the collapse from 50% to 15.8%.

And the profile gave **a predictive model**: the ratio of dynamic coverage predicts
the ratio of the gain.

| Workload | Dyn. coverage 8/12 bits | Measured gain 8/12 |
|---|---|---|
| compilation | 97.3% | 93.5% |
| **computational** | **31.6%** | **31.6%** |

On the computational workload the match is **exact**. This is what prompted me to look for bits where I
had not looked: it became clear that the question was not "what to sacrifice" but "where to get four more bits".

## Lesson

Three findings in a row on one fork:
- **8**: decided by the static distribution of check sites; the justification was wrong
- **9**: a measurement on a second workload refuted the decision; the fork was declared open
- **10**: the dynamic profile showed where to look, and the fork closed completely

**The static count of sites was misleading; the dynamic profile solved the problem.**
For the article this is stronger than any of the three intermediate results: it shows measurement
correcting reasoning three times in a row.
