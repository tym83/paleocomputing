[Русская версия](FINDING-80-descriptor-isa.ru.md)

# Finding 80. The IDX instruction: indexing through a descriptor in RTL, with proof that it does not touch stock

Episode 14 (`14-episode-descriptors.md`) is the rung of the ladder between `CHK`
and CHERI: the array bound travels not in the instruction but in the pointer
itself. This finding covers the hardware and how it was proven to do exactly
what was intended and nothing more.

## What was done

**A descriptor** is a single 32-bit word `{length[31:20], address[19:0]}`. The
length is 12 bits, exact, without rounding (coverage as with the adopted `CHK`
encoding, findings 8 and 10); the address is 20 bits, which is the whole 1 MB
of RAM on Wirth's board.

**One instruction**, behind `-DWITH_DESC` in `rtl/RISC5.v`:

```
IDX Rd, Rdesc, Ri, sh     Rd := address + (Ri << sh), if Ri < length (unsigned)
                          otherwise a trap, like BLR MT
```

The encoding uses the `CHK` technique: an alias of format F0 with `v=1`, this
time on `ADD` (`op=8`). The decoder map (finding 2) shows that the `v` bit of
F0-`ADD` means nothing today. The scale is in `IR[9:8]`, and trap number 1 is in
`IR[7:4]`, where `Kernel.Trap` looks for it.

**A trap without a fourth port.** For `CHK` the trap vector (`R12 = MT`) is read
through port `C0`; for `IDX` all three ports are taken (destination, descriptor,
index). The solution is a stall cycle: when the trap fires, the pipeline stalls
and the word `BLR MT` (`0xD700000C`) is put into `IR`, which on the next cycle
executes as an ordinary `BLR`: `R15 := IDX address + 4`, `PC := R[12]`. The
comparison controls only the write to `IR` and the stall signal, not the port
addresses, so there is no combinational loop.

The RTL change is 42 added lines (17 of them comments) and one modified line
(`ADD … & ~IDX`). Everything that changes paths is inside `ifdef WITH_DESC`
branches; without it `IDX = 0`, and the circuit is the same as the `CHK` core.

## How it was verified

| check | result | command |
|---|---|---|
| directed tests: legal indices at all scales, flags `C`/`OV` untouched, destination = descriptor, index = length, index −1, index `0x1001` with length 10 (only the high bits catch it), an ordinary address as a descriptor (length 0), edge fields (length 4095, address `0xFFFFF`) | 5 files, 44 expectations, all ✅ on the core with IDX | `make test` |
| the same tests on the core without IDX | all 6 files **fail**, so the tests check something | `make test` |
| random differential: model (from the design text), RTL, Norebo processor | 150 cases + a random out-of-bounds access, **904 expectations**, 0 mismatches in RTL and 0 in the emulator | `make test`, `make idx-diff` |
| RTL mutations: `>=`→`>`, without the high index bits, hard-wired scale, trap not through MT, `IDX` touches `C`/`OV`, address from the wrong bits | **6 of 6 caught** | `make idx-mutate` |
| decoder enumeration (256 encodings × 16 × 5) | **exactly two** differ: `CHK` (0001, op=1) and `IDX` (0001, op=8) | `make equiv` |
| the base 18 ISA test sets on three cores | cycle counts match | `make test` |
| system boot on the core with IDX | screen CRC `B5DFC933`, same as stock | `make boot-desc` |
| step-by-step comparison with the reference during boot | **14 600 503** instructions, 0 mismatches | `make lockstep-desc` |
| the IDX encoding in stock code | **0** matches in 91 349 code words (15 Norebo `build2` modules + 40 PO2013 modules built by stock) | `python3 tools/count_traps.py` over `.rsc`, see finding 82 |

The Norebo emulator (`ext/norebo/Runtime/risc-cpu.c`), on which all compilation
measurements were taken, received the same instruction; its cycle model adds a
stall cycle when the trap fires, as the RTL does. The runner `tb/emu_tests.c`
executes the same `.bin`/`.chk` files as `tb/run_tests.cpp` on the RTL, so the
three descriptions of the instruction are checked against the same numbers.

## What came up along the way

* **The mutation run lied at first.** A substitution via `sed -E` failed on one
  mutation with a regular expression error, produced an empty file, the build
  failed, and "all tests failed" was counted as "mutation caught". Now a
  mutation that does not build fails the run, and the substitution is literal
  (`perl \Q…\E`).
* **The emulator runner read 1024 words**, while the random test has 1666: the
  errors started exactly at word 1027. This was caught because the directed
  tests passed and the random one did not.

## What this does not show

* The cost: that is in findings 81 (loop), 83 (workloads) and 84 (FPGA).
* Unforgeability: a descriptor is an ordinary integer, and a program with
  `SYSTEM` can assemble one itself. There are no tags in memory; this is the
  boundary of the rung, not an oversight.
