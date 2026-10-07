[Русская версия](README.ru.md)

# Oberon VM — Wirth's RISC5 as a virtual machine

A whole architecture, plugged into the cluster from outside. The machine that
starts here is not an emulator pretending to be Oberon hardware: it is a QEMU
target built from Wirth's own circuit description, verified against it
instruction by instruction.

## What you get

Project Oberon of 1986, booting from its own disk image: the log, the tool
window, the editor, the compiler. A complete system — processor, compiler,
operating system, windows — in about six thousand lines.

## Three mouse buttons

Oberon needs all three, and a laptop has none of the middle one. The machine
translates modifier chords, and says so on its own screen for the first half
minute:

| hold | and click | you get |
|---|---|---|
| Alt | left | middle button — **runs commands** |
| Ctrl | left | right button |
| Shift | left | both at once — the *interclick* |

The interclick is how the second corner of a rectangle is placed. Without it
part of the system is out of reach.

## What the cluster must provide

Two things, set once by whoever runs the cluster — a tenant cannot set them:

1. **The `Sidecar` feature gate** in the KubeVirt resource. Without it the hook
   that rewrites the domain never runs.
2. **A `virt-launcher` image whose libvirt knows the architecture.** libvirt
   asks the emulator what architecture it is rather than trusting the domain,
   so the architecture has to be compiled in. The patch is about ten lines
   across five tables; the image is published alongside this catalogue.

That image is the carrier for the whole family of machines. A cluster opts in
once, and from then on any tenant installs any machine from the catalogue —
much like a driver package. The platform component `kubevirt-paleo-launcher`
(repository `platform`) keeps that image matched to the cluster's KubeVirt
version.

## How it works

`OnDefineDomain` is a supported KubeVirt extension point: a sidecar receives
the domain KubeVirt generated and returns a rewritten one. No fork of KubeVirt
is involved, and no sidecar image either — the stock shim runs the script this
chart supplies through a ConfigMap.

The emulator lives in the launcher image; the PROM and the system image arrive
on a volume shared with the container where libvirt runs. The PROM is
refreshed from each release; the system disk is copied once and then belongs
to the user.

The machine is a `VirtualMachine`, so it can be stopped, started and
restarted from the dashboard. Everything that makes it Oberon is data in
`machine.yaml` — the templates and the hook are shared by every machine in
the catalogue (`packages/library/retro-machine`).

## A Kube cluster from the form

The system disk carries Kube, a Kubernetes control plane written in Oberon,
and KubeNet, which carries it over Wirth's radio. A few machines on one
`OberonAir` form a cluster by themselves when their form says what each one is:

```yaml
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata:
  name: plane
spec:
  air: lab
  kubeRole: plane
  kubeKey: 00c0ffee00c0ffee
  commands: Kube.Apply web 4 Ticker
---
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata:
  name: node-a
spec:
  air: lab
  kubeRole: node
  kubeNode: node-a
  kubeKey: 00c0ffee00c0ffee
```

At start the plane runs `Kube.Start` and `KubeNet.Serve`, a node runs
`KubeNet.Join`; nothing has to be typed. The plane keeps its objects on its
disk and comes back with them after a restart. More deployments are applied on
the plane over VNC, for example `Kube.Apply web 6 Ticker2`, which rolls `web`
out to the second version one pod at a time.

| field | |
|---|---|
| `kubeRole` | `plane` or `node`; needs `air` |
| `kubeCluster` | the cluster name, up to 8 characters, `kube` by default; several clusters can share one air |
| `kubeNode` | the node name, up to 6 characters |
| `kubeKey` | up to 16 hex digits, the same on every machine of the cluster: every message on the air is signed with it, and a node obeys only its own cluster's signed messages |
| `commands` | any Oberon commands to run at start, separated by `;`, after the Kube role's |

A pod's image names an Oberon module on the node: `Ticker` and `Ticker2` are
there to try. The kubelet loads the module and calls its `Start` command; a
pod whose module is missing stays Pending, as a pod whose image cannot be
pulled. A node runs up to 10 pods, the room in one radio packet.

How it works, what was measured and what failed on the way is in
`impl/kube/README.md` of the repository.

## Commands at start

`commands` is not only for Kube. The text reaches the machine on its serial
line (RS232 receive) from power-on, and `Boot.Mod`, called at the end of the
system's start, runs each command as if it had been clicked: a cloud-init for
Oberon. Up to 240 printable characters in all.

