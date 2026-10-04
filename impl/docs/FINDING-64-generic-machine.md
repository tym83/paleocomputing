[Русская версия](FINDING-64-generic-machine.ru.md)

# Finding 64. A catalog machine is a passport, not a chart

OberonVM was the only machine in the catalog and was written as the only one:
a bare `VirtualMachineInstance`, RISC5 hardcoded into the hook sidecar, the
volume and its population done by install hooks, and volume cleanup done by a
separate job with its own permissions. Every further machine on the roadmap
(Lilith, ports of dead systems) would have meant a copy of the chart and an
edit to the hook sidecar's code.

This design also had three defects, found in a live tenant (Finding 58):

* the machine could not be restarted either from the dashboard or with
  `virtctl restart`; it could only be deleted and installed again;
* a failed first install turned into a "successful" upgrade without a volume;
* volume cleanup required a job, a Role, a RoleBinding and a label granting
  egress to the API.

## What was done

**Machine passport.** `apps/oberon-vm/machine.yaml`, following the schema
`library/retro-machine/machine.schema.json`: the architecture and machine for
libvirt, the emulator, the number of CPUs, the display; files on the volume
with roles (`firmware` is refreshed from the release, `disk` is placed once
and belongs to the user afterwards); how each file is passed to QEMU; hardware
variants as `-machine` properties (`chk: "on"`); memory limits. The passport
is a file of the chart, not values: what runs in virt-launcher is decided by
the catalog release, not by the tenant.

**Shared library `retro-machine`.** It renders the whole machine from the
passport: a `VirtualMachine` with a run strategy derived from `running`
(`Always` / `Halted`), the volume as an ordinary release resource, the
population job, and a ConfigMap with the hook sidecar. The OberonVM
application is a single template, `{{ include "retro-machine.render" . }}`.
The library is included via a symlink, like `cozy-lib` in Cozystack itself.

**The hook sidecar reads the passport** from the machine annotation
(`paleocomputing.io/machine`) instead of a hardcoded RISC5. The former
annotation `oberon.paleocomputing/chk` is gone: the hardware variant is now a
passport field. If the machine's files are not yet on the volume, the sidecar
fails loudly instead of returning a half-rewritten domain: the machine does
not start, KubeVirt retries, and as soon as the population job finishes, the
machine comes up. The sidecar test runs it against two passports (the second
one fictitious) to show that a new machine needs no code change.

**The volume is a release resource.** Helm deletes it together with the
machine; the cleanup job, its permissions and the API egress label are no
longer needed. The population job is `post-install,post-upgrade` and
idempotent: it always rewrites the firmware, and writes the disk only if it
is missing.

**Restart.** The Cozystack tenant role `cozy:tenant:use` grants `update` on
`virtualmachines/start|stop|restart`
(`packages/system/cozystack-basics/templates/clusterroles.yaml`), so the
tenant controls the machine from the dashboard on its own.

## A trap along the way: symlinks do not reach the cluster

The library is included via a symlink, and so is the copy of the hook
sidecar. A `flux build artifact` showed that the `oberon-vm/charts` and
`oberon-vm/files` directories in the artifact are **empty**: flux does not
package symlinks. And the in-cluster unpacker of the attached directory
(`internal/operator/tapmaterializer_artifact.go`) skips symlinks on purpose:
"an app artifact needs only files". Published as is, the chart would have
arrived in the cluster without the library and without the hook sidecar.

So what gets published is a copy with dereferenced symlinks
(`tools/stage.sh`), with an explicit source and revision for `cozypkg push`,
and `check.py` builds the same copy with the same flux and requires every file
visible in the tree to be present in the artifact; the negative control is
that an artifact built straight from the tree loses the library.

## Cost

Machines installed by v0.1.10 and earlier must be reinstalled before
upgrading: their volume was created by a hook and is not part of the release,
so the upgrade fails on it ("already exists"). Right now there is one such
machine: `wirth-chk` in the sandbox.

## What to check live

A release with these changes, then in `tenant-sandbox`: delete `wirth-chk`
and install it again; confirm that it is a `VirtualMachine`, that the QEMU
arguments contain `-machine chk=on` and VNC, and that the screen via the
tenant console matches the reference 18607; restart it as the tenant
(`virtctl restart`) and confirm that the files on the disk survived the
restart; delete it, and the volume goes away together with the release.

## Addendum: the live tenant found a deadlock

The first install of v0.1.12 in `tenant-sandbox` did not come up. The machine
kept restarting, the hook sidecar honestly refused ("machine files are not on
the volume yet"), and the population job never appeared.

The population job was a `post-install,post-upgrade` hook. Cozystack installs
a release waiting for readiness, and Helm runs `post-install` hooks only after
the resources are ready. The machine is not ready while the volume is empty;
the volume is empty until the hook runs; the hook waits for the machine to be
ready. The install hangs until the release timeout.

No static check saw this: the chart rendered, the schema validated, and a
population run on the bench was correct. The only thing missing was a real
Helm waiting for readiness.

Fixed: the population job is an ordinary release resource. The volume, the
job and the machine are created together; the machine keeps trying to start
while the files are missing and comes up once the job finishes. A Job
template is immutable, so the job name contains a hash of the image and the
passport: a new release yields a new job, and Helm deletes the previous one.
`check.py` verifies that the machine's population is not a hook, with a
negative control; on the previous library the check turns red on exactly
this.

## Addendum: an end-to-end check before tagging found two more

From this point on, a release follows a new order: `dev` from the branch, the
sandbox on `dev`, `tools/sandbox-e2e.sh`, and only then the tag. The first two
runs were red, the third was fully green.

* **Hard affinity of the population job to the machine's node.** Without
  files, the machine fails immediately, its pod lives for seconds between
  KubeVirt backoffs, and the job has nothing to bind to; the deadline
  expired, and nobody retries a failed job. The affinity is now soft, the
  deadline and the retry count are larger, and the job name is a hash of its
  whole spec.
* **Different volume groups.** virt-launcher mounts the volume with
  `fsGroup 107` (qemu), the job with 10001; when both mounted at the same
  time, the job lost and failed with `Permission denied`. The job's group is
  now 107, and `check.py` pins it.

Along the way, an upgrade on top of a broken install was checked: machines
stuck on either error came up by themselves after the catalog upgrade, as the
new population job with a new name replaced the failed one.
