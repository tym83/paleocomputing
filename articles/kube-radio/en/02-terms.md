# A glossary: what this is all about

This story borrows words from three worlds that rarely meet. From Wirth's world, where a computer is designed as a whole and explained to students. From the world of Kubernetes, where thousands of machines are run by descriptions of a wanted state. And from the world of radio, where every byte on the air counts. I will go through every word needed later, and for each say why I chose this and not something else. If some are familiar, skim the section, but do read the part on Wirth's radio: it shaped nearly everything else.

## Oberon, the language

Oberon is a programming language that Niklaus Wirth, the author of Pascal and Modula-2, created in the mid-eighties at ETH Zurich. Its latest revision, Oberon-07, is described in seventeen pages. It has modules, records, arrays, pointers, procedures, garbage collection and strict typing, and very little else. No exceptions, no generics, no classes in the usual sense, no unsigned integers, no strings as a type of their own, only arrays of characters. Array sizes are, in most cases, known at compile time.

The module is the central unit of everything. It declares what is visible from outside by marking names with an asterisk, and when compiled it gets a key, a kind of checksum of its interface. If a module's interface changes, the system refuses to load modules compiled against the old version. This will come in very handy when we get to pods.

Why Oberon, and not, say, C or Go? Because Go, in which the real Kubernetes is written, names Oberon among its ancestors, and I was curious to go back to the source. And because here the language and the operating system were made by one person for one purpose, so their limits are honestly visible: you cannot get around them by pulling in one more library.

## Oberon, the operating system

Oberon is also an operating system, which Wirth and Jürg Gutknecht wrote in that language, the two of them. It has no processes, no threads and no memory protection. At the bottom a single loop, `Oberon.Loop`, polls the mouse and keyboard and calls commands one at a time. While a command runs, everything else waits.

Besides commands, that loop holds tasks, `Oberon.Task`: procedures the system calls in the background between input events, each with its own period. The garbage collector is one of them. A task cannot be interrupted; it must do a short piece of work and return, or the whole machine freezes. This kind of multitasking is called cooperative, because it rests on everyone's good manners.

A command in Oberon is any exported procedure without parameters, and you call it by middle-clicking the text `Module.Procedure` in any window. A command reads its parameters itself, from the text after its name. So the entire interface of the system is text you can edit, save and run. This principle will come up again and again.

## Project Oberon, RISC5 and Wirth's machine

Project Oberon is the book and the set of sources in which Wirth described the whole system. In its 2013 edition he added his own processor, RISC5, written in Verilog, a language for describing digital circuits. Such a circuit can be loaded into an FPGA, a programmable chip, to get a real computer. Wirth's ran on a board with a megabyte of memory at 25 MHz, with a black-and-white screen of 1024 by 768 pixels.

When I say "an Oberon machine" or "Wirth's machine", I mean exactly that: the RISC5 processor, its peripherals and the Oberon system running on it. In our project the machine lives in three forms. In the browser runs Wirth's actual circuit, translated to C++ by Verilator and compiled to WebAssembly, code the browser executes at nearly native speed. In QEMU, the well-known emulator that clouds are built on, runs our own model of the machine, which can be started like any virtual machine. And in Kubernetes the same QEMU model runs inside KubeVirt, described below.

## Wirth's radio

Here is the main character. The Oberon workstations at ETH had a network, and in the 2013 edition Wirth made it a radio network. The board carries an nRF24L01+ transceiver, a cheap chip from Nordic Semiconductor still found in wireless keyboards and hobby devices. It is connected to the processor through SPI, a simple serial bus over which the processor writes commands to the chip byte by byte and reads its answers.

The chip is very modest. A frame it sends at once is at most 32 bytes, and received frames wait in a queue that holds three. Every station on a channel hears every other. There is no collision avoidance: if two stations speak at once, a receiver gets garbage or nothing. The chip can repeat a transmission until someone acknowledges it, but on a shared air any station may acknowledge, so this is no guarantee of delivery to the intended receiver.

The module that drives it is `SCC.Mod`, about two hundred lines. Its packet starts with an eight-byte header holding the receiver's address, the sender's address, a type and the data length, and a long packet is cut into several 32-byte frames. On top of `SCC` Wirth wrote `Net.Mod`, a small network protocol in which stations call each other by name, send messages and files, and acknowledge every packet.

For Kube one number matters. If a message is to fit into one frame, there are 24 bytes left for the data after the header, and everything, the signature included, has to go into them. Why exactly one frame, I will explain below, but you can already see how tight it is.

From here on, "Wirth's radio" means this pair, the nRF24L01+ on the SPI bus and the `SCC` module, and "the air" means everything the stations on one channel hear. Why radio rather than a proper network? Because Wirth's machine has no other network. It has no Ethernet and no TCP/IP stack, and writing them would mean building a miniature Linux on an Oberon machine. The radio is already there, it is described in the same book, its driver is a couple of hundred lines, and I wanted to see what kind of system comes out when you honestly accept the machine's limits instead of dragging a modern network onto it.

## The air between virtual machines: the relay

A virtual machine has no real radio, so our QEMU model emulates the whole nRF24L01+ chip, with its registers, queues and commands, and puts every frame it sends into a UDP datagram. The datagrams go to a relay, a small program that hands every frame to all the other machines it has heard from. That is the air. The relay can lose a given share of frames to imitate a poor link, and when it stops, the air is gone altogether.

In Cozystack the relay is a catalog application called `OberonAir`. In the browser the page itself plays the air: each machine runs in a thread of its own, and the page takes the frames they send and hands them to the others.

## Kubernetes in two paragraphs

Kubernetes runs applications across many machines. The machines are called nodes. Applications run in pods, and a pod is one or more containers that start together on one node. On every node runs an agent, the kubelet, which starts the pods bound to its node and reports their state.

Above the nodes stands the control plane. It keeps the descriptions of everything that should exist in a database, etcd, takes changes through the API server, and runs a set of controllers. A controller is a loop that takes objects of one kind, compares the wanted state with the actual one and takes a step towards the wanted. Such a loop is called a reconcile loop. Separately, the scheduler decides which node a new pod goes to.

## Deployment, ReplicaSet and rollout

A Deployment is a description like "I want six instances of this application at this version". The deployment controller creates a ReplicaSet for it, an object that keeps a given number of identical pods. The ReplicaSet controller counts the pods and creates missing ones or deletes extra ones.

When the application's version changes, the deployment controller creates a new ReplicaSet and gradually moves the pods from the old one to the new one. This is a rollout. Two numbers say how. maxSurge says by how many pods the wanted count may temporarily be exceeded, maxUnavailable by how many it may temporarily drop. Kubernetes defaults both to 25 percent. In Kube I took the most careful setting, maxSurge 1 and maxUnavailable 0: first one new pod is added, and only when it runs is one old pod removed.

## Level-triggered and edge-triggered

This distinction comes from electronics, and it explains why Kubernetes works at all. An edge-triggered system responds to events: "a pod was deleted", "a node is gone". If an event is lost, the system never learns of it. A level-triggered system looks at the whole current state every time and fixes whatever differs from the wanted state. A lost event does not hurt it: on the next pass it sees one pod too few anyway.

Kubernetes controllers follow the second principle, and so does Kube, not only in its controllers but in its network protocol as well. The radio imposed that decision, and it turned out to be about the best one in the whole story.

## Heartbeat, NotReady and eviction

A node has to say from time to time that it is alive. In Kubernetes the kubelet renews a special object for this, a lease, about every ten seconds. If nothing has been heard for a while, the control plane marks the node NotReady. Some time later the node's pods are evicted, and the scheduler puts them on other nodes.

In Kube the heartbeat is a radio packet the node sends every second. A node silent for five seconds goes NotReady, and its pods move.

## A disrupted zone

If one node goes silent, the node most likely broke. If all nodes go silent at once, most likely the link broke, while the nodes are alive and still working. Evicting every pod at that moment is pointless and harmful: when the link comes back, every pod runs in two places, and then it has to be moved back. Kubernetes calls this a fully disrupted zone and stops evicting until it ends. Kube does the same, and I did not get to that logic at once, as I will tell below.

## A message signature, HalfSipHash and replay attacks

On the air anyone can send anything. For a node to tell its own control plane's command from a forgery, every message is signed with the cluster key. Not in the sense of public and private keys, but with a message authentication code, a MAC: a short number computed from the message and a secret key. Without the key one cannot compute the right MAC for a message of one's own.

For the computation I took HalfSipHash-2-4, a reduced variant of the well-known SipHash that works on 32-bit words and gives a 32-bit result. Why not HMAC-SHA256, as in proper protocols? Because Wirth's processor is 32-bit, at 25 MHz, and the packet has 32 bytes, of which the signature can take four at most. HalfSipHash was made for exactly such small devices; it consists of additions, rotations and exclusive ors, and in Oberon it takes a couple of dozen lines. Thirty-two bits is little for serious cryptography, but for a teaching cluster on the radio it is an honest compromise, and I keep it in mind.

A signature protects against forgery but not against repetition. An attacker can record a genuine message and send it later, when it does harm. This is a replay attack. The defence is a counter: each message carries a number that grows with every message, and the receiver drops anything not newer than the last one accepted from that sender.

## KubeVirt, Cozystack and catalog applications

KubeVirt is a Kubernetes add-on for running ordinary virtual machines next to containers. Inside each such machine runs QEMU, and we swap its machine model for our own, RISC5.

Cozystack is an open cloud platform on Kubernetes, made by our team. Users order databases, Kubernetes clusters and virtual machines from an application catalog, and the catalog can be extended with applications of one's own. Our paleocomputing catalog adds the three needed here. `OberonVM` is one Oberon machine. `OberonAir` is an air that machines join by name. And `OberonKube` is a whole Kube cluster in one order: an air, a control plane and as many nodes as wanted.

## Kube, KubeNet and the other modules

Finally, the names from the code itself. `Kube` is the control plane module: the object store, three controllers and commands for a human. `KubeNet` is the network module: the protocol over the radio, the signatures, and the kubelet that starts and stops pods on a node. `Pods` is a tiny module through which the kubelet hands a pod its id and image. `Ticker` and `Ticker2` are two versions of a teaching workload, handy for watching a rollout. `Boot` is the module that runs the commands a machine receives at start.
