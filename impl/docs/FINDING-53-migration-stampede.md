[Русская версия](FINDING-53-migration-stampede.ru.md)

# Finding 53. Why a hundred migrations failed: a stampede, not the image

In the previous session, changing the `virt-launcher` image triggered 137 live
migrations, almost all of which failed. The cause remained unknown at the time:
the events had already been evicted. Now it has been established, from the
`virt-controller` log and from the migration objects themselves.

**Our image has nothing to do with it.** The failures have two different causes,
and both are properties of the cluster, not of the machine.

## First cause: throughput

```
 3570  outbound migrations per node limit
   28  pending pod … timeout period exceeded
```

`parallelOutboundMigrationsPerNode` defaults to 2. The image change marked
**all** virtual machines in the cluster as outdated at once, and the migration
queue became longer than a node could handle. The target pod waited for its
turn longer than a pending pod is allowed to wait, and the migration was
declared failed. The timeline of one of them:

```
Pending     13:11:17
Scheduling  14:04:18   ← 53 minutes in the queue
Failed      14:19:51   ← 15 minutes waiting for the pod
```

Then the controller started the migration again, and the queue never cleared.
Hence 52 failures on a single machine.

## Second cause: the tenant quota

```
197  exceeded quota: tenant-quota
```

A live migration requires a **second** launcher pod: during the migration the
machine's memory is counted twice. If the tenant has already hit its quota, the
quota forbids the second pod, and the migration never starts:

```
tenant-kyvernetria  limits.memory: 31604080644 / 32Gi   ← no room
```

Five migrations in this tenant have been sitting in `Pending` **since nine in
the morning** and are still being retried, trying to create a pod every couple
of minutes. They are left over from the previous setting:
`workloadUpdateMethods: []` no longer creates new ones, but the controller keeps
driving the objects that were already created.

## The rule that follows

**A machine that occupies the tenant's entire quota cannot be live-migrated.**
Neither during a cluster upgrade nor when a node is drained for maintenance, and
this happens silently, with no error on the machine itself: it keeps running, it
just cannot be moved.

For a tenant with virtual machines, the quota must include headroom for the
largest machine, otherwise node maintenance will get stuck on it. This also
applies to our catalog package: the Oberon machine is tiny, but it needs exactly
the same headroom, its own size.

## What remains to be done by hand

The five stuck migration objects in `tenant-kyvernetria` must be removed; they
will not go away by themselves. The command (a deletion, to be run by the
cluster owner):

```bash
kubectl --context admin@workshop -n tenant-kyvernetria \
  delete vmim -l kubevirt.io/vmi-name --field-selector status.phase=Pending
```

If `--field-selector` on the phase is not supported, list them by name:
`kubevirt-workload-update-{58mzh,cqsdj,l4ksv,ljkzj,x4m7c}`.
