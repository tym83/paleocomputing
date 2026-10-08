# What Oberon imposed

When you write Kubernetes in Go for Linux, almost any decision can go any way. Need a queue, and channels are at hand; need a database, and there is etcd; need a network, and there is gRPC over TCP; need isolation, and there are kernel namespaces. There is always a choice, and so decisions are often made out of habit. On Oberon there is almost nothing to choose from, and that is the most interesting part: every limit of the language and the system forced a quite specific decision, and those decisions show clearly which properties of Kubernetes follow from its very idea and which from what it was built on.

I will split the limits into those that came from the language and those that came from the operating system and the machine, although with Wirth the boundary between them is a convention: it was all done by one hand.

## What the language imposed

**Sizes are known in advance.** In Oberon-07 an array's size is nearly always known at compile time, and dynamic memory is allocated only for records reached through pointers. Writing a program in such a language where everything grows as needed is awkward, and I did not try. Kube's store is an array of 256 objects, a node has at most ten pods, a node name is at most six characters, an image name at most fifteen, a pod id takes one byte. Each of these numbers has a reason, and all of them sit in two blocks of constants at the top of the modules `Kube` and `KubeNet`. Thanks to this, Kube allocates no memory in its working loop, cannot exhaust it under a flood of objects, and behaves predictably at its limits: an extra pod simply will not be created. Real Kubernetes lives with limits too, such as 110 pods per node by default or a megabyte and a half per object in etcd, but there they are scattered across the documentation, while here they cannot be hidden.

**Integers are 32-bit, and only bytes are unsigned.** HalfSipHash works on exactly 32-bit words and produces a 32-bit signature that fits in the frame. Hence also the counter arithmetic modulo 65,536, with a careful "is this number newer" check that stays correct after wraparound. Hence too the store's checksum, computed so as not to depend on sign. A small thing, but it is exactly where the bug with `MOD` in our QEMU turned up.

**Commands without parameters.** An exported procedure without parameters counts as a command, and one with parameters does not. So the kubelet cannot call `Start(pod)`: it puts the pod's id into the `Pods` module and calls `Start` with no arguments. In any other language this would be considered bad form, but here there is no other way, and it is safe, because only one command runs at a time.

**Modules with keys.** Every compiled module carries the key of its interface, and at load time the system checks it against what the importing modules were compiled with. So a pod's image in Kube is not just a name but a name with a built-in compatibility check. If a workload module was compiled against an old version of `Pods`, the system refuses to load it, and the pod stays Pending instead of crashing in the middle of its work. In the container world the closest thing is a pinned image digest, but that only guarantees that you got exactly those bytes, not at all that they are compatible with their environment.

**The language is small.** It sounds like a drawback, but in practice it disciplines more than anything else. Oberon has no generic collections, exceptions, interfaces, goroutines or reflection, so all of Kube is written as plain loops over arrays and procedures that return a boolean instead of throwing. It reads almost like pseudocode, and that is just how I wanted it to read.

## What the system and the machine imposed

**One loop and cooperative tasks.** This is the main one. Oberon has no threads, so Kube's controllers run as tasks in the central loop, and the kubelet on a node is a task too. Each task does a short piece of work and returns, and three things follow at once. First, Kube has not a single lock, mutex or channel, because races have nowhere to come from: while one controller runs, the rest stand still. Second, behaviour is deterministic: given the same input, the controllers do the same things in the same order, and such a system is far easier to debug. Third, and this is a minus, any task that stops to think for long freezes the whole machine, kubelet and radio included. A pod whose `Start` command goes into an endless loop hangs the entire node.

**No memory protection.** All modules live in one address space, and the only thing that keeps one module from corrupting another's memory is a strictly typed language with array bounds checks. For Kube this means that pods are in no way isolated, either from each other or from the kubelet. This is the most serious difference from real Kubernetes, and I will come back to it when we get to what Oberon lacked.

**The interface is text.** In Oberon any line of the form `Module.Command` in any window is a command. So Kube has no API server, no YAML and no kubectl. Its API consists of commands such as `Kube.Apply web 6 Ticker2`, `Kube.Get` and `Kube.DeletePod`, which a person writes in any window and runs with a middle click, reading the result in the system log. The same principle made the commands at start possible: a machine's role is set by an ordinary line of commands that QEMU feeds to the serial port, and the module `Boot` runs it exactly as a person would. No special configuration format was needed; the configuration of a machine became the text of its commands.

**An old-school file system.** Oberon frees the space of replaced files only at the next boot. So Kube's store is rewritten in place, in two files in turn, rather than created anew at every change, and that also protected it from a power failure in the middle of a write. A solution databases arrived at decades ago appeared here by itself, out of a file-system limitation.

**Radio instead of a network.** I have already covered this in detail: a 32-byte frame, broadcast to everyone, no collision avoidance. Hence a protocol of one-frame messages, full state instead of acknowledgements, a cluster tag and a signature in every message. And hence the most unexpected property of the whole system, which the next section is about: everything the cluster knows can be heard on the air.

**Twenty-five megahertz.** The machine's speed set the periods: controllers fire every 50 milliseconds, the kubelet every 100, a heartbeat goes out once a second. The control plane needs very little actual computation, and nearly all its time goes into waiting. But alas, the waiting is not free either: before every send the radio driver spins in a loop for fifty milliseconds, and it is this waiting, not computation, that limits the size of the cluster.

## How Kube differs from real Kubernetes

To create no illusions, here is a brief comparison. Kube embodies the idea of Kubernetes, not Kubernetes itself, and the difference between them is enormous.

| | Kubernetes | Kube |
|---|---|---|
| size | millions of lines of Go | about 1,400 lines of Oberon, of which the control plane is about 800 |
| store | etcd, distributed and kept consistent by Raft | an array of 256 objects in one machine's memory and two files on its disk |
| API | API server, REST, YAML, kubectl, RBAC | Oberon commands a person writes in a window |
| kinds of objects | dozens, plus your own through CRDs | four: Deployment, ReplicaSet, Pod and Node |
| network between nodes | TCP/IP, usually with a separate pod network | radio broadcast, 32-byte frames |
| pod image | a container image from a registry | an Oberon module on the node's disk |
| pod isolation | Linux kernel namespaces and cgroups | none, all pods share one address space with the kubelet |
| resources | CPU and memory requests and limits | only the number of pods per node, ten at most |
| scheduler | filters, scores, affinity, priorities | the least loaded node |
| networking for applications | Service, DNS, Ingress | none |
| storage for applications | PersistentVolume | none |
| control plane availability | several replicas of the API server and etcd | one machine; after a restart the state is read from disk |
| readiness | readiness and liveness probes | a pod is ready as soon as its `Start` command returns |
| protocol security | TLS with mutual certificate checks | a 32-bit signature with a shared key and a counter against replays |
| scale | thousands of nodes | tested up to eight nodes, all on one air |

This table shows that Kube is good for nothing Kubernetes is good for. But it shows something else too: all the logic Kubernetes exists for, that is, the wanted state, independent reconcile loops, rollouts without downtime, recovery from a lost node and caution when the link is lost, fit into a small system with almost nothing listed in the middle column. Everything else in Kubernetes is there so that this logic works on thousands of machines, for thousands of users and for applications nobody trusts. Very important things, but not the foundation.
