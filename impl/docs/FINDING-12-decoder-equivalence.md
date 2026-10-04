[Русская версия](FINDING-12-decoder-equivalence.ru.md)

# Finding 12: the decoder equivalence check caught an extra occupied encoding

Test: `tb/decoder_equiv.cpp` + `tools/cmp_decoder.py`, target `make equiv`.

## Why this check is needed here in particular

RISC5 has **no trap on an unknown instruction**: any 32-bit word decodes
as a valid instruction (proven by the decoder probe, finding 2). So taking someone else's encoding
will show up not as a diagnostic but as a **silent change in the behaviour of existing code**.
Functional tests will not catch this: they execute only the encodings that
the compiler emits.

The review demanded exactly this check, and rightly so.

## Method

All **256 combinations** {IR[31:28] × op} × **5 operand sets** = 1280 runs
on two cores: the base one and the extended one. For each, the destination registers,
flags, cycle count and a checksum of modified memory are recorded.

Expectation: **exactly one** encoding differs, the new one.

## What was found

The first run showed **two** differing encodings:

| Encoding | Expected |
|---|---|
| `0001` op=1 | ✅ this is CHK |
| **`0011` op=1** | ❌ **not expected** |

The reason: the decode was written as `~p & ~q & v & (op == 1)`, and **bit `u` was not checked**.
So the instruction decoded both with `u=0` (`0001`) and with `u=1` (`0011`),
that is, it occupied **two slots instead of one**.

This does not break existing code (the compiler emits F0 LSL with neither `u` nor `v`),
but spending twice as much code space as needed is a mistake
that could never be found later.

The fix is one insertion of `~u &` into the RTL decode and a symmetric one in the emulator.
After it: **exactly one encoding differs**.

## Three encoding errors, caught in three different ways

| Error | Caught by |
|---|---|
| the original hypothesis "bit 28 is free" | the decoder probe (finding 2) |
| `STI`/`CLI` with condition "always" instead of "never" | tracing in the interrupt test |
| CHK occupied two encodings instead of one | **the equivalence check** |

None of the three would have been found by ordinary functional tests: all three concern
encodings the compiler does not emit, and which are therefore never executed in normal operation.
