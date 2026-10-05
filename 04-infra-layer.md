[Русская версия](04-infra-layer.ru.md)

# Track 4. The infrastructure layer of tomorrow

Thesis: modern infrastructure layers appeared as a tool for yesterday's problems
and were then carried over to the problems of the day after tomorrow.

---

## What problem Kubernetes was designed against

Borg solved Google's problem of ~2005–2013: many identical x86 nodes; the workload was replicated
stateless services handling requests, plus preemptible background batch. The consumer of the
API was a human operator. The unit of scheduling was one process on one node. Resources were
linear and interchangeable. Node failure was the norm. State lived somewhere else.

Everything that came after is add-ons, not an evolution of the model:
- **StatefulSet**: "but here there is state after all"
- **Operator**: "the resource model cannot express my entity, let me write code"
- **Device plugin**: "resources are not interchangeable after all"
- **Topology manager, Volcano, Kueue**: "scheduling one pod at a time does not work"

Each patch honestly admits that the base assumption does not hold, but does not revoke it.

---

## What tomorrow's workload looks like

1. **The unit of scheduling is a job, not a container on a node.** A co-allocated set of accelerators on a specific interconnect topology, for N hours, with preemption and checkpointing. Gang scheduling by topology and by time at the same time. A scheduler that iterates over pods one by one is solving a different problem.
2. **The node is no longer the unit.** CXL and memory pools break the "processor and its memory" pairing. A DPU takes networking and storage away to a separate computer with its own OS. Inside the chassis there is already a distributed system, while the model says "cpu and memory on a node".
3. **State has become the main workload.** Databases, queues, vector indexes, model weights. PersistentVolume is an abstraction of a disk, not of data: the platform knows nothing about durability, replication, consistency. All of it is pushed into operators, that is, outside the model.
4. **Multi-tenancy is the baseline mode.** A namespace is not a security boundary and was never designed as one.
5. **Energy has become a scarce resource.** A rack's limit in kilowatts constrains placement more than free cores do. No mainstream scheduler treats watts as a first-class resource.
6. **Trust is a placement condition.** TDX, SEV-SNP, attestation: "place only where the configuration is proven" is a scheduling predicate that the model does not have.
7. **The consumer of the API is increasingly not a human.** What matters is not the readability of YAML but the expressibility of intent, reversibility, and the ability to verify the effect before applying it.

---

## Principles of the layer and their ancestors from the series

| Principle | Essence | Ancestor |
|---|---|---|
| **Distribute, don't abstract** | k8s lags behind hardware by 2–3 years, because every device needs a new abstraction in the core API. The platform safely distributes and isolates; abstractions live in the consumer's libraries. A new accelerator is available on the day its driver ships. | Xok/ExOS |
| **Capability instead of role** | RBAC = ACL: it delegates poorly, does not compose, cannot be partially revoked. A tenant receives a delegable, revocable set of rights that it passes on in reduced form. | KeyKOS, EROS |
| **State as a single consistent entity** | The reconcile loop exists because intent is in etcd and reality is on the nodes, with an eternal race between them. Orthogonal persistence takes a consistent snapshot of the whole world. **The most radical and contested point.** | KeyKOS, EROS, Grasshopper, Napier88 |
| **An intermediate representation of the workload** | x86/ARM/GPU/DPU heterogeneity is handled with a build matrix. The alternative: a portable artifact translated for the target at placement time. | Taos VP code, TIMI (AS/400) |
| **Isolation by type** | Controllers today are pods with the broadest rights to the API. A verifiable module with declared effects removes a class of problems and the cost of isolation. | Singularity → WASI |
| **Scheduling as a decision over many resources at once** | Cores, memory, topology, watts, heat, time, proven configuration: in one solver, not in a chain of independent plugins. | batch systems of the 60s, Amoeba |
| **Time and QoS as first-class quantities** | Not limits and requests as proxies, but a deadline and a share of throughput that the system is accountable for. | Nemesis |
| **Take the node apart** | If there is a distributed system inside the chassis, the control plane should schedule onto the DPU and the memory pool directly, not on top of the illusion of a single node. | Barrelfish, Domain/OS |

---

## The trap

Kubernetes won not by its architecture but by becoming a common language: everyone knows the API,
and the ecosystem carries the cost of integration. A rewrite from scratch competes not with the quality
of the design but with the accumulated ecosystem lock-in. Every greenfield effort of the last ten years
lost for exactly this reason.

**The path that works:** not "Kubernetes, but better", but picking one axis where it is wrong
structurally rather than accidentally, and building where it does not exist. Compensate with integration,
not with compatibility.

---

## Three realistic axes

1. **Scheduling accelerator jobs by topology and time** ← closest to the ground: there are GPU-as-a-Service customers, data center practice, and Cozystack as the carrier. Kubernetes is conceptually about something else here, Slurm from the seventies stands next to it, and between them is a gap that everyone falls into.
2. **Data and state as the primary entity of the platform**
3. **Multi-tenancy built on capabilities instead of roles**

---

## Refal as a control plane language (the strongest idea of the conversation)

**A Kubernetes controller is a term rewriting rule.** Match a pattern in the
cluster state → produce a new state. The whole reconcile loop is a term rewriting
system written down in an awkward way: in Go, imperatively, with no way to prove
anything. Refal was created exactly for this, and it has a theory.

Consequences that can be checked in an evening:
- **Termination and convergence become properties of the rule set**, not a hope. The classic pain is two controllers fighting over one field while the system oscillates. In a rewriting system this is a rule conflict, detected statically, not in production at three in the morning.
- **Supercompilation over a set of controllers**: run the rules of all of a tenant's controllers through a supercompiler, and it will unfold their interaction and show either a fixed point or a cycle. Exactly what Turchin invented metacomputation for, applied to a problem that did not exist back then.
- **A mini-reconciler in Refal**: a dozen rules, the cluster state as a term, plus a proof of convergence from any initial state.

It crosses a forgotten language, a forgotten theory and an infrastructure axis, and gives a practical
result. There are plenty of Refal implementations; the entry threshold is an evening.

A related idea from the other side: **tuple space (Linda) as a language, not a
library**, possibly the same idea from another angle.

---

## How this connects to the series

The series stops being a retrospective and becomes the collection of a vocabulary for a new design.
Each episode ends not with "how touching" but with "this is the primitive we take into the
project, and this is why".

---

# A layer without an operating system

The user's thesis: tomorrow's infrastructure layer should not need an OS; it should simply know how
to work with the hardware.

## The idea is not naive; it has a name and 25 years of results

**Arrakis, OSDI 2014, subtitle "The Operating System is the Control Plane"**, is literally
this thesis: data goes past the kernel straight into the hardware via SR-IOV, and the OS remains to hand out rights
and resolve conflicts. Nearby: **IX** (the same year), **Snap** (Google), **Demikernel**
(MSR), the whole line of unikernels from MirageOS to Unikraft, NetBSD **rump kernels** (drivers as a
library), **Arrakis/Barrelfish/seL4**, **AWS Nitro**, **Oxide Computer**.

## The OS does not disappear; it gets taken apart

What it does and where that goes:

| Function | Where it goes |
|---|---|
| **Drivers** | The value of Linux is not the scheduler but ~30 million lines of drivers. Three historical answers: drastically narrow the range of hardware; reuse someone else's drivers as a library (rump); push the driver into the device (DPU, SR-IOV, NVMe) |
| **Multiplexing** | With one workload per machine it is not needed. The cloud is the business itself, so it cannot be removed |
| **Isolation** | By hardware (MMU/IOMMU/SR-IOV), by types (Singularity/WASM), or not at all. There is no third option |
| **Naming and discovery** | Has to live somewhere |
| **Lifecycle** | Boot, crash, restart, update |
| **Observability** | ⚠ This is where the body is buried |

**Observability is the documented reason #1** why unikernels never got beyond
demonstrations. Not performance and not security, but the fact that something that crashed in production
cannot be opened up: there is no `ps`, no `dmesg`, no `strace`.

## An observation that changes the frame

Hardware is already absorbing the OS: NVMe does with queues what the block layer used to do; SR-IOV does
the multiplexing the driver used to do; the DPU takes away the network stack; the IOMMU takes protection;
CXL takes memory management.

But notice what is happening: **the OS does not disappear, it moves into the devices**. And there
runs firmware that you do not control, cannot observe and cannot replace.
Taken together, this may turn out worse. The whole thesis of Oxide Computer, who cleaned out the
BMC and traditional firmware, is built on this.

**The right question is not "OS or no OS" but: where does the mechanism live, and who can observe and
replace it.** This formulation is defensible; "getting away from the notion of an OS" is not.

## What this means for the first axis (GPU cloud)

**Removing the OS from the data path is realistic already today.** Accelerator workloads already
bypass the kernel: GPUDirect, RDMA, NIC queues via SR-IOV. A job receives a slice of the machine
and is executed by a runtime, not by an operating system. This is the Arrakis model, and it fits accelerator
workloads better than the workload it was invented for.

**The OS is never removed from the control path**, only relocated. The right address is
**the DPU and the service processor**. That is where placement, attestation, accounting, observation, cleanup
after a crash, and verification that tenant A cannot see tenant B's memory live.

**Formulation:** the host becomes a pure execution substrate, and everything that used to be called
the operating system moves into the management complex. Arrakis + the logic of Nitro + the stance of
Oxide, assembled for a specific workload.

This is the same exokernel bargain from track 1: the layer does not abstract the hardware but safely
distributes it.

## The condition that makes this possible

Everyone who managed to do without an OS **drastically narrowed the range of hardware**: consoles, Oxide,
unikernels on top of virtio. The driver problem is unsolvable in the general case and solvable when
there are twelve devices and you yourself decide which ones.

The user has exactly this situation: he defines the data center's procurement specification. The task
turns from "rewrite Linux" into "write drivers for a dozen known devices".

## The design readiness test

**A job crashed at three in the morning: what does the on-call engineer do to find the cause?**

If the answer does not come immediately and convincingly, the design is not ready. In systems without an OS,
observability is designed first, not last: it cannot be bolted on after the fact, because there is
nothing to instrument if everything executes past all the layers.

---

# Packaging the project for Cozystack

**The split: the browser takes execution, the cluster takes builds.**

Everything that compiles to WASM (emulators, the RISC5 model, runtimes) does not need a cluster;
it is static content on a CDN. In Cozystack it makes sense to package what does not fit into the browser:

- **The RED compiler as a build service.** A frontend on top of LLVM is hundreds of megabytes of toolchain. The scheme: submit source → the cluster builds it → returns a WASM module → the browser executes it.
- **Verilator, yosys, nextpnr.** Building the processor model and synthesizing for an FPGA are heavy, long, with large artifacts. A classic batch workload.
- **Long cycle-accurate RTL runs and regression.** Batch.

Package contents: a chart with a toolchain image, a "build" object as a job, artifact storage,
a thin web frontend. By Cozystack conventions, an ordinary catalog application.

**Why: two reasons, neither of them about RED:**

1. **The catalog gets a living, memorable example** that differs from yet another Postgres. "Deploy in one click a sandbox where a language that lost the Pentagon competition in 1979 compiles" is content marketing built into the product.
2. **A public sandbox that executes other people's arbitrary code is a real test of multi-tenant isolation.** If you can safely let strangers run anything in your cluster, that proves more about the platform than any benchmark.

**The loop:** this project's build pipeline itself becomes a workload for the
infrastructure layer being designed. Long jobs, artifacts, time limits,
co-allocation: exactly the first axis. Not a made-up test but our own pain.

---

# What NEW we propose, not a revival (2026-09-29)

Revival (what tomorrow should take from forgotten machines) is half the strength. The strong position is a **claim**: what new things we propose FOR tomorrow. Our trump card is that we have both a living cloud infrastructure layer (Cozystack) and a catalog of forgotten/wild principles; stitching them together produces what does not yet exist. Four original directions (a manifesto skeleton, to be developed further):

## 1. A capability-native cloud
Tenant isolation not through namespaces but through **hardware capabilities** (CHERI × Burroughs descriptors) as a single primitive across the whole stack: memory safety as the multi-tenancy model of a data center.
- **What is new:** nobody builds a cloud this way today; security is not a policy on top but a property of addressing.
- **What we bring:** Cozystack as a ready multi-tenant site for testing; our #3c/#3d/#14 (descriptors, measurements of the cost of safety).
- **Hardware carrier:** Arm Morello / CHERI-RISC-V.
- **Claim:** be the first to show a k8s-like tenant whose boundary is a capability, not the OS kernel.

## 2. Energy as a first-class scheduling concern
As reversible chips mature (Vaire), an infrastructure layer that **counts and bills by erased bits** (Landauer accounting) and offloads reversible-compatible workloads to an adiabatic tier.
- **What is new:** energy/irreversibility as a measurable scheduler resource, not an after-the-fact metric.
- **What we bring:** Cozystack's FinOps framework; our #30/#44 (a reversible/ternary processor as an experimental tier).
- **Claim:** the first scheduler for which "how many bits will you erase" is a placement parameter.

## 3. A cloud that never reboots
Orthogonal persistence (EROS/KeyKOS) × a memory pool over **CXL**: no "files", no "reboot"; the tenant's world is a persistent object graph on disaggregated memory. A single-level store at data center scale.
- **What is new:** "shut down/save/load" disappear as concepts at the infrastructure level.
- **What we bring:** our #36/#37 (a persistent capability OS, single-level store) + Cozystack as the substrate.
- **Claim:** a tenant that survives a node failure without "booting": the state simply continues to be.

## 4. A self-verifying content-addressed factory
Content-addressed all the way down (Unison style) + artifacts that carry **machine-checkable contracts** for resources/security (in the spirit of seL4).
- **What is new:** "broken dependencies", "config drift" and "misconfiguration" are structurally impossible in the substrate.
- **What we bring:** our #40 (Unison), #21 (diverse double-compiling), Cozystack's GitOps experience.
- **Claim:** a data center that cannot be misconfigured: a deployment is not accepted without a proof.

**The common thesis of the series:** the past gives the vocabulary, the future is our four claims. Restoration justifies the right to speak; the claims make us participants, not a museum.
