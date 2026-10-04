[Русская версия](README.ru.md)

# RISC5 as a QEMU target

Wirth's machine, runnable not as a container and not as a circuit simulation,
but as an ordinary virtual machine, with a console, devices and everything a
proper hypervisor provides.

## This is our own build, not an upstream submission

QEMU and libvirt **reject any contribution that a language model was involved
in**, and Claude is named in their rules explicitly
(`qemu/docs/devel/code-provenance.rst`, `libvirt/docs/hacking.rst`).
The wording "known or suspected" settles it: the repository is public, the
model's help is documented, and the suspicion arises by itself.

So the target is built **for our own build**. The GPL explicitly allows this.
If one day we want to send it upstream, it will have to be written by hand,
and our work will remain the specification and the oracle, which is the
hardest part.

## How we differ from everyone else who writes QEMU targets

Their problem is **how to prove correctness**. Usually they check against the
documentation and run test suites.

We have the hardware itself: Wirth's real Verilog under Verilator and an
already built differential test bench that ran 15 million instructions with
zero mismatches. We check not against paper but **against the circuit
description, instruction by instruction**.

## Build and run

Step by step: [GUIDE.md](GUIDE.md) (Russian: [GUIDE.ru.md](GUIDE.ru.md)): the
`make -C qemu build` build, where to get the ROM and the disk, the run
command, running under libvirt.

## What it consists of

| file | what |
|---|---|
| `target/risc5/insn.decode` | decoder, accepted by the QEMU generator |
| `target/risc5/cpu-param.h` | 24-bit address, 32-bit word |
| `target/risc5/cpu-qom.h`, `cpu.h` | type and state: registers, flags, H, interrupts |
| `target/risc5/cpu.c` | registration, reset, state dump |
| `target/risc5/translate.c` | translation of the sixteen operations into TCG, CHK |
| `target/risc5/helper.c`, `fp.c` | division and floating point |
| `target/risc5/qmp-cmds.c` | CPU model list; without it libvirt crashes when probing |
| `hw/risc5/` | the board: memory, SPI disk, PS/2, mouse, framebuffer |
| `graft.sh` | grafts all of this into the QEMU tree |

None of this was typed from documentation: the fields are taken from
`RISC5.v`, the encoding comes from our own tables, verified by exhaustively
enumerating the instruction space. Checked against the hardware: instruction
by instruction (finding 37), the screen byte for byte (38), keyboard and mouse
(39), floating point (`make fp`).

## Checks

```
make -C qemu check
```

Runs `insn.decode` through QEMU's own generator: if it rejects the file or
stops covering all the bits, the check turns red.
