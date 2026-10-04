[Русская версия](01-os-catalog.ru.md)

# Track 1. Operating systems

Sorted by **how well the artifacts have survived**, not by how interesting they are. What
decides is not the idea but whether hardware documentation and an OS image exist.

---

## A. Runs today almost out of the box

No emulator needs to be written; the series can start without a single line of code.

### Radical architectures
- **Multics** (GE-645): protection rings, single-level store, a file = a memory segment. The `dps8m` emulator is mature, images are public.
- **ITS** (PDP-10, MIT): no passwords, anyone can inspect and modify someone else's process, the shell = the DDT debugger. `klh10` / SIMH.
- **Michigan Terminal System** (360/67, 1967): interactive time-sharing with virtual memory before IBM. Hercules, the distribution is open.
- **Burroughs B5500 + MCP** (1961): the OS is entirely in ALGOL, there is no assembler, tags in hardware, buffer overflow impossible by design. `retro-b5500` runs in the browser.
- **BESM-6 + Dispak/Dubna**: Vakulenko's emulator, images exist.
- **VM/370 + CMS**: "a virtual machine for everyone" in 1972.

### Research OSes with sources
- **Singularity RDK** (MSR): all processes in ring 0, isolation by types, not by the MMU. Builds, boots in QEMU.
- **Exokernel Xok/ExOS** (MIT): the kernel hands out the hardware, abstractions live in the libOS.
- **Barrelfish** (ETH/MSR): a multicore as a distributed system, no shared memory between cores.
- **EROS / CapROS**: capabilities + orthogonal persistence, a checkpoint of the whole world every few minutes.
- **Amoeba** (Tanenbaum): a distributed OS, a processor pool. Python was written for it.

### Micro and single-floppy systems
- **QNX Demo Disk 1.44 MB**: GUI, TCP/IP, a browser on a floppy.
- **TempleOS**: ring 0, HolyC, 640x480x16, deliberately without networking. Treat the subject with respect for the author's story.
- **Project Oberon 2013**: the RISC5 processor + compiler + OS + GUI, ~10k lines, all in the book. The reference emulator is ~1500 lines of C.
- **Collapse OS / Dusk OS**: Forth for the world after the collapse of supply chains.
- **SymbOS** (Z80, CPC/MSX): preemptive multitasking and a windowed GUI at 4 MHz.
- **Contiki on the C64**: multitasking, TCP/IP and a browser in 64 KB.
- **GEOS** (C64/Apple II): WIMP at 1 MHz.
- **Sinclair QDOS** (QL, 1984): preemptive multitasking on the 68008 three years before the Amiga.
- **NetWare 3.x/4.x**: a narrowly specialized file server that outperformed general-purpose systems several times over.

---

## B. Emulation is partial or rough: there is something to finish and open-source

- **Genera / Symbolics** and **CADR**: `usim`, `LambdaDelta`. Genera is legally gray; MIT's CADR system software is open.
- **Interlisp-D / Medley**: the revival project is alive, the `maiko` emulator.
- **Xerox Alto + Smalltalk-76/80**: `ContrAlto`, sources at the CHM.
- **Apollo Domain/OS**: a networked single-level store: an object on another machine as local memory. The MAME driver boots roughly.
- **Newton OS**: "soups" instead of a file system, an object database with differential storage. `Einstein`, peripherals incomplete.
- **Symbian / EPOC32 (EKA2)**: a nanokernel with hard real time. `EKA2L1` is in progress.
- **Sprite** (Berkeley): live process migration, the birthplace of the log-structured FS. Almost no images.
- **Inferno + Dis VM**: everything is a file, including remote things; Limbo with channels.
- **DEMOS / INMOS**: Soviet UNIX on the SM-1700, via SIMH VAX; assembling a working image is a quest.
- **Copland** (Apple, never shipped): leaked builds boot every other time.
- **Syllable / AtheOS**: a desktop OS written by one person from scratch.
- **Pick OS**: no file system, there is a hashed multivalue database; the OS and the DBMS are indistinguishable.
- **MUMPS**: language + database + OS in one, still running healthcare.
- **Phantom OS** (Zavalishin): persistent virtual memory, objects live forever. The sources are open, few live runs.

### Reclassified from C to B: no emulator needed, a port is needed
- **Mungi / Grasshopper**: single-address-space, Alpha/MIPS (emulators exist)
- **KeyKOS**: S/370, Hercules already provides the platform
- **colorForth**: bare x86, needs QEMU and fiddling with the bootloader
- **Nemesis**: Alpha/ARM/x86, the sources were available

---

## C. No emulator exists: this is where the project worth writing and opening lies

Sorted by the ratio "interest / feasibility".

1. **Transputer + Helios, multi-node**: the ISA is exhaustively documented by INMOS, the Helios sources were opened. Single-chip emulators exist; the unoccupied niche is an array of 16–64 nodes with links. **The best first strike.**
2. **iAPX 432**: Intel's documentation has survived completely (bitsavers), the object model is described down to the descriptors. The only item where the documentation is known to be self-sufficient.
3. **Magic Cap** (General Magic): 68349, documented; the peripherals of the Sony Magic Link / Motorola Envoy would have to be written. Telescript agents physically migrate across the network. The Telescript language specification was published.
4. **Lilith + Medos-2** (Wirth, 1980): M-code, Modula-2 from top to bottom. Dreesen's emulator exists, but a clean rewrite would be a solid contribution. A prologue to Oberon.
5. **Kronos + the Excelsior OS** (Computing Center of the Siberian Branch of the Academy of Sciences, Novosibirsk): a Soviet Modula-2 machine, the answer to Lilith. The material is almost undigitized. A strong pair for item 5.
6. **Tandem NonStop Guardian**: there is no emulator and there will not be one without us. But the principles are described very well (see D).
7. **Elbrus-1/2 + El-76**: a tagged architecture, a high-level language instead of an assembler. There is no public microarchitecture and no images → effectively D, not C. Start with the ITMiVT archives and the living holders of the knowledge while they are still around.
8. **Taos / Elate / intent** (Tao Group): binaries in VP code, translated at load time for the specific CPU; one image on the Amiga, ARM and x86. Depends on whether the VP specification surfaces. Look at the **patents**; probably the main route.

---

## D. Reconstruction from paper: no hardware or images, but the principles exist

"Absolutely nothing" is the rarest case. There are almost always publications, and that is enough
for a **reimplementation**.

- **THE** (Dijkstra, 1968), Electrologica X8: a layered architecture and semaphores in their original form. Five layers, about a dozen processes, one paper. **The smallest and most realistic target of the genre.**
- **Tandem NonStop**: Bartlett, "A NonStop Kernel", SOSP 1981; Jim Gray, "Why Do Computers Stop and What Can Be Done About It?", 1985; the run of Tandem Systems Review. Process pairs can be rewritten from scratch without a single byte of the original.
- **Nemesis**: Cambridge technical reports and dissertations (including Roscoe on the structure of a multi-service OS).
- **Mungi, Grasshopper**: reports and dissertations from UNSW / Sydney.
- **Magic Cap**: the Telescript specification + developer documentation; the interface can be reconstructed from screenshots and videos.
- **TSS/360**: how IBM failed at time-sharing while MTS on the same hardware worked.
- **Midori** (Microsoft): only Joe Duffy's blog. Not a reimplementation but "inspired by".
- **TUNES OS**: an OS that existed for twenty years only as a manifesto.
- **Spring** (Sun): subcontract, doors, IDL in the kernel; part of the code leaked.

### Where it is really thin
Closed commercial systems without an academic trail: the internals of **Stratus VOS**,
the internals of **Pick**, the microarchitecture of **Taos VP**. Sources: patents, vendor
manuals held by collectors, living people.

---

## Where to look

- **bitsavers**: vendor documentation
- **SOSP / OSDI / USENIX**: research systems
- **University dissertation repositories**: the most detailed description of a system is usually there, more detailed than the papers, often with pseudocode of the structures
- **Patent databases**: for closed commercial solutions
- **Internet Archive**: websites of dead companies
- **Interviews with the holders of the knowledge**: for Elbrus, Kronos, DEMOS, Tandem and General Magic, people are still reachable. This is both a source and material in its own right.

---

## Modern parallels (the backbone of the overview episodes)

| Forgotten | Today |
|---|---|
| Amoeba (processor pool) | the Kubernetes scheduler |
| VM/370 | Firecracker, Kata Containers |
| KeyKOS/EROS (world checkpoint) | CRIU, snapshot-restore, durable execution (Temporal, Restate) |
| Sprite (migration, LFS) | live migration; LSM trees, FTL in SSDs, F2FS |
| Exokernel | DPDK, SPDK, io_uring, unikernels, eBPF |
| Barrelfish | NUMA, P/E cores, DPU/IPU |
| Nemesis (QoS) | cgroups v2, io.latency, noisy neighbor |
| Singularity | WASM/WASI, Workers isolates, the eBPF verifier, Rust in the kernel |
| Burroughs MCP (tags) | ARM MTE, PAC, CHERI, sanitizers |
| Multics (rings, SLS) | SMM/SGX/TDX; mmap-everything, CXL |
| Pick / MUMPS | object storage instead of POSIX, DuckDB on top of S3, SQLite as a file system |
| Newton soups | CoW file systems, Git as an object store |
| Domain/OS | RDMA, DSM, memory pools over CXL |
| NetWare / QNX | DPU offload, distroless, unikernels, cold start |
| Genera (live image) | hot reload, Erlang code_change, Jupyter |
| ITS (everything open) | eBPF/bpftrace, observability vs zero trust |
| Plan 9 / Inferno | namespaces in Linux, 9P in WSL2 and gVisor |
| GEORGE 3 / JCL | Kubernetes Jobs, Argo, Airflow: "they reinvented JCL and called it YAML" |

### Experiments, not just overviews
- **EROS**: pull the power in the middle of a write → return to a consistent state without journal replay. Next to it, CRIU dump/restore of a container.
- **Amoeba**: five nodes, a parallel build, tasks spreading across the pool. Next to it, the same in k8s.
- **Burroughs**: write a classic buffer overflow → a hardware fault, 1961 style.
- **NetWare**: a file benchmark against modern Linux on the same VM.
- **QNX floppy**: build a distroless image and a unikernel next to it, compare size and cold start.
- **Oberon**: rebuild the system from itself, time it.
- **Genera**: catch an error in a running program, redefine the function, continue from the same place.
- **Sprite**: migrate a live process to another node.
