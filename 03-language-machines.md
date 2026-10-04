[Русская версия](03-language-machines.ru.md)

# Track 3. Language machines: hardware + language + OS as a single triad

The genre is called **language-directed architecture**. These are not curiosities but a buried
discipline: for two decades processors were designed for the language, not the other way round.

**The model to follow is Project Oberon 2013.** Wirth designed the RISC5 processor,
wrote a compiler, wrote an OS with a windowed interface in that language, and described it all
in a book so that it can be reproduced from scratch. Ports to cheap FPGAs exist. Work through it
and you understand the whole cycle; then you build your own.

---

## Catalog of triads

- **Transputer + occam + Helios**: the process scheduler and channels are implemented **in hardware**: a context switch is an instruction. The OS simply has no scheduler. A grid of 16 nodes on an FPGA = a physical CSP machine on the desk. **The flagship.**
- **Kronos + Modula-2 + Excelsior**: the Novosibirsk machine built for Wirth's language, the Soviet answer to Lilith. Recreate the processor in Verilog, bring up Excelsior. Unique content + real preservation of heritage (it rests on a few living people).
- **Lilith + Modula-2 + Medos-2**: the original. M-code is documented, an emulator for cross-checking exists.
- **Forth machines: Novix, MuP21, GA144, J1**: the J1 is an open Forth processor of ~200 lines of Verilog that fits in the smallest FPGA. A Forth system is its own language, OS and debugger. **A full triad in a weekend: the best first approach.**
- **iAPX 432 + Ada**: the canonical "the language defined the architecture and sank it": objects and access rights in silicon, four times slower than the 8086.
- **Elbrus + El-76**: the ideal triad in meaning, the hardest in artifacts. Reconstruction only.
- **ICOT fifth-generation machines: PSI, the WAM in hardware**: Japan built a national program around logic programming. A loud failure, complete oblivion.
- **CADR and the Lisp machines**: a legend of the genre, MIT's system software is open, FPGA attempts have been made.
- **Rekursiv** (Linn Smart Computing, Scotland, 1988): a processor with objects in hardware and the Lingo language. Legend has it the prototypes were sunk. Practically nobody knows about it.
- **Mushroom + Napier88**: a machine for orthogonal persistence: objects survive a power-off at the architecture level. Closes the loop on tracks 1, 2 and 4.
- **Reduceron** (York): a graph-reduction machine for lazy functional languages, alive and documented. The most realistic research project.
- **SOAR, Smalltalk On A RISC** (Berkeley): **the counter-argument**: special hardware is not needed, a good compiler on an ordinary RISC is. Implementing it = reproducing the position of the winning side. An episode as a debate, not a monologue.
- **The B5500 as an ALGOL machine**: the stack, descriptors and tags derived directly from the language. An emulator for cross-checking exists; the path to an FPGA is shorter than it seems.
- **picoJava, Jazelle, Java Card**: the genre's recent history, completely forgotten.

---

## The thesis of the sub-track

It died for three reasons: compilers became good and the semantic gap was closed in
software; the RISC school showed that a simple fast core + a good compiler outruns a
complex specialized one; economics: a mass-produced general-purpose chip is cheaper than a
low-volume special one.

All three have reversed: FPGAs cost as much as a dinner; RISC-V allows adding
instructions legally and for free; CHERI proves that it makes sense to check language
semantics in hardware; accelerators and DPUs are the return of specialized silicon.

**Language machines lost not on merit but on economics, and the economics have changed.**

---

## The project ladder

| Time frame | Project | Result |
|---|---|---|
| A weekend | J1 or our own small Forth processor + a Forth system | a full triad, the first repository |
| A month | Reproduce Project Oberon from the book | calibration: the whole cycle from the ISA to the window manager is understood |
| First original contribution | Kronos or Lilith: the processor in Verilog, a cross-compiler on the host, bootstrapping, booting the OS | something appears that does not exist in the world |
| Flagship | A transputer grid with occam and Helios | a multi-node CSP machine that gets taken to conferences |

### Two practical things that decide a project's fate
1. **Target FPGAs with a fully open toolchain** (iCE40 or ECP5 + yosys/nextpnr); otherwise reproducibility runs into a proprietary environment and half the point of open source is lost.
2. **Keep the build under Verilator from the very start**, so that the reader runs the triad without a board with a single command. A project that requires buying a gadget gets read; one that starts in thirty seconds gets repeated.

**Bootstrapping** is the moment when the compiler first builds itself on the target
machine rather than on the host. The best scene of the whole track; it is worth filming.

---

## Building RISC5 physically

### The list of hardware around RISC5 is indecently short
- the RISC5 core: on the order of one or two thousand logic cells, fits in the cheapest FPGAs with room to spare
- about a megabyte of static memory
- an SD card over SPI, holding the file system
- video output 1024x768, 1 bit per pixel, the framebuffer in main memory; the video controller = a counter + a shift register
- PS/2 keyboard and mouse
- a serial port for the initial load

No memory controller, no bus, no interrupts in the usual sense. The machine's specification
fits in a few pages of the book, which is why the project is doable by one person.

**An important detail that everyone who repeats this trips over:** Oberon requires a
**three-button mouse**; the whole window system is built on inter-button clicks. Remember
the third button from the very start of the board layout.

### Path 1: an FPGA and our own board (the sensible one)
The fork is decided not by performance but by the toolchain. For an open project: **iCE40**
(yosys / nextpnr / icestorm) or **ECP5**. The iCE40 comes in hand-solderable packages;
external asynchronous SRAM also comes in solderable packages → a machine assembled with an
ordinary soldering iron is not a fantasy. The ECP5 gives more resources and HDMI, but it is BGA,
a four-layer board and a hot-air gun.

Sequence: a ready-made development board and the existing Oberon port → rebuilding the core
from the book's sources with the open toolchain + our own peripherals → our own board. Lay it out
earlier = lay it out twice.

Money: a development board costs tens of dollars; a small run of our own board, hundreds.

### Path 2: a real chip (the loudest)
Open silicon shuttles exist: open PDKs + an open synthesis flow.
**TinyTapeout**: hundreds of dollars. Full-size shuttles on open 130 nm give room for the
core with peripherals.

The point: **RISC5 has never existed as a chip**; it has always lived inside an FPGA.
Producing it in silicon finishes the idea thirteen years after the book.

⚠️ The set of available shuttles, schedules and prices change; some programs have closed or
changed owners in recent years. **Check the current state before taping out.**

Do this after path 1: the design is the same, only the flows differ.

### Path 3: discrete logic (the monument)
A 32-bit datapath, a 32-word register file, a shifter, a multiplier: hundreds of packages,
meters of wire, single-digit megahertz. Eight-bit homebrew machines live in 30–40 chips; that is
a different weight class. It takes years. If you want it, pick something explicitly eight-bit and
run it as a separate line not tied to the article schedule.

### What you get
A physical machine that boots in under a second into a graphical shell with a
compiler inside, whose entire stack, from the instruction set to the window manager,
is described in one book and fits in one person's head.

**There is currently no open kit for building an Oberon machine yourself.** There are ports to
other people's boards and the book; a single assembled thing with a board layout, a specification,
firmware and instructions does not exist. An empty niche.

---

# The road to silicon: from a virtual processor to a chip

The key point: **the source is the same**, only the backend changes.

One Verilog goes along three routes: through Verilator into C++ and on into WASM (the browser);
through yosys/nextpnr into a bitstream (the FPGA); through an open synthesis flow into GDSII (the fab).
Not three projects but one with three outputs.

## What simulation forgives and hardware does not

An uninitialized register (in hardware it holds garbage at power-on). The absence of an explicit reset.
Races between clock domains: in simulation they do not exist, in hardware the keyboard, video, card and
core tick at their own frequencies and need synchronizers between them. External memory in simulation
is an array with instant access; in hardware it is a controller with latencies.

All of this shows up on the FPGA, not in silicon. And that is good: there an iteration costs thirty seconds.

## What is harsher specifically in silicon

In an FPGA, block memory exists and is effectively free. On a die, every kilobyte of SRAM is a
macro block from the library that occupies area you pay for. There is no free distribution of the
clock and reset; the clock tree is synthesized separately. A pad ring appears, along with
power, ESD protection, and scan chains for testing (without them you cannot check whether the
die that arrives is alive).

**An iteration costs months and money instead of thirty seconds. A shuttle gets one attempt.**

## Specifically about RISC5

The core is small and will fit without question. **The memory will not fit**: Oberon wants ~1 MB, and a
megabyte of on-die SRAM will not fit in a shuttle budget. So the memory is external → pins are needed →
and on cheap shuttles pins are scarce (projects share a multiplexed bus).

**Conclusion: the ordered die will be a processor, not a computer.** On its own it does nothing
until there is a board around it with memory, video output, a card and connectors.

## The order of steps (must not be violated)

1. **Browser**: today, for free
2. **Regression tests** in parallel: they pay off at every subsequent step
3. **FPGA on a ready-made board**: tens of dollars; everything the simulation forgave shows up here
4. **Our own board around the FPGA**: hundreds of dollars; peripherals, layout, timing, power
5. **Silicon**: by the time the chip arrives the board is already debugged; you simply remove the FPGA and put in the die

Step 4 before step 5 is **not bureaucracy but a precondition**. Otherwise the die will sit in a
drawer for half a year while the board is made, and the effect will be diluted.

## What to build in right now (cheap now, expensive later)

- Write **synthesizable** Verilog without constructs that exist only in simulation
- **Explicitly reset all registers**
- Do not rely on preloaded memory: in an FPGA the bitstream initializes it, **on a die that will not happen**
- Keep the core and the memory separated by a clear interface so that the memory model can change without touching the core
- **A single clock domain inside the core**, everything external through synchronizers
- Tests from day one

If this is built in, the road to silicon is open. If not, at the FPGA step it will turn out that a
noticeable part has to be rewritten.

## The arc of the series

Episode 1: the processor lives in a browser tab. The middle: it breathes on an FPGA. The finale: the same
line of Verilog becomes a piece of silicon you can hold in your hand.

**RISC5 has never existed as a chip**; it has always lived inside an FPGA. Wirth died in
early 2024; taking his idea all the way to a die is a fitting form of respect and a strong
finale for the series.
