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
| deployment controller | `ctlDeploy`: one ReplicaSet per Deployment, with its replicas and image |
| replicaset controller | `ctlRS`: the number of Pods equals `replicas` |
| scheduler | `ctlNode`: binds a Pod to the least loaded Ready node, and unbinds the Pods of a node that went NotReady so they move |
| kubelet | `KubeNet` on a node machine: runs what the control plane assigned and reports it in a heartbeat |
| node lifecycle controller | `Kube.Expire`: a node silent for three seconds goes NotReady |
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
| `Kube.Apply name N image` | declare a deployment or change its replicas |
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
KubeNet.Serve
Kube.Apply web 3 nginx ~
```

On each node:

```
KubeNet.Join node-a
```

The protocol is two messages, each one radio packet sent to everybody. A
kubelet broadcasts a heartbeat every second with the pods it runs; the control
plane sends every Ready node the list of pods bound to it every second. Both
sides are level-triggered, like their Kubernetes counterparts: a node runs
exactly what the last list said, so a lost packet is repaired by the next one.
A node that has been silent for three seconds goes NotReady, and the scheduler
moves its pods to the nodes that remain. Messages are kept to one packet on
purpose: the radio has no collision avoidance, and two stations sending longer
messages at once would interleave them at the receivers.

Pods on the radio are numbered by a one-byte id, and a heartbeat holds up to 15
of them, so one node runs up to 15 pods. Apply a deployment once its nodes are
Ready: like the real scheduler, Kube does not move running pods to a node that
joined later.

`qemu/test/kube_radio_check.py` runs this on three machines and the relay: both
nodes Ready, three pods spread over them, then one node switched off, NotReady,
and all three pods Running on the other.

`Net`, `Kube` and `KubeNet` are compiled onto the system disk of the
`oberon-run` image (`tools/install_modules.py`), so in an `OberonVM` they are
ready to run without typing anything in.

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
restarts. `Kube.Reset` forgets every object, on the disk too.

## Disaster recovery

`qemu/test/kube_dr_check.py` runs a control plane and two nodes and measures
them from the air: a passive listener (`qemu/radio/listen.py`) joins the relay
like a machine, never sends, and records every heartbeat and assignment. It runs
in the hardware workflow.

| what fails | what happens | time |
|---|---|---|
| a node is switched off | NotReady after the 3 s heartbeat timeout, its pods run on the other node | about 4 s |
| the node comes back and joins | Ready again; when the deployment is scaled up, the new pods go to it, the least loaded node | at once |
| the control plane is switched off | the kubelets keep running what they were given | |
| the control plane boots again | the store comes back from its disk: the same pods on the same nodes, not one assignment changes | at once after `Kube.Start` |
| the air (the relay) is gone for 20 s | both nodes go NotReady on the plane; with the air back the cluster converges again | about 5 s |
| 30 % of deliveries are lost for a minute | a few heartbeat gaps exceed the timeout, so a few pods move; the cluster stays whole and converges | |

The 3 s timeout is three missed heartbeats. On a lossy air that is tight: the
real kubelet reports every 10 s and the control plane waits 40 s. The timeout is
kept short here so the tests stay short.

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
| 2 | 6 | 3.3 s | 4.0 s | 4.0 | 0 |
| 4 | 12 | 3.9 s | 4.5 s | 8.0 | 0 |
| 6 | 18 | 6.0 s | 3.5 s | 11.7 | 0 |
| 8 | 24 | 4.1 s | 4.6 s | 15.8 | 0 |

Every node hears its assignment and reports a heartbeat once a second, up to
eight nodes. Each machine keeps a host core busy, because Oberon's loop never
idles, so with eight nodes the runner is more than twice oversubscribed; that
showed as a command typed into the control plane that once never ran, not as
a fault of the cluster.

## In Cozystack

Kube also runs inside an `OberonVM` from the catalog. Before the modules came
on the system disk it was typed into the editor over VNC, saved, compiled
inside the system with `ORP.Compile Kube.Mod/s` and run with the commands
above. Getting there needed fixes to the keyboard and the disk of the virtual
machine ([finding 86](../docs/FINDING-86-qemu-keyboard-byte-load.md)).

## Next

Deployment updates as rollouts, and a node that really runs something for its
pods: a Pod as an Oberon task started from a module named by the image.
