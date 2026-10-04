[Русская версия](FINDING-08-encoding-decision.ru.md)

# Finding 8: the CHK encoding fork closed by data

> ## ⚠ FINDING WITHDRAWN
> The decision taken here (option **D**, an 8-bit limit) was **refuted** in finding 9:
> the justification was built on the static distribution of check sites, and that is a poor
> predictor of the dynamic gain. The final decision is option **E** (finding 10).
> The value of this document is in the method and the measured distributions, not in the conclusion.


The free space in the RISC5 instruction set is exactly 12 bits (`IR[15:4]`, proven by exhaustive search,
see finding 2). The array limit and the trap's service fields compete for this space.
The fork was decided not by taste but by two independent measurements.

## What competes

`Kernel.Trap` (Kernel.Mod:256) reads the word at `R15-4` and extracts from it:
- **bits 7:4**: the trap number (which error exactly)
- **bits 23:8**: the source position (where exactly)

| Option | Limit | What it occupies | Diagnostics |
|---|---|---|---|
| **C**: 12 bits | ≤ 4095 | `IR[15:4]`, overlaps both the number and the position | destroyed |
| **D**: 8 bits | ≤ 255 | `IR[15:8]`, the trap number is intact | error name intact, position lost |

## Measurement 1: coverage over compiled code

12 modules of the Norebo set, **154 index check sites**:

| Limit range | Checks | Share | Cumulative |
|---|---|---|---|
| 0…15 | 20 | 15.4% | 15.4% |
| **16…63** | **55** | **42.3%** | 57.7% |
| 64…127 | 12 | 9.2% | 66.9% |
| 128…255 | 4 | 3.1% | **70.0%** |
| 256…1023 | 18 | 13.8% | 83.8% |
| 1024…4095 | 4 | 3.1% | **86.9%** |
| 4096…65535 | 17 | 13.1% | 100% |

**Median limit: 32.** Minimum 6, maximum 8000.

## Measurement 2: declarations in all sources

An independent method, a different sample: **99 dimensions in 26 modules**, including the entire windowing
part (`Graphics`, `GraphTool`, `Draw`, `System`, `Edit`, `Net`, `SCC`), which the first
measurement did not cover.

| Range | Share | Cumulative |
|---|---|---|
| 1…15 | 24.2% | 24.2% |
| **16…63** | **53.5%** | 77.8% |
| 64…127 | 5.1% | 82.8% |
| 128…255 | 2.0% | **84.8%** |
| 256…1023 | 8.1% | 92.9% |
| 1024…4095 | 6.1% | **99.0%** |
| > 4095 | 1.0% | 100% |

⚠ **CORRECTED AFTER THE AUDIT: this is NOT a cross-check, it is an artifact.**

The median equals 32 in both methods because **32 is the modal value**: in method 2
it is **40 of 99 values (40.4%)**, in method 1 it is 36 of 139 (25.9%). With that much mass,
the median lands on 32 for any percentile from the 38th to the 78th.

What this 32 is: **29 declarations are literally `ARRAY 32 OF CHAR`**, Oberon's standard name buffer
(`IdLen`, `NameLen`). That is, "the median array in the system has 32 elements"
means "in Oberon the name buffer is 32 bytes", repeated forty times.

**The samples are not independent:** 9 of the 26 modules of method 2 are in the set of method 1, and they
account for 44 of the 99 dimensions.

**And the median is unstable:** on the compiled PO2013 set (137 sites) the same script
gives **a median of 24**.

The justification "8 bits cover the usual case with a fourfold margin" could not be built
on this basis, which was confirmed in findings 9 and 10.

| | 8 bits (≤255) | 12 bits (≤4095) | Difference |
|---|---|---|---|
| over compiled code | **70.0%** | 86.9% | 16.9 pp |
| over declarations | **84.8%** | 99.0% | 14.1 pp |

The discrepancy between the methods is explainable: the first weights by **check sites** (a large
array indexed in ten places is counted ten times), the second counts declarations
once each. That is why rare large arrays (`ORG.code: ARRAY 8000`, `ORG.str: ARRAY 2400`)
pull coverage down precisely in the first.

## Measurement 3: what happens to diagnostics, a run on a real error

A module with a deliberate out-of-bounds access 100 elements past the end of an array:

| Configuration | System message |
|---|---|
| **B**: software | `array index out of range at DiagTest pos 483` |
| **C**: 12 bits | 🔴 `access via NIL pointer at DiagTest pos 262` |
| **D**: 8 bits | ✅ `array index out of range at DiagTest pos 356` |

**Option C does not say "unknown trap": it confidently reports THE WRONG ERROR.**
The limit 100 = 0x64 landed in bits 7:4, gave trap number 4, and the system called an array
out-of-bounds access a NIL dereference. The programmer would go looking for a nonexistent
pointer bug.

This is worse than the review predicted (it expected the position to be lost) and worse than I wrote
in finding 7 ("unknown trap"): **the error is not lost, it is substituted**.

Option D names the error correctly. The position (356 instead of 483) is lost, because the limit
occupies the lower 8 bits of the position field, and the upper ones are filled with the opcode.

## Measurement 4: cost in area

| Option | Area, µm² |
|---|---|
| without CHK | 14 620.424 |
| C: 12 bits | 14 650.482 |
| D: 8 bits | 14 653.940 |

The difference between the options is **3.46 µm²**, with a synthesis noise floor of **±51 µm²**
(finding 4). That is, **the options are indistinguishable in area**: the choice of encoding
costs no area at all.

## Decision

**Option D adopted: an 8-bit limit, diagnostics preserved.**

Justification:
1. Coverage of 70–85% versus 87–99%: a difference of **14–17 percentage points**
2. The price of that difference is that the system stops naming the error correctly, and moreover **substitutes
   a different one** instead of admitting it does not know
3. In area the options are indistinguishable, so the choice is free
4. The median array in the system has **32 elements**, so 8 bits cover
   the "usual" case with a fourfold margin

For a system whose value lies in errors being **found and named**, trading
17 points of coverage for false error messages is a bad deal.

Arrays longer than 255 elements stay on the old two-instruction software
sequence. This is honest degradation: more expensive, but correct.
