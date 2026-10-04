[Русская версия](FINDING-20-mutation-audit.ru.md)

# Finding 20: mutation audit: the harness caught a third of the breakages

The fourth auditor introduced **31 plausible bugs into the RTL** and ran the regression suite on each.
**10 of 30 caught. Mutation score: 33%.**

This is the worst and most useful of the five reports: it checked not the conclusions but **the harness's
ability to tell a working core from a broken one**.

## Three mechanisms that turned failure into "green"

### 1. An expectation that never fired counted as passed

`tb/run_tests.cpp` incremented the failure counter only on a mismatch. If the machine
never reached the address the expectation was tied to, the expectation simply did not fire,
and the test stayed green.

The auditor's proof: the mutation `B > chkLim` instead of `>=` (the very off-by-one
that `t2_chk` supposedly catches at the boundary) gave `checked 3/5, failures 0 ✅`.
**Two checks evaporated, and the harness reported success.**

This hid exactly the paths the tests were written for: the trap firing and
the return from the interrupt handler.

✅ **Fixed:** an expectation that did not fire is now a failure, with the unchecked ones listed.
Verified: the same mutation gives `failures 2 ❌`.

### 2. `make test` was green when the testbench failed to build

`|| true` in the build rules swallowed the error, and the test result was determined by grepping for an emoji
in the last line; for a missing binary that line is empty.
**Zero tests run, zero exit code, "ALL GREEN".**

✅ **Fixed:** the build must produce a binary, the run is checked by its exit code,
and `mkdir -p build` was added.

### 3. `make boot` was not a test

It always returned 0; the screen checksum was printed and compared with nothing.
The auditor showed: with `ROR` killed the machine gets stuck in the ROM, the screen is empty, the output is "✅", exit code 0.

🔴 **Not fixed**: see the section "Remains open".

## Two substantive gaps

### Floating-point arithmetic was not checked by anything

- across all tests, **zero checks of an FP numeric result**, only cycles;
- in the differential testbench, over 14.6 million instructions, **zero floating-point operations**;
- the planned test `t1_fp.s` (priority 🔴 3) **had not been written**.

Five FPU mutations passed: rounding removed, guard bit lost, `FSB` working
as `FAD`, `FLT` broken, multiplier zeroed.

The claim in finding 14, "including all floating-point arithmetic", was **factually wrong**.

✅ **Fixed:** `tests/t1_fp.s` was written, with **17 checks of numeric results** according to
Wirth's semantics (not IEEE). It includes cases where rounding is decisive: they were found
by exhaustive search, because the first version of the test used exact values (2.0 × 3.0)
and did not catch the "rounding removed" mutation. Now it does: `1.1 × 1.7` gives `0x3FEF5C2A`
with rounding and `0x3FEF5C29` without.

Verified: three out of three FPU mutations are now caught.

### The branch test distinguished fewer than half of the conditions

All four flag states had **V = 0**. Consequences:
`VS` never fires, `VC` always does; `S = N^V ≡ N`, so `LT`/`GE` are indistinguishable
from `MI`/`PL`; `S|Z ≡ C|Z`, so `LE`/`GT` are indistinguishable from `LS`/`HI`.

Four mutations passed: "VS/VC dead", "S = N", "LS ≡ LE", "MI ≡ LT".

✅ **Fixed:** three states were added, two with signed overflow (V=1) and one
with N=1 at C=0, V=0. **112 checks instead of 64.**

A trap along the way: for the last state I used `IOR`, but logical operations in RISC5
**do not touch C and V**: the flags leaked from the previous state, and six expectations
diverged. Replaced with `ADD`.

Verified: three out of three branch mutations are now caught.

## The check count was overstated twofold

"~360 checks" was claimed. That is **250 unique expectations**, run on two builds
of the core. The second build checks that "the extension broke nothing", not coverage.

The honest count after the rework: **250 unique expectations** (it was 180) in 14 tests,
plus 1280 runs of the decoder equivalence check.

## Remains open: acknowledged, not fixed

| What | Why it matters |
|---|---|
| **`make boot` does not check the checksum** and always returns 0 | a machine stuck in the ROM reports success |
| **`lockstep` and `boot` are not part of `make test`** | the strongest checks are outside the gate |
| **The differential testbench does not compare memory and devices** | the plan required comparing writes and a periodic full RAM comparison |
| **The decoder equivalence check does not catch a broken `BL`** | the signature has no PC, R15 or H; fields `b`, `c`, `cond` are fixed; not a single branch was taken in 1280 runs |
| **Interrupts: 6 checks** | restoring C and V, the contents of SPC, `CLI`, nesting, an IRQ during a multi-cycle operation are not checked |
| **Known RTL ↔ reference discrepancies** (`UMUL`, `MOV a,NZCV`) | never executed once in the differential testbench; the wording "the semantics match" is true only on the executed subset |
| **`ANN`, `XOR`, unsigned `DIV`, division by zero, `FLT`/`FLOOR`** | not covered by tests |
| **The core with CHK was not run in the differential testbench** | ✅ partly closed: targets `lockstep-chk` and `boot-chk` added, the run matched |

## The main lesson

Four auditors checked **conclusions**. The fifth checked **the instrument with which the conclusions
were obtained**, and found that the instrument shows green in three different situations
where it should show red.

None of the ten previous "green regression runs" was proof
of what it seemed to be.
