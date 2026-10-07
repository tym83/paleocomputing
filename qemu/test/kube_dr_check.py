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
                    plane, which then pauses evictions instead of unbinding
                    every pod; with the air back the same pods run on the
                    same nodes, not one moved;
  6. lossy air      30 % of deliveries lost for 60 s: the cluster stays
                    converged; the number of heartbeat timeouts is reported;
  7. intruders     right after the plane's assignment to the node that runs
                    pods, a station sends "run nothing" for it: tagged as
                    another cluster (a), unsigned (b), and an old genuine
                    assignment replayed (c); the node keeps its pods. The
                    control (d): the same message signed with the cluster key
                    and a fresh counter does empty the node, and the plane
                    puts the pods back (e). Before that, every message of the
                    cluster on the air carries a mac the reference HalfSipHash
                    accepts: the Oberon and the Python implementations agree;
  8. rollout        web 6 moves from module Ticker to Ticker2: at no moment do fewer than 6
                    or more than 7 pods run (maxUnavailable 0, maxSurge 1), and
                    in the end only the new ReplicaSet is left, with 6 pods.

  python3 qemu/test/kube_dr_check.py [QEMU tree]   (default ../.qemu-work)
"""
import json, pathlib, re, sys, time

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from kube_cluster import Cluster, ROOT, TAG, TTL, converged, running   # noqa: E402

KEY = "0123456789abcdef"

QEMU = sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work"
results = []


def check(what, ok, detail=""):
    results.append(ok)
    print(f"  {'✅' if ok else '❌'} {what}" + (f"  ({detail})" if detail else ""), flush=True)


def secs(t):
    return "never" if t is None else f"{t:.1f} s"


def main():
    c = Cluster(QEMU, nodes=2, key=KEY)
    try:
        both = ["node-a", "node-b"]
        c.serve()
        c.join("node-a")
        c.join("node-b")
        t = c.wait(lambda b, a: set(b) >= set(both), 15)
        check("both kubelets heard", t is not None, secs(t))

        # 1. start
        c.run("plane", "Kube.Apply web 4 Ticker ~")
        t = c.wait(lambda b, a: converged(4, both)(b, a) and all(running(b)[n] for n in both), 20)
        check("1. web 4 runs on both nodes", t is not None, f"converged in {secs(t)}")

        # 2. node lost
        c.off("node-b")
        t0 = time.time()
        t = c.wait(lambda b, a: converged(4, ["node-a"])(b, a) and "node-b" not in b, 30)
        check("2. node-b off: its pods run on node-a", t is not None, f"in {secs(t)}, heartbeat timeout {TTL:.0f} s")

        # 3. node back
        c.on("node-b")
        c.join("node-b")
        t = c.wait(lambda b, a: "node-b" in b, 15)
        check("3a. node-b back on the air", t is not None, secs(t))
        c.run("plane", "Kube.Apply web 6 Ticker ~")
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
        c.run("plane", f"KubeNet.Serve kube {KEY}")
        t = c.wait(lambda b, a: converged(6, both)(b, a) and running(b) == before
                   and all(set(a.get(n, [])) == before[n] for n in both), 20)
        check("4b. plane back from its disk: the same pods on the same nodes", t is not None,
              f"{secs(t)} after the commands, {time.time() - t_off:.0f} s after power on")
        moved = [m for m in c.air(t_off) if m["kind"] == "assign"
                 and set(m["ids"]) != before.get(m["node"], set())]
        check("4c. no pod moved or restarted on the way", not moved, f"{len(moved)} other assignments")

        # 5. air lost
        beats, _ = c.view()
        placed = running(beats, both)
        c.air_off()
        time.sleep(20)
        t5 = time.time()
        c.relay()
        t = c.wait(lambda b, a: converged(6, both)(b, a) and running(b, both) == placed, 40)
        check("5a. air back after 20 s: the same pods on the same nodes", t is not None, f"in {secs(t)}")
        moved = [m for m in c.air(t5) if m["kind"] == "assign" and set(m["ids"]) != placed.get(m["node"], set())]
        check("5b. evictions were paused: no assignment changed", not moved, f"{len(moved)} changed")

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
        # 7. intruders, aimed at the node that runs pods
        genuine = [json.loads(l) for l in (c.work / "air.jsonl").read_text().splitlines() if '"kind"' in l]
        genuine = [m for m in genuine if m.get("cluster") == TAG]
        bad = [m for m in genuine if not m.get("auth")]
        check("7. every message of the cluster so far carries a valid mac", genuine and not bad,
              f"{len(genuine)} messages, {len(bad)} rejected by the reference HalfSipHash")
        beats, _ = c.view()
        busy = max(both, key=lambda n: len(running(beats).get(n, ())))
        keep = running(beats)[busy]
        old = next((m for m in genuine if m["kind"] == "assign" and m["node"] == busy
                    and set(m["ids"]) != keep), None)

        def held(frames, what):
            t7 = time.time()
            c.inject_after(busy, frames)
            time.sleep(1.5)
            heard = [m for m in c.air(t7) if m["kind"] == "heartbeat" and m["node"] == busy]
            check(what, bool(keep) and bool(heard) and all(set(m["ids"]) == keep for m in heard),
                  f"{len(heard)} heartbeats of {busy}, all with {sorted(keep)}")
        held([{"cluster": TAG % 255 + 1, "key": KEY, "ids": []}],
             "7a. an assignment tagged as another cluster is ignored")
        held([{"cluster": TAG, "key": "", "ids": []}],
             "7b. an assignment without the cluster key is ignored")
        held([{"raw": old["raw"]}] if old else [],
             f"7c. an old genuine assignment {old['ids'] if old else '(none found)'} replayed is ignored")
        t7 = time.time()
        c.inject_after(busy, [{"cluster": TAG, "key": KEY, "ids": []}])
        time.sleep(1.5)
        heard = [m for m in c.air(t7) if m["kind"] == "heartbeat" and m["node"] == busy]
        check(f"7d. control: the same assignment signed with the key empties {busy}",
              any(not m["ids"] for m in heard), f"{sum(1 for m in heard if not m['ids'])} empty heartbeats")
        t = c.wait(converged(6, both), 20)
        check("7e. the control plane puts the pods back", t is not None, f"in {secs(t)}")
        # 8. rollout. A kubelet runs exactly its last assignment, and the plane
        # sends the assignments of all nodes in one tick: one round is a
        # consistent picture of what runs. Heartbeats of different nodes are
        # up to a second apart, and pairing them showed 5 or 8 pods that never
        # ran at the same moment.
        beats, _ = c.view()
        before = set(i for s_ in running(beats, both).values() for i in s_)
        c.run("plane", "Kube.Apply web 6 Ticker2 ~")
        t8 = time.time()
        prev, last_change = None, t8
        while time.time() - t8 < 90:
            beats, _ = c.view(window=1.5)
            cur = sorted(i for s_ in running(beats, both).values() for i in s_)
            if cur != prev:
                prev, last_change = cur, time.time()
            if time.time() - last_change > 10 and len(cur) == 6:
                break
            time.sleep(0.5)
        rounds, cur_round, last_t = [], {}, None
        for m in c.air(t8 - 1):
            if m["kind"] != "assign":
                continue
            if last_t is not None and m["t"] - last_t > 0.3:
                rounds.append(cur_round)
                cur_round = {}
            cur_round[m["node"]] = set(m["ids"])
            last_t = m["t"]
        rounds.append(cur_round)
        totals = [len(set().union(*r.values())) for r in rounds if set(r) == set(both)]
        low, high = min(totals), max(totals)
        check("8a. never fewer than 6 pods running during the rollout", low >= 6,
              f"lowest {low} over {len(totals)} rounds of assignments")
        check("8b. never more than 7", high <= 7, f"highest {high}")
        beats, _ = c.view()
        after = set(i for s_ in running(beats, both).values() for i in s_)
        check("8d. every pod was replaced: no id of the old pods runs", not (before & after),
              f"before {sorted(before)}, after {sorted(after)}")
        # 9. a pod whose module is not on the node: assigned, never Running
        c.run("plane", "Kube.Apply ghost 2 Nope ~")
        time.sleep(8)
        beats, assigns = c.view()
        given = set(i for n in both for i in assigns.get(n, [])) - set(i for s_ in running(beats, both).values() for i in s_)
        check("9. pods of a module the nodes do not have are assigned but never run", len(given) == 2,
              f"assigned and not running: {sorted(given)}")
        c.run("plane", "Kube.Apply ghost 0 Nope ~")
        c.screenshot("plane", c.work / "plane.png")
        st = c.state()
        rs = re.findall(r"replicaset (web\S*)\s+desired=(\d+)\s+image=(\S+)", st)
        pods = re.findall(r"pod \S+ @node-[ab] Running", st)
        check("8c. only the new ReplicaSet is left, 6 pods Running", len(rs) == 1 and rs[0][1:] == ("6", "Ticker2")
              and len(pods) == 6, f"{rs}, {len(pods)} running")
    finally:
        ok = all(results)
        c.close(keep=not ok)
    print("✅ Kube DR passed" if ok else "❌ Kube DR failed")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
