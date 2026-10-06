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
                    converged; the number of heartbeat timeouts is reported;
  7. another cluster  a station sends "node-a: run nothing" tagged as another
                    cluster: node-a keeps its pods. The same message tagged
                    as this cluster, the control, does empty node-a;
  8. rollout        web 6 moves to a new image: at no moment do fewer than 6
                    or more than 7 pods run (maxUnavailable 0, maxSurge 1), and
                    in the end only the new ReplicaSet is left, with 6 pods.

  python3 qemu/test/kube_dr_check.py [QEMU tree]   (default ../.qemu-work)
"""
import pathlib, re, sys, time

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from kube_cluster import Cluster, ROOT, TAG, TTL, converged, running   # noqa: E402

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
        # 7. another cluster
        real = c.raw("assign", "node-a")
        def forged(tag):
            f = bytearray(real)
            f[1 + 8] = tag                      # payload: 8 header bytes, then the cluster tag
            f[1 + 17] = 0                       # no pods
            f[1 + 4:1 + 8] = (10).to_bytes(4, "little")
            return bytes(f)
        beats, _ = c.view()
        keep = running(beats)["node-a"]
        t7 = time.time()
        c.inject(forged(TAG % 255 + 1), times=5)
        heard = [m for m in c.air(t7) if m["kind"] == "heartbeat" and m["node"] == "node-a"]
        check("7a. another cluster's assignment is ignored",
              bool(heard) and all(set(m["ids"]) == keep for m in heard),
              f"{len(heard)} heartbeats of node-a, all with {sorted(keep)}")
        t7 = time.time()
        c.inject(forged(TAG), times=15, interval=0.2)   # faster than the plane repairs it
        heard = [m for m in c.air(t7) if m["kind"] == "heartbeat" and m["node"] == "node-a"]
        check("7b. control: the same message tagged as this cluster empties node-a",
              any(not m["ids"] for m in heard), f"{sum(1 for m in heard if not m['ids'])} empty heartbeats")
        t = c.wait(converged(6, both), 20)
        check("7c. the control plane puts the pods back", t is not None, f"in {secs(t)}")
        # 8. rollout
        c.run("plane", "Kube.Apply web 6 nginx2 ~")
        t8 = time.time()
        low, high, last_change = 6, 6, t8
        prev = None
        while time.time() - t8 < 90:
            beats, _ = c.view(window=1.5)
            ids = [i for s_ in running(beats, both).values() for i in s_]
            n = len(set(ids))
            if len(beats) == 2:
                low, high = min(low, n), max(high, n)
            cur = sorted(ids)
            if cur != prev:
                prev, last_change = cur, time.time()
            if time.time() - last_change > 10 and n == 6:
                break
            time.sleep(0.5)
        check("8a. never fewer than 6 pods running during the rollout", low >= 6, f"lowest {low}")
        check("8b. never more than 7", high <= 7, f"highest {high}")
        c.screenshot("plane", c.work / "plane.png")
        st = c.state()
        rs = re.findall(r"replicaset (\S+)\s+desired=(\d+)\s+image=(\S+)", st)
        pods = re.findall(r"pod \S+ @node-[ab] Running", st)
        check("8c. only the new ReplicaSet is left, 6 pods Running", len(rs) == 1 and rs[0][1:] == ("6", "nginx2")
              and len(pods) == 6, f"{rs}, {len(pods)} running")
    finally:
        ok = all(results)
        c.close(keep=not ok)
    print("✅ Kube DR passed" if ok else "❌ Kube DR failed")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
