[Русская версия](README.ru.md)

# OberonKube

A whole Kube cluster in one order. Kube is a Kubernetes control plane written
in Oberon: deployments, replica sets, pods, a scheduler, a store kept on disk,
rolling updates. Its nodes are Oberon machines, the same as an OberonVM, and
they talk over Wirth's radio, the same as on an OberonAir.

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

The order becomes releases of this catalog's own components: an air
(`<release>-air`), a control plane (`<release>-plane`) and a machine per node
(`<release>-node1`, `-node2`, ...). Each machine is told its role at start: the
control plane runs `Kube.Start`, `KubeNet.Serve` and the deployments, each
node `KubeNet.Join`. The cluster forms by itself; nothing has to be typed.
Deleting the OberonKube removes every part.

| field | default | |
|---|---|---|
| `nodes` | `2` | from 1 to 8; each machine keeps a host core busy, Oberon's loop never idles |
| `cluster` | `kube` | the cluster name, up to 8 characters |
| `key` | empty | up to 16 hex digits; every message on the air is signed with it. Empty is a key of zeros: anybody on the air could command the nodes |
| `deployments` | empty | `name replicas module` separated by `;`, applied at start |
| `memory` | `128Mi` | of each machine |
| `storageClass` | `replicated` | lets the machines go to different hosts |

A pod's image is an Oberon module on the nodes; `Ticker` and `Ticker2` are
there to try, and `Ticker.Show` on a node shows its pods counting. More
deployments are applied on the control plane over VNC, for example
`Kube.Apply web 6 Ticker2`, which rolls `web` out to the second version one pod
at a time. A node runs up to 10 pods. The deployments of the form are created
once (`Kube.Ensure`): a restart of the control plane keeps what was changed on
it since.

The deployments are applied as the control plane starts, before every node
has joined, so the first nodes may get them all: like the real scheduler,
Kube does not move running pods to a node that came later.

How Kube works, what was measured and what failed on the way is in
`impl/kube/README.md` of the repository.
