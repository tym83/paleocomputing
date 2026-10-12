[Русская версия](README.ru.md)

# What a rendezvous cost on the R1000

The Rational R1000/400 was a machine built for Ada: tasks, rendezvous and
type checks were in its microcode. DataMuseum.dk brought one back to life and
wrote a software emulator of it that runs the real microcode cycle by cycle.
This directory measures, on that emulator, what Ada 83 tasking cost on the
machine that was designed for it, and compares it with GNAT on a modern
processor and with RED on our runtime.

## How it is measured

- [`rdv_bench.ada`](rdv_bench.ada) is plain Ada 83: an empty loop, a loop
  calling a procedure, a rendezvous with a simple `accept`, a rendezvous with
  an `in out` parameter, and the life of a task (create, run an empty body,
  wait for it to end). Each test is calibrated by the clock and then run N
  times between two lines, `BEGIN <test> <N>` and `END <test> <ms>`.
- [`run.sh`](run.sh) boots the Rational Environment from the museum's public
  disk images, logs in on the operator console, copies the source in through
  DFS, parses and codes it and runs it. This is how the museum's own `Slim`
  scripts drive the machine. At every `BEGIN` and `END` line it asks the
  emulator for its microcycle count; one microcycle is 200 ns of the real
  machine. [`parse.py`](parse.py) turns the log into the table below.
- The Environment's own clock agrees with the microcycle count to within 0.3%
  (19,865 ms by `Calendar` against 19.899 s of microcycles for the empty
  loop): the machine keeps its time by its own cycles, so both figures are the
  R1000's, not the host's.
- [`.github/workflows/r1000.yml`](../../../.github/workflows/r1000.yml) does
  all of it on a GitHub runner: the emulator at a fixed commit, the disk images
  checked by their SHA-256, then GNAT (`-gnat83 -O0 -fno-inline`, since at
  `-O1` GCC deletes the empty loop and inlines the call) and RED
  ([`rdv_bench.red`](rdv_bench.red), timed from outside by
  [`stamp.py`](stamp.py), under `stdbuf -oL` so every line leaves at once).

## Results

Run of 12 October 2026. The emulator ran at 1/1.64 of the real machine's
speed on the runner; the Environment was ready to log in after 96 minutes, and
the whole run took 101.

| | R1000 (microcode) | GNAT, x86-64 runner | RED, our runtime |
|---|---:|---:|---:|
| loop iteration with `Counter := Counter + 1` | 3.38 µs | 0.95 ns | — |
| the same with a procedure call | 6.13 µs | 2.2 ns | — |
| **procedure call alone** | **2.75 µs** | **1.25 ns** | — |
| rendezvous, empty `accept` | 55.4 µs | 13.5 µs | 20.7 µs (two mailboxes of size 0) |
| rendezvous, `in out` parameter | 63.4 µs | 26.7 µs | 29.3 µs (two mailboxes of size 1) |
| task: create, run, wait for the end | 399 µs | 57.6 µs | 150 µs |
| **rendezvous / procedure call** | **≈ 19** | **≈ 10,000** | — |

What the numbers say:

- On the R1000 a rendezvous cost about as much as twenty procedure calls. On
  a modern processor with operating-system threads it costs as much as ten
  thousand. A call has become two thousand times cheaper, a rendezvous only
  four times.
- In absolute terms the R1000 of the late eighties is about four times slower at a
  rendezvous than a 2026 runner, and two thousand times slower at a call:
  tasking was the part of Ada that the hardware made cheap.
- That is the background of the Ada 95 Rationale's remark that the generality
  of the rendezvous means a relatively high overhead. On the R1000 it was not
  high relative to anything else the machine did; on general-purpose
  processors it became the most expensive thing in the language.
- The RED round trip goes through two mailboxes, so it is two transfers
  where the rendezvous is one; on our runtime it comes out close to GNAT's
  rendezvous. The runtime hands control between threads one at a time, which
  is what a task switch costs on a general-purpose machine.

Limits of the measurement: the emulator counts microcycles of the microcode
and dropped some hardware detail on the way (ECC, the diagnostic processors),
so memory stalls of the real machine may be undercounted. The runner is a
shared virtual machine. The parser's warning "Line length
exceeds 254 characters" at line 150 is about the padding after the end of the
file in DFS; the units parse and code cleanly.

## Running it

```sh
gh workflow run r1000.yml            # or push to a feat/r1000-* branch
```

The `r1000` job needs about two hours, most of it the boot. The disk images
(2 × 1.1 GB) are cached after the first run.
