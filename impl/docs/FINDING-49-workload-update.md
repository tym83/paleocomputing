[Русская версия](FINDING-49-workload-update.ru.md)

# Finding 49. Replacing the launcher image moves the WHOLE cluster

We replaced KubeVirt's `virt-launcher` image, checked that an ordinary machine
starts on it, and considered the risk closed. **Sixteen seconds** after
virt-controller received the new image, KubeVirt began moving every machine in
the cluster onto it, on its own, without asking anyone.

Over five hours: **137 migrations, 91 failed**, 26 succeeded; the rest had not
finished by the time it was stopped (some were stuck in the queue, see
Finding 53).

## Why

KubeVirt has `workloadUpdateStrategy`, and in this cluster it was configured
like this:

```
workloadUpdateMethods: ["LiveMigrate", "Evict"]
batchEvictionSize: 10
batchEvictionInterval: 1m
```

For KubeVirt, a change of the launcher image is a workload update. It is
obliged to move already running machines onto the new image: first by live
migration, and whatever fails to migrate, by **eviction**, that is, a restart.

## How bad it got

There was no downtime: all machines stayed in service. Twenty-six migrations
succeeded, which means our image can migrate; the libvirt build is not the
problem. Individual machines failed, and judging by the scheduler's rejections,
the cause was placement of the target pod, not the image.

But the churn went on into its fifth hour and would not have stopped by itself.
And `Evict` in the strategy means that sooner or later some machines would have
been restarted.

## What was done

Automatic migration was stopped, and the image was kept:

```
kubectl -n <namespace-kubevirt> patch kubevirt kubevirt --type=merge \
  -p '{"spec":{"workloadUpdateStrategy":{"workloadUpdateMethods":[]}}}'
```

Running machines stay on the old image until their next start, and new ones
come up on the new image. This is exactly the desired behavior: **enable the
architecture for new machines without touching running ones**.

## The rule

When changing the launcher image on a live cluster, **first look at
`workloadUpdateStrategy`**. If it lists any methods, turn them off before the
change, not after.

## Why this is instructive

I myself had named live migration as the main untested path, and then checked
only that a machine on our image **starts**, considering that sufficient.

The seventh case of Finding 47 in this session: existence was checked instead
of work. And this time I even knew where to look.
