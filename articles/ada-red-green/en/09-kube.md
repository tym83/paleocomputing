# Kubernetes on mailboxes

In the previous part of the series I built Kubernetes on Oberon, and the main discovery there was that a Kubernetes controller maps naturally onto a background task of the operating system. In RED the picture is even more direct, because many parts of Kubernetes simply go by other names here.

The API server is a task that alone owns the object store. A subscription to changes, a watch, is a mailbox: the API server sends every change to the mailboxes of the controllers subscribed to objects of that kind. Each controller keeps its own copy of the objects, what Kubernetes calls the informer cache, and reconciles desired against actual state in a `WAIT` loop: either an event has arrived, or the timeout has expired and it's time for a full resync. A write carries the version number it's based on, and a stale write is rejected; that's optimistic locking. The replica controller remembers how many pods it asked to create but hasn't seen yet. These are expectations, and without them it would create extra pods. Node agents, the kubelets, renew leases, and a node that stops renewing is declared not ready and its pods move elsewhere. The tasks share nothing among themselves except mailboxes.

In the main run, a deployment with three replicas is created and scaled to five, a second client tries to write a stale copy and gets rejected, then node 2 loses power, its pods move to live nodes, and at the end a second version is rolled out. All of that is about five hundred lines of RED.

## The control plane as a process pair

And then comes the crazy part, the whole reason it was worth joining the two previous chapters. In Kubernetes, the reliability of the control plane comes from etcd: several replicas of the store agree with one another via the Raft protocol, and as long as a quorum is alive, the cluster can be managed. What if we did it the Tandem way? The API server runs as a pair: before every change the primary sends the backup a checkpoint, and the backup watches the heartbeat and takes over the name when it disappears. No consensus, no quorum, just a pair of processes.

The problem is that, unlike with the bank, nobody here retries requests. A controller sends a write to the API server and moves on; it doesn't wait for a reply. If the primary dies, everything sitting in its mailbox vanishes, and nobody will ever know. I was almost sure it wouldn't work, and I made the failure as nasty as I could: the primary API server loses power in the middle of rolling out a new version, right after storing the first pod of that version.

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
[210 ms]   pod 14  rs 10  version 2  node-id 1  phase 1
```

Three pod creations and one binding of a pod to a node vanished along with the dead server's mailbox. At 80 milliseconds the replica controller, whose expectations have expired, asks for the pods again, and again into the void, because the name still belongs to the dead server. At 95 milliseconds the backup takes the name and sends every controller the full list of objects. The scheduler sees that pod 11 isn't actually bound and binds it. At 115 milliseconds the replica controller creates whatever is still missing. The cluster gets where it's supposed to be, with no consensus and no human involved. It works because Kubernetes controllers compare states rather than react to events: a lost write is just one more discrepancy for the next reconciliation to catch.

## Two real Kubernetes failures, found by accident

What was really interesting wasn't what ended up working but how it broke along the way. In the first run of the pair, after the API server failover, the node controller declared all three nodes not ready at once and evicted every single pod. While the backup spent 35 milliseconds waiting out the silence, the kubelets were renewing their leases with the dead primary, and after the failover every node's lease looked stale. This is a well-known Kubernetes problem, and its fix is well known too: if all the nodes go quiet at once, it was the control plane that was missing, not the nodes, and nobody should be evicted. Kubernetes calls this full zone disruption mode. I added the same check.

In the second run the nodes were evicted one at a time. Node 3 managed to renew its lease first after the failover, the "everyone is silent" condition stopped holding, and nodes 1 and 2 got evicted. There were two causes, and both, once again, matched how real Kubernetes does it. You can't measure a lease's freshness by the time written in the lease itself; you have to measure it by the time the controller itself saw the change. And the controller shouldn't make a decision after every event: first it should drain everything that has already piled up in the mailbox, and only then decide. The node lifecycle controller in Kubernetes does exactly that. After these two fixes an API server failover costs the cluster exactly zero evictions. Incidentally, my first attempt at draining the backlog used a `WAIT` with a receive and a zero delay, on the assumption that the receive would win. Once the runtime started choosing among ready alternatives fairly, the zero delay sometimes won, and nodes were evicted again. The right way in RED is to ask the mailbox for `FULL_SLOTS` and keep taking messages while there are any.

I love that a thousand-line model in a 1979 language, all by itself and with no hints, stepped on the same rakes Kubernetes kept stepping on for years, and that the way out was the same. It's a good sign that the rakes aren't random: they grow out of the very idea of managing things by reconciling state.
