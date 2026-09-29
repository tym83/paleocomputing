# Oberon in your own KubeVirt — without Cozystack

*Русская версия: [GUIDE.ru.md](GUIDE.ru.md)*

Wirth's RISC5 machine runs on plain KubeVirt. Nothing is forked: KubeVirt,
its operator and your VMs stay stock. CI proves this on every change —
`kubevirt-e2e.yml` brings up a kind cluster with each supported KubeVirt
version, installs the machine the way this guide does, and compares the
screen with a reference bit for bit (finding 67).

Cozystack users do not need this page: the catalog does all of it
(`site/cozystack/`).

## What you need

| | |
|---|---|
| KubeVirt | a version listed in [`versions.txt`](versions.txt): **v1.8.4** or **v1.9.0**. The launcher image must match the cluster version exactly (finding 44) |
| Nodes | **linux/amd64** or **linux/arm64** — the published images are built for both from v0.1.16 on, v0.1.15 and earlier are amd64 only ([`platforms.txt`](platforms.txt)); on arm64 KubeVirt declares UEFI firmware, which the hook removes (finding 71). KVM is not required: a foreign architecture is emulated in software anyway |
| Tools | `kubectl`, `helm` 3, `jq`, `git`, `python3`; `virtctl` of the same version as KubeVirt (the VNC subresource is versioned) |
| Storage | any StorageClass with `ReadWriteOnce` |

## What changes in your cluster

Two cluster-wide settings, both reversible:

1. **Feature gate `Sidecar`** on the KubeVirt resource. The machine is
   described through the stock `OnDefineDomain` hook, which runs as a sidecar.
2. **The `virt-launcher` image**. Ours is the stock image for the same
   KubeVirt version with two additions: libvirt rebuilt with a ~10-line patch
   that teaches it the `risc5` architecture, and the `qemu-system-risc5`
   emulator. Every other VM keeps working on it — an ordinary Ubuntu VM is
   booted on this image as part of the release gate.

Everything else is per machine: a ConfigMap with the hook, a PVC with the
ROM and the disk, a fill Job and a `VirtualMachine`.

## 1. Turn on the Sidecar feature gate

```sh
KV_NS=kubevirt   # namespace of your KubeVirt install

kubectl -n $KV_NS get kubevirt kubevirt -o json \
  | jq '.spec.configuration.developerConfiguration.featureGates |= ((. // []) + ["Sidecar"] | unique)' \
  | kubectl replace -f -
```

On nodes without `/dev/kvm` KubeVirt also needs
`spec.configuration.developerConfiguration.useEmulation: true` — that has
nothing to do with Oberon, ordinary VMs need it there too.

## 2. Switch virt-launcher

⚠ **Check `workloadUpdateStrategy` first.** KubeVirt treats a new launcher
image as a workload update. If `spec.workloadUpdateStrategy.workloadUpdateMethods`
is not empty (Cozystack sets `[LiveMigrate, Evict]`; upstream KubeVirt leaves
it empty), switching the launcher live-migrates **every VM in the cluster**
and restarts the ones that cannot migrate — on the switch, on the switch
back, and on every KubeVirt upgrade (finding 49):

```sh
kubectl -n $KV_NS get kubevirt kubevirt -o jsonpath='{.spec.workloadUpdateStrategy}'
```

`reconcile.sh` refuses to put in or change its launcher in that case until
you allow it: `ALLOW_WORKLOAD_UPDATE=true`, or the annotation
`paleocomputing.io/allow-workload-update=true` on the KubeVirt resource. Its
state is `NeedsConsent` meanwhile. Removing its entry never waits.

The images are published per release and per KubeVirt version:

```
ghcr.io/tym83/paleocomputing/virt-launcher:<KubeVirt version>-paleo-<release>
```

for example `virt-launcher:v1.8.4-paleo-v0.1.16`. They are signed by the
release workflow; to check before use:

```sh
cosign verify ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.16 \
  --certificate-oidc-issuer https://token.actions.githubusercontent.com \
  --certificate-identity https://github.com/tym83/paleocomputing/.github/workflows/publish.yml@refs/heads/main
```

The switch is one entry in `spec.customizeComponents.patches` of the KubeVirt
resource that replaces the value after `--launcher-image` in the
`virt-controller` arguments — and nothing else. Write it with the same script
the Cozystack component and CI use: it keeps any patches you already have,
refuses to touch a `virt-controller` whose argument layout it does not
recognise, and removes its entry cleanly.

```sh
git clone --depth 1 -b v0.1.16 https://github.com/tym83/paleocomputing
cd paleocomputing

KV_VERSION=$(kubectl -n $KV_NS get kubevirt kubevirt -o jsonpath='{.status.observedKubeVirtVersion}')
echo "$KV_VERSION ghcr.io/tym83/paleocomputing/virt-launcher:$KV_VERSION-paleo-v0.1.16" > /tmp/launchers.txt

# Optional: the script reports its state here.
kubectl -n $KV_NS create configmap kubevirt-paleo-launcher-status

export KUBECTL=kubectl KUBEVIRT_NAMESPACE=$KV_NS LAUNCHER_TABLE=/tmp/launchers.txt
R=marketplace/repos/platform/packages/system/kubevirt-paleo-launcher/files/reconcile.sh
# The first pass writes the entry (state Applying), a later pass sees the
# rollout finished (state Applied).
until sh $R once && [ "$(kubectl -n $KV_NS get cm kubevirt-paleo-launcher-status -o jsonpath='{.data.state}')" = Applied ]; do sleep 10; done
```

While the new `virt-controller` pod cannot start, the state stays `Rolling`
and the loop keeps waiting: the rollout needs room for one more
`virt-controller` pod next to the old one.

`KUBECTL` is called as is, with the current context of your kubeconfig. For
another context, point it at a two-line wrapper that runs
`kubectl --context <name> "$@"`.

If you manage the KubeVirt resource through GitOps, put the same entry there
instead:

```yaml
spec:
  customizeComponents:
    patches:
      - resourceType: Deployment
        resourceName: virt-controller
        type: json
        patch: >-
          [{"op":"test","path":"/spec/template/spec/containers/0/name","value":"virt-controller"},
           {"op":"test","path":"/spec/template/spec/containers/0/args/0","value":"--launcher-image"},
           {"op":"replace","path":"/spec/template/spec/containers/0/args/1",
            "value":"ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.16"}]
```

⚠ **Upgrading KubeVirt**: the launcher must follow. Change the tag to the new
KubeVirt version in the same change, or remove the entry first. A launcher of
a different version breaks every VM on the node, not only Oberon — this is
what the Cozystack component watches for, and here it is on you.

Pods created while the old `virt-controller` still holds the leader lease get
the stock launcher. An Oberon VM started in that window fails to define its
domain, and KubeVirt retries it; it comes up once the new controller leads.

## 3. Install the machine

The machine is the Helm chart from the catalog; it installs with plain Helm.
In the source tree the chart points at the `dev` image with the ROM and disk,
so pin it to the release first:

```sh
python3 marketplace/tools/pin-images.py --release v0.1.16

helm install wirth marketplace/repos/machines/packages/apps/oberon-vm \
  --namespace oberon --create-namespace \
  --set storageClass=<your StorageClass>
```

| value | default | |
|---|---|---|
| `storageClass` | `replicated` | class of the 1Gi volume with the ROM and the disk |
| `hardware` | `base` | `chk` — the processor with the hardware array bounds check |
| `memory` | `128Mi` | 128Mi…1Gi; the machine itself sees 16 MB |
| `running` | `true` | `false` stops the machine and keeps the disk |

What the chart creates, for release `wirth`: ConfigMap `oberon-vm-wirth-hook`,
PVC `oberon-vm-wirth-payload`, a Job `oberon-vm-wirth-fill-<hash>` that copies
`prom.bin` and `oberon.dsk` from `ghcr.io/tym83/paleocomputing/oberon-run`
onto the volume, and `VirtualMachine oberon-vm-wirth`. Until the Job is done
the hook refuses to define the domain and the VM restarts with a back-off;
that is expected.

```sh
kubectl -n oberon wait vm/oberon-vm-wirth --for=condition=Ready --timeout=20m
```

## 4. Look at the screen

```sh
virtctl -n oberon vnc oberon-vm-wirth
```

opens your VNC viewer. Without one, run a proxy and connect any viewer to
`127.0.0.1:5900`:

```sh
virtctl -n oberon vnc oberon-vm-wirth --proxy-only --port 5900
```

The proxy accepts **one** connection and exits (finding 59).

The Oberon System desktop comes up with the log line `Oberon V5 NW 14.4.2013`
and the `System.Tool` window. The mouse is absolute — the pointer follows
yours. A middle click on a command name executes it: try
`System.ShowModules` in the tool window (finding 39).

To switch to the bounds-checking processor:

```sh
helm upgrade wirth marketplace/repos/machines/packages/apps/oberon-vm -n oberon \
  --reuse-values --set hardware=chk
virtctl -n oberon restart oberon-vm-wirth
```

## Removing it

```sh
helm uninstall wirth -n oberon
# back to the stock launcher; the same variables as in step 2, the table included
KUBECTL=kubectl KUBEVIRT_NAMESPACE=$KV_NS LAUNCHER_TABLE=/tmp/launchers.txt sh $R uninstall
```

The Sidecar feature gate can stay; remove it from the list if nothing else
uses it.

## Try it on kind first

[`e2e.sh`](e2e.sh) is the CI scenario and runs by hand as well: kind,
KubeVirt, launcher switch, machine, screen check. It expects the launcher
image in the local Docker; the published one works:

```sh
docker pull ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.16
python3 marketplace/tools/pin-images.py --release v0.1.16
export KUBEVIRT_VERSION=v1.8.4 LAUNCHER_IMAGE=ghcr.io/tym83/paleocomputing/virt-launcher:v1.8.4-paleo-v0.1.16
for s in tools cluster kubevirt launcher machine screen; do kubevirt/e2e.sh $s || break; done
kubevirt/e2e.sh down
```

amd64 and arm64 hosts; CI runs it on native Linux runners of both.

## Another KubeVirt version, or your own build

A version outside `versions.txt` needs its own launcher: the libvirt in it
must be the exact version of the stock image. Add a line to `versions.txt`
(the comment there explains where to read the libvirt version and the digest)
and build:

```sh
kubevirt/build.sh --kubevirt v1.9.0 registry.example.com/virt-launcher:v1.9.0-paleo --push
kubevirt/check_image.sh registry.example.com/virt-launcher:v1.9.0-paleo
```

`--platform linux/arm64` is passed through to `docker build`; CI builds and runs
both architectures on native runners.

## How it works

[README.md](README.md) — the hook and why only libvirt needs a patch;
[`../qemu/libvirt/`](../qemu/libvirt/) — the patch;
[`../qemu/GUIDE.md`](../qemu/GUIDE.md) — the same machine in plain QEMU.
Findings in `impl/docs/`: 44 (version match), 48 (Sidecar), 58 (leader
lease), 59 (VNC), 60 (libvirt versions), 64 (the machine chart), 65 (the
launcher component), 67 (the kind e2e).
