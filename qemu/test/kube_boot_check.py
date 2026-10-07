#!/usr/bin/env python3
"""A Kube cluster that forms itself: no key is pressed on any machine.

Each machine gets its commands as the catalog gives them (-machine
commands=...): the control plane Kube.Start, KubeNet.Serve and a deployment,
each node KubeNet.Join. QEMU puts the text on RS232 receive, and Boot.Mod,
called at the end of System's body, runs it. Measured from the air:

  1. the cluster forms and web 4 runs, with no input at all;
  2. the control plane is switched off and booted again: it runs its
     commands again, reads its store from the disk, and not one pod moves.

  python3 qemu/test/kube_boot_check.py [QEMU tree]   (default ../.qemu-work)
"""
import pathlib, sys, time

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from kube_cluster import Cluster, ROOT, converged, running   # noqa: E402

QEMU = sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work"
KEY = "00c0ffee00c0ffee"
results = []


def check(what, ok, detail=""):
    results.append(ok)
    print(f"  {'✅' if ok else '❌'} {what}" + (f"  ({detail})" if detail else ""), flush=True)


def main():
    both = ["node-a", "node-b"]
    t_start = time.time()
    c = Cluster(QEMU, nodes=2, key=KEY, boot=0, commands={
        "plane": f"Kube.Start;KubeNet.Serve kube {KEY};Kube.Apply web 4 Ticker",
        "node-a": f"KubeNet.Join node-a kube {KEY}",
        "node-b": f"KubeNet.Join node-b kube {KEY}",
    })
    try:
        t0 = t_start
        # The deployment is applied at the plane's start, before every node has
        # joined; like the real scheduler Kube does not move running pods to a
        # node that comes later, so where they run depends on who joined first.
        t = c.wait(lambda b, a: set(b) >= set(both) and converged(4, both)(b, a), 120)
        beats, _ = c.view()
        check("1. with no input the cluster forms and web 4 runs", t is not None,
              (f"{time.time() - t0:.0f} s after the machines were created, "
               f"{ {n: sorted(s_) for n, s_ in running(beats, both).items()} }") if t is not None else "not within 120 s")
        beats, _ = c.view()
        before = running(beats, both)
        c.off("plane")
        time.sleep(5)
        t_on = time.time()
        c.on("plane", boot=0)
        t = c.wait(lambda b, a: "node-a" in a and "node-b" in a and running(b, both) == before
                   and all(set(a[n]) == before[n] for n in both), 120)
        check("2a. the plane booted again runs its commands and serves again", t is not None,
              f"{time.time() - t_on:.0f} s after power on" if t is not None else "not within 120 s")
        moved = [m for m in c.air(t_on) if m["kind"] == "assign" and set(m["ids"]) != before.get(m["node"], set())]
        check("2b. not one pod moved across the restart", not moved, f"{len(moved)} changed assignments")
        c.screenshot("node-a", c.work / "node-a.png")
    finally:
        ok = all(results)
        c.close(keep=not ok)
    print("✅ Kube boot check passed" if ok else "❌ Kube boot check failed")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
