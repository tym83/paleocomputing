[Русская версия](11-roadmap-platform.ru.md)

# Direction: from one machine to a platform

Written on 2026-09-22 after the first implementation (`impl/`). Five auditors, 21 findings,
a working core in the browser. Next: turn a one-off experiment into a platform.

---

> **The cultural outreach layer is in `12-labs-and-archive.md`:** labs and an archive
> on top of every machine. Artifact → lab → archive.

## 0. A correction to the premise: the Oberon compiler is ALREADY in Oberon

Checked in the tree, not from memory:

| Module | Language | Comment in the header |
|---|---|---|
| `ORS.Mod` (scanner) | Oberon | "Scanner in Oberon-07" |
| `ORB.Mod` (symbol table) | Oberon | "in Oberon-07" |
| `ORG.Mod` (code generator) | Oberon | "code generator in Oberon-07" |
| `ORP.Mod` (parser) | Oberon | "Oberon compiler for RISC" |

**The compiler bootstraps itself**, the fixed point has been checked bit for bit
(`Stage 2 == Stage 3`), and it holds even after the emulator is instrumented.

**What is written in C is something else: the Norebo runtime**, 1091 lines:
- `risc-cpu.c`: the RISC5 emulator
- `norebo.c`: the interface to Unix: files, arguments, output

So the task is not "rewrite the compiler in Oberon" (it already is), but:

### 0a. Remove C from underneath the compiler

Three paths, in increasing order of purity:

1. **A runtime in Oberon on top of our own RTL.** Our SoC bench already boots the real
   system. So the compiler can run on our core without any C emulator;
   only a "host files ↔ disk image" bridge is needed. This is the nearest goal and it is almost done.
2. **Self-hosting in the browser.** The core is already in WASM. The compiler already works inside it.
   What remains is an editor and a file system, that is, a full development cycle in Oberon
   in the browser, without a single line of C in the product.
3. **Our own emulator in Oberon.** Oberon interpreting RISC5, running on RISC5.
   Pure reflection, little practical value, but strong as an act in an article.

---

## 1. Virtual machines for never-implemented architectures

The main line. From the catalogs `01-os-catalog.md` and `03-language-machines.md`, the ones where
a specification exists but the hardware never did or has not survived.

| Architecture | What it gives | Artifacts | Difficulty |
|---|---|---|---|
| **iAPX 432** | objects and access rights in silicon; Intel's documentation is self-sufficient | ✅ bitsavers | high |
| **Transputer T414/T800** | CSP in hardware, the scheduler and channels in hardware | ✅ INMOS ISA | medium |
| **Lilith (M-code)** | a machine for Modula-2, a direct prologue to Oberon | ✅ described | **low** |
| **Kronos** | the Soviet answer to Lilith, the material is almost undigitized | partial | medium |
| **Rekursiv** | objects in hardware, the Lingo language; almost nobody knows it | little | high |
| **Reduceron** | graph reduction in hardware, alive and documented | ✅ | medium |
| **WAM in hardware** | Prolog's abstract machine as a pipeline | ✅ book | medium |
| **Elbrus-1/2** | tagged architecture, El-76 | ❌ books only | very high |

**Start with Lilith.** Reasons: M-code is documented, the size is comparable to RISC5, and it is
the **direct ancestor** of what has already been done: the same school, the same author, the same way
of thinking. All the infrastructure is reused: the assembler, the differential bench,
the decoder equivalence check, the cycle model.

**The key lesson from the first project:** the expensive part is not the architecture but the **harness**. On RISC5
more effort went into the measurement infrastructure than into the core itself. The second machine will be
many times cheaper if the harness is made portable; see item 5.

---

## 2. Porting dead OSes to these architectures

Crosswise: a system written for one machine, on a machine that never existed.

| System | Native machine | Port to | Why |
|---|---|---|---|
| **Oberon** | RISC5 | Lilith, Kronos | both are Wirth machines, porting is almost trivial |
| **Medos-2** | Lilith | RISC5 | the reverse direction: the ancestor on the descendant |
| **THE** (Dijkstra) | Electrologica X8 | any | five layers, only the paper exists |
| **Helios** | transputer | transputer grid | a CSP OS on an honest CSP machine |
| **iMAX 432** | iAPX 432 | — | if the tapes turn up |

The strongest act is **Oberon on Lilith**: a 1988 system on a 1980 machine, both Wirth's,
and you can see exactly what changed in his thinking over eight years.

---

## 3. All of this as a lab in Cozystack

Here the product part appears, and it is valuable in its own right.

### 3a. Serverless / FaaS for running machines

Every virtual machine is a function: submit a source or an image, get a result.
It maps naturally onto FaaS, because a run is finite and deterministic.

What is needed:
- a runtime image per machine (core + harness + system image)
- an invocation contract: input, cycle and time limits, output (screen, log, artifacts)
- isolation: **a public sandbox executing other people's code is a real test of
  multi-tenancy**, not a synthetic one. This is already noted in `04-infra-layer.md`

### 3b. Custom architectures in KubeVirt: there is no direct path, the workaround is done

⚠ Checked in the code on 24.09.2026 (`docs/FINDING-34`): the list of architectures in KubeVirt
is closed. In the CRD of the `KubeVirt` resource, the `architectureConfiguration` field has exactly
four branches: `amd64`, `arm64`, `ppc64le` (deprecated) and `s390x`. A fifth cannot be
added without changing KubeVirt itself, and no catalog package can do it.

**Updated 25.09.2026: it does not follow that the architecture cannot be run.**
It only follows that KubeVirt should not be told about it. The virtual machine
is declared as an ordinary one, and the domain is rewritten before start, and libvirt runs
our processor on it (findings 40–44):

| Layer | What was done | Size |
|---|---|---|
| QEMU | the `risc5` target: core, SPI disk, screen, input, floating point | a new target |
| libvirt | five places: architecture table, default machine, PCI check | **~10 lines** |
| `virt-launcher` image | our own, with our own QEMU and libvirt; ordinary VMs work on it as before | a build |
| KubeVirt | an `OnDefineDomain` hook from a ConfigMap: `arch=risc5`, `machine=oberon`, devices that need PCI removed | **no fork** |

The Oberon machine runs in the cluster as a real VM under KubeVirt and installs from the
catalog into a tenant. So there are not two paths but three, and the third one works:

1. **the domain is rewritten by a hook, the emulator is our own**: a real VM, a real
   architecture, KubeVirt untouched; the price is our own `virt-launcher` image;
2. a boot image with an emulator inside: the machine in the cluster is ordinary, what is unusual
   is what it imitates;
3. a container with an emulator: requires neither cluster-level trust nor a ready
   boot image.

The story did not get weaker from this but more precise: "the list of architectures is closed, and still
the cluster runs a processor that does not exist; here is exactly how".

The only thing that remains out of our control is doing this **without our own
`virt-launcher` image**: that needs a patch to KubeVirt itself.

### 3c. How to package your application and serverless for Cozystack

Methodological material that a platform team needs regardless of the retro theme.
Our machines are simply an honest, non-invented example.

### 3d. Marketplace

Two levels, which must be kept apart:

1. **A pluggable third-party marketplace**: a mechanism that lets anyone
   connect their own application catalog to their Cozystack installation. This is a product
   feature of the platform
2. **The official community marketplace**: the catalog itself, maintained by the community

The lab of forgotten machines becomes the first non-trivial content of the catalog.

**State as of 24.09.2026:** level 1 is done: `marketplace/` is split into three
repositories following the merged `cozymarketplace` project, and the discovery chain was verified with
the real `cozypkg`. Level 2 has not started: it requires publication and a conversation with
the community, not code. Details in `impl/docs/FINDING-34`.

---

## 4. The order in which it makes sense to do this

| Step | What | Why now |
|---|---|---|
| 1 | extract the RISC5 harness into a portable framework | without it the second machine costs as much as the first |
| 2 | Lilith as the second machine on the same framework | proof that the framework really is portable |
| 3 | a FaaS wrapper for one machine | the minimal product artifact |
| 4 | Oberon on Lilith | the first cross act |
| 5 | KubeVirt runs our own architecture | ✅ done on 25.09.2026 via a workaround: an `OnDefineDomain` hook + our own `virt-launcher`, KubeVirt not forked (findings 40–44). The direct path is still closed, see 3b |
| 6 | ~~the pluggable marketplace mechanism~~ | ✅ done on 24.09.2026, `marketplace/` |
| 7 | the community catalog and its content | blocked not by code but by publication and community |

---

## 5. What is reused from the first project

This is the main asset, not the core itself:

- **the assembler**: parameterized by an encoding table
- **the differential bench**: a methodology with a catalog of sources of nondeterminism
- **the decoder equivalence check**: enumerating the entire code space
- **the cycle model** and its cross-check against the RTL on a real workload
- **mutation testing of the harness**: the 21 findings were obtained precisely with it
- **2×2 cross-building** to separate the cost of execution from the cost of generation
- **measuring the noise floor of the synthesis flow before publishing a delta**

The last three are methodological know-how that carries beyond the retro theme altogether.

---

## 6. Risks, written down in advance

- **The harness costs more than the machine.** Verified on RISC5. If it is not extracted into a framework before the second
  machine, the project will stall
- **Artifacts decide.** The iAPX 432 and Elbrus are blocked not by complexity but by the availability of
  documentation. Check before starting, not after
- **The product part can eat the research part.** The marketplace and FaaS are work
  of a different kind and size. Keep them as a separate track, not as an "appendix
  to the article"
- **A public sandbox = public responsibility.** Other people's code in your own cluster
  requires isolation that has to be proven, not declared
