[Русская версия](FINDING-37-qemu-lockstep.ru.md)

# Finding 37. The QEMU target matched the reference over one and a half million instructions

`qemu-system-risc5`, our own QEMU target, executes the real
boot loader from ROM, reads the Oberon system from the disk image over SPI, and continues with its
code. A step-by-step comparison with the reference emulator: **1 500 000 instructions, zero
mismatches**. Of them, 1 100 503 are already in RAM, that is, the code of the system itself,
not of the boot loader.

The reference here is not arbitrary: it is the same emulator that we checked against
the real RTL over 15 million instructions (finding 14). So agreement with it
means agreement with the hardware, not self-consistency.

## The bug the comparison found

Before the fix the boot loader did not even reach the first sector read. The mismatch
appeared at **instruction 224**, and the cause turned out to be a rule that is not in
any description of the instruction set:

```
regwr = (~p & ~CHK) | LDR | (BR & v)        RISC5.v:170
nn    = regwr ? regmux[31] : N              RISC5.v:204
zz    = regwr ? (regmux == 0) : Z           RISC5.v:205
```

**The N and Z flags are set by any register write**: not only arithmetic, but also
a load from memory and a branch with a return link. Ours set them for neither
of the two. The boot loader has `LD` followed immediately by `BNE`, and the branch went the wrong way.

This is exactly the class of bug the testbench was built for: it is not caught from the documentation,
but from the hardware's code it is caught in a single run.

## Two traps of the comparison itself

Both once gave a false result, and both are now described in `qemu/test/trace_diff.py`.

**Different ROM addresses.** The reference has it at `0xFFFFF800`, ours at `0xFFE000`,
recorded in finding 14. Offsets from the start of the ROM have to be compared, otherwise the traces
diverge from the very first instruction.

**Translation blocks.** By default QEMU logs the state before entering a *block*, and
a block can be longer than one instruction. In the branch-dense ROM code the blocks came out
one instruction each, and everything matched; in the system's code the trace started "skipping"
instructions, and I spent a round looking for a nonexistent mismatch. The
`one-insn-per-tb=on` mode is needed.

**The log.** In that mode it grows very fast: a run without a limit ate
12 GB in minutes and jammed the machine. It has to be truncated on the fly, right in the pipeline.

## Where this was computed

Our own test machine: a virtual machine in Cozystack, 8 cores, 16 Gi. The build runs
natively; the script that grafts the target into the QEMU tree worked the first time.

## What this means

The integer core, memory, branches, ports, the timer and the SPI disk
are reproduced correctly, over one and a half million instructions of the real system, not on
tests we made up ourselves.

Not yet written: the framebuffer (the system currently draws into nowhere), keyboard, mouse,
floating point. Once there is a framebuffer, Oberon should show its screen in QEMU too.
