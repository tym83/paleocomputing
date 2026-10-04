[Русская версия](FINDING-58-catalog-and-ci-hardening.ru.md)

# Finding 58. What survives deletion, what is not built before a release, and what changes under a tag

Three small things of the same kind: each one worked until someone looked at it.

## 1. A machine's volume outlived the machine

The volume holding the ROM and the system (`oberon-vm-<name>-payload`) and the job
that fills it are `pre-install` hooks. There is no other way: the machine will not
boot from an empty volume, and an ordinary Helm resource does not wait. But Helm does
not touch hook resources at all when a release is uninstalled. Every deleted machine
left a gigabyte and a finished job behind in the tenant, and reinstalling under the
same name ran into the old volume.

### Why it went unnoticed

It was noticed, and recorded under "Known limitations": "delete manually". Writing
the limitation down looked like a solution. The check that forbade the volume from
being an upgrade hook (the finding about hanging in `Terminating`) looked at upgrades
and said nothing about deletion.

### What changed

* `templates/cleanup.yaml`: a `post-delete` job deletes the volume and the fill job.
  The rules, each of which has already cost someone a hung deletion:
  * by **name**, with no label selector, so neighbouring machines in the tenant are
    not affected;
  * `kubectl delete --wait=false`: the volume holds a finalizer while the machine's
    pod is alive, and the pod is deleted in parallel, so waiting for it means waiting
    for yourself;
  * `activeDeadlineSeconds: 120`: otherwise a job that could not get its image or
    permissions holds the release deletion forever.
* The job has its own permissions: a ServiceAccount, Role and RoleBinding, also
  `post-delete` hooks, with a lower weight than the job. The Role allows `delete`
  only on these two resources and only by `resourceNames`. All four are removed via
  `hook-succeeded`; a failed job stays for inspection, and a repeated deletion
  removes it via `before-hook-creation`.
* The pod passes the restricted profile that Cozystack tenants run under: non-root
  (the kubectl image runs as root by default, so the user is set explicitly), no
  privilege escalation, no kernel capabilities, seccomp `RuntimeDefault`, read-only
  root filesystem.
* The image `registry.k8s.io/kubectl:v1.35.9` is pinned by index digest. That it
  exists and can be pulled was checked with `docker pull` by digest; that it works as
  65534 with a read-only root and no capabilities was checked by running
  `kubectl version --client` under the same restrictions in docker.
* `check.py` renders every chart that has hooks and fails if any hook resource would
  survive release deletion: it has no `hook-succeeded` and there is no `post-delete`
  job that deletes it by name, does not wait, is time-limited and has the permissions
  to do so. Negative controls are three broken cleanups: without the job, without
  the deadline, and with waiting for deletion.

Why not `ownerReference`. The volume is created before the machine, there is no
owner UID at that moment, and Helm cannot set one. Making the volume an ordinary
resource is not possible either: the machine would then start before the volume is
filled. A cleanup job is the only way short of a custom controller.

Cleanup is run by the release being deleted, that is, by its current chart version.
A machine deleted on v0.1.8 or earlier leaves its volume behind, and that volume is
still deleted manually; one that was upgraded and then deleted no longer does.

## 2. The virt-launcher image was not built before a release

`kubevirt/Containerfile` was built only in `publish.yml`. A change that broke it
(once, a missing `mkdir -p /src/qemu`) passed review, was merged into main and
surfaced at release time.

### What changed

* A new workflow, `launcher.yml`: on PRs and pushes to main that touch `kubevirt/**`,
  `qemu/**` or the workflow itself. It builds the image via `kubevirt/build.sh`, with
  `--load` instead of `--push`, and checks its contents.
  It is not a job in `hardware.yml`: the path filter there applies to the whole file,
  and `kubevirt/**` would drag in RTL and QEMU for an hour and a half to two hours.
* The content check moved to `kubevirt/check_image.sh` and is called the same way at
  release and on PRs: `chk=` in the machine properties, an executable
  `/usr/bin/onDefineDomain`, VNC keymaps.

### Side finding: the build cache never worked

`publish.yml` passed `--cache-from/--cache-to type=gha`, but the release log shows
neither a cache import nor an export: the image was built from scratch every time.
buildx takes the cache token from `ACTIONS_RUNTIME_TOKEN`, and a `run` step does not
get it; only actions themselves do. Without the token, buildx silently drops the
cache from its arguments. The flags were there, the cache was not.

Now both workflows run `crazy-max/ghaction-github-runtime` before the build, which
exposes the token to steps. The cache is shared (`scope=launcher`): pushes to main
and releases fill it, PRs use it.

## 3. Image bases changed under the same tag

`quay.io/centos/centos:stream9` is a tag that is moved every few weeks;
`quay.io/kubevirt/virt-launcher:v1.8.4` can technically be moved too. The same commit
built different images depending on the day, and libvirt must match the
virt-launcher base.

### What changed

All three `FROM` lines are pinned by the digest of the multi-architecture index; the
tag is kept for the reader:

| base | index digest |
|---|---|
| `quay.io/centos/centos:stream9` | `sha256:63e8d0c2a4a4b67c8bd7456283d12106bedf815d8c27d1a72498ebcf173baf09` |
| `quay.io/kubevirt/virt-launcher:v1.8.4` | `sha256:c89f733b1fdcc810d0b4326bbfc652a4cf3d25bc56cc8545f124d5cb71a1ce20` |

The digests were taken directly from the registry (the `Docker-Content-Digest` header
on the index request) and cross-checked with `docker manifest inspect`: it is an
index, not a single-platform image.

`publish.yml` extracted the KubeVirt version for the image tag by cutting off the
start of the `FROM` line; after pinning, `v1.8.4@sha256:...` would have ended up in
the tag. Now it cuts at `@`, and the result must be exactly `vX.Y.Z`; the same line is
in `launcher.yml`.

Pinning the base does not freeze `dnf install`: packages from the CentOS repositories
are still as fresh as the build day. This is deliberate: freezing the repositories
costs more than it gives.

## Common thread

All three are about checking only the path known to succeed. Installation was
tested, deletion was not. The release built the image, change review did not. The
cache flags were there, but nobody looked at whether the cache actually worked. The
tag was written down, but what was under it was decided by the registry. An entry in
"Known limitations" and a flag on a command line look like finished work; what has to
be checked is the effect.

## Addendum: a live tenant tested the cleanup, and it did not work

After the v0.1.9 release, the machine `wirth-chk` was deleted from the tenant
`tenant-sandbox`. The cleanup job started, the image was pulled, and then for 120
seconds it did nothing:

```
Job was active longer than specified deadline
Helm uninstall failed for release tenant-sandbox/oberon-vm-wirth-chk.v2
```

The volume and the fill job remained. The cause was the network, not permissions. In
a Cozystack tenant, access to kube-apiserver is allowed by the `allow-to-apiserver`
policy, and only for pods labelled

```
policy.cozystack.io/allow-to-apiserver: "true"
```

Cilium silently drops everything else: `kubectl` gets neither a refusal nor a
response and hangs until `activeDeadlineSeconds`. An RBAC denial would have come back
immediately; the hang itself was the hint.

Neither `helm template` nor a bench run showed this: the chart, the permissions and
the image were all correct. What was missing was one label that only the tenant knows
about.

Fixed: the label is set on the cleanup pod, and `check.py` requires it on every pod
that the chart gives its own ServiceAccount (a sign that the pod will talk to the
API), with a negative control.

## One more trap: reinstalling on top of leftovers

Before the cleanup existed, a deleted machine left its volume behind, and the
completed pod of the fill job kept referencing it. A reinstall under the same name
deletes the old volume by default (`before-hook-creation`), but PVC protection does
not allow a volume to be deleted while a referencing pod is alive, and the old job
would only be deleted by the next hook. The volume hangs in `Terminating`, and the
installation hangs until the timeout.

It gets worse: flux retries a failed installation as an **upgrade**, and an upgrade
has no install hooks (the finding about the hook volume, #19). The release is
honestly marked "succeeded", while the machine's pod hangs in `Pending` on a volume
that no longer exists. The only way out is manual.

Cleanup on deletion removes the cause, but not the mechanism itself: any failed first
installation turns into a "successful" upgrade with no volume. The cure is moving the
machine to `VirtualMachine` with a volume check before start; that is an open task.

## Verified in the tenant on v0.1.10

With the API egress label, cleanup ran from start to finish: the machine was deleted
from `tenant-sandbox`, the cleanup job finished in 5 seconds, Helm recorded
`UninstallSucceeded`, and 40 seconds later nothing was left of the machine: no
volume, no jobs, no permissions. The reinstalled machine came up on
`virt-launcher:v1.8.4-risc5-v0.1.10`, and the screen via the tenant console showed
18607 dark pixels, the reference value.

Along the way: the first installation after the launcher image change got the
**previous** image. The new controllers were already up, but the machine's pod was
apparently created by an old one that still held the leader lease. After a launcher
change, wait for the old controllers to exit before installing machines, or recreate
the ones installed during that window.
