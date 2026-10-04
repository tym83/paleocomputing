[Русская версия](FINDING-02-encoding.ru.md)

# Finding 2: free encoding space found and proven by exhaustive search

Test: `tb/decoder_probe.cpp`. Raw output: `docs/decoder-map.txt`.

## Main result

**Bits `IR[15:4]` in format F0 are completely ignored by the decoder.**

Proven not by reading the code but by exhaustive search: the instruction `ADD R5, R1, R2` in format F0 was taken,
and all **4095 nonzero values** of the field `IR[15:4]` were run through the RTL. The result,
the flags and the cycle count were compared. **Mismatches: 0.**

Method control: the same bits in format F1 (where this field is `imm`) do change the result:
`imm=0x0AB0` gives `R5=0x00000AB0`. So the testbench really does see a difference when there is one.

→ **12 bits, 4096 values, guaranteed free.** Existing code keeps zeros there
(`ORG.Put0`: `code[pc] := ((a*10H + b)*10H + op)*10000H + c`).

## What refuted the original hypothesis

In the v0.1 design I assumed that **bit 28** was free (format F0 supposedly being `00u0`).
The decoder map shows the opposite:

| Combination | op=12 | op=13 | What it is |
|---|---|---|---|
| `0000` (bit 28 = 0) | `5678` | `80005678` | FAD / FSB |
| `0001` (bit 28 = 1) | **`805678`** | **`7FA988`** | **FLT / FLOOR: different behaviour** |

That is, at op=12/13 bit 28 is taken by the float↔int conversions, which the compiler
emits for every `ENTIER` (`ORG.Floor` → `Put0(Fad+V, …)`).

Confirmed separately: `0011` + op=0 returns **`60000053`** = `{N,Z,C,OV, 20'b0, 8'h53}`,
which is `MOV a, NZCV`, and the INFO constant really is **0x53**, not something else.

For the other 14 values of `op`, bit 28 is a **don't-care alias**: rows `0000` and `0001`
are identical. Taking it would mean not "adding into empty space" but silently changing the behaviour
of an existing encoding. **RISC5 has no trap on an unknown instruction at all**,
so the error would go through without any diagnostic.

## Encoding decision

```
CHK / FMAC and other extensions:  F0, field IR[15:8] = subopcode ≠ 0
    31:28  27:24  23:20  19:16   15:8       7:4   3:0
    00uv     a      b     op    subopcode   0000   c
```

A precedent inside the ISA itself: `RTI = BR & ~u & ~v & IR[4]`, and STI/CLI sit on `IR[5]`/`IR[0]`,
so Wirth himself already used this trick inside format F3.

A mandatory condition: **narrow the decode of the base operation explicitly**, so that `subopcode ≠ 0`
is not executed as a base instruction on the old core. And mark modules of the extended ISA
with the `.rsc` version byte = `2X`, so that the old loader refuses honestly.
