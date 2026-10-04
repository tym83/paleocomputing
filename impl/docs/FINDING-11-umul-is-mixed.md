[Русская версия](FINDING-11-umul-is-mixed.ru.md)

# Finding 11: UMUL in RISC5 is not an unsigned multiplication but a mixed one

Test: `tests/t1_umul.s`, 6/6 on the real RTL.

## What the code says

`Multiplier.v`:
```verilog
assign w0 = P[0] ? y : 0;
assign w1 = (S == 32) & u ? {P[63], P[63:32]} - {w0[31], w0}
                          : {P[63], P[63:32]} + {w0[31], w0};
```

The addend `{w0[31], w0}` is **always sign-extended**, regardless of `u`.
The flag `u` controls only the last step (`S == 32`), that is, the handling of the sign of `x`.

Wiring (`RISC5.v:53`): `.u(~u)` is inverted, so
- the `MUL` instruction (u=0) → `mulUnit.u = 1` → subtraction on the last step → signed multiplication
- the `UMUL` instruction (u=1) → `mulUnit.u = 0` → addition on the last step → `x` unsigned

**But `y` remains signed in both cases.**

## Measurement

In format F0, `UMUL a, b, c` gives `x = R[b]`, `y = R[c]`: the **second** operand is treated as signed.

| Operation | Expected (truly unsigned) | Measured | Matches the model |
|---|---|---|---|
| `UMUL R, 2, 0xFFFFFFFF` | H = 1 (2 × 4294967295) | **H = 0xFFFFFFFF** | 2 × (−1) = −2 ✅ mixed |
| `UMUL R, 0xFFFFFFFF, 2` | H = 1 | H = 1 | both models agree |
| `MUL R, 0xFFFFFFFF, 2` | H = 0xFFFFFFFF (−2) | H = 0xFFFFFFFF | ✅ signed |

The first row distinguishes the models unambiguously: **a truly unsigned multiplication would give H = 1;
H = 0xFFFFFFFF was measured.** That is, `UMUL` computes
**x (unsigned) × y (signed)**.

In addition: `UMUL 0xFFFFFFFF, 0xFFFFFFFF` gives H = 0xFFFFFFFF, whereas a truly unsigned
multiplication would give 0xFFFFFFFE. This difference is what exposed the finding.

## Why this was not caught earlier

The Oberon compiler emits `UMUL` very sparingly, and in those places the second operand
is always positive, where mixed and unsigned semantics coincide. The error shows up
only when the second operand has its top bit set.

## Practical consequence

The name is misleading. If you write Oberon code that relies on unsigned
multiplication of large values, you have to **watch the order of operands**: only the one in field `b`
is treated as unsigned.

For the differential testbench this means that the reference model must reproduce
exactly this semantics, not the "correct" unsigned one. In `pdewacht/oberon-risc-emu`
the implementation via `idiv`/64-bit multiplication is **a separate point to cross-check**,
and a discrepancy here would be taken for an RTL bug rather than a quirk.
