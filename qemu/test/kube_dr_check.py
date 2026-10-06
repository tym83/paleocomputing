#!/usr/bin/env python3
"""Disaster recovery for Kube on the radio: what fails, and how long it takes to heal.

A control plane and two nodes. The cluster is measured from the air (see
kube_cluster.py); each scenario must converge again within its deadline:

  1. start          web 4 runs on both nodes;
  2. node lost      node-b switched off: NotReady, its pods run on node-a;
  3. node back      node-b booted and joined again; scaled to 6, the new pods
                    go to node-b, the least loaded node;
  4. plane lost     the control plane switched off and booted again: Kube reads
                    the store from its disk, and the same pods keep running on
                    the same nodes, none moves or restarts. While the plane is
                    off, the kubelets keep running what they were given;
  5. air lost       the relay is gone for 20 s: both nodes go NotReady on the
                    plane, which unbinds their pods; with the air back the
                    cluster converges again;
  6. lossy air      30 % of deliveries lost for 60 s: the cluster stays
                    converged; the number of heartbeat timeouts is reported.

  python3 qemu/test/kube_dr_check.py [QEMU tree]   (default ../.qemu-work)
"""
import pathlib, sys, time

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from kube_cluster import Cluster, ROOT, TTL, converged, running   # noqa: E402

QEMU = sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work"
results = []


def check(what, ok, detail=""):
    results.append(ok)
    print(f"  {'✅' if ok else '❌'} {what}" + (f"  ({detail})" if detail else ""), flush=True)


def secs(t):
    return "never" if t is None else f"{t:.1f} s"


def main():
    c = Cluster(QEMU, nodes=2)
    try:
        both = ["node-a", "node-b"]
        c.run("plane", "Kube.Start", "KubeNet.Serve")
        c.run("node-a", "KubeNet.Join node-a")
        c.run("node-b", "KubeNet.Join node-b")
        t = c.wait(lambda b, a: set(b) >= set(both), 15)
        check("both kubelets heard", t is not None, secs(t))

        # 1. start
        c.run("plane", "Kube.Apply web 4 nginx ~")
        t = c.wait(lambda b, a: converged(4, both)(b, a) and all(running(b)[n] for n in both), 20)
        check("1. web 4 runs on both nodes", t is not None, f"converged in {secs(t)}")

        # 2. node lost
        c.off("node-b")
        t0 = time.time()
        t = c.wait(lambda b, a: converged(4, ["node-a"])(b, a) and "node-b" not in b, 30)
        check("2. node-b off: its pods run on node-a", t is not None, f"in {secs(t)}, heartbeat timeout {TTL:.0f} s")

        # 3. node back
        c.on("node-b")
        c.run("node-b", "KubeNet.Join node-b")
        t = c.wait(lambda b, a: "node-b" in b, 15)
        check("3a. node-b back on the air", t is not None, secs(t))
        c.run("plane", "Kube.Apply web 6 nginx ~")
        t = c.wait(lambda b, a: converged(6, both)(b, a) and len(running(b).get("node-b", ())) == 2, 20)
        check("3b. scaled to 6: the two new pods go to node-b", t is not None, secs(t))

        # 4. plane lost
        before, _ = c.view()
        before = running(before)
        c.off("plane")
        time.sleep(10)
        during, _ = c.view()
        check("4a. with the plane off the kubelets keep their pods", running(during) == before,
              f"{sorted((n, sorted(s)) for n, s in running(during).items())}")
        t_off = time.time()
        c.on("plane")
        # A pause between the two commands, longer than the heartbeat timeout:
        # typing over VNC in the cloud takes that long, and the restored nodes
        # must not lose their grace before the plane even listens.
        c.run("plane", "Kube.Start")
        time.sleep(5)
        c.run("plane", "KubeNet.Serve")
        t = c.wait(lambda b, a: converged(6, both)(b, a) and running(b) == before
                   and all(set(a.get(n, [])) == before[n] for n in both), 20)
        check("4b. plane back from its disk: the same pods on the same nodes", t is not None,
              f"{secs(t)} after the commands, {time.time() - t_off:.0f} s after power on")
        moved = [m for m in c.air(t_off) if m["kind"] == "assign"
                 and set(m["ids"]) != before.get(m["node"], set())]
        check("4c. no pod moved or restarted on the way", not moved, f"{len(moved)} other assignments")

        # 5. air lost
        c.air_off()
        time.sleep(20)
        t0 = time.time()
        c.relay()
        t = c.wait(converged(6, both), 40)
        check("5. air back after 20 s: converged again", t is not None, f"in {secs(t)}")

        # 6. lossy air
        c.relay(loss=0.3)
        t1 = time.time()
        time.sleep(60)
        heard = c.air(t1)
        beats = [m for m in heard if m["kind"] == "heartbeat"]
        moves, last = 0, {}
        for m in heard:
            if m["kind"] == "assign":
                if m["node"] in last and last[m["node"]] != m["ids"]:
                    moves += 1
                last[m["node"]] = m["ids"]
        gaps = 0
        for n in both:
            ts = sorted(m["t"] for m in beats if m["node"] == n)
            gaps += sum(1 for a, b in zip(ts, ts[1:]) if b - a > TTL)
        c.relay()
        t = c.wait(converged(6, both), 30)
        check("6. 30 % loss for 60 s, then clean air: converged", t is not None,
              f"{gaps} heartbeat gaps over {TTL:.0f} s heard by the listener, "
              f"{moves} changes of assignment while lossy, converged in {secs(t)}")
        c.screenshot("plane", c.work / "plane.png")
    finally:
        ok = all(results)
        c.close(keep=not ok)
    print("✅ Kube DR passed" if ok else "❌ Kube DR failed")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
