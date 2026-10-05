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
| scheduler and kubelet | `ctlNode`: puts a Pod on the least loaded node and moves it to Running |
| ownerReferences | the `owner` field: pod to replicaset, replicaset to deployment |
| nodes | simulated: `node-a`, `node-b`, `node-c` |

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
| `Kube.Start` | install the three controllers |
| `Kube.Apply name N image` | declare a deployment or change its replicas |
| `Kube.Get` | print the object tree into the log |
| `Kube.DeletePod "name"` | delete a pod; the next tick recreates it under a new name |
| `Kube.Stop` | remove the controllers, keeping the objects |
| `Kube.Run N` | run N ticks by hand, for Norebo |

The pod name is quoted because the Oberon text scanner ends a name at a hyphen.

## Files

| | |
|---|---|
| `Kube.Mod` | the module |
| `check.sh` | compile and run `Kube.Demo` in Norebo |
| `mkdisk.sh` | a system image with `Kube.Mod` and the commands appended to `System.Tool` |
| `system.sh` | boot that image on the RTL, click the commands, take a screenshot; the clicks are in `../scripts/kube.src` |

## In Cozystack

Kube also runs inside an `OberonVM` from the catalog: the module is typed into
the editor over VNC, saved, compiled inside the system with
`ORP.Compile Kube.Mod/s` and run with the commands above. Getting there needed
fixes to the keyboard and the disk of the virtual machine
([finding 86](../docs/FINDING-86-qemu-keyboard-byte-load.md)).

## Next

Real nodes as several Oberon VMs (the machine has no network, so the nodes need
another way to share state), and Deployment updates as rollouts.
