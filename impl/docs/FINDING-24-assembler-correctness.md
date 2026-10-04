[Русская версия](FINDING-24-assembler-correctness.ru.md)

# Finding 24. How correct our assembler is, and three Wirths who disagree

## The question

The assembler `tools/asm.py` is a measuring instrument: it does not take part in the path
"Oberon → machine code" (that is `ORG.Mod`'s job); it is there to put
a specific word in memory and ask the hardware what it will do with it. All
250 checks in `tests/` rest on it. The question: what confirms its
correctness, other than the tests being green?

## Coverage

The assembler knows 16 operations of formats F0/F1, three `u` forms (`ADC`, `SBC`,
`UMUL`), load/store and 16 branch conditions.

The tests contain **all 16 conditional branches** and all operations except
`ANN` and `XOR`: these two are not checked by anything.

## An independent cross-check: Wirth's disassembler

Project Oberon has its own disassembler, `ORTool.Mod`, procedure
`opcode`. It is an authority independent of us, and cross-checking against it gave two
discrepancies. Both turned out to be real.

### 1. The condition table in ORTool is wrong and incomplete

`ORTool.Mod` defines `mnemo1` only for 11 indices out of 16: missing are
3, 4, 7, 11, 12. And two of the filled-in ones contradict ours:

| code | ORTool | ours | RISC5.v |
|-----|--------|-------|---------|
| 2   | `LS`   | `CS`  | `(cc == 2) & C` → CS |
| 10  | `HI`   | `CC`  | the same inverted → CC |
| 4   | —      | `LS`  | `(cc == 4) & (C\|Z)` → LS |
| 12  | —      | `HI`  | the same inverted → HI |

The hardware is right, not the table. Proven not by reading: if ORTool's layout is plugged into our
assembler, **4 of 112 branch checks fail on the RTL**.
Our layout gives 112 of 112.

### 2. The branch offset width: three different numbers

| source | expression | width |
|----------|-----------|--------|
| `ORG.Mod`, the code generator | `off MOD 1000000H` | 24 bits |
| `RISC5.v`, the hardware | `disp = IR[21:0]` | 22 bits |
| `ORTool.Mod`, the disassembler | `w MOD 100000H` | 20 bits |

Three parts of one system, written by one person, disagree on the width
of one field.

The discrepancy is invisible in practice: a 1 MB address space is 18 bits in
words, and nothing reaches the disputed bits. All three agree on the bits
that are reachable.

That the hardware really ignores bits 23:22 was verified by execution, not
by reading the Verilog: `tests/t1_branch_width.s` runs two branches
differing in exactly these bits, and both arrive at the same point.

## What was fixed on our side

Our assembler masked the offset to 24 bits and **checked the range also at
24**, that is, it accepted branches from ±2²¹ to ±2²³, encoded them silently, and the machine
went to the wrong place.

The bug is latent and unreachable on our address space: 2²¹ words is
8 MB with one megabyte available. No existing test touched it, and
the behaviour of none of them changed.

Fixed with a separation of roles:

* **encode** like `ORG.Mod`, 24 bits, so that the word matches what
  the real compiler emits for the same branch;
* **check the range** by the hardware, 22 bits, with an explicit error, because
  beyond that the machine will not jump the way it is written.

## What holds it up now

The assembler's self-test (`asm._selftest`) got two kinds of checks: exact
expected words and mandatory rejections (`must_fail`) on out-of-range values.
The self-test is the first line of `make test`.

Checked for misses:

* weaken the range check back to 24 bits → the self-test fails, `make test`
  returns a nonzero code;
* plug in the condition table from ORTool → 4 of 112 branch checks fail.

The first attempt to embed the self-test into `make test` was green on a breakage: the exit
code was swallowed by the `| tail -1` pipeline. The same class of failure the
mutation audit found (`|| true`). Rewritten via a file and an explicit check of the code.

## Three open items closed

### 1. ANN and XOR

`tests/t1_logic.s`: 10 checks on the hardware, the register and immediate
forms of `AND`, `ANN`, `IOR`, `XOR`, plus `ANN` as negation. The semantics are taken from
`aluRes` in RISC5.v (`B & ~C1` for ANN). Checked for misses: swapping
`AND`/`ANN` in the table breaks all 10.

### 2. Byte-for-byte cross-check against the real output of ORG.Mod

`tools/rsc.py` parses object files according to the layout taken from `ORTool.DecObj`.
The parsing check agreed with the compiler log: 1756, 2325, 6650, 6188 words and
key `E6FCC519`.

`tools/disasm.py` is a disassembler derived from `RISC5.v`. `tools/roundtrip.py`
runs the circle "word → disassembler → assembler → word" over every code word.

**Result: 33 838 words of the real compiler reproduced bit for bit.**

The first run closed the circle on only 15 628 of 16 919 and exposed four real
gaps in the assembler:

* **the trap payload.** `ORG.Mod` emits `Put3(BLR, cond, Pos()*100H +
  num*10H + MT)`: bits 23:8 hold the source position, bits 7:4 the trap number.
  The hardware does not read them in the branch; the handler extracts them back from the instruction and
  prints "pos 6734 TRAP 4". This is 7.6% of all the compiler's code, and the assembler
  could not express them;
* **the immediate range in F1.** The hardware builds the operand as
  `C1 = {{16{v}}, imm}`, so with `v=1` the range −65536…−1 is available. We checked it as
  16-bit signed and rejected everything below −32768. The compiler emits such values:
  `SUB R0,R0,-65536`, the word `50090000` in ORG.rsc;
* **`MOV a,H` and `MOV a,NZCV`.** There was a `TODO(verify)` marked "encoding
  ambiguous". There is no ambiguity: `aluRes` gives
  `(~u ? C0 : (~v ? H : {N,Z,C,OV,20'b0,8'h53}))`. Closed;
* **`FLT` and `FLOOR`.** Special forms of the adder on the same `op=12` as `FAD`,
  distinguished by `u`/`v`. It is visible right in `FPAdder.v`: `xe = u ? 8'h96 : x[30:23]`
  and `z = v ? … // FLOOR`.

The branch field in `.rsc`, before the loader patches it, holds not an offset but a fixup
record, so the hardware's 22-bit limit does not apply to it; a `raw` mode was added for parsing
object files.

### 3. A systematic sweep of the encoding space

`tools/sweep_encoding.py` sweeps **from the assembler side**: all mnemonics ×
all registers × boundary immediates and offsets, 129 760 forms; each one
goes through the circle and must match bit for bit.

The sweep is from the text side, not the words, because words contain
don't-care bits. The first version swept words and drowned in false
positives: at `op=0` the hardware does not read field `b` at all (the `MOV` branch in
`aluRes` does not access `B`), and a word with a nonempty `b` executes the same way but
is not reproduced literally. This was added to the hardware test
(`tests/t1_branch_width.s`).

The sweep found **a real encoding collision**: `RTI = BR & ~u & ~v & IR[4]`,
so the hardware executes a branch via register without link with an odd payload
as a return from interrupt. Confirmed by execution: `tests/t1_irq.s` runs
exactly this combination and gets RTI, 6 checks of 6. The assembler now rejects such
a form. Oberon's traps are not affected: they are emitted via `BLR`,
that is, with `v=1`.

## How these two checks complement each other

A mutation probe showed that neither replaces the other:

| mutation | circle on real code | sweep |
|---------|----------------------|---------|
| swap LD and ST | catches (16 280) | catches |
| shift the op field | catches (6 694) | catches |
| swap ADC and SBC | **does not catch** | catches |
| swap fields a and b | catches weakly (122) | catches |

`ADC`/`SBC` do not occur in the compiler's code at all, and real code masks the `a`/`b`
swap: in accumulating style they often coincide.

## What remains unverified

* The circle uses one field layout in both directions, so a shared error
  in it is invisible here. The layout is checked by 264 directed checks on the hardware,
  where the result is compared with the architectural semantics.
* Of 275 616 structurally meaningful words, 182 048 (66.1%) get a mnemonic.
  The rest are combinations to which the hardware gives no separate meaning; they
  were not checked separately.
* The claim about bits 23:8 in traps is taken from `ORG.Mod` and confirmed by
  reproduction, but the trap handler's reading of the payload back is not checked by our
  harness.
