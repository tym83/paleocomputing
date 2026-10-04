[Русская версия](FINDING-50-fp.ru.md)

# Finding 50. Floating point: the last gap is closed

The QEMU target computes fractional numbers exactly as Wirth's circuit does.
**1056 cases, zero mismatches** against a reference that was checked against
the real circuit description.

## Why not softfloat

QEMU has a ready-made IEEE 754 implementation, and the temptation to use it is
strong. It cannot be used: Wirth's unit computes **differently**.

| | IEEE 754 | Wirth's circuit |
|---|---|---|
| rounding | to nearest even | **by adding one** |
| subnormal numbers | gradual loss of precision | **flushed to zero** |
| infinity | from overflow and division by zero | **only from division by zero** |

Substituting softfloat would have meant getting plausible but different
numbers, and not noticing until someone compared the compiler's output.

So the logic was carried over from the reference implementation verbatim,
including places that look like typos. They are not typos: they are properties
of the circuit.

## How it fits into the instruction set

There are four opcodes (RISC5.v:90-93): 12 addition, 13 subtraction,
14 multiplication, 15 division. Two subtleties:

**There is no subtraction.** In hardware it is addition with the sign of the
second operand flipped: `{FSB^C0[31], C0[30:0]}` is fed into the same adder
(RISC5.v:64). The circuit has no separate subtractor.

**For addition, two flags change the operation entirely:** `u` turns it into
integer-to-float conversion, and `v` into rounding down to an integer. So four
different operations live under one opcode.

## What the comparison showed

The first run gave 24 mismatches out of 1056, all in conversions. The cause
turned out to be **in the check, not in the implementation**: the reference
computes a conversion with the second operand equal to zero, while the
comparison program fed the same number twice.

The instructive part: all of the arithmetic matched on the first try, and it was
the check that was wrong. Had I trusted it and started fixing the
implementation, I would have broken working code.

## State of the target

Written and verified: integer core, memory, branches, ports, timer, SPI disk,
display, keyboard, mouse, **floating point**.

No gaps remain.

## How to reproduce

The first comparison was done by hand, and there was nothing to repeat it with:
neither the reference table nor the ROM image was in the repository. Now it is
a single target:

```
make -C qemu build
make -C qemu fp
```

It builds the table from the same `risc-fp.c` (`qemu/test/fp_ref.c`), assembles
`fp.s` with operands at word 64, runs QEMU headless, dumps memory from
`0x10000`, and compares via `fp_diff.py`. The operands live in one place,
`VALS` in `fp_diff.py`, so the table and the ROM cannot diverge.

That the program has run to completion is detected not by time but by a marker
that `fp.s` writes right after the results: our build has no human monitor.

A check must be able to fail. Inside the target, the same comparison is run on
corrupted output and on a corrupted reference, and it must turn red both times.
This was also verified on the target itself: without adding one during rounding
in multiplication, `fp.c` gave 4 mismatches out of 1056.

The comparison runs in CI, in the `qemu` job of the `hardware` workflow, right
after the comparison against the model extracted from RTL.
