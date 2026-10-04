[Русская версия](FINDING-25-prefetch-and-uv.ru.md)

# Finding 25. The first word of every program was lost, and 34% of the space turned out not to be empty

## How it started

After finding 24 two honest items remained open: the forms to which the disassembler gives no
name were not checked (93 568 words, 34% of the structural
space), and the circle "assembler → disassembler → assembler" is blind to a shared
error in the field layout. We took on the first.

## What these 34% are

All unnamed words are `u=1` or `v=1` on operations where `aluRes` does not read these bits.
That is, not garbage, but variants of named instructions.

Checked not by reading but by execution: `tools/gen_dontcare_test.py` generates
pairs "base form / form with the bit" on the same operands and XORs
the results. Zero means the bit is don't-care.

**27 of 32 comparisons gave zero. Five did not.**

| form | what it actually is |
|-------|----------------------|
| `DIV` u=1 | unsigned division: the divider gets `~u`, and inside it `sign = x[31] & u` |
| `FSB` u=1, v=1, u+v | the adder switches into integer/float conversion mode (`FPAdder.v`) |

For `DIV` the arithmetic agreed exactly: `0xF0F0F0F0 DIV 5` gives `0xFCFCFCFC`
signed and `0x30303030` unsigned, the difference is exactly `0xCCCCCCCC`, the measured
value.

The `FSB` forms with `u`/`v` are architecturally undefined: the compiler emits `FLT` and
`FLOOR` only via `FAD`. Their values are locked in the test as they are; no meaning is
ascribed to them.

## A side effect: 100% encoding coverage

Generic suffixes `.u` / `.v` / `.uv` were introduced for forms without a separate name, plus
the readable `UDIV`. `FLT`, `FLOOR`, `ADC`, `SBC`, `UMUL` were reduced to one
alias mechanism.

The sweep grew from 129 760 to 375 776 forms, word coverage from 66.1% to **100.0%**.
The circle on the real compiler output remained complete: 33 838 words.

In format F1 bit `v` also sets the fill of the upper half of the operand, and in
the suffix form it is already taken. The assembler now requires consistency:
with `v=0` the range 0…65535 is available, with `v=1` only −65536…−1.

## The main thing: the first word of the program was not executed

The divider probe gave zero where 14 was expected. The cause turned out not to be the divider.

RISC5 is a prefetching machine: the address bus carries `PC+1`, and what executes is
what is in the instruction register (`IR <= stall ? IR : codebus`). During reset
the bus already carries `StartAdr`, and the real hardware manages to latch the first word
into `IR` before reset is released.

`tb/run_tests.cpp` fed zeros onto the bus during reset. After reset `IR`
held zero, the first cycle executed `MOV R0,R0`, and the machine never read the first word of the program
at all: the bus already carried the second one.

**Bottom line: in all 264 directed checks the first instruction was not executed.**

This could stay hidden because every test started with an inconsequential
instruction: clearing a register that is zero anyway, or a write overwritten
by the following `MHI`. The symptom appeared only when the first instruction was
meaningful: `MOV R1, 100 ; MOV R2, 7 ; DIV R3, R1, R2` gave `R3 = 0`,
because `R1` stayed zero.

The same explains the "strange" numbers from the first measurements: losing
`MOV R1, 0xF0F0` turned the operand into `0xF0F00000`, and the division honestly produced
`0x30300000`.

### The most unpleasant part

This bug **had already been found and fixed**, in `tb/soc_tb.cpp`, with
the comment "this is exactly what I tripped over". The fix was not carried over to `tb/run_tests.cpp`.
An audit of the other four testbenches showed that everything is correct there:
the only defective one was the one that runs the directed ISA checks.

The reason the fix never made it over was the absence of a regression test.
Now there is one: `tests/t1_prime.s`, two checks, fails when the fix is removed.

Reset in `run_tests.cpp` was brought to the same form as in the other testbenches:
the bus is served from memory during reset too.

## Checked for misses

* remove serving the bus during reset → `t1_prime` fails, `make test` returns
  a nonzero code;
* after the fix all 264 previous checks pass without a single change to the expectations,
  so not one expectation had been fitted to the broken start-up.

## What remains

The circle still uses one field layout in both directions. The layout is
held up by the directed checks on the hardware, of which there are now 298 in 18 files.
