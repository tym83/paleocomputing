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

[`the/the.elan`](impl/x8-the/the/the.elan), about 2300 lines of ELAN, after
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
through the IP reader and gives the interrupt. On six core pages the three
programs need some fifteen segments; the drum does about fifty transfers, and
the console says:

```
[   8.134 s] pm2: how many squares?
[  12.701 s] pm2 12
[  13.451 s] pm3: segments written and read twice: 6
[  17.455 s] pm1: primes below 2048: 309
[  20.258 s] pm2: squares printed: 12
[  22.761 s] pm3: errors: 0
...
[  90.807 s] drum transfers: 54
[  92.707 s] segment control buffer, most used: 3 places of 6
```

The whole output, console and line printer, is checked by
[`tests/the.sh`](impl/x8-the/tests/the.sh) against [`the/the.out`](impl/x8-the/the/the.out).

What the layers buy shows in two experiments (labs 02 and 03). With four core
pages instead of six, the drum works three times as hard and the results do
not change: above level 1 nobody knows how much core there is. Let the
segment controller report each dump through the message interpreter, one
level up, and the machine waits for ever: the message interpreter needs its
vocabulary segment, and only the segment controller brings segments. EWD 196
gives exactly this reason for putting the message interpreter above segment
control.

## Labs

[`labs/`](impl/x8-the/labs/README.md): six exercises (look, change, break,
measure) and `labs/check.sh`.

## Next

- The emulator in the browser, with THE booting on a page of the series site.
- A QEMU machine model of the X8, KubeVirt, and the X8 in the Cozystack catalog,
  like the Oberon machine of the earlier episodes.
- A Kubernetes control loop as user programs on THE, with nothing but
  semaphores, segments and the console (THE in RED and GREEN is a separate
  piece of work, in the RED and GREEN episode).
