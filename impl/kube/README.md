# Kube: Kubernetes in Oberon, written in Oberon

A minimal Kubernetes control plane in Oberon-07. It does not imitate the look
of Kubernetes; it reproduces its core idea, declarative desired state and
level-triggered reconcile loops, on Wirth's real machine and the real Oberon
compiler. The controllers are background `Oberon.Task` entries in the same ring
where the system garbage collector runs, and the central `Oberon.Loop` calls
them, the way kube-controller-manager does in a real cluster.

## Mapping

| Kubernetes | Oberon |
|---|---|
| etcd, the object store | the `store` array of records (Deployment, ReplicaSet, Pod) |
| API and kubectl | middle-click commands: `Kube.Apply`, `Kube.Get`, `Kube.DeletePod` |
| a controller's reconcile loop | an `Oberon.Task` in the background ring, next to the system GC |
| deployment controller | `ctlDeploy`: keeps one ReplicaSet per Deployment |
| replicaset controller | `ctlRS`: keeps the number of Pods equal to `replicas` |
| scheduler and kubelet | `ctlNode`: puts a Pod on the least loaded node and moves it to Running |
| ownerReferences | the `owner` field: pod.owner = rs, rs.owner = deploy |
| cluster nodes | simulated for now (`node-a/b/c`); real ones are separate Oberon VMs, a later episode |

Three controllers are three independent tasks in the ring (`Kube.Start`
installs all three), just as in Kubernetes they are three separate controllers.

## Running

Quickly, on the command line (headless Norebo, an emulator of RISC5; there is
no loop, so the demo drives the ticks with `Kube.Run`):

```sh
kube/check.sh          # compile + demo: apply 3 -> delete a pod -> scale to 1
```

In the real Oberon system on the RTL of Wirth's machine (with windows; the
reconcile is done by background tasks through `Oberon.Loop`), with a screenshot:

```sh
kube/system.sh         # -> build/kube/kube_rtl.png  (1-2 minutes)
```

The result is `kube/kube-in-oberon.png`: the system compiles `Kube.Mod` itself,
`Kube.Start` installs three controllers, `Kube.Apply web 3 nginx` declares a
deployment, and by the time of `Kube.Get` the background tasks have built the tree:

```
deployment web  replicas=3  image=nginx
  replicaset web-rs  desired=3
    pod web-rs-0 @node-a Running
    pod web-rs-1 @node-b Running
    pod web-rs-2 @node-c Running
```

Commands in the live system, with the middle button: `Kube.Start`,
`Kube.Apply name N image`, `Kube.Get`, `Kube.DeletePod "name"` (the next tick
recreates the pod), `Kube.Stop`. Pod names contain hyphens, which end a name
for the Oberon text scanner, so `DeletePod` takes the name in quotes.

## In Cozystack

Kube also runs inside an `OberonVM` from the paleocomputing catalog: the module
is typed into the system editor over VNC, saved with `Edit.Store`, compiled
inside the system with `ORP.Compile Kube.Mod/s` and run with the commands
above. Getting there took two fixes in the machine itself (finding 86): the
keyboard of our QEMU target hung the system on the first key, and the disk of a
cloud machine was too small for the compiler output.

## Next

- Real nodes: several Oberon VMs in Cozystack. Wirth's machine has no network,
  so the nodes need another way to share state.
- Updating a Deployment as a rollout (a new ReplicaSet, replicas moved over).
