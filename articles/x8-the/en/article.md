# No machine, no code: I rebuilt the Electrologica X8 and wrote Dijkstra's THE system on it again

In May 1968 Communications of the ACM printed a short paper by Edsger Dijkstra, "The structure of the 'THE'-multiprogramming system". Six pages without a single line of code, and yet every operating systems course still covers it: it describes a system built in levels, each using only the ones below, and its appendix gives semaphores, P and V. THE ran at the Technische Hogeschool Eindhoven on a Dutch machine, the Electrologica X8.

The system is gone. Dijkstra writes that it was programmed "in plain machine code", and as far as I could find out, that code has not survived. The machine is gone too: Electrologica built the X8 from 1964 to 1968, and today you can see one in Museum Boerhaave in Leiden, behind glass. What is left of both is text: Dijkstra's reports, an X8 simulator that the Mathematisch Centrum in Amsterdam wrote in Algol in 1971 so that programs could be debugged outside machine time, and the test program that came with it.

That was enough to build both again. First the machine: an X8 emulator with its I/O processor CHARON, and an assembler for ELAN, the language X8 system programs were written in. Then the system: THE in X8 machine code, as Dijkstra described it, with the same segment controller, the same Victim, the same holiness counter and the same message interpreter he described between 1964 and 1968. This article is about what came out of it and what experiments taught me on a system that until now one could only read about.

<cut />

This is the next part of my series on paleocomputing, about technologies that lost or disappeared and what we threw away with them. You don't need the earlier parts.

As before, almost all the code was written not by me but by AI agents. My part was the idea, the decisions, the checking, and the constant question "where does Dijkstra say that?". The sources are in [github.com/tym83/paleocomputing](https://github.com/tym83/paleocomputing), in `impl/x8-the`.
# Six people, half time

Electrologica was a small Dutch firm that grew out of the Mathematisch Centrum in Amsterdam. Its first machine, the X1, came out in 1958, and Dijkstra, then at the Centrum, wrote its interrupt handling and, with Jaap Zonneveld, one of the first Algol 60 compilers for it. The X8, its successor, was built from 1964 to 1968. It had a 27-bit word in ones' complement, core memory with a 2.5 microsecond cycle, a drum of half a million words, and a separate I/O processor called CHARON that served up to 48 slow devices by itself: tape readers, punches, teleprinters, a plotter, a line printer.

In 1962 Dijkstra became professor of mathematics at the Technische Hogeschool Eindhoven, and the school bought an X8. He set himself and his group the task: a system that takes a continuous flow of programs from students and staff, keeps several of them in the machine at once, and decides by itself what to keep in core and what on the drum. The group was modest, and Dijkstra says so plainly: six people, on average half time, which slows the work down by a factor of four at least. He doesn't complain about it, though; he explains how they managed.

They managed through fear. Dijkstra had been writing programs that handle real-time interrupts since 1958, and he knew that an error in such a program is almost impossible to catch: interrupts come at unpredictable moments, and the error looks like an occasional machine fault. So the group decided not to let errors in at all. The system was laid out in levels. On the lowest, the processor is shared among sequential processes, and above it the number of processors no longer matters. On the next, the segment controller ties segments of information to pages of core and drum, and above it where information lives no longer matters. Higher up comes the message interpreter, owner of the console, then the buffering of input and output, then the user programs and finally the operator.

Each level was tested on its own, starting from the bottom, and the next was added only once the one before had been tested completely. Dijkstra writes that testing found surprisingly few errors, about one per five hundred instructions, each found in ten minutes at the console. The system, he says, can be delivered without the perpetual fear of a derailment in some unlucky coincidence: its correctness has been proved.

The paper in Communications of the ACM came out in 1968. Before it there was a series of internal reports from which one can reconstruct how the system was really built: EWD 113 on segment control, EWD 126 on the processes, EWD 118 on buffering, EWD 123 on semaphores and cooperating processes, and EWD 149 on the X8's I/O equipment. Some are in Dutch, and all have been transcribed and put online in the Dijkstra archive in Austin.
# What is left

I had to start with the question whether THE itself still exists. As far as I could find out, it doesn't. The Dijkstra archive has the reports, Wikipedia says the system was written in X8 assembly, but no archive I could find holds the program text. It isn't in the Mathematisch Centrum's software archive on GitHub either, which kept the papers of the committee that chose the X8's assembler, and the machine's simulator. Nor did I find any other reconstruction of THE. Searching GitHub and papers turns up teaching fragments, levels and semaphores as a textbook example, but not the whole system and not on an X8.

The machine fares better. In 1971 Dick Grune at the Mathematisch Centrum wrote an X8 simulator in Algol 60, called X8S, so that machine-code programs could be debugged without taking up the machine. Grune still publishes it on his page with its test program and a description from 1972. X8S models the complete instruction set of the central processor, memory protection, the control state, the interrupt mechanism, parity checking and even the number of cycles each instruction takes. Of the I/O processor it implements only initial loading. It isn't documentation, it's an executable description: every X8 instruction is written there as a piece of Algol, and it can be read as a specification.

X8S comes with a 1357-line test program in ELAN, the X8's assembly language. It runs 375 tests over almost the whole instruction set, interrupts, protection and parity included, and after each one punches the registers onto paper tape. It is the only sample of ELAN I have: its manual exists only in paper reports of the time.

The I/O processor was described by Dijkstra himself. EWD 149 of 7 January 1966, "Documentation of the communication equipment of the EL X8", tells a programmer everything about CHARON: which flip-flops each device has, where in core its registers are, how chains of start orders work, how the teleprinter, keyboard, tape reader, punch and clock behave, and even the "tooth brush", device 38, which puts other devices back in their home state.

There is no X8 Reference Manual online: Dick Grune has 240 page scans in Dutch, but he hasn't put them on the web. So some things had to be invented, and I tried to mark every such place. The drum start order: EWD 149 calls the drum a normal device and stops there. The teleprinter character code: EWD 149 only says the low six bits decide the action. The speed of the line printer. And the floating point format in the F register, reconstructed from indirect hints in X8S, although THE doesn't need it.
# The machine

X8S is written so that it can be carried over to C almost mechanically, label by label, and that is how the emulator is built. In one place, though, mechanics don't do it. X8S computes with the reals of the X8 itself, and the X8 has a habit that had to be understood before translating: it prefers negative zero.

An X8 word is 27 bits in ones' complement. In ones' complement zero has two forms: all zeros, +0, and all ones, -0. Dijkstra puts the rule in EWD 145 like this: an addition gives +0 only when both operands are +0. Five plus minus five on the X8 is -0. Grune writes in his description of the simulator that where he needed +0 he had to write additions in Algol as -(-a-b). The emulator doesn't need the rule spelled out: an end-around-carry adder, the kind ones' complement machines had, behaves exactly this way by itself. 0101 + 1010 = 1111, that is, -0. It is enough to model the hardware rather than the arithmetic.

Minus zero then haunted me while writing THE to the very end. A semaphore count decremented from one becomes -0, the sign test says "negative", and the process goes to sleep for good. Comparing two equal numbers by subtraction gives -0, and again "less than". In the THE code every subtraction that can give zero is followed by a zero test before the sign test.

The ELAN assembler had to be reconstructed from one test program. ELAN's notation is unusual and rather pleasant: `a = x` loads a register, `x = a` stores, `a + x` adds, `n,goto(:l)` jumps if the condition is not met, and `, z` at the end of a line sets the condition on zero. Names may contain spaces: `save a`, `test dev 2`. The goal was that the assembler translate the 1971 test program without a single change. And it taught me two things no description contains. First, a bare `count` and `repp` are not count register 0, as logic suggests, but register 7. In its subroutine test the program writes return addresses into locations 0 and 1, and with register 0 its loop breaks on the first iteration. Second, "load a number into G" does not exist on the X8; X8S calls it undefined. So ELAN must have translated `g = 5` as `f = 5`, which leaves the same integer in G.

When everything was in place, the test program ran to its end. It punched 4501 bytes: 375 tests of 12 bytes and a final symbol, as its header says. The parity of every punched byte is right. And in the comments the authors wrote down, here and there, what should come out: "c:= 0, lt:= 1, s:= -0", "a:= -5, s:= -0, c = 0". There are 68 such expectations, and all of them hold. Two comments contradict the code of X8S itself. In one, the comment says both registers must be -0 after a division by -1, and the X8S code leaves A with its old sign. In the other, the same operands set the overflow flag in one test and, by the comment, don't in another. I follow the X8S code and note the difference.

The I/O processor follows EWD 149 almost word for word. Each device has three flip-flops: AF, with which the processor calls CHARON; IF, with which CHARON calls the processor; and LVIF, the permission to listen. An interrupt happens when the machine is "hearing" and at least one device has IF and LVIF up. Then the instruction in location 24 is executed instead of the next one, and the machine becomes "deaf". A device gets its work as a chain of start orders in core, and the counters AFT and IFT keep account of how many orders were taken and how many were done. They must be changed with an "additive instruction", because CHARON may change the same counter in the same microsecond. EWD 149 has a whole section on hanging a new order onto a chain that CHARON may still be working on, with a warning: whoever reasons "I've added an order, so I can safely switch on AF" is mistaken. THE uses this protocol for the drum literally.

Time in the emulator is virtual: a cycle is 1.25 microseconds, as in X8S, and the devices run at their real speeds. The tape reader reads a thousand characters a second, the teleprinter prints ten, the drum turns once in 40 milliseconds. That is why each run repeats the previous one to the millisecond.
# THE, level by level

Rebuilding the system from papers turned out easier than I feared and harder than I'd have liked. Easier because EWD 113 describes segment control almost down to the bits: what is in each word of the page table, which values a segment variable can take, which word encodes "segment on the drum" and how it differs from "segment coming into core". Harder because Dijkstra describes everything else, from the kernel to the console, in words, and every decision had to be my own, holding on to his phrasing.

## Level 0: the processor and semaphores

The lowest level is the kernel. It receives CHARON's interrupts, saves the registers of the interrupted process, handles device events and decides who runs next. There are six processes: the segment controller, the message interpreter, the line printer process and three user programs. Each has a priority, the user programs share one, and among them time is divided by the clock's "cooking timer", which counts ten-millisecond ticks down to zero and then raises an interrupt.

The nicest decision turned out to be the system call. A process needs to ask the kernel for P or V, and the kernel works only through interrupts. In early notes Dijkstra calls the interrupt flip-flop IF a "hardware semaphore". The X8 has a device number 36 that isn't present in the machine but whose IF and LVIF work; the 1971 test program uses it to force an interrupt out of nothing. THE does the same. A process puts the operation in A, the semaphore in S, and raises the IF of device 36. One instruction later the interrupt comes, and the kernel sees the request.

## Level 1: segment control

This is the heart of the system and the most detailed part of the reconstruction. Information lives in segments of 512 words, core and drum are divided into pages of the same size, and a segment is not tied to a page. A segment variable, one word, says where the segment is: empty (-0), on the drum (the sign and the page address), in core (the address of a page table entry) or on its way (minus that address). One core page is always designated the Victim. When a program needs a segment from the drum, the transfer goes into the Victim, and a new Victim is chosen at once: the page unused for longest, provided its holiness counter is zero.

Holiness counts those who need the page right now. A program asks for a segment "holy", works with it and then "profanes" it. While the counter is positive the page will not be chosen as the Victim. If a copy of the segment already exists on the drum, the page need not be dumped. If it is the original, it is dumped onto the free drum page that will pass under the heads sooner than the others. Drum pages are numbered so that page n starts at address 1025n modulo 2¹⁹, and the numbers pass under the heads in order.

The main subtlety is described in EWD 113 in one sentence: all page transitions are made by the program that needs the segment, "by an uninterrupted sequence of X8 instructions". The segment controller, a separate process, only completes them, in the order of the messages and in step with the drum interrupts. Dijkstra gives its loop in full, and in THE it is copied almost word for word: wait for a message; if the first half has a drum transfer, wait for the drum; mark the page occupied; wake the program; if the second half has a dump, wait for the drum again; next message. There is also a remark I first skipped: with N programs a buffer of N + 1 messages always suffices, and this is "unbedingt notwendig".

## Level 2: the message interpreter

There is one console, and everybody wants to talk to the operator. Dijkstra explains why this needs a process of its own. When a process opens a conversation, it names itself. When the operator opens one, he names the process, and who is addressed can be known only by interpreting the sentence. So the sentence has to be interpreted by someone who belongs to no process. Hence the rule: one conversation at a time. While pm2 waits to hear how many squares to print, the other programs wait their turn. The texts of the messages live in a segment rather than permanently in core, and that is why the message interpreter sits above segment control.

## Levels 3 and 4

A user program writes its output into a segment of its own. When the segment is full or the program ends, it is handed to the line printer. As EWD 118 says, it is handed over not by moving the information but by moving the segment variable: one word instead of five hundred and twelve. The printer process prints the segments in the order they were handed over, each document under its owner's name.

There are three users. pm1 is the sieve of Eratosthenes over 2048 numbers spread across four segments. pm2 asks the operator how many squares to print. pm3 is greedy on purpose: it writes six segments, more than there are free pages, then reads them back twice and checks every word.

## What it looks like

The machine starts the way the X8 did: the LS button, then IP, and CHARON reads the system tape through the IP reader and gives the interrupt. Then the console speaks:

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

There really are 309 primes below 2048. The user programs and the Kubernetes store need about twenty segments and there are eight pages, so the drum makes some fifty transfers in a run without spoiling a single word. On the line printer the primes come out in four pieces, as pm1 fills and hands over segments, followed by pm2's table of squares. pm3 prints nothing; it only reports on the console.
# Experiments on the levels

This is what it was all for. Dijkstra's paper persuades with words; now the system can be poked, and one can watch what happens.

The first experiment is to give segment control less core. With eight pages the drum makes 56 transfers, with five 202. The programs' output doesn't change by a single character: the same 309 primes, the same twelve squares, no errors from pm3, the same Kubernetes log. The programs simply don't know how much core the machine has. Above level 1, as Dijkstra puts it, core pages and drum pages "have lost their identity".

With four pages the system dies with "crash 1": every page except the Victim is holy at the same moment, and there is nothing to choose a new Victim from. EWD 113 forbids choosing a holy page and leaves it there: Dijkstra had enough pages for the question not to arise. I have six processes that ask for segments, each may hold a holy page, and only three pages are left to choose from. The holiness rule does its job honestly and runs into arithmetic.

The second experiment is to break a level. Let the segment controller, a level 1 process, tell the operator about every page it dumps onto the drum. To do that it has to ask the message interpreter, which is one level up. The machine reaches the first dump and stops for ever. The message interpreter needs its vocabulary segment, the segment is on the drum, and the interpreter sends a message to the segment controller. The segment controller, meanwhile, waits for the interpreter to print its message. The clock ticks, the machine hears interrupts, and no process can take a step. In EWD 196 Dijkstra explains why the message interpreter is above segment control rather than beside it: otherwise its vocabulary would have to stay in core permanently. His argument is about memory; for me the same choice became a hang. A level 1 process cannot wait for a level 2 process that itself depends on level 1, and the hierarchy of levels is exactly the ban on such a loop.

The third experiment is to change the time slice of the user programs from fifty milliseconds to ten, or to half a second. The output doesn't change by a character, and that is expected: Dijkstra's sequential processes make no assumptions about each other's speed, synchronisation is explicit, and correctness doesn't depend on the schedule. What is unexpected is that the times don't change either. The programs finish within a millisecond of the earlier run, because they spend nearly all their time waiting for the drum and the console, not for the processor. Dijkstra writes that one of the group's minor mistakes was "paying too much attention to speeding up what was not the real bottle neck". The time slice is just such a place.

The fourth observation I didn't plan. Dijkstra writes that a segment controller buffer of N + 1 messages always suffices for N programs, and calls the condition absolutely necessary. I have N = 5 and six places, and the most I have seen in use is three. That is no refutation: N + 1 is a worst-case guarantee, for when every program is queued while one message still has a dump in progress. My load never gets there. But watching a guarantee that was never needed is instructive in its own way: Dijkstra computed it not for a typical day but for all of them.
# Kubernetes in a world of semaphores

In earlier parts of the series a Kubernetes control plane already ran on the Oberon machine, and then in RED and GREEN. Here I wanted to see what is left of it when a program has nothing but what THE gave user programs in 1968: semaphores, segments and the console.

The first thing missing is a place for the objects. THE had no common database; Dijkstra says so plainly: users share only the machine and the library. So the store is a segment, owned by one program, the API server. The others send it requests. And then it turns out there is no request queue either. In RED it would be a mailbox, in GREEN a task entry. Here it has to be built from three semaphores: one counts the free places, one the filled ones, and the third keeps two clients from writing into the same place. It is the bounded buffer Dijkstra used to explain semaphores in EWD 123, only now the Kubernetes API rests on it.

The second thing missing is time. The node controller has to notice that a node has been silent for more than a second, and a THE user program has no way to wait. The kernel got exactly one new service, a delay on the clock: a process says "wake me after so many ticks" and goes to sleep, and the clock interrupt wakes it on time.

The third is watching for changes. I did not build it, and that turned out right: every controller takes a fresh snapshot of the store on every pass and compares what exists with what is wanted. That is how Kubernetes works at heart, by level, not by event, and in a world of semaphores it is the most natural way.

The last lesson is about levels. The operator types `k kill 2` on the console, but the message interpreter lives on level 2 and may not call a level 4 program. So it only puts the line into a buffer and does V on the semaphore kubectl, a user program, waits on. The same hierarchy that forbids the segment controller to wait for the interpreter decides here how the operator's command reaches Kubernetes.

In the standard run three pods spread over two nodes. At forty seconds the operator switches off node 2, two seconds later the console says `node: not ready, node 2`, and the API server's log on the line printer shows the rest:

```
node 2 not ready
deleted web-2
created web-4
bound web-4 to node 1
running web-4 on node 1
scaled to 5
created web-5
...
```

All of this shares eight core pages with the sieve of Eratosthenes and a program that drives segments through the drum, and Kubernetes knows nothing about it: the store is just one more segment that now and then goes to the drum.
# How to try it

All you need is a C compiler and Python:

```sh
git clone https://github.com/tym83/paleocomputing
cd paleocomputing/impl/x8-the
make -C emu              # the X8 with CHARON
tests/x8stest.sh         # the 1971 test program: 375 tests
tests/the.sh             # THE: boot, three programs, console and printer
labs/check.sh 01         # the same as a lab
```

The test program is fetched from Dick Grune's page and isn't in the repository: it isn't my text. THE itself is assembled from `the/the.elan` into a paper tape in the initial loading format, and the emulator starts it the way the machine was started: LS, then IP.

There are six labs, checked by `labs/check.sh`. They include the experiments of the previous chapter: fewer core pages, a broken level, another time slice. There is also an operator answering with another number, and a run of the X8 test program. Time in the emulator is virtual, so your output can be compared with anyone else's character by character, down to the milliseconds in the console stamps.

In the browser all of this runs on the series page: [tym83.github.io/paleocomputing/x8/](https://tym83.github.io/paleocomputing/x8/). It is the same emulator, built for WebAssembly, and you are the operator at the console.
# What I took from it

First, how well Dijkstra wrote. Reports sixty years old about a machine that no longer exists turned out to be enough to build a working system from. In places they are nearly a specification: EWD 113 lists the bits of a segment variable, and EWD 149 warns about a race with the I/O processor that a programmer is bound to fall into. Where Dijkstra describes in words, the words are precise, and one can hold on to them.

Second, what negative zero meant to those who wrote for the X8. It isn't an arithmetic curiosity but something to think about after every subtraction: any counter that reaches zero may turn out "negative".

Third, the levels work, and that can be checked rather than just read. Less memory, and the system is merely slower, without the programs noticing. A loop between levels, and the system stops. Dijkstra claimed this in 1968 on six pages, and almost sixty years later the claim survives an experiment on a machine that had to be built again.

THE itself has not survived, and what is in the repository is not THE but a reconstruction from its description. But the reconstruction behaves the way Dijkstra said the system behaves. For history this is perhaps the best one can do with a lost program: write it again by the same rules and check whether the rules hold.
