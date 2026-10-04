[Русская версия](FINDING-81-descriptor-loop.ru.md)

# Finding 81. The central-number loop with a descriptor: 8 cycles versus 9 without a check, and why this is not "a check cheaper than zero"

The same loop as in findings 55, 61 and 63: `sum += a[i]; i = (i+1) & 63` over
64 words, exactly 2 000 000 instructions from reset, iterations taken from the
counter `R5`. It is generated from one template (`tools/gen_bounds_bench.py`);
the configurations differ only in the check and address lines.

```
                                   instr./iter.   cycles/iter.
A — no check                            8.000          9.000
B — software (SUB + BCC)               10.000         11.000
E — CHKS                                9.000         10.000
D — descriptor, IDX                     7.000          8.000
```

All four rows were **measured** on the RTL (the core with descriptors); A, B and
E also on the base core and the `CHK` core, and the cycle counts matched. Row A
in finding 61 was derived (B minus two instructions); now it has been measured
and matched the derivation: 8 and 9.

Reproduce with `make desc-loop` (seconds).

## Negative control

The same D code, but with a descriptor for 32 elements while indices go up to
63: the loop stops after exactly **32** iterations, trapping at `i = 32`, and the
handler spins in place. So the check in `IDX` is real, and 8 cycles is the loop
with the check, not without it. This is part of `make desc-loop`; a failed
control fails the target.

## Why D is faster than A

Body of D:

```
IDX  R10, R2, R1, 2      ; check + element address
LD   R3, R10, 0
...
```

Body of A:

```
LSL  R10, R1, 2          ; element address
ADD  R10, R2, R10
LD   R3, R10, 0
...
```

`IDX` does not only the check but also the scaling and the addition, which are
two instructions in A. D's gain over A is **the fusion of address arithmetic**,
not a negative cost of the check. The check itself inside `IDX` adds no cycles
by construction: the comparison runs in parallel with the addition in the same
cycle. The honest breakdown:

| | cycles/iter. | difference from A |
|---|---:|---|
| A | 9 | — |
| B | 11 | +2: the check as separate instructions |
| E | 10 | +1: the check as a separate instruction |
| D | 8 | −1: the check costs 0, the address is one instruction instead of two |

The same address instruction without a check would give the same 8 cycles, so D
does **not** prove that the check "pays for itself". It proves something else:
if the bound travels in the pointer, the check can be hidden in an instruction
that is needed anyway. That is exactly what CHERI does: `ct.clw` on CHERIoT-Ibex
and `ldr … [c0, x9, lsl #2]` on Morello put the check inside the load, and the
purecap body is the same length as without CHERI (finding 63).

## Place on the ladder

| rung | where the bound lives | checks in the body | check cost in the loop | what it is paid with |
|---|---|---:|---:|---|
| RISC5 B | in the instruction | 2 instructions | +2 cycles (+22%) | — |
| RISC5 E (`CHK`) | in the instruction (12 bits) | 1 instruction | +1 cycle (+11%) | an alias in the instruction set |
| **RISC5 D (`IDX`)** | **in the pointer (12 bits of length + 20 bits of address)** | **0** | **0 cycles** | address ≤ 1 MB, length ≤ 4095, descriptor assembled outside the loop |
| CHERIoT-Ibex | in the capability (64 bits + tag) | 0 | not separable | pointer width, tags |

## What this does not show

* The loop is the best case for a descriptor: the descriptor is assembled once,
  outside the loop. Where it has to be assembled on every call, the picture is
  different; see finding 83.
* Only one workload and one scale (4 bytes).
