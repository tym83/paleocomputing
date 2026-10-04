[Русская версия](FINDING-14-lockstep.ru.md)

# Differential testbench: 15 million instructions in exact agreement with the reference

The strongest check possible here. Synthetic tests cover what the author
thought of; booting the system executes what Wirth actually wrote.

Run: `make lockstep` · source `tb/lockstep.cpp`

## Result

| | |
|---|---|
| warm-up in the boot loader (comparison by position) | 399 497 instructions |
| **strict comparison** | **14 600 503 instructions** |
| RTL cycles | 23 245 948 |
| host time | **5.8 s** |
| mismatches | **0** |

After **every** instruction the following are compared: the program counter, all 16 registers, the H register
and all four flags (N, Z, C, V).

## Five sources of nondeterminism that had to be eliminated

Four of the five were named in the review in advance, and all four came up.

**1. Different program counter widths.** The RTL has 22 bits and reset address `0xFFE000`;
the reference has a 32-bit word index and the ROM at `0xFFFFF800`. Both land on word zero of the
ROM, because it is 512 words and aliases. Inside the ROM we compare the word index;
outside it, the address itself.

**2. The link register after leaving the boot loader.** R15 keeps the return address into the ROM,
which legitimately differs by a constant. It is normalised the same way as the program counter.

**3. The timer.** Each model has its own millisecond counter. The reference is driven from ours
via `risc_set_time()`.

**4. The `progress` heuristic.** `risc_run()` exits early when it notices an idle
polling loop. This is avoided by calling it one instruction at a time: the counter
is reset on every call.

**5. The disk.** Each model has its own copy of the image: otherwise the writes of one would end up in the reads of the other.

## Two mistakes the testbench caught in my own code

**The bus during reset.** The instruction register latches every cycle. If zeros are fed during reset,
the first instruction executes as `MOV R0,R0` instead of the jump from the
boot loader. The testbench showed this immediately: in the reference the first instruction took the jump,
in the RTL the counter simply advanced by one word.

**A service write that should not have been there.** The review warned that the reference puts
the signature `"Sizg"` and the screen dimensions at `DisplayStart`. I wrote it in on my side in advance, and so created
a mismatch myself: the reference does this in `risc_configure_memory()`, which our run
does not call, so it has zeros there. It diverged at step **2 101 536**, when the system
read that location: the register held `53697A67` versus zero.
The correct thing is to write nothing.

## What this proves and what it does not

**It proves:** the architectural semantics of the `RISC5.v` core in our build match
the reference implementation on a real workload 15 million instructions long, including all
floating-point arithmetic, multiplication and division, memory operations and branches.

**It does not prove:** timings. The reference is not cycle-accurate (`risc_run` counts instructions),
so all cycle numbers come only from the RTL, and the testbench compares architectural state.
The reference does not model interrupts at all, so there is no golden model for that part:
they are checked by a separate directed test, `tests/t1_irq.s`.
