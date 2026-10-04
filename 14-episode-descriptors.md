[Русская версия](14-episode-descriptors.ru.md)

# Episode: descriptors in RISC5, or what a pointer that knows its length costs

Status: the prototype is ready and measured (RTL, compiler, the Norebo environment, FPGA). Line 3d in
`BACKLOG.md`. The results are at the end of the file, each number with a reproduction command
(findings 80–84). In the design sections, numbers are either taken from earlier findings (with the number)
or marked as an **estimate**; the design is left as it was before the measurements; where a measurement
corrected it, this is said in "Results".

## Why this rung

The ladder of bounds-checking costs already exists (findings 55, 61, 63, 68):

| rung | where the limit lives | who inserts the check | cost on RISC5 |
|---|---|---|---|
| no check | nowhere | nobody | 0 |
| software | in the instruction (`CMP`+`BCC`) | the compiler | 2 cycles per indexing |
| `CHK` | in the instruction (12 bits in the word) | the compiler | 1 cycle (lab 12: 1.08) |
| CHERI | in the pointer (capability, 64/128 bits + tag) | the hardware, in the load itself | 0 instructions; the cost is pointer width |

There is a gap between `CHK` and CHERI. With `CHK` the limit is **a constant in the instruction**: the compiler knows
it in advance, and if the compiler did not insert the check, there is none. With CHERI the limit travels
**with the pointer**, and an unchecked access is inexpressible. The intermediate rung is
what the Burroughs B5000 had (`10-episode-burroughs.md`): a **descriptor**, a word
that holds both the address and the length, with indexing through it being a hardware operation
with a check.

The episode's question: what such a rung costs on a fully open stack (RTL +
compiler + OS), measured by the same methods as the other rungs, and what it buys
beyond `CHK`.

## Where in Oberon a descriptor is needed at all

This is the main observation of the design, and it narrows the problem more than it seems.

In Oberon-07 (the PO2013 language) **the length of every array is known to the compiler**, except for
one case: **an open array parameter** `PROCEDURE P(VAR a: ARRAY OF T)`.
The language has no pointers to arrays (only to records), and no dynamic arrays.
For all arrays of known length `CHK` already gives what a descriptor could give:
the limit in the instruction, one instruction per check. A descriptor with the same constant inside
would be the same check, only with an extra load.

And `CHK` does not cover open arrays at all: there the limit is not a constant. Today
each indexing of an open array in stock ORG costs this much (`ORG.Index`):

```
LDR  RH, SP, len      ; length from the second word of the parameter   2 cycles
CMP  RH, i, RH                                                         1
BLR  CC, MT (trap)                                                     1
LSL  i, i, 2          ; scale                                          1
LDR  RH, SP, adr      ; address from the first word of the parameter   2
ADD  i, RH, i                                                          1
                                              total 6 instructions, 8 cycles
```

Open arrays are strings: names in the compiler, texts, files. Their share of the
dynamic count is measured in step 4; if it is noticeable, descriptors have real
work to do that `CHK` cannot do.

## Alternatives

Constraints common to all: a 32-bit word; a 24-bit address (`adr` in `RISC5.v`),
while Project Oberon's RAM is 1 MB, so real data addresses fit in
**20 bits**; the register file has **three read ports** (`A`, `B`, `C0`) and one write
port, and the write address coincides with the address of port `A`; the only free space in the
instruction set is the F0-format aliases with bit `v=1` (findings 2, 10, 18).

### (a) a fat pointer in 32 bits

The length goes into the unused upper bits of the pointer.

* **8 bits on top (24-bit address).** An exact length only up to 255. According to finding 8
  that covers 70% of check sites in compiled code and 85% of declarations; dynamically
  (finding 10), on the compute workload 68% of executed checks fall on arrays of
  256…1023, so 8 bits miss the main case. A compressed limit in the spirit of CHERI Concentrate
  (exponent + mantissa, 3+5 bits) exactly represents only `m·2^e`, `m < 32`:
  32, 64, 1024 yes; 1000, 100, 2360 (`Fonts`) no. An inexact limit can
  only be **rounded up** (otherwise there are false traps on legal indexes), which
  means letting an out-of-bounds access slip through within the rounding margin. CHERI solves this with
  alignment and padding of memory allocations; in Oberon an open array points
  to **someone else's** array (global, in a frame, in a heap record), and there is nothing to pad it with.
* **12 bits on top (20-bit address).** An exact length up to 4095: exactly the coverage of `CHK`
  (87% of check sites and 99% of declarations, finding 8), and no compression is needed. The price is that
  the descriptor's address must be below 1 MB. For Wirth's hardware that is all of memory;
  for Norebo (8 MB) it is a limitation that has to be checked on the workload.
  Bits 23:20 are then occupied by the length, so **a descriptor cannot be given
  to an ordinary `LD`/`ST` as an address**: an explicit "cleanup" is needed (two instructions,
  `LSL 12` + `ROR 12`). This is not a drawback but a property: the check can be bypassed
  only by an explicit action.

### (b) base+limit register pairs

Indexing reads the base, the limit and the index; a store to memory also reads the value.
Four reads with three ports: either a fourth port (the register file grows
by a third on the read side, and it is the largest memory in the core after the multiplier), or
an extra cycle on every indexing, which is exactly what `CHK` got rid of.
Plus register pressure: ORG has 12 registers for expressions (`R0…R11`);
a pair per pointer halves the expression stack with two open
arrays in an expression. Rejected.

### (c) a descriptor table by tag (like the B5000)

Pointer = {tag, offset}; the tag indexes a table of {base, limit}. 8 bits of tag
is 256 entries. Every active open array is an entry, so someone has to manage the table
on every call with an open array (allocation, release,
recursion). That is a new part of the OS, not a rung of the ladder, and 256 entries last until
the first deep recursion. A 256×44-bit table in the core is bigger than the register
file. Rejected for this rung; it remains a nice historical parallel
(the B5000's PRT).

### (d) bounds registers (like Intel MPX)

Separate registers `bnd0…bnd3` with lower and upper bounds, check instructions.
Again the limit does not travel with the pointer: it has to be loaded, saved on a call,
restored; this is a software discipline that the compiler can forget.
That is how MPX died: according to the literature (Oleksenko et al., "Intel MPX Explained", 2018)
the slowdown is on average around one and a half times, and support was removed from GCC and Linux;
**these are other people's numbers, not our measurement**. In essence this is "`CHK` with a register limit",
that is, half a step from `CHK`, not a new rung.

### Choice: (a), 12 bits of length + 20 bits of address

```
 31          20 19                               0
 ┌────────────┬──────────────────────────────────┐
 │ length (12)│ address of the first element (20)│   descriptor
 └────────────┴──────────────────────────────────┘
```

Why:

1. **Precision.** The length is stored exactly, without rounding, so there are neither misses nor
   false traps. Length coverage is the same as with the adopted `CHK` encoding
   (limit ≤ 4095), and the distributions from findings 8 and 10 carry over as is.
2. **Three ports are enough.** The descriptor and the index are two reads, one write.
3. **No descriptor, no access.** An ordinary address (upper 12 bits are zero) viewed as a
   descriptor has length 0: any indexing through it is a trap. This is the
   closest analog available without tags in memory to CHERI's rule "no tag, no
   access".
4. **Stock behavior is untouched.** Ordinary `LD`/`ST` do not change at all;
   the only new thing is one instruction in an alias that the stock compiler does not emit.

## Instruction set: a single `IDX` instruction

```
IDX  Rd, Rdesc, Ri, sh      Rd := desc.address + (Ri << sh)
                            if Ri >= desc.length (unsigned): trap
```

The encoding uses the same trick as `CHK`: an F0-format alias with `v=1`. `CHK` occupies
`op=1` (LSL); `IDX` takes **`op=8` (ADD)**: according to the decoder map (finding 2,
`docs/decoder-map.txt`) the row `0001` in column 8 coincides with the row `0000`,
meaning that bit `v` of F0-`ADD` means nothing today. Semantically it is an addition anyway.

```
   31:28  27:24  23:20  19:16  15:10   9:8   7:4    3:0
   0001    Rd    Rdesc  1000   000000   sh   0001    Ri
   p q u v  a      b     op            scale  trap   c
                                              number
```

* `Rdesc` is read through port `B`, `Ri` through port `C0`. The result is written to `a`.
* `sh` is the scale: 1, 2, 4, 8 bytes. Elements of other sizes (12-byte records)
  go the old software way.
* `IR[7:4] = 1` is the "index out of range" trap number, where
  `Kernel.Trap` looks for it (the word at `R15-4`, bits 7:4). The source position (bits 23:8)
  is lost, as with `CHK`.
* Bit `u` is checked explicitly (the lesson of finding 12): the encoding `0011`/op=8 is the
  `ADC` alias, and we do not take it.
* Flags: `N`, `Z` from the result, as with any F0; `C`, `OV` are not touched
  (the `ADD` signal is suppressed for `IDX`).

### The trap

For `CHK` the trap vector is read through port `C0` (field `c = MT`), and the jump
happens in the same cycle. For `IDX` port `C0` is occupied by the index, and there is no fourth port.
So when it fires there is **one stall cycle**: the pipeline stalls, and instead of the next instruction
the word `BLR MT` (`0xD700000C`) is put into `IR`. On the next
cycle it executes as an ordinary `BLR`: `R15 := address of IDX + 4`, `PC := R[12]`,
which is what an Oberon trap does. The trap is cold, so the extra cycle in it does not show up in the
cost; and there is no combinational loop (a port selected by the comparison result): the comparison
controls only the write to `IR` and the stall signal. The check runs in parallel with
the addition: a 12-bit comparison plus "the upper 20 bits of the index are non-zero".

**Estimate (not a measurement)**: `IDX` without firing takes 1 cycle, like `ADD`.

## What the compiler emits (configuration F = E + descriptors)

Arrays of known length are handled as in E: `CHK` (or in software when the length is ≥ 4096).
Only open arrays change.

**The parameter `VAR a: ARRAY OF T`** is still two words, but the first word is now a
**descriptor** rather than an address; the second is the length, as before (`LEN(a)` does not change; lengths
≥ 4096 are stored exactly).

**The calling side.**
* passing an array of known length `n < 4096` or a string: the address
  `IOR (n << 20)`, two or three instructions (`MOV'` of the upper part + `IOR`);
* passing an open array further: the first word is copied **as is**:
  the descriptor simply travels on, nothing is rebuilt;
* `n ≥ 4096`: the compiler refuses with a diagnostic (see risks); first
  we check on the rebuild whether this occurs in the system at all.

**Indexing an open array**, `s ∈ {1,2,4,8}`:

```
LDR  RH, SP, desc     2 cycles
IDX  i, RH, i, sh     1 cycle           2 instructions, 3 cycles (was 6 and 8)
```

Other element sizes use the old software sequence plus cleaning the
descriptor down to an address.

**All other uses of the first word** (assigning an open array
as a whole, copying a string, `SYSTEM.ADR`) get the `LSL 12` + `ROR 12` cleanup,
+2 instructions. Forgetting it cannot go unnoticed: an uncleaned descriptor gives a wrong
address, and the byte-for-byte system rebuild (finding 27) will catch it.

Modules of configuration F are marked with `.rsc` version byte = 3 (E sets 2, stock 1):
the open-array ABI is different, and modules must not be mixed.

## What is NOT protected

* **Descriptor forgery.** There are no tags in memory; a descriptor is an ordinary integer.
  A program using `SYSTEM` can assemble the length and address itself. This is the main difference from
  the B5000 and CHERI, and it is an honest one: unforgeability requires a tag outside the 32 bits of the word.
* **A cleaned address.** After `LSL 12`+`ROR 12` you get an ordinary address without
  a check. The compiler does this only for whole-array operations,
  which are checked separately (as in stock).
* **Addresses above 1 MB.** A descriptor cannot express them. On Wirth's hardware that is all of
  memory; in Norebo (8 MB) it is checked on the workload.
* **Arrays longer than 4095 elements** as open parameters.
* **Arrays of known length**: `CHK` still handles them: the limit there is
  in the instruction, and an "unchecked" access remains expressible with an ordinary `LD` if
  the compiler forgets `CHK`. The descriptor changes nothing where there is nothing to change.
* **`NIL` dereference, temporal safety** (dangling pointers):
  outside this rung, as with `CHK`.

## Verifiable claims of the episode

Each one has a reproduction command in the "Results" section.

1. **Stock behavior does not change.** On the `WITH_DESC` core the base tests give
   the same cycles as on the base core; the decoder enumeration distinguishes **exactly two**
   encodings (`CHK` and `IDX`); the system boot gives screen CRC `B5DFC933`;
   the step-by-step comparison against the reference during boot gives 0 mismatches.
2. **The trap is real.** Index = length and index = −1 → control passes to the
   handler, `R15` = address of `IDX` + 4, the destination register is not written. An index
   inside → the result equals `address + (i << sh)`, flags `C`/`OV` untouched.
   A descriptor with length 0 (an ordinary address) → a trap on any index.
3. **The RTL and the reference model agree** on the `IDX` tests (differentially).
4. **Code generated by F works**: modules built by F give the same result
   on the test program as B; negative control: a deliberate out-of-bounds access
   on an open array is caught with "index out of range".
5. **Cost**: instructions, cycles per indexing, code size, on the same workloads
   as the ladder (the loop from finding 55, lab 12, compiling the five modules from finding 21).
6. **Frequency**: ECP5, the same flow as finding 69: Fmax and LUT for the base
   core, `CHK` and `IDX`; whether 25 MHz holds.

## Non-goals

* Do not redo Oberon as "everything through descriptors": arrays of known length
  stay on `CHK`.
* Do not implement unforgeability (tags in memory): that is the next rung, and it is
  called CHERI.
* Do not touch `LD`/`ST`.

## Risks

* **Norebo holds 8 MB**, a descriptor covers 1 MB. If strings passed as
  open arrays end up in the heap above 1 MB, the address in the descriptor will be truncated.
  Check: the output of an F compilation is byte-for-byte identical to E.
* **The open-array ABI changes**: the whole workload must be built with F,
  including the modules of the Norebo environment. If that proves too much, the measurement will narrow to
  what was built, and this will be stated.
* **The critical path.** The `IDX` comparison controls the stall, and the stall controls the fetch
  address (`pcmux`). `CHK` has the same path (`chkFail` → `pcmux0`), and it did not affect
  frequency (finding 69), but this has to be measured, not carried over.
* **The gain may turn out to come from the addition, not the check.** `IDX` also does
  the scaling and addition that used to be two instructions. The honest breakdown:
  the cost of the check inside `IDX` is zero cycles by construction; everything `IDX`
  saves compared with "no check" is the fusion of address arithmetic, and it has to be
  called by its proper name.

## Results

Everything below is measured, except the rows marked **estimate**. Commands are run from the
`impl/` directory unless stated otherwise. Branch `feat/descriptors`.

### 1. The hardware does exactly what was intended (finding 80)

| claim | number | command |
|---|---|---|
| directed `IDX` tests on the core with descriptors | 5 files, 44 expectations, 0 failures | `make test` |
| the same tests on the core without `IDX` | all fail (the test can go red) | `make test` |
| random differential model vs RTL vs Norebo emulator | 904 expectations, 0 mismatches on the RTL and on the emulator | `make test`, `make idx-diff` |
| RTL mutations | 6 of 6 caught | `make idx-mutate` |
| decoder enumeration | exactly 2 encodings differ: `CHK` and `IDX` | `make equiv` |
| the stock system on the core with `IDX` | screen CRC `B5DFC933` | `make boot-desc` |
| step-by-step comparison with the reference | 14,600,503 instructions, 0 mismatches | `make lockstep-desc` |
| the `IDX` encoding in stock code | 0 in 91,349 words | see finding 80 |

Claims 1–3 from the "Verifiable claims" section are satisfied.

### 2. The headline loop on the RTL (finding 81)

`make desc-loop`: 2,000,000 instructions from reset, iterations from `R5`:

| rung | instructions/indexing | cycles/indexing |
|---|---:|---:|
| A — no check | 8 | 9 |
| B — `SUB`+`BCC` | 10 | 11 |
| E — `CHKS` | 9 | 10 |
| **D — descriptor, `IDX`** | **7** | **8** |

Negative control: a descriptor for 32 elements stops the loop exactly after
32 iterations. D is faster than A because `IDX` also does the scaling and addition; the cost of the
check itself inside `IDX` is zero cycles by construction. Row A of finding 61 had been
derived; now it is measured and it matched.

### 3. The compiler and the system (finding 82)

| claim | number | command |
|---|---|---|
| the whole Norebo environment in configuration F builds itself to a fixed point | stages 2 and 3 are equal byte for byte, 15 files of 15 | `bash tools/build_cfg_toolchain.sh F` |
| the 40 PO2013 modules build with F without length violations | 40 of 40 (as in stock), 0 violations | `bash tools/scan_open_args.sh F` |
| system code size (40 modules) | E 63,212 → F 64,495 words, **+2.03%**; 73 `IDX` sites | see finding 82 |

The measurement corrected the design in two places:

* **Length ≤ 4095** is violated by exactly one array: the Norebo linker's buffer
  (16,128 words). In the PO2013 system itself, never. The compiler refuses rather than
  truncates; the linker is not built in F.
* **Address ≤ 1 MB** was violated by the Norebo heap (8 MB, with no garbage collection inside a command):
  the F compiler, building 14 modules in one run, hung on truncated
  string addresses in the heap. On Wirth's board 1 MB is all of memory; but this rung's
  descriptor does not carry over to a machine with more memory without narrowing the length.

Not done: rebuilding the system image in F and booting the F system on the RTL; that needs a
system loader that accepts version 3. Claim 4 is satisfied on the Norebo environment
and on compiling PO2013, but not on a bootable system.

### 4. Workloads (finding 83)

`make desc-measure`, then `make desc-cross` and `make desc-profile`. Each
configuration runs in its own homogeneous environment; the compilation output is byte-for-byte equal to the output of
the same configuration in stock code; the benchmarks check themselves with `ASSERT`.

| workload, cycles | A | B | E | F | F vs E |
|---|---:|---:|---:|---:|---:|
| compiling five modules | 28,556,351 | 29,919,963 | 29,801,133 | 29,959,035 | **+0.53%** |
| ArrBench (arrays of known length) | 54,270,887 | 59,894,995 | 57,123,411 | 57,124,801 | +0.002% |
| OpenBench (open arrays) | 32,440,211 | 41,696,996 | 41,684,979 | 30,650,231 | **−26.47%** |

Breaking down the +0.53% on compilation (2×2): executing F code +0.28%, generating F code
by the compiler +0.25%. Execution by profile: `IDX` replaced exactly 6,142 software
open-array checks, with 3,459 descriptor assemblies; most of the cost comes from loading
code that grew by 608 words because of assembling the descriptor when calling with a string
constant (an address histogram from the emulator's debug build; the per-item breakdown by
cycles is an **estimate** from the latency table).

### 5. The cost in silicon (finding 84)

`make -C fpga docker-all`, ECP5 LFE5U-85F, five seeds:

| core | soc fmax, median | core fmax, median | LUT4 soc | vs base |
|---|---:|---:|---:|---:|
| base | 33.27 | 46.96 | 2961 | — |
| chk | 37.30 | 44.72 | 3016 | +1.9% |
| desc | 34.65 | 47.47 | 3097 | +4.6% |

25 MHz holds in all 30 place-and-route runs (the worst margin for desc is 1.27×). The frequency differences
are within the seed spread. New: the `IDX` comparison landed on the soc critical path
(register file → `idxFault` → `pcmux` → ROM address); `CHK` did not have this.

### 6. QEMU (finding 85)

`-machine oberon,chk=on,desc=on`. Comparison with the native RTL model over all 16
registers: loop D (8,000 instructions) and 40 random `IDX` with a trap (520 instructions)
agreed; with `chk=on` without `desc=on` they diverge. Command (from the root, after
`make -C qemu build`): `python3 qemu/test/compare_idx.py`.

Not done: the core with descriptors in the browser (WASM) and `hardware: desc` in the
catalog package for the cluster.

### What remains open

* Rebuilding the system image in F and booting the F system on the RTL (needs a loader
  that accepts version 3).
* Prebuilt descriptors for string constants in the module's constant area would remove
  most of the code growth (+2%); not done, the gain not estimated.
* A register on `idxFault` to take the comparison off the soc fetch path, if
  a higher frequency is needed.
* The browser and the cluster for the core with descriptors.

### The whole ladder

| rung | where the limit is | check instructions in the loop | cycles per indexing (loop) | main cost |
|---|---|---:|---:|---|
| RISC5 A | nowhere | 0 | 9 | — |
| RISC5 B | in the instruction | 2 | 11 | +22% in the loop; 4.78% on compilation |
| RISC5 E (`CHK`) | in the instruction, 12 bits | 1 | 10 | does not cover open arrays |
| **RISC5 D/F (`IDX`)** | **in the pointer: 12 bits of length + 20 bits of address** | **0** | **8** | **+2% code (descriptor assembly at the call), address ≤ 1 MB, length ≤ 4095, a comparison on the fetch path** |
| CHERIoT-Ibex | in the capability + tag | 0 | 9 (without software) | pointer width, tags (finding 63) |

**The episode's answer.** A descriptor on RISC5 does to the check what CHERI does: it removes
it from the loop body entirely. But in Oberon it has almost nothing to protect beyond `CHK`: the length
is unknown to the compiler only for open arrays. There it wins big
(−26% on OpenBench, faster than with no check at all); on arrays of known length it
equals `CHK`; on the compiler it loses to `CHK` by 0.53%, half of which is the
compiler's work and half the code growth from assembling descriptors at calls. It really does not
let the check be turned off (`IDX` does not depend on the `check` flag), but
there is no unforgeability: a descriptor is an ordinary integer. That is exactly the place where
the next rung, CHERI, puts a tag.
