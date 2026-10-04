[Русская версия](FINDING-01-counter-period.ru.md)

# Finding 1: the cost of back-to-back arithmetic equals the counter period, not the operation length

Measured on `RISC5.v` dated 31.8.2018 under Verilator 5.052. Test: `tests/t1_fpb2b.s`, 13/13.

## What happens

All of Wirth's multi-cycle units are built the same way:

```verilog
assign stall = run & ~(S == <N>);
always @(posedge clk) S <= run ? S + 1 : 0;
```

An instruction completes when `S == N`. But **on that same cycle `run` is still high**:
it is derived combinationally from the current instruction. So `S` is not reset; it moves on to `N+1`.

If the next instruction is an operation of the same unit, `run` never dropped, and the counter
has to run all the way **to the overflow of its width**, and only then count the
operation again. That is why the cost of the second back-to-back operation is not the operation length
but **the counter period = 2^(its width)**.

## Table (everything measured, nothing derived)

| Unit | Counter | Period | Operation | Single | **Back-to-back** | Penalty |
|---|---|---|---|---|---|---|
| `FPAdder` | `reg [1:0] State` | 4 | 4 steps | 4 | **4** | — |
| `FPMultiplier` | `reg [4:0] S` | 32 | 26 steps | 26 | **32** | **+23%** |
| `FPDivider` | `reg [4:0] S` | 32 | 27 steps | 27 | **32** | **+19%** |
| `Multiplier` | `reg [5:0] S` | 64 | 34 steps | 34 | **64** | **+88%** |
| `Divider` | `reg [5:0] S` | 64 | 34 steps | 34 | **64** | **+88%** |

The adder has no penalty **not because it is built differently**, but because its
counter period happens to coincide with the operation length: 2 bits = 4, and the operation is exactly 4 steps.

## How it is cleared

⚠ **REFINED BY THE AUDIT.** The rule applies **to the hardware unit, not to the mnemonic**,
and the counter is reset by **any instruction that does not use the same unit**, including
multi-cycle memory accesses.

The auditor wrote two independent tests (26 assertions, all passed on the RTL):

| Sequence | Cycles | What it shows |
|---|---|---|
| MUL, MUL, MUL, MUL | 34, 64, 64, 64 | the penalty is stable |
| MUL → DIV → MUL | 34, 34, 34 | **different units: reset, no penalty** |
| FML → FDV → FML | 26, 27, 26 | the same for floating point |
| FML → FAD → FML | 26, 4, 26 | the adder is a separate unit |
| MUL → **LD** → MUL | 34, **2**, 34 | **a load resets it too** |
| MUL → **UMUL** | 34, **64** | 🔴 **one unit, the penalty is there** |

The last row matters: `Multiplier.run = ~p & (op == 10)`, that is, `MUL` and `UMUL` are
**the very same hardware**. Likewise `FPAdder.run = FAD | FSB`.

The wording "any non-arithmetic instruction" was inaccurate.

## Why this matters for measurements

**Integer multiplication in a tight loop costs 64 cycles instead of 34.** Any microbenchmark
in which arithmetic operations run back to back overstates their cost almost twofold, and does so
silently, because from the outside it just looks like "multiplication is slow".

Practical consequences for the release:
1. Microbenchmarks for U2/U3 **must** interleave operations or state honestly that
   they measure the back-to-back mode.
2. Real Oberon code almost always has loads and address arithmetic between multiplications,
   so it pays the single cost. Hence **the microbenchmark and the real
   workload diverge systematically**, not by chance.
3. This is one more argument for the "the system rebuilds itself" workload instead of
   a synthetic loop.

## What this gives the article

A ready-made story: in Wirth's design every multi-cycle unit is a finite state machine on a counter,
and the counter width was chosen "with headroom", not to fit the operation length. On an FPGA
this cost nothing in area, but it created a hidden performance penalty
that is not visible in any documentation and that, judging by the absence of any mention,
nobody has measured.
