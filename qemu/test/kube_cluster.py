"""A Kube cluster of qemu-system-risc5 machines on one air, for DR and load tests.

One control plane, N nodes, the relay and a passive listener, each in its own
container on one Docker network. The disks carry Net, Kube and KubeNet, as the
oberon-run system disk does. The cluster is observed from the air: the
listener records every heartbeat and assignment with the time it was heard,
so the tests measure the cluster from outside without asking it anything.

A machine is switched off with `off` (its container stops, QEMU exits, the
disk stays) and booted again with `on`; that is a reboot from the same disk.
`relay(loss)` replaces the relay, which is also how the air goes away and
comes back.
"""
import json, pathlib, re, shutil, subprocess, sys, tempfile, time, uuid

ROOT = pathlib.Path(__file__).resolve().parents[2]
IMPL = ROOT / "impl"
sys.path.insert(0, str(IMPL / "tools"))
sys.path.insert(0, str(ROOT / "qemu" / "test"))
from install_modules import install_modules, DEFAULT   # noqa: E402
from oberonfs import Image                             # noqa: E402
from qmp_machine import QMP, docker                    # noqa: E402
sys.path.insert(0, str(ROOT / "qemu" / "radio"))
from listen import cluster_tag                          # noqa: E402

NOREBO = IMPL / "ext" / "norebo"
DISK = IMPL / "ext" / "disk" / "Oberon-2016-08-02.dsk"
BEAT = 1.0          # KubeNet: heartbeat and assignment period, s
TTL = 5.0           # KubeNet: a node silent this long goes NotReady, s
TAG = cluster_tag("kube")   # the default cluster


def node_name(i):
    return f"node-{chr(ord('a') + i)}"


class Cluster:
    def __init__(self, qemu, nodes, loss=0.0, boot=30, key=None, commands=None):
        self.key = key            # the cluster key, hex; None: the default, all zero
        self.commands = commands or {}   # machine -> what it runs at start (-machine commands=)
        self.qemu = pathlib.Path(qemu).resolve()
        if not (self.qemu / "build" / "qemu-system-risc5").exists():
            raise SystemExit(f"  ❌ no {self.qemu}/build/qemu-system-risc5; run make -C qemu build first")
        self.nodes = [node_name(i) for i in range(nodes)]
        (IMPL / "build").mkdir(parents=True, exist_ok=True)
        self.work = pathlib.Path(tempfile.mkdtemp(prefix="kube-", dir=str(IMPL / "build")))
        self.net = f"oberon-kc-{uuid.uuid4().hex[:8]}"
        self.machines = ["plane"] + self.nodes
        self.q = {}
        self._build()
        docker("network", "create", self.net)
        self.relay(loss)
        self._listener()
        for m in self.machines:
            self._run(m)
        time.sleep(2)
        for m in self.machines:
            self._connect(m)
        time.sleep(boot)

    # ---- setup ----

    def _build(self):
        disk = self.work / "kube.dsk"
        shutil.copy(DISK, disk)
        install_modules(disk, DEFAULT, NOREBO, NOREBO / "norebo.bin")
        for m in self.machines:
            shutil.copy(disk, self.work / f"{m}.dsk")
            with open(self.work / f"{m}.dsk", "r+b") as f:
                f.truncate(8 * 1024 * 1024)
        words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
        (self.work / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
        for f in ("relay.py", "listen.py", "halfsiphash.py", "inject.py"):
            shutil.copy(ROOT / "qemu" / "radio" / f, self.work)

    def name(self, m):
        return f"{self.net}-{m}"

    def _run(self, m):
        docker("run", "-d", "--name", self.name(m), "--network", self.net, "-p", "127.0.0.1::4444",
               "-v", f"{self.qemu}:/src:ro", "-v", f"{self.work}:/w", "-w", "/w", "qemu-build:risc5",
               f"/src/build/qemu-system-risc5 -machine '{self._machine(m)}' -bios prom.bin "
               f"-drive if=none,id=sd0,file={m}.dsk,format=raw -display none "
               f"-chardev udp,id=air,host=relay,port=7524,localaddr=0.0.0.0,localport=7524 "
               f"-qmp tcp:0.0.0.0:4444,server,wait=off")

    def _machine(self, m):
        opts = "oberon,radio=air"
        if self.commands.get(m):
            opts += ",commands=" + self.commands[m].replace(",", ",,")
        return opts

    def _connect(self, m):
        port = int(docker("port", self.name(m), "4444").strip().rsplit(":", 1)[1])
        self.q[m] = QMP(port)

    def _listener(self):
        docker("run", "-d", "--name", self.name("listen"), "--network", self.net,
               "-v", f"{self.work}:/w", "qemu-build:risc5",
               f"sh -c 'python3 -u /w/listen.py relay --json --key {self.key or 0} > /w/air.jsonl'")

    def relay(self, loss=0.0):
        """(Re)starts the relay; the air is gone while it is down."""
        docker("rm", "-f", self.name("relay"), check=False)
        docker("run", "-d", "--name", self.name("relay"), "--network", self.net,
               "--network-alias", "relay", "-v", f"{self.work}:/w", "qemu-build:risc5",
               f"python3 -u /w/relay.py --loss {loss}")

    def serve(self):
        """Kube and KubeNet on the control plane, with the cluster key."""
        self.run("plane", "Kube.Start")
        self.run("plane", f"KubeNet.Serve kube {self.key or ''}".rstrip())

    def join(self, node):
        self.run(node, f"KubeNet.Join {node} kube {self.key or ''}".rstrip())

    def inject_after(self, node, frames, rounds=3):
        """Sends frames for a node right after the plane's assignment to it, from
        a station of its own (qemu/radio/inject.py), as an intruder would."""
        spec = json.dumps({"node": node, "rounds": rounds, "frames": frames})
        r = subprocess.run(["docker", "run", "--rm", "--network", self.net, "-v", f"{self.work}:/w", "-w", "/w",
                            "qemu-build:risc5", f"python3 /w/inject.py relay '{spec}'"],
                           capture_output=True, text=True)
        return r.stdout + r.stderr[-400:]

    def raw(self, kind, node, since=0.0):
        """The latest raw frame of this kind for this node, from the air."""
        p = self.work / "air.jsonl"
        last = None
        for line in p.read_text().splitlines():
            try:
                m = json.loads(line)
            except ValueError:
                continue
            if m.get("kind") == kind and m.get("node") == node and m["t"] >= since:
                last = bytes.fromhex(m["raw"])
        return last

    def air_off(self):
        docker("rm", "-f", self.name("relay"), check=False)

    def close(self, keep=False):
        for m in self.machines + ["relay", "listen"]:
            docker("rm", "-f", self.name(m), check=False)
        docker("network", "rm", self.net, check=False)
        if keep:
            for d in self.machines:
                (self.work / f"{d}.dsk").unlink(missing_ok=True)   # big; the air log is what tells
            print(f"  files kept in {self.work}")
        else:
            shutil.rmtree(self.work, ignore_errors=True)

    # ---- machines ----

    def run(self, m, *cmds):
        """Types command lines under the last line of System.Tool and runs each.

        New lines always go in right under that line (y 557), so the first is
        at y 569 every time: the editor drops keys at a viewer's bottom line.
        """
        q = self.q[m]
        q.click(900, 557)
        q.type("".join("\n" + c for c in cmds))
        for i in range(len(cmds)):
            q.click(680, 569 + 12 * i, "middle")
            time.sleep(1)

    def off(self, m):
        docker("stop", "-t", "1", self.name(m))
        self.q.pop(m, None)

    def on(self, m, boot=30):
        docker("start", self.name(m))
        time.sleep(2)
        self._connect(m)
        time.sleep(boot)

    def state(self, m="plane"):
        """What Kube.Get prints, read back from the machine's disk: Kube.Save
        writes it, the machine is switched off so QEMU flushes the disk."""
        self.run(m, "Kube.Save Kube.State")
        time.sleep(2)
        self.off(m)
        img = Image(self.work / f"{m}.dsk")
        files = img.files()
        if "Kube.State" not in files:
            return ""
        text = img.read(files["Kube.State"]).decode("latin-1")
        text = text[text.find("nodes: "):]
        return "\n".join(l for l in re.split(r"[\r\n]", text)
                         if re.search(r"(nodes:|deployment|replicaset|pod) ", l))

    def screenshot(self, m, path):
        self.q[m].screenshot(self.work, path)

    # ---- the air ----

    def air(self, since=0.0):
        out = []
        p = self.work / "air.jsonl"
        if p.exists():
            for line in p.read_text().splitlines():
                try:
                    m = json.loads(line)
                except ValueError:
                    continue
                if m["t"] >= since and "kind" in m and m.get("cluster") == TAG and m.get("auth", True):
                    out.append(m)
        return out

    def view(self, now=None, window=TTL):
        """What the air says at `now`: for each node heard within `window`, the
        pods its kubelet runs and the pods the control plane assigned to it."""
        now = now or time.time()
        beats, assigns = {}, {}
        for m in self.air(now - window):
            if m["t"] > now:
                continue
            (beats if m["kind"] == "heartbeat" else assigns)[m["node"]] = m["ids"]
        return beats, assigns

    def wait(self, test, timeout, step=0.5):
        """Seconds until test(beats, assigns) holds, or None after timeout."""
        t0 = time.time()
        while time.time() - t0 < timeout:
            beats, assigns = self.view()
            if test(beats, assigns):
                return time.time() - t0
            time.sleep(step)
        return None


def running(beats, nodes=None):
    """Pod ids the kubelets report, per node, for the given nodes."""
    return {n: set(ids) for n, ids in beats.items() if nodes is None or n in nodes}


def converged(replicas, nodes=None):
    """All replicas run, each on exactly one of the nodes, as assigned."""
    def test(beats, assigns):
        r = running(beats, nodes)
        ids = [i for s in r.values() for i in s]
        return (len(ids) == replicas and len(set(ids)) == replicas
                and all(set(assigns.get(n, [])) == s for n, s in r.items()))
    return test
