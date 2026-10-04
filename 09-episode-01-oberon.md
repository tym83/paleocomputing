[Русская версия](09-episode-01-oberon.ru.md)

# Episode 1 (flagship): an entire computer in one tab

Decision made on 2026-09-21: we do Oberon first, not Burroughs. The reason: we need
scale and hardcore at the start; Burroughs moves to second/third (see `10-episode-burroughs.md`).

## The essence

Not an emulator. **A real processor**: Verilog → Verilator → WASM, executed cycle by cycle
in the browser. A full OS with a windowed interface, a file system and an
editor boots on it. Inside it, the compiler **rebuilds the entire system, including itself, in
seconds**.

**The headline act:** the reader edits the processor's instruction set right on the page,
presses a button, and a few seconds later the operating system keeps running on
the modified hardware.

A vertical slice from the logic gate to the window manager in one minute. Impossible on x86
or on ARM: there, no single person holds the whole stack in their hands.

## The numbers the effect rests on

- the processor: on the order of 1000 lines of Verilog
- the compiler: on the order of 3000 lines
- the OS with graphics, a file system and an editor: on the order of 6000 lines
- **the whole stack, from the hardware description to the GUI: about 10,000 lines**

For comparison: the Linux kernel and the browser in which all this runs are tens of millions.

And most importantly: **this whole stack can be read in a weekend.** Wirth's book was written that way on purpose.
The episode becomes not "look at a forgotten system" but "here is how much code you really
need for a computer to exist": an indictment of the modern industry, presented in tangible form.

## A modern workload on top: a language model on RISC5

The genre: take a 2026 problem and put it on a system you can read in a weekend.

**Feasibility (an estimate, to be checked):** models with 200–300 thousand parameters generate
coherent text. With one-byte quantization that is ≈260 KB of weights, which **fits in the machine's
megabyte of RAM**. Inferring a token ≈ as many multiply-accumulates as there are parameters. At 25 MHz,
given that RISC5 has floating point, that is on the order of tenths of a second per token.
Even if this is off by several times, it is a few tokens/s, meaning text visibly crawls across the screen.

A reference inference implementation of this class is ~700 lines of C; porting it to Oberon is a finite task.

**The picture:** the entire system, processor, compiler and OS, is smaller in code size
than the loader of a modern ML library, and it still generates text.

## The real act: add an instruction and speed things up

Add a multiply-accumulate to the processor, teach the code generator to emit it,
rebuild, show the speedup. On one page: Verilog → a new instruction →
the compiler → the same text generation, only several times faster.

**Continuation (episode N+1):** not one instruction but a matrix extension, a small
systolic array in RISC5. Build with your own hands the smallest working AI accelerator
and walk the reader from how multipliers form a lattice to text on the screen.
The precedent for the genre is tiny-tpu (see `07-browser-embed.md`).

For positioning: when selling GPUs as a service, show an understanding of accelerators from the
transistor up, not from the API down.

## The most valuable thing that can be done on Oberon

**Add descriptors with a length and hardware bounds checking to RISC5**, that is, apply
the Burroughs lesson to our own processor.

Then it is not a retelling of someone else's idea but our own measurement:
- how many cycles the check costs
- how many logic cells it eats
- how much the system slows down on a real workload (for example, on rebuilding itself)

**Nobody has this number.** The whole discussion about CHERI, MTE and memory safety happens
at the level of "it costs some percent", with references to other people's estimates under other conditions.
Here it is a measurement on a fully transparent system where every line is known, from the
gate to the application code.

This links episode 1 with the Burroughs episode and turns the series from an overview into
research.

## Other experiments on Oberon (material for future episodes)

- Add a feature to the language: the compiler is 3000 lines, all in plain sight; honestly measure the cost
- Swap the garbage collector: a rare case where the GC is visible to the bottom
- Measure the unmeasurable: cycles per procedure call, per window switch, per full rebuild
- Write what the system lacks (a network stack, multi-user mode): the real cost in lines on a clean substrate

## What the environment is like (for the episode's reader)

There is no shell and no menu. **The whole system is text, and any text is executable**: you type
the name of a module and procedure in any window, click the middle button, and it runs. A command,
a document, a log, a source file are all the same material. Windows are tiled. Modules load dynamically:
compile it and it immediately lives in the running system without a restart. Hot code
reloading, 1988.

## Technical design

Two models behind a toggle button:
- **fast**: `pdewacht/oberon-risc-emu` (~1500 lines of C) via Emscripten; the reader actually works on it
- **honest**: Verilog via Verilator into WASM, cycle by cycle, with visible signals; this is where people look at the mechanism and change the ISA

Plus a button to rebuild the OS with its own compiler from the inside, with a seconds counter.

⚠ Do not use Schierl's ready-made OberonEmulator for the flagship: it has paravirtualized SPI and
keyboard and needs patched images, so its "authenticity" is in question. It is fine for an overview article.

## Risks and safeguards

| Risk | Safeguard |
|---|---|
| Cycle-by-cycle RTL is too slow for interactivity | the fast model provides responsiveness, the RTL stays the showcase |
| Rebuilding Verilog in the browser is heavy | a prebuilt set of ISA variants instead of arbitrary editing: the effect is weaker but it lives |
| Not much room in the RISC5 instruction encoding for new instructions | check against the specification **first thing** |
| A one-bit screen | everything demonstrative must look good as text; text generation fits perfectly |
| 1 MB of RAM on real hardware | in the browser the memory can be larger; on the board the quantized version remains, which is a good story arc in itself |

## No hardware needed

**The episode is done entirely without equipment.** The processor cycle by cycle, the OS, the neural network, ISA
edits, the rebuild: all of this is Verilator + WASM on a laptop and in the reader's tab.

And the main research result (the cost of hardware bounds checking) is also obtained
without hardware:
- **cycles**: Verilator, more precise than a real board (no noise and no interrupts)
- **area**: the yosys synthesis report
- **max frequency**: yosys + nextpnr for the chosen FPGA type; the FPGA itself is not needed
- **estimates for silicon**: an open synthesis flow, without sending anything anywhere

The sentence "hardware memory safety costs this many cycles and this many gates"
can be published with zero spending on equipment.

**What we will not have without hardware:** the surprises of real physics; a thing on the desk that people get to
touch; the argument "it only ran in a simulator" will stay with part of the audience;
the arc's finale with a die in hand disappears. All of this is about the story and validation, not about the result.

**Purchasing order:** buy nothing until the first episode is out. If the series takes off,
a development board for a few dozen dollars becomes the next episode, not a
precondition for the first. Our own board and silicon are distant options we may never reach.

## Timeline

2–4 weeks. This is a deliberate trade-off: the start of the series slips, but the first episode hits at full force.
