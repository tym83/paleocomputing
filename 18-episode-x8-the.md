[Русская версия](18-episode-x8-the.ru.md)

# Episode: THE on the Electrologica X8

Status: working. From 1965 to 1968 Edsger Dijkstra's group at the Technische
Hogeschool Eindhoven wrote THE, the multiprogramming system of their
Electrologica X8. It was the system of the layers and the semaphores, and its
correctness was argued before it was tested. It was written in plain X8
machine code, and that code is not known to survive. The X8 itself is gone too;
one stands in Museum Boerhaave. This episode rebuilds the machine from the
simulator the Mathematisch Centrum wrote in 1971 and from Dijkstra's
description of its I/O processor, and then rebuilds THE in X8 machine code
from Dijkstra's papers. The code is in [`impl/x8-the/`](impl/x8-the/).

## Sources

The full table is in [`impl/x8-the/notes/sources.md`](impl/x8-the/notes/sources.md).
In short:

| Source | What it gives |
|---|---|
| X8S, D. Grune, Mathematisch Centrum, 1971, in Algol 60 ([dickgrune.com](https://dickgrune.com/Old_Computers/EL-X8/index.html)) | the central processor as an executable description: every instruction, protection, parity, interrupts, cycle counts |
| D. Grune, *Beschrijving van de X8-simulator X8S*, 1972 | why X8S does what it does, and experiments on the real X8 |
| X8Stest.elan, the test program of the same simulator | 375 tests, and the only sample of ELAN, the X8 assembly language, we have |
| EWD 149 (1966) | CHARON, the I/O processor: flip-flops, start orders, every device |
| EWD 196 (CACM 1968), EWD 113, 118, 126, 123, 51/54/57 | THE: the levels, segment control in detail, the processes, buffering, semaphores |

We found no surviving program text of THE and no earlier
reimplementation. There is an X8 simulator (X8S), but nothing to run on it.

## The machine

- [`emu/x8.c`](impl/x8-the/emu/x8.c): the central processor, a transliteration of
  X8S label by label. Words are 27 bits in ones' complement; the adder is the
  end-around-carry adder, which gives the -0 preference of the X8 without
  special cases. The shifts are rotations and arithmetic shifts on bit
  patterns, checked against the integer formulas X8S uses.
- [`emu/charon.c`](impl/x8-the/emu/charon.c): CHARON after EWD 149: AF, IF and
  LVIF, AR0..AR3 at 64 + 4n, chained start orders with AFT and IFT, the
  keyboard, teleprinter, tape reader and punch, the clock with its cooking
  timer, the tooth brush, and IP loading through the "prille begin". The drum
  start order, the character code and the line printer are ours, because EWD 149
  stops short of them.
- [`asm/x8asm.py`](impl/x8-the/asm/x8asm.py): an ELAN assembler. Its notation
  is reconstructed from the 1971 test program, which it translates unchanged.
- Validation: [`tests/x8stest.sh`](impl/x8-the/tests/x8stest.sh) runs that
  test program on the emulator. All 375 tests run to the end, with the parity bits of
  the punched tape correct, and 68 expectations written in its comments hold.
  Two comments disagree with X8S's own code; we follow the code and say so in
  [`tests/x8stest.checks`](impl/x8-the/tests/x8stest.checks). The program is
  fetched from Dick Grune's page, not copied into the repository.

Two things the test program taught us. The bare `count` and `repp` of ELAN
must be count register 7, not 0: the program writes subroutine links into
locations 0 and 1. And `g = 5`, a number into G, does not exist on the X8
(X8S calls it undefined), so ELAN must have written it as `f = 5`, which
leaves the same integer in G.

## THE

[`the/the.elan`](impl/x8-the/the/the.elan), about 3200 lines of ELAN, after
EWD 196:

| Level | What | How |
|---|---|---|
| 0 | processor allocation | interrupts from CHARON, semaphores with queues, priorities, a time slice on the cooking timer of the clock. A system call is the hardware semaphore of device 36, whose IF the program can set |
| 1 | segment control | EWD 113 as written: segment variables with four states and their bit layout, core table entries, the Victim, the holiness counter, interest numbers, the drum page numbering 1025 n mod 2^19, the segment control buffer and the controller loop. The requesting program makes the page transitions itself, deaf; the controller only completes them, in order, in step with the drum |
| 2 | the message interpreter | the console: a process opens a conversation by naming itself, the operator by naming the process; one conversation at a time; the texts are in a segment |
| 3 | buffering | the line printer process prints output segments in the order they were chained; chaining moves the segment variable, not the information (EWD 118) |
| 4 | user programs | pm1, the sieve of Eratosthenes over four segments; pm2, which asks the operator a question; pm3, which writes six segments, more than there are core pages, and reads them back twice |
| 5 | the operator | [`the/operator.keys`](impl/x8-the/the/operator.keys) |

The machine starts as the X8 did: LS, then IP, and CHARON reads the tape
through the IP reader and gives the interrupt. On eight core pages the user programs and the Kubernetes store need some
twenty segments; the drum does about sixty transfers, and the console says:

```
[  11.825 s] pm2: how many squares?
[  14.127 s] pm2 12
[  14.886 s] pm3: segments written and read twice: 6
[  18.924 s] pm2: squares printed: 12
[  21.429 s] pm1: primes below 2048: 309
[  24.232 s] pm3: errors: 0
[  25.735 s] pm2: finished
[  27.138 s] pm1: finished
[  28.541 s] pm3: finished
[  40.901 s] k kill 2
[  42.978 s] node: not ready, node 2
[  71.001 s] k scale 5
[ 110.401 s] end
[ 110.807 s] drum transfers: 56
[ 112.707 s] segment control buffer, most used: 3 places of 7
```

The whole output, console and line printer, is checked by
[`tests/the.sh`](impl/x8-the/tests/the.sh) against [`the/the.out`](impl/x8-the/the/the.out).

What the layers buy shows in two experiments (labs 02 and 03). With five core
pages instead of eight, the drum works three times as hard and the results do
not change: above level 1 nobody knows how much core there is. Let the
segment controller report each dump through the message interpreter, one
level up, and the machine waits for ever: the message interpreter needs its
vocabulary segment, and only the segment controller brings segments. EWD 196
gives exactly this reason for putting the message interpreter above segment
control.

## Kubernetes on THE

THE gives a user program three things: semaphores, segments and the console.
Level 4 now also runs a small Kubernetes control plane built from nothing
else (in `the/the.elan`, section "level 4: Kube"):

| Program | What it does | What the semaphore world made us build |
|---|---|---|
| kapi | the API server: owns the store, one segment, and serves requests one at a time | its request queue is a mailbox made of three semaphores (free places, filled places, a mutex for the writers): what RED had as `MAILBOX` and GREEN as an entry. The answer comes back on the client's private semaphore |
| ctrl | the replica controller: one more pod per pass while there are too few | no watch: every pass takes a fresh snapshot of the store, a level-triggered loop |
| schd | the scheduler: a pending pod goes to the ready node with fewer pods | the store is the truth: binding is accepted only for a pod that is still pending, so a scheduler with an old snapshot cannot bind twice |
| kub1, kub2 | the kubelets: a heartbeat, and bound pods become running | |
| node | the node lifecycle controller: silent for a second means not ready, and the pods are evicted | time has to come from somewhere: the kernel got its only new service, a delay on the clock (system call 3) |
| kctl | kubectl: the operator's lines after `k` | the message interpreter is on level 2 and must not call level 4, so it only fills a buffer and does V on kctl's semaphore |

In the standard run the deployment of three pods spreads over both nodes; at
40 s the operator types `k kill 2` (the machine of node 2 is switched off), two
seconds later the console says `node: not ready, node 2`, the line printer
shows `deleted web-2`, `created web-4`, `bound web-4 to node 1`, `running web-4
on node 1`; `k scale 5` adds two pods. THE in RED and GREEN, with the same
patterns in the languages of 1979, is in `impl/ada-colors/os/`.

## In the browser

[`web/`](impl/x8-the/web/) is the emulator built with emscripten (the CI job
rebuilds it with a pinned image and requires it to match the committed one)
and a page that boots THE from its tape: the console teleprinter, a keyboard
for the operator, the line printer, and the core table of segment control as
it changes (which segment is in which page, holiness, the Victim). On the
series site it is `/x8/`.

## In QEMU and in the cluster

`qemu-system-x8` ([`qemu/target/x8`](qemu/target/x8/), [`qemu/hw/x8`](qemu/hw/x8/))
is a QEMU machine that runs the same X8 core: one translation block hands a
slice of machine time to `x8.c` and `charon.c`, which `graft.sh` copies in from
`impl/x8-the/emu`, and the X8 cycle of 1.25 us is kept in step with QEMU's
virtual clock. The THE tape is the kernel (`-kernel the.tape`; QEMU presses LS
and IP), the first serial port is the console teleprinter and keyboard, the
second the line printer; `-machine x8,commands=...` types operator lines at
start. Translating every X8 instruction into TCG would only have made a second
model of the machine to keep in agreement with the first; this way the CI job
`qemu` can require THE to print in QEMU byte for byte what it prints in
`x8emu`, and it does.

From there the path of the Oberon machine: `x8` is a line in
`kubevirt/targets.txt`, so the virt-launcher image carries `qemu-system-x8` and
its libvirt knows the architecture; the catalog machine `x8-vm`
([`marketplace/.../apps/x8-vm`](marketplace/repos/machines/packages/apps/x8-vm/README.md))
is a passport for the shared `retro-machine` library, with the tape from the
`x8-run` image; the KubeVirt end-to-end check installs it on kind and requires
`qemu-system-x8` with the tape and a THE console on the VNC screen.

## Labs

[`labs/`](impl/x8-the/labs/README.md): seven exercises (look, change, break,
measure) and `labs/check.sh`.

## Next

- The drum and the printer as their own screens of the catalog machine, and the
  paper tape punch, which THE does not use.
