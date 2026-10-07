[Русская версия](16-episode-kube-radio.ru.md)

# Episode: Kube gets real nodes, over Wirth's radio

Status: working. The previous episode ended with a control plane and three
nodes that were only names. Now the nodes are Oberon machines of their own,
talking to the control plane over the radio network of Project Oberon, running
code as pods, keeping the cluster's state on disk, and surviving the failures a
cluster is built to survive. It runs in QEMU, in Cozystack as one catalog
order (`OberonKube`), and in a browser tab, three machines on one page. The
code is in [`impl/kube/`](impl/kube/), the measurements in
[its README](impl/kube/README.md).

## Where the last episode stopped

Kube could keep three replicas of a deployment alive, but nothing ran
anywhere: a pod was "running" because the node controller wrote a node's name
into it. Two things were missing to call it a cluster. Nodes, which means
several machines and a way for them to talk; and rollouts, which means a new
version of a workload replacing the old one without a gap.

The first one looked like the hard part. Wirth's machine has no Ethernet and
no TCP/IP, and an Oberon system that wants a network has to build one.

## The network Wirth already had

It turned out that the network was already there, in the same book. Project
Oberon's stations talk by radio: each board carries an nRF24L01+ transceiver on
its SPI bus, `SCC.Mod` drives it, and `Net.Mod` builds file and message
exchange on top. A packet is at most 32 bytes, there is no collision
avoidance, and every station hears every other one on its channel.

Our QEMU target got a model of that transceiver, and a relay carries its
frames between virtual machines over UDP, so that Wirth's own `Net` works
unchanged between two VMs; in Cozystack the relay is a catalog application,
`OberonAir`. Kube's nodes use the same radio, through `SCC` directly.

## A protocol of three messages

`KubeNet.Mod` speaks three kinds of packets, each sent to everybody and each
fitting into one radio frame:

* a **heartbeat** from a node, every second, with the ids of the pods it runs;
* an **assignment** from the control plane, every second for every Ready
  node, with the ids of the pods bound to it;
* a **spec** from the control plane, one per tick, with a pod's id and its
  image.

Both sides are level-triggered, like the real kubelet and controllers: a node
runs exactly what its last assignment said, so a lost packet is repaired by the
next one and nobody has to retransmit. A node silent for five seconds is
NotReady, and its pods are scheduled elsewhere.

One packet per message is a deliberate limit. Two stations sending longer
messages at the same moment would interleave their packets at every receiver,
and the radio has no way to tell. So a node name is up to six characters, a
heartbeat carries up to ten pods, and a node runs up to ten pods.

## Clusters, keys and intruders

The first time two clusters shared an air in the sandbox tenant, a node of one
kept switching its pods on and off: the other control plane had a node of the
same name. Every message now starts with a one-byte tag computed from the
cluster's name.

A tag separates clusters but proves nothing; on a radio anyone can send
anything. Every message is therefore signed with the cluster key:
HalfSipHash-2-4, the 32-bit variant of SipHash, which fits a machine whose
words are 32 bits, over the message and a 16-bit counter. A forged message
fails the mac; a recorded genuine one replayed later fails the counter. The DR
check plays three intruders right after a real assignment: another cluster's
message, an unsigned one and a replayed one. The node ignores all three, and
the same message signed with the key, the control case, is obeyed.

## Pods that run code

A pod's image names an Oberon module on the node. The kubelet loads it and
calls its `Start` command for a new pod and `Stop` for a pod that is gone;
Oberon commands take no parameters, so the pod is passed through a small
module, `Pods`. `Ticker` and `Ticker2` are two versions of a workload that
counts seconds per pod. A pod whose module is not on the node never starts and
stays Pending, which is what Kubernetes calls an image it cannot pull.

## Rollouts

`Kube.Apply web 6 Ticker2` on a running `web 6 Ticker` creates a new
ReplicaSet and moves the pods one at a time, maxSurge 1 and maxUnavailable 0,
as Kubernetes does by default. Two faults showed on the way, both of which
real Kubernetes has met.

A pod deleted on the control plane keeps running until its node hears the
next assignment, a second later, so for a moment eight pods ran where seven
were allowed. Kube now counts pods its nodes still report but no object owns
as pods being stopped, and adds no new pod while there are any.

And pod ids were reused. A one-byte id is all a node knows of a pod; the new
pod got the id of the old one it had just replaced, the node took it for the
same pod, and the rollout changed the store and nothing on the node.
Kubernetes never reuses a pod's UID for exactly this reason. Ids now go round.

## The store on disk, and disaster recovery

The control plane keeps its objects on its own disk, in two files written in
turn, each with a generation and a checksum, so a write cut by a power failure
leaves the other file whole. After a restart the same pods are on the same
nodes; the nodes get one heartbeat timeout of grace to report, as the node
lifecycle controller gives them.

`qemu/test/kube_dr_check.py` runs a control plane and two nodes and judges
them only from the air, through a listener that never sends:

| what fails | what happens |
|---|---|
| a node is switched off | NotReady after 5 s, its pods move 2 s later |
| the control plane is switched off | the nodes keep running what they were given |
| the control plane boots again | the store comes back, not one assignment changes |
| the air is gone for 20 s | every node goes NotReady at once; evictions pause, nothing moves |
| 30 % of deliveries lost for a minute | no node goes NotReady, no pod moves |
| an intruder, three ways | ignored; the signed control is obeyed |
| a module the nodes do not have | its pods stay Pending |
| a rollout of `web 6` | 6 to 7 pods run at every moment |

The outage of the air is the instructive one. With every node silent at once,
a control plane that trusts its timeouts moves every pod, and when the air
comes back it moves them again: the first try moved 74 assignments in a 20 s
outage. Kubernetes handles this as a fully disrupted zone and stops evicting.
Kube does the same when all nodes, or 55 % of three or more, go NotReady
together. It needed two details that only the failed check revealed: nodes
do not go NotReady in the same instant, so a node's pods move only after 2 s
of NotReady; and nodes come back one by one, so the silent ones get another
timeout once the disruption ends.

The load check, `kube_load_check.py`, ran 2 to 8 nodes with three pods each:
the cluster converges in about 3 s and recovers from a lost node in about 6 s
at every size, with no false NotReady.

Two of the faults found here were in our QEMU machine, not in Kube: `MOD`
after a multiplication could return the wrong half of the product
([finding 87](impl/docs/FINDING-87-qemu-div-remainder.md)), and a machine went
deaf for good after the relay had once been away.

## No typing: commands at start

A cluster you have to type into over VNC is not a cluster anyone will start
twice. QEMU now takes the commands a machine runs at start
(`-machine oberon,commands=...`) and puts them on the serial line, as if they
came from a console; a small module, `Boot`, reads and runs them, called at
the end of `System`'s body. The catalog composes the commands from the form.

Restarts taught one more lesson. The commands run at every start, and with
`Kube.Apply` there, a restarted control plane put the deployment back to its
first-boot version and undid a rollout made since. `Kube.Ensure` creates a
deployment only if there is none, and the commands at start use it.

## OberonKube: a cluster in one order

```yaml
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonKube
metadata:
  name: farm
spec:
  nodes: 3
  key: 00c0ffee00c0ffee
  deployments: web 4 Ticker; api 2 Ticker2
```

One order becomes an air, a control plane and a machine per node, and the
cluster forms by itself. Machines on one air prefer different hosts, so
losing a host costs as few nodes as possible.

## And in the browser

The machine of the lab, Wirth's RTL compiled to WebAssembly, got the same
radio model and the serial line. A page now runs three of them, each in its
own worker, and is itself the air: it relays the frames, can lose a share of
them or cut a machine off, and reads Kube's messages, macs included.

[**Open the cluster lab**](https://tym83.github.io/paleocomputing/oberon/kube.html).
Six labs check themselves from the air: the cluster forms, new code rolls
out, a node dies, the air dies, an intruder tries four ways, the control plane
restarts from its disk.

The browser is slower than a 25 MHz board, so the page runs the machines'
clock ten times faster than their instructions: their seconds pass at a pace
a reader can watch, and the protocol, timed in machine seconds, does not care.

## What is next

A readiness check that a workload answers, so a rollout waits for new code to
be ready and not only started; and a way to apply deployments from outside
the control plane without VNC.
