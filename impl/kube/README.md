[Русская версия](README.ru.md)

# Kube: a Kubernetes control plane in Oberon

Kube is a minimal Kubernetes control plane written in Oberon-07 and built by
the Oberon compiler on Wirth's machine. It does not imitate how Kubernetes
looks; it reproduces the idea that makes it work: you declare the state you
want, and independent controllers keep comparing it with what exists and close
the gap. The whole story, including how it got to run in Cozystack, is in the
episode [`15-episode-kube.md`](../../15-episode-kube.md).

## How it maps

There is an object store with Deployments, ReplicaSets and Pods, and three
controllers. They run as background `Oberon.Task` entries in the same ring as
the system garbage collector, and `Oberon.Loop` calls them between user events,
as kube-controller-manager would.

| Kubernetes | Oberon |
|---|---|
| etcd | the `store` array of records |
| the API and kubectl | middle-click commands: `Kube.Apply`, `Kube.Get`, `Kube.DeletePod` |
| deployment controller | `ctlDeploy`: one ReplicaSet per image; a new image is rolled out one pod at a time |
| replicaset controller | `ctlRS`: the number of Pods equals `replicas` |
| scheduler | `ctlNode`: binds a Pod to the least loaded Ready node, and unbinds the Pods of a node that went NotReady so they move |
| kubelet | `KubeNet` on a node machine: runs what the control plane assigned and reports it in a heartbeat |
| node lifecycle controller | `Kube.Expire`: a node silent for five seconds goes NotReady |
| ownerReferences | the `owner` field: pod to replicaset, replicaset to deployment |
| nodes | other Oberon machines on Wirth's radio, or three local nodes for a single machine |

## Running it

```sh
cd impl
kube/check.sh     # Norebo, no screen: compile, apply 3, delete a pod, scale to 1
kube/system.sh    # the real system on the RTL: build/kube/kube_rtl.png, 1-2 minutes
```

Norebo has no `Oberon.Loop`, so `check.sh` turns the loop by hand. In
`system.sh` the system compiles `Kube.Mod` itself and the background tasks do
the reconcile; the result is [`kube-in-oberon.png`](kube-in-oberon.png):

```
deployment web  replicas=3  image=nginx
  replicaset web-rs  desired=3
    pod web-rs-0 @node-a Running
    pod web-rs-1 @node-b Running
    pod web-rs-2 @node-c Running
```

In a live system the commands are run with the middle button (Alt with a left
click over VNC):

| command | |
|---|---|
| `Kube.Start` | install the three controllers and wait for nodes on the radio |
| `Kube.Start local` | the same with three local nodes, for a single machine |
| `Kube.Apply name N image` | declare a deployment, change its replicas, or roll it out to a new image |
| `Kube.Get` | print the object tree into the log |
| `Kube.DeletePod "name"` | delete a pod; the next tick recreates it under a new name |
| `Kube.Stop` | remove the controllers, keeping the objects |
| `Kube.Run N` | run N ticks by hand, for Norebo |
| `Kube.Save [file]` | write what `Kube.Get` prints into a file, `Kube.State` by default |
| `Kube.Reset` | forget every object, on the disk too |

The pod name is quoted because the Oberon text scanner ends a name at a hyphen.

## Files

| | |
|---|---|
| `Kube.Mod` | the control plane: objects, controllers, scheduler |
| `KubeNet.Mod` | the cluster over the radio: the control plane side and the kubelet |
| `Pods.Mod` | the pod a workload is started or stopped for |
| `Ticker.Mod`, `Ticker2.Mod` | two versions of a workload, for pods and rollouts |
| `Boot.Mod` | runs the machine's commands at start (RS232 receive) |
| `check.sh` | compile and run `Kube.Demo` in Norebo |
| `mkdisk.sh` | a system image with `Kube.Mod` and the commands appended to `System.Tool` |
| `system.sh` | boot that image on the RTL, click the commands, take a screenshot; the clicks are in `../scripts/kube.src` |

## Real nodes over the radio

A cluster is several Oberon machines on one air (see `OberonAir` in the
catalog): one runs the control plane, the others are nodes. They talk over
Wirth's radio network, the nRF24L01+ driver `SCC` from Project Oberon, which
the QEMU machine models and the relay carries between virtual machines.

On the control plane:

```
Kube.Start
KubeNet.Serve kube 00c0ffee00c0ffee
Kube.Apply web 3 Ticker ~
```

On each node:

```
KubeNet.Join node-a kube 00c0ffee00c0ffee
```

In the catalog nothing has to be typed: an `OberonVM` with a `kubeRole` runs
these commands at start (see "Commands at start" below).

The protocol is three messages, each one radio packet sent to everybody. A
kubelet broadcasts a heartbeat every second with the pods it runs; the control
plane sends every Ready node the list of pods bound to it every second. Both
sides are level-triggered, like their Kubernetes counterparts: a node runs
exactly what the last list said, so a lost packet is repaired by the next one.
A node that has been silent for five seconds goes NotReady, and the scheduler
moves its pods to the nodes that remain. Messages are kept to one packet on
purpose: the radio has no collision avoidance, and two stations sending longer
messages at once would interleave them at the receivers.

Every message starts with a one-byte tag of the cluster, so several clusters
can share one air: `KubeNet.Serve [cluster]` and `KubeNet.Join name [cluster]`
take a cluster name of up to 8 characters, `kube` when it is left out, and a
node ignores the messages of other clusters. Without it a second control plane
on the same air, with a node of the same name, kept switching that node's pods
on and off in the sandbox tenant. The tag is computed from the name, so two
different names share a tag with a chance of 1 in 255.

The tag separates clusters but proves nothing: any station can send it. Every
message is therefore signed with the cluster key, the third word of Serve and
Join, up to 16 hex digits: a HalfSipHash-2-4 mac (the 32-bit SipHash, which
fits the machine's arithmetic) over the message type and its data, after a
16-bit counter. A message with a wrong mac is dropped, and so is one whose
counter is not newer than the last one from its sender: an old assignment
replayed is refused while its sender is alive. A sender silent for longer than
the node timeout may have restarted and counts from anew, so its counter is
learned again then. The DR check verifies every mac on the air with a
reference implementation in Python and tries the intruders: another
cluster's assignment, an unsigned one and a replayed one are ignored, the
same assignment signed with the key is obeyed.

Signing took six bytes of the packet: a node name is up to 6 characters, and a
heartbeat holds up to 10 pod ids, so one node runs up to 10 pods; the
scheduler binds no more to it. Apply a deployment once its nodes are
Ready: like the real scheduler, Kube does not move running pods to a node that
joined later.

`qemu/test/kube_radio_check.py` runs this on three machines and the relay: both
nodes Ready, three pods spread over them, then one node switched off, NotReady,
and all three pods Running on the other.

`Net`, `Kube`, `KubeNet`, `Pods`, the workloads `Ticker` and `Ticker2` and
`Boot` are compiled onto the system disk of the `oberon-run` image
(`tools/install_modules.py`), so in an `OberonVM` they are ready to run without
typing anything in.

## Pods run code

A pod's image names an Oberon module on the node. The control plane sends each
pod's image in a signed spec message (the third message, one per tick, the
pods that do not run yet first). The kubelet loads the module and calls its
`Start` command for a new pod and `Stop` for a pod that is gone; Oberon
commands take no parameters, so the pod is passed in `Pods`. The kubelet
reports as running only the pods whose `Start` returned: a pod of a module
that is not on the node stays Pending, as a pod whose image cannot be pulled
(DR scenario 9). `Ticker` and `Ticker2` are two versions of a workload that
counts seconds per pod (`Ticker.Show`), so `Kube.Apply web 6 Ticker2` on a
running `web 6 Ticker` replaces running code, pod by pod.

## Commands at start

QEMU takes the commands a machine runs at start (`-machine
oberon,commands=...`, separated by `;`) and puts them on RS232 receive, as if
they came from a serial console. `Boot.Run` reads them and runs each one with
the rest of its line as parameters. It is called at the end of `System`'s
body: `System` is rebuilt from the image's own source with that one line
added, so its interface, and the key every other module checks, stays the
same. The catalog composes the commands from the `OberonVM` form (`kubeRole`,
`kubeCluster`, `kubeNode`, `kubeKey`, `commands`) and the KubeVirt hook passes
them to QEMU. `qemu/test/kube_boot_check.py` starts three machines with only
their commands, no key pressed: the cluster forms and runs a deployment, and
the control plane, switched off and on, comes back by itself without moving a
pod.

## The store on disk

Kube keeps its objects on the disk of the control plane machine, as
Kubernetes keeps them in etcd. A background task writes them whenever they
change, and `Kube.Start` reads them back after a restart. There are two files,
`Kube.Store0` and `Kube.Store1`, written in turn, each with a generation number
and a checksum: a write cut short by a power failure leaves the other file
whole, and `Kube.Start` takes the newer whole one. The files are rewritten in
place, because the Oberon file system frees the sectors of a replaced file only
at the next boot, and a new file per change would fill the disk under churn.

Restored nodes get one heartbeat timeout to report again before they count as
NotReady, as the node lifecycle controller gives nodes a grace period after it
restarts. The grace starts when `KubeNet.Serve` begins to listen, not when the
store is read: in the cloud, typing the second command over VNC took longer
than the timeout, and every pod moved although none had stopped. `Kube.Reset` forgets every object, on the disk too.

## Disaster recovery

`qemu/test/kube_dr_check.py` runs a control plane and two nodes and measures
them from the air: a passive listener (`qemu/radio/listen.py`) joins the relay
like a machine, never sends, and records every heartbeat and assignment. It runs
in the hardware workflow.

| what fails | what happens | time |
|---|---|---|
| a node is switched off | NotReady after the 5 s heartbeat timeout, its pods move 2 s later | about 8 s |
| the node comes back and joins | Ready again; when the deployment is scaled up, the new pods go to it, the least loaded node | at once |
| the control plane is switched off | the kubelets keep running what they were given | |
| the control plane boots again | the store comes back from its disk: the same pods on the same nodes, not one assignment changes | at once after `Kube.Start` |
| the air (the relay) is gone for 20 s | both nodes go NotReady; the plane pauses evictions instead of moving every pod, and with the air back the same pods run on the same nodes | about 3 s |
| 30 % of deliveries are lost for a minute | no heartbeat gap reaches the timeout; no pod moves | |
| right after the plane's assignment, a station sends "run nothing" for a node: tagged as another cluster, unsigned, or an old genuine assignment replayed | the node ignores all three; the same assignment signed with the key and a fresh counter, the control, does empty it, and the plane puts the pods back | |
| a deployment of a module the nodes do not have | its pods are assigned but never run, they stay Pending | |
| `web 6` is rolled out to a new image | 6 to 7 pods run at every moment; in the end only the new ReplicaSet is left | |

The timeout is five missed heartbeats. It was three at first: on an air losing
30 % of deliveries, three heartbeats in a row went missing a few times a
minute, the plane took the node for NotReady and moved pods that never
stopped. With five, none moved; the price is a slower failover, about 7 s
instead of 4. The real kubelet reports every 10 s and the control plane waits
40 s, four missed reports: the same trade, at another scale.

When too many nodes go NotReady at once, all of them, or at least 55 % of
three or more, the nodes are more likely cut off than dead, and Kube pauses
evictions, as the node lifecycle controller of Kubernetes does for a fully
disrupted zone. Two details were needed for that to work, both learned from a
failed check. Nodes do not go NotReady at the same moment, their heartbeats are
up to a second apart, so a node's pods move only after it has been NotReady
for 2 s: by then the others have gone too, and the disruption is seen.
Kubernetes waits five minutes (`tolerationSeconds: 300`). And nodes come back
one by one: the first one Ready ends the disruption while the others have not
reported yet, so the silent nodes get one more timeout to report, as
Kubernetes resets the nodes' timers when a zone leaves full disruption.
Without these, a 20 s outage of the air moved 74 assignments; with them, none.

Machines on one air prefer different hosts of the Kubernetes cluster they run
in (`retro-machine` gives them the air as a label and a preferred
anti-affinity), so losing a host takes as few nodes as it can.

## Rollouts

`Kube.Apply web 6 nginx2` on a running `web` changes its image. The
deployment controller makes a new ReplicaSet for the image (`web-rs2`, then
`web-rs3`) and moves the pods one at a time, as Kubernetes does by default
(maxSurge 1, maxUnavailable 0): one new pod is added, and one old pod goes
only once more pods run than wanted, that is, once the new pod's kubelet has
reported it. An old ReplicaSet left without replicas and pods is removed. A
ReplicaSet that has to shrink removes Pending pods first.

A deleted pod keeps running until its kubelet hears the next assignment, up to
a second later. At first the controller did not wait for that, and for a
moment eight pods ran where seven were the most allowed; real Kubernetes does
the same unless a Deployment sets `podReplacementPolicy: TerminationComplete`.
Kube now counts the ids a kubelet still reports but no pod has as pods being
stopped, and does not add a new pod while there are any.

A kubelet knows a pod only by its one-byte id. Ids used to be the lowest free
one, so the new pod got the id of the old pod it had just replaced, the
kubelet took it for the same pod, and the rollout changed nothing on the node:
the store said nginx2, the node never restarted anything. Kubernetes never
reuses a pod's UID for the same reason. Ids now go round, the next after the
last one given, and the DR check requires that no id of the old pods runs
after a rollout.

Getting these to pass found two faults in the QEMU machine, not in Kube: `MOD`
after a multiplication could return the high part of the product, so the store
was never written ([finding 87](../docs/FINDING-87-qemu-div-remainder.md)); and
a machine stopped hearing the air for good after the relay had been gone once,
because QEMU's UDP channel drops its reader after a failed read (`graft.sh`
patches that).

## Load

`qemu/test/kube_load_check.py --nodes N` runs a control plane, N nodes and a
deployment of three pods per node, and measures from the air how long the
cluster takes to converge and to recover from a lost node. It runs in the
hardware workflow on request (`kube_load`), for 2, 4, 6 and 8 nodes, on a
GitHub runner with 4 cores:

| nodes | pods | converge | failover | frames per second on the air | false NotReady |
|---|---|---|---|---|---|
| 2 | 6 | 3.3 s | 6.0 s | 4.0 | 0 |
| 4 | 12 | 2.8 s | 6.0 s | 7.9 | 0 |
| 6 | 18 | 3.0 s | 6.1 s | 11.8 | 0 |
| 8 | 24 | 3.5 s | 6.1 s | 15.4 | 0 |

Every node hears its assignment and reports a heartbeat once a second, up to
eight nodes. Each machine keeps a host core busy, because Oberon's loop never
idles, so with eight nodes the runner is more than twice oversubscribed; that
showed as a command typed into the control plane that once never ran, not as
a fault of the cluster. Failover is the 5 s heartbeat timeout plus a second
for the next assignment to reach the remaining nodes.

## In Cozystack

Kube runs inside `OberonVM` machines from the catalog, which form a cluster
from their form; the description of OberonVM shows the fields. At first it was
typed into the editor over VNC, saved, compiled inside the system with
`ORP.Compile Kube.Mod/s` and run by hand; getting there needed fixes to the
keyboard and the disk of the virtual machine
([finding 86](../docs/FINDING-86-qemu-keyboard-byte-load.md)).

## Next

A readiness check a workload answers, so that a rollout waits for the new
code to be ready and not only started; and a way to apply deployments without
VNC.
