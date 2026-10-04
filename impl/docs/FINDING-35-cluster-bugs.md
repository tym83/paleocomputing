[Русская версия](FINDING-35-cluster-bugs.ru.md)

# Finding 35. Three bugs visible only on a live cluster

The "Forgotten Systems" catalog has been deployed on a real Cozystack cluster and works:
the machine with the labs and the course book are up in a tenant, connected from outside
as a third-party catalog, without a single patch to the platform.

Getting there took three versions, and each fix closed a bug **invisible from the desk**.
All three share one signature: **the release succeeds, the application is dead**.

## 1. The source manifest did not make it into the artifact (v0.1.1)

`cozypkg push` puts **only the contents of `packages/`** into the OCI artifact, dropping
that prefix. The `PackageSource` manifest sat next to it, in `sources/`, and got lost.

The source tree, meanwhile, passed the check: the validator walks the whole root and
found the manifest. But what a person would actually download did not have it.

Caught only by a round trip: push to the registry and pull back.
The platform keeps its sources inside `packages/` for exactly this reason.

## 2. The schemas rejected keys that the engine mixes in (v0.1.2)

`cozystack-engine` puts `_cluster` and `_namespace` into the values of **every**
tenant application. Our `values.schema.json` closed the root with
`additionalProperties: false`, and Helm threw out the values document entirely.

The error looked like this:

```
at '': additional properties '_namespace', '_cluster' not allowed
```

**Not a single platform chart closes the root**: checked across all `packages/apps/*`.
This is their convention, and it exists precisely because of the mixing in.

The signs were as deceptive as they get: the artifact is valid, the source is connected,
the application descriptions are in place, the category appeared in the console. Only the pod
was never created.

## 3. nginx started a worker for every core of the NODE (v0.1.3)

The image ships with `worker_processes auto`, and "auto" counts the node's cores, not the share
allocated to the pod. On a node with 96 cores that is 96 processes; they do not fit into 64 MB,
and the kernel kills the pod over and over. Serving static files needs one.

The memory limit has nothing to do with it: raising it would be treating the symptom.

**The stock auto-tuning does not help.** The image has `30-tune-worker-processes.sh`,
which can count from cgroup limits, but it **edits `/etc/nginx/nginx.conf` in
place**, and our container's root is read-only, so the script silently exits with
code 0. That is why the chart supplies the whole configuration via `subPath`.

The same mine was sitting in our own serving image; it was nailed down at build level.

## 4. An application declared in the catalog but not in the source (v0.1.4)

An application is declared **in two places**, and they are not linked:

* `appdefs.yaml`: what to show in the catalog;
* `sources/*.yaml`: what to publish as an artifact.

One declared only in the first is visible in the console, the tenant installs it, and it does not
deploy, because there is nothing to deploy from:

```
could not get Source object: ExternalArtifact ... not found
```

The same signature again: the application appeared, installed, returned a status,
and nothing works.

Closed with a check: every application is cross-checked against both lists. Verified
with a mutation: the declaration was removed from the source, and the check went red.

## What follows from this

We check **forms and structures**, while what breaks is **behaviour in someone else's environment**: under
an engine that adds values; on a node with ninety-six cores; in an
artifact built from the wrong directory.

No check on the desk catches this class. The practical conclusion:
**roll out every version of the catalog on a live cluster**, and it is cheaper to do it often and one
change at a time than to accumulate.

All three rules are covered by checks with mutations; the catalog now has 50 checks.

## Status

Tenant `tenant-paleo`, both pods `1/1 Running` with no restarts. Inside
the course book container, `worker_processes 1;`. Both pages are served. In the console,
the category **Forgotten Systems** with three types.

The first forgotten machine runs in Cozystack as an ordinary application.
