# Where Kube turned out better, and where Oberon fell short

Comparing a toy cluster on the radio with the Kubernetes that runs half the internet seems unfair. But I am not going to claim Kube is better than Kubernetes. What interests me is something else: which properties Kube got for free, with no effort, just because it grew on Oberon, and which ordinary Kubernetes either lacks or pays dearly for. I counted six, and for each I later wondered whether it could be carried over into today's infrastructure.

## The whole cluster can be read in an evening

The control plane is about eight hundred lines, the network module with the kubelet and signatures about four hundred, and with the teaching workloads and the commands-at-start module it comes to about fourteen hundred. Below them there is only the Oberon system, which can also be read in full, and Wirth's processor in Verilog, which takes a couple of evenings. So the path from "I want six replicas of Ticker2" to the register of the radio chip through which an assignment flies off to a node can be followed by eye, without once hitting a library nobody has read.

Kubernetes has not been like that for a long time, and not because it was written badly. It solves a huge number of problems Kube does not have. But as a result even an experienced engineer who has run it for years usually knows how it behaves but not why, and finds out only during an outage. In Kube any "why" is answered by reading one procedure.

## The air is the observability

I did not plan this property; it appeared by itself, and I like it best of all. Since every message goes to everyone and carries the full state rather than a change, at any moment the air carries everything the cluster knows about itself: which nodes are alive, what runs on each, what is bound to each, and what image every pod has. A passive listener that sends nothing reconstructs the whole picture of the cluster without asking it a single question.

All my checks work this way. The failure test, the load test and the browser labs never ask the control plane what is going on. They listen to the air and compare what actually ran on the nodes with what was assigned to them. Such a check cannot be fooled by a bug in Kube itself, because it looks not at Kube's reports but at the behaviour of the nodes. In ordinary Kubernetes this takes metrics, logs, audit, exporters and a separate system to collect them all, and still you see what the components chose to tell about themselves.

## A pod starts in the blink of an eye

In Kubernetes starting a pod means pulling an image, unpacking layers, creating namespaces and starting a process, which takes seconds, and with a cold cache and a large image, minutes. In Kube starting a pod means loading an Oberon module, if it is not loaded yet, and calling its command. Loading a module from disk takes tens of milliseconds at most even on a 25 MHz machine, and if the module is already in memory, starting a pod comes down to a procedure call. The whole cluster converges in three seconds, and almost all of that time is spent waiting for the next heartbeat, not working.

Of course this speed is paid for with isolation, and the comparison is unfair. But it shows where the time really goes. When people talk today about cold starts, about WebAssembly on the server or V8 isolates, they are talking about exactly this: whether a unit of deployment can be made so small and so module-like that starting it costs as much as a function call, while keeping it isolated.

## Compatibility is checked at load time

I mentioned this in the section on principles, but it bears repeating, because it is a strong idea. A pod's image in Kube is a module with an interface key, and the system refuses to load it if it was compiled against an incompatible version of what it imports. A pod with an incompatible image will not fall over after an hour of work on an unexpected call; it simply will not start and stays Pending, visibly, at once. In the container world nobody checks an image's compatibility with its environment except your tests, and between images that call each other only an API schema does, if you have one.

## No locks, and therefore no races

Kube's code has not one mutex, not one channel and not one atomic operation. Controllers, the kubelet, writing the store to disk and receiving radio packets are tasks in one loop that run strictly in turn. So Kube can have no data races, no deadlocks and no bugs that show once in a thousand runs. Its behaviour is deterministic: run the same scenario twice, and the controllers do the same things in the same order.

There is a flip side, covered below, but the idea that a control plane does not have to be multithreaded seems underrated to me. The control plane of eight nodes needs a fraction of a percent of a processor. One for a thousand nodes needs more, of course, but even there most of the time goes into waiting for the network and the disk rather than computing, and single-threaded event loops have long shown that this can be served without threads.

## Security from the first message

Early Kubernetes left a lot open by default; the kubelet, for one, accepted anonymous requests for a long time, and closing such holes took years. In Kube the signature and replay protection appeared before the cluster did anything useful, simply because the radio left no choice: on the air anyone can say anything, and that is obvious from day one. The signature is 32-bit, which is too little for the real world, but architecturally the protocol is right: every message is authentic, fresh and belongs to its cluster, and checking that costs a couple of dozen lines.

## A whole cluster in a browser tab

And the last one, not about architecture but about what follows from it. An Oberon machine is so small that three of them, along with the air, fit into a browser tab. So everything I describe in this article can not only be read but repeated without installing anything: switch off a node, jam the air, slip in a forged assignment. Kubernetes has good learning sandboxes, but they are always someone's cluster somewhere in a cloud; here the cluster lives on your own computer, and you can break it any way you like without bothering anyone.

## What Oberon lacked

Now about where Oberon proved too tight, and why such systems probably lost. This part of the research matters just as much.

**Isolation.** This is the main one. In Oberon all modules live in one address space and trust each other. A pod that corrupts memory through `SYSTEM.PUT` corrupts the kubelet, the radio and everything else. A pod that enters an endless loop freezes the whole node, because a cooperative task that does not return stops the entire system. As long as the machine runs code by one author who trusts that code, this is fine; Wirth designed the system that way, for one person at one computer. But a cluster exists precisely to run other people's code, and that is impossible without isolation. Kubernetes on Linux gets isolation from the kernel; for Oberon to get it, it would need memory protection in the processor, preemptive multitasking and resource accounting, that is, to become a different system entirely.

**Preemption.** Separately from isolation, the control plane cannot interrupt a pod that computes for too long, and cannot share processor time between pods. No quotas, no priorities, no limits, only good manners. For a teaching workload that bumps a counter once a second this does not matter; for any real workload it is the first thing to break.

**A network.** Radio with 32-byte frames is excellent for control, but there is none of it for application data. Kube's pods have no addresses, no services and no way to talk to each other. Files can be sent over Wirth's radio, but that is closer to a USB stick than to a network.

**Flexible sizes.** The limits I praised for predictability turn into a ceiling. Ten pods per node, eight nodes, 256 objects in the store, six characters per name. Each ceiling can be raised, but not without end: they all follow from one 24-byte frame and from static arrays. Kubernetes paid for having no such ceilings with enormous complexity, and looking at Kube you understand that this was a deliberate price.

**A highly available control plane.** Kube has one control plane machine. If it dies for good along with its disk, the cluster is left without a master. The nodes keep running their last assignment, which is a good property, but the control plane cannot be replaced by another machine, because there is no consistent store across several machines. Raft can be written in Oberon, but over a radio without delivery guarantees and with 32-byte frames that would be a big piece of research of its own.

**Multiple users.** Oberon has one user; Kube has one key per cluster. No namespaces, no roles, no separation of rights. Anyone who knows the key can do anything. Kubernetes spends most of its complexity on letting many people and many teams safely share one cluster, and Kube has no such layer at all.

Put these together, and it is clear that Oberon lost not because it was badly designed but because it was designed for another world, where a computer belongs to one person, all its code is written by that person or by people they trust, and a network is a way to pass a file to a neighbour. As soon as computers became shared and code became foreign, isolation, preemption and rights were needed, and simple systems gave way to complex ones. The question that occupies me is whether we had to lose everything Oberon gave for free along the way.
