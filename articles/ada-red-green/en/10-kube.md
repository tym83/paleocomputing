# Kubernetes on mailboxes

For those who haven't worked with Kubernetes, three sentences. In Kubernetes you don't command "start three copies of the service"; you write the desired state into a store, a deployment with three replicas, and a set of independent controllers compares desired with actual over and over and closes the gap: they create pods, that is, instances of the application, assign them to nodes, evict pods from nodes that have stopped responding, and during a version upgrade roll out new pods in place of the old ones. All of them read and write through a single API server.

In the previous part of the series I built Kubernetes on Oberon, and the main discovery there was that a Kubernetes controller maps naturally onto a background task of the operating system. In RED the picture is even more direct, because many parts of Kubernetes simply go by other names here.

Here is how the parts of Kubernetes map onto RED:

| Kubernetes | RED |
|---|---|
| API server and object store | a task that alone owns the store |
| watch, a subscription to changes | a mailbox: the API server sends every change to the mailboxes of the controllers subscribed to objects of that kind |
| informer cache | each controller's own copy of the objects |
| reconcile loop | `WAIT`: either an event has arrived, or the timeout has expired and it's time for a full resync |
| optimistic locking | a write carries the version number it's based on; a stale write is rejected |
| expectations | a count of the pods the replica controller asked to create but hasn't seen yet; without it, it would create extra pods |
| kubelet, the node agent, and its lease | a task that renews its lease regularly; a node that stops renewing is declared not ready, and its pods move elsewhere |

The tasks share nothing among themselves except mailboxes. Of this table, what matters most below is expectations and leases.

In the main run, a deployment with three replicas is created and scaled to five, a second client tries to write a stale copy and gets rejected, then node 2 loses power, its pods move to live nodes, and at the end a second version is rolled out. All of that is about five hundred lines of RED.

## The control plane as a process pair

And then comes the crazy part, the whole reason it was worth joining Tandem and Kubernetes. In Kubernetes, the reliability of the control plane comes from etcd: several replicas of the store agree with one another via the Raft protocol, and as long as a quorum is alive, the cluster can be managed. What if we did it the Tandem way? The API server runs as a pair: after every change, before sending out any events, the primary sends the backup a checkpoint, and the backup watches the heartbeat and takes over the name when it disappears. No consensus, no quorum, just a pair of processes.

The problem is that, unlike with the bank, nobody here retries requests. A controller sends a write to the API server and moves on; it doesn't wait for a reply. If the primary dies, everything sitting in its mailbox vanishes, and nobody will ever know. I was almost sure it wouldn't work, and I made the failure as nasty as I could: the primary API server loses power in the middle of rolling out a new version, right after storing the first pod of that version. `replicaset 10` in the log is the replica set of the second version, run by the replica controller. Look at the lines at 60 and 95 ms: the scheduler binds the same pod 11 twice, because the first binding sank with the dead server's mailbox.

```
[60 ms] replicaset 10: 0 of 4 pods, creating 4
[60 ms] api server primary loses power right after storing pod 11; the writes still in its mailbox are gone
[60 ms] scheduler: pod 11 -> node 1
[80 ms] replicaset 10: 1 of 4 pods, creating 3
[95 ms] api server backup: no heartbeat, taking over the name API
[95 ms] scheduler: pod 11 -> node 1
[95 ms] kubelet 1: pod 11 (version 2) running
[115 ms] replicaset 10: 1 of 4 pods, creating 3
[115 ms] scheduler: pod 12 -> node 2
...
```

Three pod creations and one binding of a pod to a node vanished along with the dead server's mailbox. At 80 milliseconds the replica controller, whose expectations have expired, asks for the pods again, and again into the void, because the name still belongs to the dead server. At 95 milliseconds the backup takes the name and sends every controller the full list of objects. The scheduler sees that pod 11 isn't actually bound and binds it. At 115 milliseconds the replica controller creates whatever is still missing. The cluster gets where it's supposed to be, with no consensus and no human involved. It works because Kubernetes controllers compare states rather than react to events: a lost write is just one more discrepancy for the next reconciliation to catch.

## Two real Kubernetes failures, found by accident

What was really interesting wasn't what ended up working but how it broke along the way. In the first run of the pair, after the API server failover, the node controller declared all three nodes not ready at once and evicted every single pod. While the backup spent 35 milliseconds waiting out the silence, the kubelets were renewing their leases with the dead primary, and after the failover every node's lease looked stale. This is a well-known Kubernetes problem, and its fix is well known too: if all the nodes go quiet at once, it was the control plane that was missing, not the nodes, and nobody should be evicted. In Kubernetes, a zone where every node has gone quiet enters a state of full disruption, FullDisruption, and if that happens to every zone, the eviction controller stops. I added the same check.

In the second run the nodes were evicted one at a time. Node 3 managed to renew its lease first after the failover, the "everyone is silent" condition stopped holding, and nodes 1 and 2 got evicted. There were two causes, and both, once again, matched how real Kubernetes does it. You can't measure a lease's freshness by the time written in the lease itself; you have to measure it by the time the controller itself saw the change. And decisions should be made not on every event but on the full picture: first drain everything that has already piled up in the mailbox. The real node lifecycle controller works much like this: every few seconds it walks all the nodes in its cache, and when it leaves full disruption it also resets every node's freshness clock, so that the first node to renew its lease doesn't throw the others under the bus. After these two fixes an API server failover costs the cluster exactly zero evictions. Incidentally, my first attempt at draining the backlog used a `WAIT` with a receive and a zero delay, on the assumption that the receive would win. Once the runtime started choosing among ready alternatives fairly, the zero delay sometimes won, and nodes were evicted again. The right way in RED is to ask the mailbox for `FULL_SLOTS`, how many messages it holds, and keep taking them while there are any.

I love that the pair variant, about six hundred lines in a 1979 language, all by itself and with no hints, stepped on the same rakes Kubernetes kept stepping on for years, and that the way out was the same. It's a good sign that the rakes aren't random: they grow out of the very idea of managing things by reconciling state.

## The same thing in the green language

For a fair comparison I wrote the same control loop in the green language. The structure is the same: an API server, controller caches, optimistic writes, node leases. In size the two versions are nearly equal, 522 lines of RED and 517 of GREEN, but they're built differently, and the difference is exactly the one people argued about in 1979.

The green language has no mailboxes, only the rendezvous. That means the event stream for each controller becomes a buffer task, a family `INBOX(1 .. 8)` with entries `PUT_EVENT` and `GET_EVENT`, and about forty lines go into what in RED was a single variable declaration. It gets worse. A controller needs to wait for either an event or a timeout for its periodic resync, and the 1979 green language has no timed entry call. I had to move the timeout inside the mailbox: if nothing arrives for 20 milliseconds, the mailbox itself puts a tick event in the queue.

And there's a trap that I predicted in advance and then verified. The API server sends out events by calling `INBOX(P).PUT_EVENT`, and if the mailbox is full, the server waits. But the mailbox's owner may at that very moment be waiting for the server, having called `API.WRITE`. The server waits for the controller, the controller waits for the server. With mailboxes of 256 events this doesn't happen, but with mailboxes of four the cluster locks up solid. What's more, the runtime can't even call it a deadlock, because the other mailboxes' timers keep ticking and virtual time runs forward forever. The same trap is possible in RED, but in the green world it's built into the very shape of the solution: where RED has a mailbox, GREEN has a server task, and two server tasks calling each other are a classic way to hang.

The green version, by the way, found a bug in my shared runtime. When a node loses power, its kubelet is terminated with `abort`, and at that moment it's standing in the queue at an entry of its mailbox. The runtime made the aborted task ready but forgot to remove its record from the entry queue, and a moment later the mailbox "accepted" a call from a task that had already finished and woke the dead. Section 9.10 of the 1979 manual says plainly that an aborted caller is removed from the queue, so this was my bug, not the language's.

## Kubernetes on THE

One thing remained: running the same control loop not on mailboxes but on THE from the previous chapter. I set a strict rule. The controllers live on level 4, as THE user programs, and use only what THE gives programs: P and V, segments, the console and the clock. Mailboxes and `WAIT` stay inside the lower levels, where THE itself is built from them.

Kubernetes changes more than I expected. There's no API server at all: the store is segments that the segment controller moves between core and drum, guarded by one semaphore. A watch turns into a wake-up semaphore per controller, and whoever writes something wakes everyone. The semaphore saturates at one, so a wake-up only says "look again", never "here's what changed", and the controllers come out level-triggered simply by construction. P has no timeout, and a process can't wait on two semaphores at once, so resync, node heartbeats and lease checks all come from a clock process on level 0 that wakes everyone every ten milliseconds. Even the operator's "scale to five" reaches the deployment controller through the same wake-up semaphore, with the command itself left in a segment.

The first version taught me the most. I made a node fail the way I had in PAIRS: `EXTERMINATE` on the kubelet task in the middle of its work. At that moment the kubelet held the store's semaphore. The V never came, and the whole control plane stopped for good: neither the scheduler nor the node controller, which was supposed to notice the loss, could get into the store again. Kubernetes on RED never had this problem, because there one process owns the store and the kubelet only exchanges messages with it. In THE the data is shared, and a process that dies inside a critical section takes everyone with it. Dijkstra wrote frankly that his group's first major mistake was designing for "a perfect installation" and thinking about failures too late. I repeated it in five minutes. Now a node goes dark between two passes of its loop, and the cluster moves its pods to the live nodes. In GREEN the same design works, but the semaphores are server tasks again, and one run costs 1168 rendezvous.
