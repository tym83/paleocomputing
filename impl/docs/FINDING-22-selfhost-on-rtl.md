[Русская версия](FINDING-22-selfhost-on-rtl.ru.md)

# Finding 22: the circle is closed: the Oberon compiler runs on the real RTL

Reproducible: `make selfhost`.

## What was done

The entire Project Oberon compiler, `ORS`, `ORB`, `ORG`, `ORP`, was compiled
**on Niklaus Wirth's `RISC5.v` core**, run by Verilator cycle by cycle.
Not on an emulator written in C, but on synthesisable Verilog.

| | |
|---|---|
| instructions on the RTL | **40 770 748** |
| cycles | **66 700 249** |
| modules compiled | 4 |
| match with the emulator | **byte for byte, all four** |

```
ORS   d79c7b037bc77ada9bf5cd3f0c734ba2  ✅
ORB   4ed522fe951b843bfc5e931f1e56834d  ✅
ORG   c34ca90c12748405a80c1109ab6ca422  ✅
ORP   476b4efce7bc3116d68788c5385b1967  ✅
```

## What this means

The Oberon compiler **was already written in Oberon** and bootstrapped itself: that is Wirth's work,
and we only checked it (the fixed point, a finding in the log). What is new here is something else:

> The language, the compiler, the operating system **and the processor** closed into a circle where
> the only C code is the bridge to the host file system, that is, an interface to the OS,
> not part of the machine.

In the browser version even this bridge is not needed: there the files live in the disk image.

## How it works

Norebo connects Oberon to the host through four I/O addresses: the system
call number and three arguments. We **included `norebo.c` in full, replacing only `main()`
and the processor start-up**: the file operations, memory and the call table were taken without a single
change. Otherwise the comparison "the same thing, but on RTL" would be dishonest: we would be comparing
against our own implementation.

Verilator runs the processor; everything else is Norebo's code.

## Three mistakes along the way, all mine

**1. Device addresses.** Norebo addresses them with negative numbers (`-4`, `-8`, `-12`,
`-16`), that is, `0xFFFFFFFC` in 32 bits. But the RISC5 bus is **24 bits**, and what arrives from it is
`0xFFFFFC`. The check `(int32_t)a < 0` on a 24-bit address **never fires**.
The first run spent **4 billion instructions idling**.

**2. The halt condition.** Having fixed the first, I also simplified the halt check, and it
started firing on **any** system call instead of only `noreboHalt`.
The run ended after 103 instructions.

**3. The instruction register at start-up.** The most substantive one. RISC5 is a prefetching machine:
at the start of a cycle the instruction register holds the executing instruction, and the bus already shows
the next one. I set the program counter but **did not set the instruction register**: it was left with garbage
after reset. The first instruction of the image (the jump to the entry point) was not executed,
and the core went on executing **the module table as code**.

Tracing showed this instantly: the counter went `0, 4, 8, C…` instead of jumping to `0x3664`.

## Separately: a trap in my own wait loop

While checking the result, I wrote `until ! pgrep -f norebo_tb; do sleep; done`, and the loop
**found itself**: its own command line mentions the name being searched for. For an hour and a half it waited
for its own termination, while I thought a long compilation was running.

The moral is the same as in finding 17: **a negative result is checked just as carefully
as a positive one**. "Did not finish in an hour and a half" turned out to be a property not of the system
but of the measuring instrument.

## What it opens up

- **the "bootstrap" lab** (the Oberon course, labs 7–8) can now run on the RTL
- the next step is the same thing **in the browser**, where there is no bridge to the host at all
- and the same scheme carries over to Lilith: a Modula-2 compiler on a machine that never existed
