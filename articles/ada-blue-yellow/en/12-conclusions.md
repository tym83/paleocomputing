# What I'm taking with me

At the end of each part of the series I ask myself what's worth carrying over from what I found into today's infrastructure.

First, a lock should know that its owner has died. In 1978 the blue language split semaphores into two kinds for exactly this reason, and SofTech's justification explains in two paragraphs what in distributed systems we learn from outages: it's the system, not the dead owner's handler, that should release the lock, and only the lock, not the signal. But the difference from today is instructive. On a single machine the system sees that a path has died. Over a network death isn't visible, only silence is, so in Kubernetes locks are leases: a node or a leader regularly renews a record, and if it stops, its lock is considered free. The former owner may meanwhile be alive and unaware that the lock now belongs to someone else, and the defence against that is a separate generation number, checked by everyone who accepts a write. The blue language solved the problem for a world where death is visible. We got a harder problem, but the first step is the same.

Second, concurrent work should have an owner. If a controller starts a goroutine that nobody waits for and whose errors nobody reads, that's exactly what the blue parallel block protected against in 1978.

Third, first make time controllable, then go looking for bugs. This whole series rests on a virtual clock, and the yellow language, as it turned out, offered the same thing right in its syntax.

Fourth, every missing mechanism is paid for with a separate process. Blue, without timeouts, paid with a race of paths; Yellow with a watchdog process; Green, without mailboxes, with a buffer task. When a platform lacks a primitive, somebody builds it anyway, only everyone in their own way and with bugs. That's a good argument for not skimping on primitives.

And fifth: studying the losers is useful so that you know in advance which ideas will come back, and don't pay for them a second time.

What's next. All four of the competition's designs now work, but something else is left from the first round: REDL, the first edition of the red language, with monitors and events, which the red team threw out. And the reviewers' reports on the 1979 final, which decided between Red and Green, still exist only on microfiche. If you have access to them, let me know.

The sources, tests, labs and all the notes are in the repository [github.com/tym83/paleocomputing](https://github.com/tym83/paleocomputing), under [`impl/ada-colors`](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/README.md). If you find a mistake in my reading of the 1978 specifications, let me know; I'm genuinely curious.

Earlier parts of the paleocomputing series:

- [Part 1. Wirth's processor, Project Oberon, a new architecture in QEMU and KubeVirt, and running it in Cozystack and Kubernetes](https://aenix.io/blog/2026/09/nine-days-of-paleocomputing/)
- [Part 2. Kubernetes in Oberon, Wirth's radio instead of a network, and a cluster in your browser](https://aenix.io/blog/2026/10/kubernetes-over-wirths-radio/)
- [Part 3. Two Adas: RED and GREEN, the finalists of 1979](LINK)
