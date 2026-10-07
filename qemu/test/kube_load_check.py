#!/usr/bin/env python3
"""Load on Kube over the radio: how many nodes one air carries.

A control plane, N nodes and a deployment with R replicas (default 3 per node).
Measured from the air (kube_cluster.py):

  join      time until every kubelet is heard;
  converge  time from Kube.Apply until all replicas run, each on one node, as
            assigned, spread evenly (at most one pod of difference);
  failover  time from switching one node off until its pods run elsewhere;
  air       frames per second on the air, heartbeats and assignments per node
            per second (both should be one a second);
  flaps     heartbeat gaps longer than the timeout over the whole run, as the
            listener heard them: each is a node the plane took for NotReady.

Every machine keeps a host core busy (Oberon's loop does not idle), so with
more machines than cores the run also measures a crowded host; the result
records the number of cores.

Each phase must finish within its deadline, otherwise the run fails. With
--json the results go to stdout as one line, for the CI summary.

  python3 qemu/test/kube_load_check.py [QEMU tree] --nodes N [--replicas R] [--loss P]
"""
import argparse, json, pathlib, sys, time

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import os                                                    # noqa: E402
from kube_cluster import Cluster, ROOT, TTL, converged, running   # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("qemu", nargs="?", default=str(ROOT / ".qemu-work"))
    ap.add_argument("--nodes", type=int, default=4)
    ap.add_argument("--replicas", type=int)
    ap.add_argument("--loss", type=float, default=0.0)
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()
    rep = a.replicas or 3 * a.nodes
    res = {"nodes": a.nodes, "replicas": rep, "loss": a.loss}
    ok = True

    def phase(key, t, deadline):
        nonlocal ok
        res[key] = None if t is None else round(t, 1)
        good = t is not None
        ok = ok and good
        print(f"  {'✅' if good else '❌'} {key}: {'not within ' + str(deadline) + ' s' if t is None else f'{t:.1f} s'}",
              flush=True)

    c = Cluster(a.qemu, nodes=a.nodes, loss=a.loss)
    try:
        c.serve()
        t0 = time.time()
        for n in c.nodes:
            c.join(n)
        t = c.wait(lambda b, x: set(b) >= set(c.nodes), 30)
        phase("join", None if t is None else time.time() - t0, 30)

        # On a crowded host a typed command can get lost: if no pod is assigned
        # within 15 s the command is typed again, and the attempts are recorded.
        for attempt in range(1, 4):
            t0 = time.time()
            c.run("plane", f"Kube.Apply web {rep} nginx ~")
            if c.wait(lambda b, x: any(x.values()), 15) is not None:
                break
        res["apply_attempts"] = attempt

        def spread(b, x):
            if not converged(rep, c.nodes)(b, x):
                return False
            loads = [len(running(b).get(n, ())) for n in c.nodes]
            return max(loads) - min(loads) <= 1
        t = c.wait(spread, 60)
        phase("converge", None if t is None else time.time() - t0, 60)
        beats, assigns = c.view()
        res["per_node"] = {n: len(running(beats).get(n, ())) for n in c.nodes}
        res["unassigned_nodes"] = [n for n in c.nodes if n not in assigns]

        # The air at rest: rates over 20 s.
        t1 = time.time()
        time.sleep(20)
        heard = c.air(t1)
        span = time.time() - t1
        res["frames_per_s"] = round(len(heard) / span, 1)
        hb = [sum(1 for m in heard if m["kind"] == "heartbeat" and m["node"] == n) / span for n in c.nodes]
        asg = [sum(1 for m in heard if m["kind"] == "assign" and m["node"] == n) / span for n in c.nodes]
        res["heartbeats_per_node_s"] = [round(min(hb), 2), round(max(hb), 2)]
        res["assigns_per_node_s"] = [round(min(asg), 2), round(max(asg), 2)]

        gone = c.nodes[-1]
        rest = c.nodes[:-1]
        c.off(gone)
        t0 = time.time()
        t = c.wait(lambda b, x: converged(rep, rest)(b, x) and gone not in b, 60)
        phase("failover", t, 60)
        heard = c.air()
        flaps = {}
        for n in c.nodes:
            ts = sorted(m["t"] for m in heard if m["kind"] == "heartbeat" and m["node"] == n)
            if n == gone:
                ts = [x for x in ts if x < t0]
            k = sum(1 for p, q in zip(ts, ts[1:]) if q - p > TTL)
            if k:
                flaps[n] = k
        res["flaps"] = flaps
        res["cores"] = os.cpu_count()
    finally:
        c.close(keep=not ok)
    print(("✅" if ok else "❌") + " load " + json.dumps(res))
    if a.json:
        print(json.dumps(res))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
