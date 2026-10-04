[Русская версия](FINDING-67-kubevirt-versions-e2e.ru.md)

# Finding 67. The launcher built for KubeVirt 1.9.0 had never met KubeVirt 1.9.0

The `virt-launcher` image is built for every KubeVirt version in
`kubevirt/versions.txt` (Finding 60), and on every PR `launcher.yml` checks
its contents. But the launcher has to match the cluster not by contents but
by conversation: it talks to virt-handler of the same version over a
versioned protocol (Finding 44). Until now, this conversation had only been
seen with 1.8.4, in the sandbox, by hand. For 1.9.0 only one thing was
checked: Oberon boots **inside the image** (`kubevirt/test-in-image.sh`) on
the stock virtqemud. Nobody had seen virt-handler 1.9.0 accept our launcher,
hand it a domain, and the hook sidecar do its job.

No cluster is needed for this check. What is needed is a real KubeVirt of the
same version, and it can be installed on a runner.

## What the check does

`.github/workflows/kubevirt-e2e.yml`, one job per line of
`kubevirt/versions.txt` (the same list as for `launcher.yml` and the
release). The steps are `kubevirt/e2e.sh <step>`, and they can be run by hand:

1. **Build** the launcher for this version: `kubevirt/build.sh --kubevirt <v>
   --load`, cache `scope=launcher-<v>`, the same one as for `launcher.yml` and
   `publish.yml`, read-only. The image is named
   `paleo.local/virt-launcher:<v>-paleo-e2e`: this is not a registry, there is
   nowhere to pull it from, so machine pods cannot silently pick up something
   else.
2. **A kind cluster** (kind and the node image are pinned: v0.33.0,
   Kubernetes 1.35.8 by digest, inside the support window of both 1.8 and
   1.9); the launcher image is loaded onto the node with `kind load`.
3. **KubeVirt of the same version**: `kubevirt-operator.yaml` from its release
   and a KubeVirt resource with `useEmulation: true` (there is no KVM on the
   runner), the `Sidecar` feature gate (without it the hook sidecar does not
   start, Finding 48), and one replica of the services (there is one node).
   We wait for `Available` and compare `observedKubeVirtVersion`.
4. **Launcher substitution by a pass of the platform component.** Not by a
   patch of our own, but with `reconcile.sh once` from
   `kubevirt-paleo-launcher` (Finding 65) with a one-line table
   `<v> paleo.local/...`. The first pass must write the patch (state
   `Applying`), the following ones must wait for `Applied`. Then it is checked
   that virt-controller's `--launcher-image` is our image and that **the
   leader lease is held by the new pod** (Finding 58: while the old one holds
   it, the old one creates the machine pods, with the stock launcher).
5. **A machine from the catalog.** `helm template` of the `oberon-vm` chart as
   is, with one difference: the storage class `standard` (kind's local-path)
   instead of `replicated`. The machine files come from the image named by the
   passport (`machine.yaml`, currently `oberon-run:v0.1.4`): what is being
   checked is the launcher, not the ROM build, and the chart is not rewritten
   for the check. We wait for the population job and for `ready` on the
   VirtualMachine, then confirm that the machine pod's `compute` image is ours
   and that `qemu-system-risc5` runs in it.
6. **The screen**, via `virtctl vnc --proxy-only` (virtctl of the same
   version as KubeVirt) and `kubevirt/vnc_snapshot.py`, as in Finding 59. Only
   `dark_pixels=18607`, the reference for a booted Oberon, passes. The
   snapshot is retried for up to ten minutes: the machine does not start
   right away.
7. **On failure**, into the job log, in collapsed groups: pods, the KubeVirt
   resource, virt-controller's arguments and log, the lease, the component
   state, the virt-handler log, the full VM and VMI, the population job log,
   events, `describe` of the machine pod and the log of each of its
   containers, including `hook-sidecar-0`. The screen snapshot is always
   uploaded as an artifact.

The duration of each step is written to the job summary.

## What this proves

* a launcher built for version X runs a machine under KubeVirt X, with the
  real virt-controller, virt-handler and the stock hook sidecar wrapper;
* the hook sidecar from the `retro-machine` library rewrites the domain that
  this particular KubeVirt version builds (the failures in Finding 44 came
  from exactly here, not from a hand-written description);
* the `kubevirt-paleo-launcher` component applies its patch to a live
  `virt-controller` of this version: the three-operation JSON Patch with
  `test` passes, and the argument layout is the one it expects;
* the user's path to the screen, the `vnc` subresource of the KubeVirt API,
  works.

## What it does not prove

* **Not Cozystack.** No tenant, none of its restrictions, no catalog via
  `cozypkg`, no dashboard. The chart is rendered by `helm template`, not
  installed as an application.
* **Not LINSTOR.** The volume is local-path on a single node; RWO volume
  attachment between the population job and the machine pod on different
  nodes is not checked.
* **Emulation.** The domain is `qemu`, not `kvm`. For the Wirth machine this
  changes nothing: QEMU executes a foreign architecture in software regardless
  of KVM, and the hook sidecar sets the `qemu` type anyway. But the other
  machines of the cluster on this launcher (Finding 48: it is global) are not
  checked here.
* **A single kind node.** No virt-handler rollout, no migrations, no multiple
  virt-controller replicas.
* The build is amd64 only, as in the release.

## Time

Each step writes its duration to the log and to the job summary; the first
run on a PR will give numbers for both versions. Expected: building the
launcher from a warm cache takes minutes, from a cold one up to an hour and a
half (as with `launcher.yml`, hence the job timeout of 150 minutes); the
cluster takes a couple of minutes; KubeVirt up to five; the machine as long as
the population job takes plus KubeVirt's backoff between start attempts (up
to 300 s); Oberon itself boots in seconds. The wait timeouts in `e2e.sh` are
generous and can be overridden with variables (`KUBEVIRT_TIMEOUT`,
`MACHINE_TIMEOUT`, `SCREEN_TIMEOUT`).

## Verified here

Locally, colima on arm64, 2 CPUs, 2 GB of memory, the 1.8.4 launcher for arm64
from an earlier build:

* `e2e.sh tools`: kind v0.33.0 and virtctl v1.8.4 downloaded, 18 s; the
  links to virtctl and `kubevirt-operator.yaml` for v1.9.0 and to kind for
  linux-amd64 answer 200;
* `e2e.sh cluster`: a kind cluster on `kindest/node:v1.35.8` is up, the
  `paleo.local/...` image is loaded onto the node, the `standard` class is in
  place, 232 s;
* `e2e.sh kubevirt`: operator 1.8.4 came up, the KubeVirt resource with
  `useEmulation`, `Sidecar` and `infra.replicas: 1` was accepted by the
  operator's webhook; virt-controller's `args[0]` is `--launcher-image`, the
  `install-strategy-version` annotation is `v1.8.4`, as `reconcile.sh`
  expects;
* `e2e.sh launcher`, while KubeVirt had not yet been deployed: a pass through
  the `kubectl-e2e` wrapper ran and honestly answered `Doubt: no
  status.observedKubeVirtVersion`, writing nothing;
* `helm template` of the `oberon-vm` chart with `storageClass=standard`
  renders;
* shellcheck (`-s sh`) and actionlint: clean.

Beyond that, two gigabytes were not enough: virt-api (500Mi) and
virt-operator (450Mi) filled the node, virt-controller and virt-handler stayed
`Pending` on `Insufficient memory`, and kind's API server started answering
with timeouts. The `machine` and `screen` steps were **not run** locally; they
will first pass on the runner (4 CPUs, 16 GB). Besides, the `oberon-run` image
in the registry is amd64 only.

## First run in CI

PR #47, both versions green; each job takes about six minutes:

| step | v1.8.4 | v1.9.0 |
|---|---:|---:|
| kind cluster ready | 16 s | 17 s |
| platform component pass: virt-controller on our launcher | 33 s | 34 s |
| leader lease held by the new virt-controller | 17 s | 16 s |
| VirtualMachine from the catalog ready | 11 s | 10 s |
| screen via `virtctl vnc`: reference 18607 dark pixels | 30 s | 30 s |

The first screen snapshots show 55865 dark pixels: this is still the boot
loader screen, before the system has drawn its windows; three snapshots later
comes the reference. The launcher for KubeVirt 1.9.0 has for the first time
gone through a real KubeVirt 1.9.0, not only a boot inside the image. Along
the way, CI also checks the platform component's path: `reconcile.sh once`
applies the patch to a live KubeVirt resource.
