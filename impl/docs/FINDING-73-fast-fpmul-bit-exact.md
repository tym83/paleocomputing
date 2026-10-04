[Русская версия](FINDING-73-fast-fpmul-bit-exact.ru.md)

# Finding 73. The fast FP multiplier is bit-for-bit equal to Wirth's multiplier

Wirth's `FPMultiplier.v` computes the mantissa product by shift-and-add:
24 steps, an `FML` instruction costs 26 cycles, and a back-to-back one 32
(Finding 01). `rtl/FPMultiplierFast.v` computes the same 24×24 product with a
single multiplication, and repeats rounding, normalization and saturation
**line for line**. Two variants:

| define | `FML` cycles | what it is in hardware |
|---|---|---|
| — (stock) | 26, back-to-back 32 | sequential shift-and-add |
| `FPMUL_FAST` | 1 | a combinational multiplier right on the path to the registers |
| `FPMUL_FAST` + `FPMUL_FAST_REG` | 2 | the product is latched into a register, the output comes one cycle later |

It is wired in following the `WITH_CHK` pattern: an `ifdef` in `RISC5.v`, the
same flags in Verilator (`build/obj_nbf`, `build/obj_nbr`), in the FPGA build
(`fpga/Makefile`, variants `fmul`, `fmul2`) and in the cycle model
(`tb/cycle_model.h`).

## Why the result must match

After 24 steps, the original's register `P` holds the **exact** 48-bit
product of the mantissas with their hidden ones: the sum is 25 bits wide, the
carry is not lost, and it is shifted exactly 24 times. Rounding (`+1` at
25 bits, selection by `P[47]`) and the exponent are read from `P` and from the
operands; the fast variant takes those as is. So only one thing can differ:
whether `prod` equals the value of `P`. This is arithmetic, but it cannot be
asserted without a check.

## Verification

`tb/fpmul_diff.cpp` runs the original module cycle by cycle as the reference,
the fast one next to it, and `fp_mul` from `risc-fp.c` as a third vote. The
modules have separate clocks and `run` signals: the blocks finish at
different times, and an extra edge after the end would change the counter and,
with it, the behavior of the next back-to-back operation.

| set | operations | fast ≠ original | original ≠ risc-fp.c | wrong cycles |
|---|---:|---:|---:|---:|
| all 256×256 exponent pairs, random mantissas | 65,536 | 0 | 0 | 0 |
| boundary mantissas × 15 exponents × signs | 72,900 | 0 | 0 | 0 |
| random 32-bit pairs | 10,000,000 | 0 | 0 | 0 |
| back-to-back chains (without dropping `run`) | 90,213 | 0 | 0 | 0 |

The same holds for both variants (single-cycle and two-cycle). Cycles are
compared too: the original takes 26, back-to-back 32; the fast one takes 1
(or 2), and the same back-to-back.

**The check can fail:** removing the rounding `+1` in one branch of the fast
module gives 53,823 mismatches out of 229,418 operations on a short run.

Beyond the module, the whole system on the new core:

* the model prints byte-for-byte the same text (Finding 74);
* the compiler compiling itself produces byte-for-byte the same
  `ORS/ORB/ORG/ORP.rsc` on all three cores (Finding 75);
* system boot gives the same screen checksum `B5DFC933`, and the cycle model
  with the variant taken into account matches the RTL over 12 million
  instructions (`make boot-fast`).

## What this does not prove

An exhaustive search over all 2⁴⁶ mantissa pairs was not done; completeness
rests on the reasoning above plus 10 million random pairs and the boundary
cases. There is no formal equivalence proof (SAT on the unrolled original).

## How to reproduce

```
cd impl
make fpmul-diff                # 10 million pairs per variant, a few minutes
make fpmul-diff FPMUL_N=100000 # quick
make boot-fast
```
