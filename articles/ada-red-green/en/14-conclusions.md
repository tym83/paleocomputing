# What I'm taking with me

At the end of each part of the series I ask myself what's worth carrying over from what I found into today's infrastructure. This time there turned out to be a surprising number of such things.

First, keeping mechanisms separate. Messages serve communication, locks serve shared data, and neither mechanism pretends to be the other. Ada spent sixteen years arriving at the same place, and in the Kubernetes world we constantly see people trying to cover everything with one mechanism: a queue used as a database, or a database used as a queue. The Red team understood perfectly well in 1979 why that won't do.

Second, explicit interfaces to state. `IMPORTS` in RED annoyed me at first and then started helping me read and check my own code, even though in the compiler itself the simplest thing was to write `IMPORTS ALL` in most procedures. In infrastructure code, where controllers, operators and hooks all touch the same store, a list like that would be priceless, and in places it's effectively already being introduced through access rights and field-level restrictions.

Third, process pairs. This is probably the result I least expected. A Kubernetes control plane built as a Tandem-style pair, with no consensus, survived the death of the API server in the middle of a rollout, because the controllers compare states rather than react to events. For a single site, where there's often simply nowhere to get a three-node etcd quorum from, this is a serious alternative, and I want to test it not on a model but on a real cluster.

Fourth, deterministic time. Almost everything interesting in this article was found because any failure is reproducible down to the millisecond. That's how the unfair choice in `WAIT`, the bug with the aborted entry call and both traps in the node controller turned up. With real threads and real clocks I'd have spent weeks hunting for half of these, and the other half I'd never have found at all. For testing distributed infrastructure, I think this is the main lesson: first make time controllable, then go looking for bugs.

And fifth, not technical at all. Studying the losers is useful not out of nostalgia but so that you know in advance which ideas will come back, and don't pay for them a second time.

What's next. The reviewers' reports on the 1979 final, which decided between Red and Green, apparently still exist only on microfiche, cards of photographic film carrying reduced pages that you read through a magnifier, and Red's translator never turned up. If you have access to either, let me know.

The sources, tests, labs and all the notes are in the repository [github.com/tym83/paleocomputing](https://github.com/tym83/paleocomputing), under [`impl/ada-colors`](https://github.com/tym83/paleocomputing/blob/main/impl/ada-colors/README.md). If you find a mistake in my reading of the 1979 manuals, let me know; I'm genuinely curious.

Earlier parts of the paleocomputing series:

- [Part 1. Wirth's processor, Project Oberon, a new architecture in QEMU and KubeVirt, and running it in Cozystack and Kubernetes](https://aenix.io/blog/2026/09/nine-days-of-paleocomputing/)
- [Part 2. Kubernetes in Oberon, Wirth's radio instead of a network, and a cluster in your browser](https://aenix.io/blog/2026/10/kubernetes-over-wirths-radio/)
