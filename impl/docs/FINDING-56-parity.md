[Русская версия](FINDING-56-parity.ru.md)

# Finding 56. Parity: the same hardware in the browser and in the cluster

The instruction set extension appeared first in the browser, as a switch on the
page. That is not enough: the machine lives in two places, and "present on the
page, absent in the cluster" is exactly the disease this repository has had
three times (Findings 51, 52, 54). So the hardware variant is now selected the
same way everywhere.

| Where | How it is selected |
|---|---|
| RTL (native, Verilator) | `-DWITH_CHK -DCHK_SPLIT` |
| browser | `<oberon-machine variant="chk">`, a switch on the page |
| QEMU | `-machine oberon,chk=on` |
| cluster, catalog package | `hardware: chk` → annotation → hook → the same `-machine` |

**This is not an emulator mode but a different build of the processor.** That
is why it is selected by a machine property and not by a launch flag: it is off
by default, and the base machine must behave exactly like Wirth's core;
otherwise the comparison with RTL stops meaning anything.

## How it is proven to be the same hardware

`qemu/test/compare_chk.py`: **the same program** that computes the numbers on
the page is run in QEMU with `chk=on` and on the model extracted from the real
RTL and built into WASM. All sixteen registers are compared after the same
number of instructions. They matched.

The same script has a negative control: the same program on a machine
**without** the extension must diverge; otherwise the comparison checks
nothing. `R0` diverges: without the extension this encoding means a shift, and
a register that CHK does not touch ends up written.

## Two comparison traps

**QEMU prints the state before an instruction, the model prints it after.** The
off-by-one looked like a real implementation bug: exactly one register diverged,
the one written by the next instruction.

**And the log must not be written to a file.** `-d cpu` with `one-insn-per-tb`
is ~310 bytes per instruction, and after its useful part the program spins in
an empty loop. A minute of logging is tens of gigabytes: the Docker VM's disk
filled up completely, containerd stopped being able to write its own database,
and the only fix was recreating the VM. Now the log goes into a `head -c`
pipeline and never reaches the disk at all (plus `timeout`: QEMU does not die by
itself when the pipe is closed; verified, the container hung).

## What is not there yet

Installing from the catalog with `hardware: chk` in the cluster **has not been
run**: it needs a new emulator image with this QEMU target, and that is
published on a tag. Everything up to the image has been verified: the template
renders the annotation, the hook reads it and adds `-machine chk=on`, and QEMU
with this flag computes like the real RTL.
