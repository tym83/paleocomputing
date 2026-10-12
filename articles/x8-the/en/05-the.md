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
