# Where Kube turned out better, and where Oberon fell down

Comparing a toy cluster on the radio with the Kubernetes that half the internet runs on seems unfair, and I am not going to claim Kube is better. What interests me is something else: which qualities emerged in Kube by themselves, with no effort at all, simply because it grew up on Oberon. I mean the properties that ordinary Kubernetes either lacks or pays far too much for. I counted six of them.

## The whole cluster can be read in an evening

The control plane is about eight hundred lines, the network module with the kubelet and signatures about four hundred, and with the teaching workload and the commands-at-start module it comes to about fourteen hundred. Below lies only the Oberon system, which can also be read in full, and Wirth's processor in Verilog, for which a couple of evenings will do. So the whole path from "I want six replicas of Ticker2" to the register of the radio chip through which an assignment flies off to a node can be followed by eye, without once hitting a library that nobody has ever read.

With Kubernetes that stopped being possible long ago, and not because it is badly written: it solves a huge number of problems Kube simply does not have. But in the end even an experienced engineer who has run it for years usually knows how it behaves but not why, and finds out only during an outage. In Kube the answer to any "why" is in one procedure.

## The air is the observability

I did not plan this property; it arose by itself, and I like it best of all. Since every message goes to everyone and carries the full state rather than a change, at any moment the air carries everything the cluster knows about itself: which nodes are alive, what runs on each, what is bound to each, and which image each pod has. A passive listener that sends nothing reconstructs the whole picture of the cluster without asking it a single question.

All my checks work this way. Neither the failure test, nor the load test, nor the browser labs ever ask the control plane what is going on. They listen to the air and compare what actually ran on the nodes with what was assigned to them. A bug in Kube itself cannot fool such a check, since it looks not at Kube's reports but at the behaviour of the nodes. In ordinary Kubernetes the same takes metrics, logs, audit, exporters and a separate system to collect them all, and still you see only what the components chose to tell about themselves.

## A pod starts in the blink of an eye

In Kubernetes starting a pod means pulling an image, unpacking layers, creating namespaces and starting a process, and that takes seconds, or even minutes with a cold cache and a big image. In Kube starting a pod means loading an Oberon module, if it is not loaded yet, and calling its command, and if the module is already in memory, starting a pod comes down to a procedure call. The whole cluster converges in three seconds, and almost all of that time goes into waiting for the next heartbeat, not into work.

This speed was paid for with isolation, of course, so the comparison is unfair. But it shows where the time really goes. When people talk today about cold starts, about WebAssembly on the server or about V8 isolates, this is exactly the question: can a unit of deployment be made so small and so module-like that starting it costs as much as a function call, without giving up isolation?

## Compatibility is checked at load time

I wrote about this in the section on principles, but it bears repeating, because it is a strong idea. A pod's image in Kube is a module with an interface key, and the system refuses to load it if it was compiled against an incompatible version of what it imports. A pod with an incompatible image will not crash after an hour of work on an unexpected call: it simply will not start, it stays Pending, and that is visible at once. In the container world nobody checks an image's compatibility with its environment except your tests, and the compatibility of images that call each other is checked by an API schema at best, and only if you have one.

## No locks, and therefore no race conditions

Kube's code has no mutexes, no channels and no atomic operations. Controllers, the kubelet, writing the store to disk and receiving radio packets all run as tasks of one loop and execute strictly in turn. So data races, deadlocks and bugs that show up once in a thousand runs have nowhere to come from in Kube. Behaviour is deterministic: run the same scenario twice, and the controllers do the same things in the same order.

There is a flip side, covered a little further on, but the very thought that a control plane need not be multithreaded seems underrated to me. The control plane of eight nodes needs very little computation. The control plane of a thousand nodes needs more, of course, but there too most of the time goes not into computing but into waiting for the network and the disk, and single-threaded event loops proved long ago that such waiting can be served without threads.

## Security from the first message

Early Kubernetes left a lot open by default; the kubelet, for one, accepted anonymous requests for a long time, and closing such holes took years. In Kube the signature and replay protection appeared before the cluster learned to do anything useful, simply because the radio left no choice: on the air anyone can say anything, and that is obvious from day one. The signature is 32-bit, which is too little for the real world, but architecturally the protocol is right: every message is authentic and belongs to its cluster, and the check costs about thirty lines.

## The whole cluster in a browser tab

And the last one, not about architecture but about what follows from it. An Oberon machine is so small that three of them, together with the air, fit into a browser tab. So everything I describe can not only be read but repeated without installing anything: switch off a node, jam the air, slip in a forged assignment. Kubernetes has good learning sandboxes, but they are always someone's cluster somewhere in a cloud, while here the cluster lives on your computer and can be broken any way you like without bothering anyone.

## What Oberon lacked

Now about where Oberon proved too tight, and why such systems most likely lost. For the research this part matters no less.

**Isolation.** This is the main one. In Oberon all modules live in one address space and trust each other. A pod that corrupts memory through `SYSTEM.PUT` corrupts the kubelet, the radio and everything else along with it. A pod that goes into an endless loop freezes the whole node, because a cooperative task that does not return stops the entire system. As long as the machine runs code by one author who trusts that code, all is well, and Wirth designed his system just that way: for one person at one computer. But a cluster exists precisely to run other people's code, and without isolation that is impossible. Kubernetes on Linux gets isolation from the kernel, while to get it Oberon would need memory protection in the processor, preemptive multitasking and resource accounting, that is, it would have to become a different system entirely.

**Preemption.** Besides isolation, the control plane cannot interrupt a pod that computes for too long, nor share processor time among pods. No quotas, no priorities, no limits, only good manners. A teaching workload that adds one to a counter once a second does not care, but any real workload will stumble on this at once.

**A network.** Radio with 32-byte frames is excellent for control, but there is no room in it for application data. Kube's pods have no addresses, no services and no way to talk to each other. Files can be sent over Wirth's radio, but that would be more like a USB stick than a network.

**Flexible sizes.** The limits I praised for predictability turn into a ceiling: ten pods per node, 256 objects in the store, six characters per name and twenty messages a second per station. Each of these ceilings can be raised, but not without end, because they all follow from the 24-byte frame, static arrays and a simple driver. Kubernetes paid for having no such ceilings with enormous complexity, and looking at Kube you understand that this price was deliberate.

**A highly available control plane.** Kube has one control plane machine. If it dies for good along with its disk, the cluster is left without a master. The nodes keep running their last assignment, which is a good property, but the control plane cannot be replaced by another machine, because there is no consistent store across several machines. Raft can be written in Oberon, but over a radio without delivery guarantees and with 32-byte frames that would be a big piece of research of its own.

**Multiple users.** Oberon has one user, Kube one key per cluster. No namespaces, no roles, no separation of rights, and whoever knows the key can do anything. Kubernetes spends most of its complexity precisely on letting many people and teams safely share one cluster, while Kube has no such layer at all.

Put all these points together, and it becomes clear that Oberon lost not because it was badly designed, but because it was designed for another world, where a computer belongs to one person, all the code on it is written by that person or by people they trust, and a network is a way to pass a file to a neighbour. As soon as computers became shared and code became foreign, isolation, preemption and rights were needed, and simple systems gave way to complex ones.
