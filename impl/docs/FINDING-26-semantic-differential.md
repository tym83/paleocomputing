[Русская версия](FINDING-26-semantic-differential.ru.md)

# Finding 26. A semantic differential and a cure for four old ailments

## What was open

After finding 25 one honest hole remained: the circle "assembler → disassembler
→ assembler" uses one field layout in both directions, and a shared error in
it is invisible to it. In addition, three known but unfixed spots were outstanding: the measurement
`measure_clean.sh`, the narrow signature in the decoder equivalence check, and the
differential testbench, which did not compare memory.

## The semantic differential

`tools/alu_model.py` is a model of the integer core written from `RISC5.v`
separately from the assembler: operations from `aluRes`, flags from `nn`/`zz`/`cx`/`vv`,
`H` from `MUL ? product[63:32] : DIV ? remainder : H`.

`tools/gen_alu_diff.py` builds random programs and checks two things at once:

1. the model's prediction matches the hardware: the result and all four flags, and
   for `MUL`/`DIV` also `H`;
2. the model, having decoded the word produced by the assembler, names the same operation
   that was asked for.

The chain is closed without a shared layout: an error in the assembler's layout would break
item 2, an error in understanding the semantics would break item 1.

900 cases, **4650 checks**, all pass. Covered: register and
immediate forms, `ADC`/`SBC` with carry, signed and unsigned
multiplication and division, the special `MOV` forms (`H`, `NZCV`, `MHI`).

Checked for misses: seven mutations of the model, all caught:

| mutation | failures |
|---------|----------|
| `ANN` instead of `IOR` | 56 |
| `ROR` without rotation | 74 |
| `ASR` as a logical shift | 64 |
| `ADC` without carry | 28 |
| signedness of multiplication | 51 |
| division rounding | 38 |
| flag `N` from bit 30 | 796 |

## Along the way: the program did not fit into the address space

The first large differential gave 1720 "failures", and all of them were
**expectations that never fired**, not value mismatches.

The program counter is 22 bits (`wire [21:0] PC`), and the test program sits at
`ORG = 0xFFE000`. From `ORG` to the edge there is room for exactly **2048 words**. A longer
program silently wrapped around to address zero: instructions kept
executing, but the word index never again matched the expectations, and all
checks beyond the edge simply did not fire.

This was caught by the rule "an expectation that did not fire is a failure", added by the mutation
audit. Without it the differential would have shown 2930 green checks and silence about
the other 1720.

Fixed in two layers: the harness now refuses to load a program longer than
the available space, and the generator splits the differential into files with a margin (the model
state is reset at a file boundary, since the hardware starts each file from reset).

## Measuring the cost of checks: three silencers in a row

`tools/measure_clean.sh` did not work. There turned out to be three reasons, all of them silenced
failures.

**Wrong path.** The script looked for the configurations' binary modules in `build/cfgX`,
where only the `ORG.Mod` source lives; they are built by stage 1 in `build/s2X`.
The copy ran with `|| true`, so the missing files were swallowed: all three
configurations ended up being the same compiler, the "identity check on the generated
code" trivially passed, and the difference came out at exactly **+0.00%**.

**Division by zero.** The zero difference led to a `ZeroDivisionError` at the very
end, the only outward sign that something was wrong.

**A version lock.** Configuration E stamps version 2 into its output: that is a
deliberate lock, the loader checks `IF ch = versionkey` with
`versionkey = 1X`, and code with the hardware `CHK` will not load into an old system.
The lock works. But stage 2 builds the compiler **with compiler E**, so
it gets version 2, and the standard loader refused to run it. The run
produced an empty log, and `set -e` aborted the script right after the line "workload:".
That was the "the script prints nothing" symptom.

Fixed: a hard check that the modules exist, protection against a zero denominator, and
`tools/rsc_setversion.py`, which resets the version to 1 on a copy in `build/`, deliberately and
only for the measurement testbench.

The honest measurement after the fix (the generated code is identical for all three):

| configuration | cycles | instructions |
|--------------|-------|-----------|
| A: no checks | 29 277 745 | 17 508 073 |
| B: software | 29 919 963 (+2.19%) | 18 090 546 (+3.33%) |
| E: hardware | 29 820 629 (+1.85%) | 17 994 137 (+2.78%) |

The hardware removes 15.5% of the cost of checks. The figure +2.19% agrees with the 2.20%
obtained earlier by the 2×2 decomposition: two independent methods gave the same result.

## Decoder equivalence: the signature was narrow

The signature consisted of `R5`, `R6`, the flags, cycles and a memory checksum, and
field `a` was hard-wired to 5. Hence two holes: a corrupted `BL` was not visible (neither `R15`
nor `PC` was in the signature), and of the 16 branch conditions exactly one was checked:
in format F3, field `a` is the condition.

Now the signature covers all 16 registers, the flags, `PC` and `H`, and field `a`
is swept in full: **20 480 combinations instead of 1280**. Still exactly
one encoding differs: `0001`/`op=1`, that is, `CHK`.

## The differential testbench: memory was not compared

The comparison covered registers, flags and `H`. A wrong memory write remained
invisible until the value was read back into a register, so a discrepancy could
travel millions of instructions away from where it arose.

A periodic full RAM comparison was added. Over 14.6 million instructions that is 58
full passes.

The very first run produced a discrepancy, and an explainable one: `00FFE27C` versus `FFFFFA7C`,
the same return address in different ROM maps (the RTL keeps the ROM at `00FFE000`,
the reference at `FFFFF800`). This rule was already applied for `R15`; now it is
extended to memory, and the allowances are counted: 99 of them over the whole run.

Checked for misses: flipping one bit in the RTL's memory is caught by the comparison.

## A small thing noticed along the way

`ADC` and `SBC` with a negative immediate are unreachable: the alias fixes
`v=0`, while a negative value requires `v=1`. Such a form has to be written as `ADD.uv` /
`SUB.uv`. The assembler explains this in the error text.
