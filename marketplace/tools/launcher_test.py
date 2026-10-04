#!/usr/bin/env python3
"""Test of the kubevirt-paleo-launcher loop without a cluster.

The files/reconcile.sh script runs against a fake kubectl: it returns prepared
JSON (the KubeVirt resource, virt-controller, the status ConfigMap), records
every write in a log and applies it to its own state as a merge patch with a
resourceVersion precondition, the way the API does.

Each case is a statement about what is written and what is NOT written:
a supported version adds the patch; what is already correct is not written at
all; an unsupported one removes our patch; other patches are kept in the same
order; anything doubtful or unreadable closes the door; uninstall removes only
our own.

Requires sh and jq (as in the loop image).

    python3 marketplace/tools/launcher_test.py
"""
from __future__ import annotations

import copy
import json
import os
import pathlib
import shutil
import subprocess
import sys
import tempfile

HERE = pathlib.Path(__file__).resolve().parent
CHART = HERE.parent / "repos/platform/packages/system/kubevirt-paleo-launcher"
SCRIPT = CHART / "files/reconcile.sh"
TABLE = CHART / "files/launchers.txt"

# Images are taken from the same table being tested: on release publish.yml
# rebuilds it for the tag, and expectations hard-coded for dev broke the check
# before publishing a real release.
def _table_images() -> dict[str, str]:
    out = {}
    for line in TABLE.read_text(encoding="utf-8").splitlines():
        parts = line.split()
        if len(parts) == 2 and not line.startswith("#"):
            out[parts[0]] = parts[1]
    return out


IMG184 = _table_images()["v1.8.4"]
IMG190 = _table_images()["v1.9.0"]

# The patch Cozystack main itself puts into the KubeVirt resource (virt-handler
# resources): a sample of a foreign entry that must not be touched.
HANDLER = {
    "resourceName": "virt-handler", "resourceType": "DaemonSet", "type": "strategic",
    "patch": '{"spec":{"template":{"spec":{"containers":[{"name":"virt-handler",'
             '"resources":{"requests":{"cpu":"100m","memory":"128Mi"}}}]}}}}\n',
}
# The earlier manual patch from the website: the whole argument list at once.
MANUAL = {
    "resourceName": "virt-controller", "resourceType": "Deployment", "type": "json",
    "patch": json.dumps([{"op": "replace", "path": "/spec/template/spec/containers/0/args",
                          "value": ["--launcher-image", "ghcr.io/x/virt-launcher:v1.8.4-risc5-v0.1.10",
                                    "--exporter-image", "quay.io/kubevirt/virt-exportserver:v1.8.4",
                                    "--port", "8443", "-v", "2"]}]),
}

FAKE_KUBECTL = r'''#!/usr/bin/env python3
import json, os, pathlib, sys
S = pathlib.Path(os.environ["FAKE_STATE"])
argv = sys.argv[1:]
with open(S / "calls.log", "a") as f:
    f.write(json.dumps(argv) + "\n")
if argv[:1] == ["-n"]:
    argv = argv[2:]

def merge(dst, patch):
    if not isinstance(patch, dict):
        return patch
    dst = dict(dst) if isinstance(dst, dict) else {}
    for k, v in patch.items():
        if v is None:
            dst.pop(k, None)
        else:
            dst[k] = merge(dst.get(k), v)
    return dst

def record(kind, body):
    with open(S / "writes.log", "a") as f:
        f.write(json.dumps({"kind": kind, "body": body}) + "\n")

FILES = {"kubevirt": "kubevirt.json", "deployment": "virt-controller.json", "configmap": "status.json",
         "nodes": "nodes.json"}
verb = argv[0]
if verb == "get" and argv[1] in FILES:
    if (S / ("fail-get-" + argv[1])).exists():
        sys.stderr.write("Unable to connect to the server\n"); sys.exit(1)
    p = S / FILES[argv[1]]
    if not p.exists():
        if "--ignore-not-found" in argv:
            sys.exit(0)
        sys.stderr.write("Error from server (NotFound)\n"); sys.exit(1)
    sys.stdout.write(p.read_text()); sys.exit(0)
if verb == "get" and argv[1] == "pods":
    p = S / "pods"
    sys.stdout.write(p.read_text() if p.exists() else ""); sys.exit(0)
if verb == "patch" and argv[1] in ("kubevirt", "configmap"):
    body = json.loads(argv[argv.index("-p") + 1])
    assert "--type=merge" in argv
    record(argv[1], body)
    if argv[1] == "kubevirt" and (S / "conflict").exists():
        (S / "conflict").unlink()
        sys.stderr.write("Error from server (Conflict): the object has been modified\n"); sys.exit(1)
    p = S / FILES[argv[1]]
    cur = json.loads(p.read_text())
    rv = (body.get("metadata") or {}).get("resourceVersion")
    if rv is not None and rv != cur["metadata"].get("resourceVersion"):
        sys.stderr.write("Error from server (Conflict)\n"); sys.exit(1)
    new = merge(cur, body)
    new["metadata"]["resourceVersion"] = str(int(cur["metadata"].get("resourceVersion", "1")) + 1)
    p.write_text(json.dumps(new)); sys.exit(0)
if verb == "create":
    record("event", json.loads(sys.stdin.read())); sys.exit(0)
if verb == "scale":
    record("scale", argv); sys.exit(0)
sys.stderr.write("fake kubectl: unknown command " + " ".join(argv) + "\n"); sys.exit(3)
'''

ok = fail = 0


def report(passed: bool, text: str) -> None:
    global ok, fail
    ok, fail = ok + bool(passed), fail + (not passed)
    print(f"  {'✅' if passed else '❌'} {text}")


def ours(img: str) -> dict:
    """The entry the loop must set, in exactly its form."""
    ops = [{"op": "test", "path": "/spec/template/spec/containers/0/name", "value": "virt-controller"},
           {"op": "test", "path": "/spec/template/spec/containers/0/args/0", "value": "--launcher-image"},
           {"op": "replace", "path": "/spec/template/spec/containers/0/args/1", "value": img}]
    return {"resourceName": "virt-controller", "resourceType": "Deployment", "type": "json",
            "patch": json.dumps(ops, separators=(",", ":"))}


def kubevirt(version="v1.8.4", target=None, patches=None, status=True):
    kv = {"apiVersion": "kubevirt.io/v1", "kind": "KubeVirt",
          "metadata": {"name": "kubevirt", "namespace": "cozy-kubevirt",
                       "uid": "11111111-2222-3333-4444-555555555555", "resourceVersion": "100"},
          "spec": {"customizeComponents": {} if patches is None else {"patches": patches}}}
    if status:
        kv["status"] = {"phase": "Deployed", "observedKubeVirtVersion": version,
                        "targetKubeVirtVersion": target or version}
    return kv


def nodes(*archs):
    """Nodes labeled by virt-handler; None instead of an architecture means a node without the label."""
    items = []
    for i, a in enumerate(archs):
        labels = {"kubevirt.io/schedulable": "true"}
        if a is not None:
            labels["kubernetes.io/arch"] = a
        items.append({"metadata": {"name": f"node{i}", "labels": labels}})
    return {"apiVersion": "v1", "kind": "List", "items": items}


def controller(version="v1.8.4", launcher=None, args0="--launcher-image", rolled=True):
    launcher = launcher or f"quay.io/kubevirt/virt-launcher:{version}"
    st = {"observedGeneration": 5, "replicas": 2, "updatedReplicas": 2, "readyReplicas": 2} if rolled \
        else {"observedGeneration": 5, "replicas": 3, "updatedReplicas": 1, "readyReplicas": 2}
    return {"metadata": {"name": "virt-controller", "generation": 5,
                         "annotations": {"kubevirt.io/install-strategy-version": version}},
            "spec": {"replicas": 2, "template": {"spec": {"containers": [{
                "name": "virt-controller", "image": f"quay.io/kubevirt/virt-controller:{version}",
                "args": [args0, launcher, "--exporter-image",
                         f"quay.io/kubevirt/virt-exportserver:{version}", "--port", "8443", "-v", "2"]}]}}},
            "status": st}


class Cluster:
    def __init__(self, root: pathlib.Path, kv: dict | None, vc: dict | None, status: dict | None = None,
                 node_list: dict | None = None):
        self.s = root
        root.mkdir(parents=True)
        self.kubectl = root / "kubectl"
        self.kubectl.write_text(FAKE_KUBECTL)
        self.kubectl.chmod(0o755)
        if kv is not None:
            self.put("kubevirt.json", kv)
        if vc is not None:
            self.put("virt-controller.json", vc)
        self.put("nodes.json", node_list or nodes("amd64", "amd64"))
        self.put("status.json", status or {"metadata": {"name": "kubevirt-paleo-launcher-status",
                                                        "resourceVersion": "1"}})

    def put(self, name: str, obj) -> None:
        (self.s / name).write_text(json.dumps(obj))

    def get(self, name: str):
        return json.loads((self.s / name).read_text())

    def run(self, mode="once", table=TABLE, **env):
        (self.s / "writes.log").write_text("")
        e = dict(os.environ, KUBECTL=str(self.kubectl), FAKE_STATE=str(self.s),
                 LAUNCHER_TABLE=str(table), KUBEVIRT_NAMESPACE="cozy-kubevirt",
                 STATUS_CONFIGMAP="kubevirt-paleo-launcher-status", **env)
        r = subprocess.run(["sh", str(SCRIPT), mode], env=e, capture_output=True, text=True, timeout=60)
        self.out = r.stdout + r.stderr
        self.rc = r.returncode
        return self

    def writes(self, kind=None) -> list:
        lines = [json.loads(l) for l in (self.s / "writes.log").read_text().splitlines() if l.strip()]
        return [w for w in lines if kind is None or w["kind"] == kind]

    def patches(self):
        return self.get("kubevirt.json")["spec"].get("customizeComponents", {}).get("patches")

    def roll_out(self, img: str) -> None:
        """What virt-operator would do: roll virt-controller out to the new image."""
        vc = self.get("virt-controller.json")
        vc["spec"]["template"]["spec"]["containers"][0]["args"][1] = img
        self.put("virt-controller.json", vc)

    def calls(self) -> list:
        return [json.loads(l) for l in (self.s / "calls.log").read_text().splitlines()]

    def state(self):
        return self.get("status.json").get("data", {}).get("state")


def main() -> None:
    if not shutil.which("jq"):
        print("  ❌ no jq; the loop does not work without it")
        sys.exit(1)
    print("kubevirt-paleo-launcher loop on a fake kubectl")
    tmp = pathlib.Path(tempfile.mkdtemp())
    n = iter(range(1000))

    def cluster(kv, vc=None, **kw) -> Cluster:
        return Cluster(tmp / str(next(n)), kv, controller() if vc is None else vc, **kw)

    try:
        # 1. Supported version, no patches → one entry, ours, with a precondition.
        c = cluster(kubevirt(patches=None)).run()
        w = c.writes("kubevirt")
        report(c.rc == 0 and len(w) == 1 and c.patches() == [ours(IMG184)],
               "supported version: exactly our patch with this version's image is set")
        report(w and w[0]["body"]["metadata"].get("resourceVersion") == "100",
               "the write carries a resourceVersion precondition")
        report(c.state() == "Applying" and any(x["body"]["reason"] == "LauncherApplying"
                                               for x in c.writes("event")),
               "state Applying in the ConfigMap and an event on the KubeVirt resource")
        report("recreate them" in c.out, "the log warns about the old launcher window (finding 58)")

        # 2. Already correct → no writes to the KubeVirt resource.
        c.roll_out(IMG184)
        c.run()
        report(c.rc == 0 and not c.writes("kubevirt"), "patch already in place: the KubeVirt resource is not written")
        report(c.state() == "Applied", "after virt-controller rolls out the state is Applied")
        c.run()
        report(not c.writes(), "third pass: nothing is written at all, not even the status")

        # 2b. Patch in place but virt-controller has not rolled out yet → Rolling, no write.
        c = cluster(kubevirt(patches=[ours(IMG184)]), controller(rolled=False)).run()
        report(not c.writes("kubevirt") and c.state() == "Rolling",
               "patch in place, rollout not finished: Rolling, no write")

        # 3. Other patches are kept, ours goes to the end.
        c = cluster(kubevirt(patches=[HANDLER])).run()
        report(c.patches() == [HANDLER, ours(IMG184)], "the foreign patch (virt-handler) is kept, ours is at the end")

        # 4. Our patch from a previous version → changed in place, order unchanged.
        c = cluster(kubevirt("v1.9.0", patches=[ours(IMG184), HANDLER]), controller("v1.9.0")).run()
        report(c.patches() == [ours(IMG190), HANDLER],
               "the previous version's image is replaced in place, the foreign patch did not move")

        # 4b. Our patch twice → one remains.
        c = cluster(kubevirt(patches=[ours(IMG190), HANDLER, ours(IMG184)])).run()
        report(c.patches() == [ours(IMG184), HANDLER], "a duplicate of our patch collapses into one")

        # 5. Unsupported version → ours removed, the foreign one stays.
        c = cluster(kubevirt("v1.7.0", patches=[HANDLER, ours(IMG184)]), controller("v1.7.0")).run()
        report(c.patches() == [HANDLER] and c.state() == "Unsupported",
               "unsupported version: our patch removed, the foreign one in place, state Unsupported")
        report(any(x["body"]["type"] == "Warning" for x in c.writes("event")),
               "unsupported version: a warning event")
        c = cluster(kubevirt("v1.7.0", patches=[ours(IMG184)]), controller("v1.7.0")).run()
        report(c.patches() is None and c.writes("kubevirt")[0]["body"]["spec"]["customizeComponents"]["patches"] is None,
               "our patch was the only one: the list is removed entirely, not left empty")
        c = cluster(kubevirt("v1.7.0", patches=[HANDLER]), controller("v1.7.0")).run()
        report(not c.writes("kubevirt"), "unsupported version without our patch: nothing is written")

        # 6. Doubts: closed; our patch is not set, and an existing one is removed.
        c = cluster(kubevirt(status=False, patches=[HANDLER])).run()
        report(not c.writes("kubevirt") and c.state() == "Doubt",
               "no status: the patch is not set, nothing is written")
        c = cluster(kubevirt(status=False, patches=[HANDLER, ours(IMG184)])).run()
        report(c.patches() == [HANDLER], "no status while our patch is in place: it is removed (stock launcher)")
        c = cluster(kubevirt("v1.8", patches=None)).run()
        report(not c.writes("kubevirt"), "corrupted version in status: nothing is set")
        c = cluster(kubevirt("v1.8.4", target="v1.9.0", patches=[ours(IMG184)])).run()
        report(c.patches() is None and "is updating" in c.out,
               "KubeVirt in the middle of an update: our patch is removed until it finishes")
        c = cluster(kubevirt(patches=None), controller("v1.9.0")).run()
        report(not c.writes("kubevirt") and "virt-controller is labeled" in c.out,
               "virt-controller version differs from KubeVirt: nothing is set")
        c = cluster(kubevirt(patches=None), controller(args0="--port")).run()
        report(not c.writes("kubevirt") and "args[0]" in c.out,
               "virt-controller argument layout differs: the patch is not set")
        kv = kubevirt(patches=None)
        kv["spec"]["customizeComponents"]["patches"] = {"not": "a list"}
        c = cluster(kv).run()
        report(not c.writes("kubevirt") and c.state() == "Unknown", "patches is not a list: nothing is written")
        c = cluster(kubevirt(patches=None)).run(table=tmp / "nonexistent")
        report(c.rc != 0 and not c.writes(), "no version table: no writes")
        bad = tmp / "bad-table.txt"
        bad.write_text("v1.8.4\n")
        c = cluster(kubevirt(patches=[ours(IMG184)])).run(table=bad)
        report(c.patches() is None and "version table is corrupted" in c.out,
               "corrupted table: our patch is removed, a new one is not set")

        # 7. Could not read → write nothing at all.
        c = cluster(kubevirt(patches=[ours(IMG184)]))
        (c.s / "fail-get-kubevirt").write_text("")
        c.run()
        report(c.rc != 0 and not c.writes(), "KubeVirt resource not read: no writes")
        c = cluster(kubevirt(patches=None), vc={})
        (c.s / "virt-controller.json").unlink()
        c.run()
        report(c.rc != 0 and not c.writes(), "virt-controller not read: no writes")
        c = cluster(None).run()
        report(c.rc != 0 and not c.writes(), "no KubeVirt resource: no writes")

        # 8. A foreign patch of the launcher image → conflict, we do not override it.
        c = cluster(kubevirt(patches=[MANUAL])).run()
        report(not c.writes("kubevirt") and c.state() == "Conflict" and c.patches() == [MANUAL],
               "manual patch of virt-controller arguments: Conflict, nothing is written")
        kv = kubevirt(patches=None)
        kv["spec"]["customizeComponents"]["flags"] = {"controller": {"launcher-image": "x"}}
        c = cluster(kv).run()
        report(not c.writes("kubevirt") and c.state() == "Conflict", "launcher via flags: also Conflict")

        # 9. Write conflict → the pass fails, the next pass completes it.
        c = cluster(kubevirt(patches=[HANDLER]))
        (c.s / "conflict").write_text("")
        c.run()
        report(c.rc != 0 and c.patches() == [HANDLER], "resourceVersion conflict: the write did not land, the pass fails")
        c.run()
        report(c.rc == 0 and c.patches() == [HANDLER, ours(IMG184)], "the next pass on a fresh read completes it")

        # 10. Uninstall: only our patch, the loop is stopped first.
        c = cluster(kubevirt(patches=[HANDLER, ours(IMG184), MANUAL]))
        c.run("uninstall", SELF_DEPLOYMENT="kubevirt-paleo-launcher",
              SELF_SELECTOR="app.kubernetes.io/name=kubevirt-paleo-launcher,app.kubernetes.io/instance=r")
        calls = [json.loads(l) for l in (c.s / "calls.log").read_text().splitlines()]
        first_scale = next((i for i, a in enumerate(calls) if "scale" in a), None)
        first_patch = next((i for i, a in enumerate(calls) if "patch" in a), None)
        report(c.rc == 0 and c.patches() == [HANDLER, MANUAL], "uninstall removes only our patch")
        report(first_scale is not None and first_patch is not None and first_scale < first_patch,
               "uninstall stops the loop first, then writes")
        report(not c.writes("configmap") and not c.writes("event"),
               "uninstall does not touch the status ConfigMap (Helm removes it)")
        c = cluster(kubevirt(patches=[HANDLER])).run("uninstall")
        report(c.rc == 0 and not c.writes("kubevirt"), "uninstall without our patch: nothing is written")
        c = cluster(kubevirt("v1.7.0", status=False, patches=[ours(IMG184)]), vc={})
        (c.s / "virt-controller.json").unlink()
        c.run("uninstall")
        report(c.rc == 0 and c.patches() is None, "uninstall works without virt-controller and without status")
        c = cluster(None).run("uninstall")
        report(c.rc == 0 and not c.writes(), "uninstall without a KubeVirt resource: success, nothing to remove")

        # 11. Node architecture: the image replaces the launcher for all VMs.
        c = cluster(kubevirt(patches=None), node_list=nodes("arm64", "arm64")).run()
        report(c.patches() == [ours(IMG184)] and c.state() == "Applying",
               "arm64 nodes, image built for arm64: the patch is set")
        c = cluster(kubevirt(patches=[HANDLER, ours(IMG184)]), node_list=nodes("amd64", "s390x")).run()
        report(c.patches() == [HANDLER] and c.state() == "Unsupported" and "s390x" in c.out,
               "an s390x node with no image for it: our patch removed, stock launcher")
        c = cluster(kubevirt(patches=None), node_list=nodes("amd64", None)).run()
        report(not c.writes("kubevirt") and c.state() == "Unsupported",
               "a node without an architecture label: the patch is not set")
        c = cluster(kubevirt(patches=None), node_list=nodes()).run()
        report(c.patches() == [ours(IMG184)], "no nodes with VMs: nothing to check, the patch is set")
        no_arch = tmp / "no-arch-table.txt"
        no_arch.write_text("".join(l + "\n" for l in TABLE.read_text().splitlines() if not l.startswith("# arch:")))
        c = cluster(kubevirt(patches=None), node_list=nodes("s390x")).run(table=no_arch)
        report(c.patches() == [ours(IMG184)] and not any("nodes" in a for a in c.calls()),
               "table without an arch line (manual, older): nodes are neither read nor checked")
        c = cluster(kubevirt(patches=[ours(IMG184)]))
        (c.s / "fail-get-nodes").write_text("")
        c.run()
        report(c.rc != 0 and not c.writes(), "nodes not read: no writes")
        c = cluster(kubevirt(patches=[HANDLER, ours(IMG184)]))
        (c.s / "fail-get-nodes").write_text("")
        c.run("uninstall")
        report(c.rc == 0 and c.patches() == [HANDLER], "uninstall does not read nodes and works without them")

        # 13. Automatic workload updates are on: changing the launcher would move
        # ALL VMs of the cluster (finding 49). Without consent we neither set nor change it.
        def migrating(kv):
            kv["spec"]["workloadUpdateStrategy"] = {"workloadUpdateMethods": ["LiveMigrate", "Evict"]}
            return kv
        c = cluster(migrating(kubevirt(patches=[HANDLER]))).run()
        report(not c.writes("kubevirt") and c.state() == "NeedsConsent" and "LiveMigrate" in c.out,
               "automatic updates on, no consent: the patch is not set, state NeedsConsent")
        report(any(x["body"]["type"] == "Warning" for x in c.writes("event")),
               "without consent: a warning event on the KubeVirt resource")
        c = cluster(migrating(kubevirt(patches=[HANDLER]))).run(ALLOW_WORKLOAD_UPDATE="true")
        report(c.patches() == [HANDLER, ours(IMG184)], "consent via chart value: the patch is set")
        kv = migrating(kubevirt(patches=None))
        kv["metadata"]["annotations"] = {"paleocomputing.io/allow-workload-update": "true"}
        c = cluster(kv).run()
        report(c.patches() == [ours(IMG184)], "consent via annotation on the KubeVirt resource: the patch is set")
        kv = migrating(kubevirt(patches=None))
        kv["spec"]["workloadUpdateStrategy"]["workloadUpdateMethods"] = []
        c = cluster(kv).run()
        report(c.patches() == [ours(IMG184)], "automatic updates off (empty list): no consent needed")
        c = cluster(migrating(kubevirt("v1.9.0", patches=[ours(IMG184)])), controller("v1.9.0")).run()
        report(not c.writes("kubevirt") and c.state() == "NeedsConsent",
               "image change on release upgrade without consent: the previous patch stays, the new one is not set")
        c = cluster(migrating(kubevirt(patches=[ours(IMG184)])))
        c.roll_out(IMG184)
        c.run()
        report(not c.writes("kubevirt") and c.state() == "Applied",
               "patch already in place and the image does not change: no consent needed, Applied")
        c = cluster(migrating(kubevirt("v1.7.0", patches=[HANDLER, ours(IMG184)])), controller("v1.7.0")).run()
        report(c.patches() == [HANDLER] and c.state() == "Unsupported",
               "removing our patch does not wait for consent: it restores the stock launcher")
        c = cluster(migrating(kubevirt(patches=[HANDLER, ours(IMG184)]))).run("uninstall")
        report(c.rc == 0 and c.patches() == [HANDLER], "component uninstall does not wait for consent")

        # 12. A live cluster: node objects are large (image lists, statuses).
        # Passed to jq as an argument, they exceeded the command line length
        # limit and the decision was not computed. Found only in the sandbox.
        big = nodes(*(["amd64"] * 3000))
        for nd in big["items"]:
            nd["status"] = {"images": [{"names": [f"registry.example/some/image-{i}:v1.0.0"],
                                        "sizeBytes": 123456789} for i in range(12)]}
        c = cluster(kubevirt(patches=None), node_list=big).run()
        report(c.rc == 0 and c.patches() == [ours(IMG184)],
               f"cluster of 3000 nodes ({len(json.dumps(big)) // 1024} KB): decision computed, the patch is set")

        # Negative control: the fake must catch a write without a precondition.
        c = cluster(kubevirt(patches=None))
        kv = c.get("kubevirt.json"); kv["metadata"]["resourceVersion"] = "999"; c.put("kubevirt.json", kv)
        body = json.dumps({"metadata": {"resourceVersion": "100"}, "spec": {}})
        r = subprocess.run([str(c.kubectl), "-n", "x", "patch", "kubevirt", "kubevirt", "--type=merge", "-p", body],
                           env=dict(os.environ, FAKE_STATE=str(c.s)), capture_output=True, text=True)
        report(r.returncode != 0, "negative control: the fake API rejects a stale resourceVersion")
    finally:
        shutil.rmtree(tmp, ignore_errors=True)

    print(f"Total: passed {ok}, failed {fail}")
    sys.exit(1 if fail else 0)


if __name__ == "__main__":
    main()
