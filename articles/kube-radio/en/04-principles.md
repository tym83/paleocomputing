# What Oberon imposed

When you write Kubernetes in Go for Linux, nearly any decision can go any way. Need a queue, there are channels; need a database, there is etcd; need a network, there is gRPC over TCP; need isolation, there are kernel namespaces. There is always a choice, and so decisions are often made out of habit. On Oberon there is almost no choice, and that is the most interesting part of the experiment: every limit of the language and the system forced a specific decision, and those decisions show clearly which properties of Kubernetes follow from the idea itself and which from what it was built on.

I will split the limits into those that came from the language and those that came from the operating system and the machine, although with Wirth the boundary is a convention; it was all done by one hand.

## What the language imposed

**Sizes are known in advance.** In Oberon-07 arrays nearly always have a size known at compile time, and dynamic memory exists only for records through pointers. Writing a program where everything grows as needed is awkward in it, and I did not try. Kube's store is an array of 256 objects, a node has at most ten pods, a node name has six characters, an image fifteen, a pod id is one byte. Each of these numbers has a reason, and all of them are visible in one place in the source. As a result Kube never allocates memory in its working loop, cannot run out of it under a flood of objects, and behaves predictably at its limits: an extra pod simply is not created. Real Kubernetes lives with limits too, such as 110 pods per node by default or a megabyte and a half per object in etcd, but there they are scattered across the documentation, and here they cannot be hidden.

**No unsigned numbers, and integers are 32-bit.** Hence HalfSipHash instead of SHA-256, and counter arithmetic modulo 65536 with a careful "is this number newer" comparison that stays correct after wraparound. Hence also the store's checksum, computed so as not to depend on sign. A small thing, but it is where the bug in our QEMU's `MOD` was found.

**Commands without parameters.** An exported procedure without parameters is a command; one with parameters is not. So the kubelet cannot call `Start(pod)`; it puts the pod's id into the `Pods` module and calls `Start` with no arguments. In any other language this would look like bad style; here it is the only way, and it is safe, because only one command runs at a time.

**Modules with keys.** Every compiled module carries the key of its interface, and when loading, the system checks it against what the importing modules were compiled with. So a pod's image in Kube is not just a name but a name with a built-in compatibility check. If a workload module was compiled against an old version of `Pods`, the system refuses to load it, and the pod stays Pending instead of crashing in the middle of its work. In the container world the nearest thing is a pinned image digest, but that only guarantees you got exactly those bytes, not that they are compatible with their environment.

**A small language.** It sounds like a drawback but disciplines more than anything. Oberon has no generic collections, exceptions, interfaces, goroutines or reflection. So all of Kube is written as plain loops over arrays and procedures that return a boolean instead of throwing. It reads almost like pseudocode, which is exactly how I wanted it to read.

## What the system and the machine imposed

**One loop and cooperative tasks.** This is the main one. Oberon has no threads, so Kube's controllers are tasks in the central loop, and so is the kubelet on a node. Every task does a short piece of work and returns. Three consequences follow at once. First, Kube has not a single lock, mutex or channel, because races cannot happen at all: while one controller runs, the rest stand still. Second, behaviour is deterministic: given the same input, the controllers do the same things in the same order, which makes debugging much easier. Third, and this is a minus, any task that stops to think for long freezes the whole machine, kubelet and radio included. A pod whose `Start` command goes into an endless loop hangs the entire node.

**No memory protection.** All modules live in one address space, and the only thing that keeps one module from corrupting another's memory is a strictly typed language with array bounds checks. For Kube this means that pods are not isolated from each other or from the kubelet at all. This is the biggest difference from real Kubernetes, and I will come back to it when discussing what Oberon lacked.

**The interface is text.** In Oberon any line `Module.Command` in any window is a command. So Kube has no API server, no YAML and no kubectl. Its API is commands such as `Kube.Apply web 6 Ticker2`, `Kube.Get`, `Kube.DeletePod`, which a person writes in any window and runs with a middle click, and whose output goes to the system log. The same principle made the commands at start possible: a machine's role is just a line of commands that QEMU puts on the serial port, and the `Boot` module runs it exactly as a person would. No special configuration format was needed; the configuration of a machine became the text of its commands.

**An old-school file system.** Oberon frees the space of replaced files only at the next boot. So Kube's store is rewritten in place in two files in turn instead of being created anew for each change, and that also gave protection against a power failure in the middle of a write. A solution databases arrived at decades ago appeared here by itself, out of a file-system limitation.

**Radio instead of a network.** I have described this in detail already. A 32-byte frame, broadcast to all, no collision avoidance. Hence a protocol of one-frame messages, level-triggered instead of acknowledged, with a cluster tag and a signature in every message. And hence the most unexpected property of the whole system, covered in the next section: everything the cluster knows can be heard on the air.

**Twenty-five megahertz.** The machine's speed set the periods. Controllers run every 50 milliseconds, the kubelet every 100, a heartbeat once a second. That is ample: the whole control plane takes a fraction of a percent of the processor. It turned out that managing a cluster of eight nodes takes laughably little computing power, and all the time goes into waiting.

## How Kube differs from real Kubernetes

So there are no illusions, here is an honest comparison. Kube implements the idea of Kubernetes, not Kubernetes, and the difference is large.

| | Kubernetes | Kube |
|---|---|---|
| size | millions of lines of Go | about 1400 lines of Oberon, of which the control plane is about 800 |
| store | etcd, distributed and kept consistent by Raft | an array of 256 objects in one machine's memory and two files on its disk |
| API | API server, REST, YAML, kubectl, RBAC | Oberon commands a person writes in a window |
| kinds of objects | dozens, plus your own through CRDs | three: Deployment, ReplicaSet, Pod |
| network between nodes | TCP/IP, usually with a separate pod network | radio broadcast, 32-byte frames |
| pod image | a container image from a registry | an Oberon module on the node's disk |
| pod isolation | Linux kernel namespaces and cgroups | none: all pods share one address space with the kubelet |
| resources | CPU and memory requests and limits | only the number of pods per node, ten at most |
| scheduler | filters, scores, affinity, priorities | the least loaded node |
| networking for applications | Service, DNS, Ingress | none |
| storage for applications | PersistentVolume | none |
| control plane availability | several replicas of the API server and etcd | one machine; after a restart the state is read from disk |
| readiness | readiness and liveness probes | a pod is ready as soon as its `Start` command returns |
| protocol security | TLS with mutual certificate checks | a 32-bit signature with a shared key and a counter against replays |
| scale | thousands of nodes | tested up to eight nodes; the protocol is designed for one air |

This table shows that Kube is good for nothing Kubernetes is good for. But it also shows that all the logic Kubernetes exists for, the wanted state, independent reconcile loops, rollouts without a gap, recovery from a lost node and caution when the link is lost, fit into a small system with almost none of what is listed in the middle column. Everything else in Kubernetes is what it takes to make that logic work on thousands of machines, for thousands of users, and for applications nobody trusts. Very important things, but different things.
