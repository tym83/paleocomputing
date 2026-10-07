#!/usr/bin/env python3
"""Kube with real nodes: a control plane and two kubelets on separate machines.

Three qemu-system-risc5 machines and the air relay run in containers on one
Docker network. The disks carry Net, Kube and KubeNet, installed the same way
as on the oberon-run system disk.

  1. the control plane runs Kube.Start and KubeNet.Serve;
  2. two machines run KubeNet.Join node-a and KubeNet.Join node-b, and once
     both are Ready the control plane runs Kube.Apply web 3 Ticker;
  3. Kube.Save writes the state: both nodes Ready, three pods Running, spread
     over the two nodes;
  4. node-b is switched off. After the heartbeat timeout node-b must be
     NotReady and all three pods Running on node-a: the scheduler moved them.

The state is read back from the control plane's disk image (Kube.Save writes
a text file), so the check compares words, not pixels.

  python3 qemu/test/kube_radio_check.py [QEMU tree]   (default ../.qemu-work)
"""
import pathlib, re, shutil, sys, tempfile, time, uuid

ROOT = pathlib.Path(__file__).resolve().parents[2]
IMPL = ROOT / "impl"
sys.path.insert(0, str(IMPL / "tools"))
from install_modules import install_modules, DEFAULT   # noqa: E402
from oberonfs import Image                             # noqa: E402
from qmp_machine import QMP, docker                    # noqa: E402

QEMU = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else ROOT / ".qemu-work").resolve()
NOREBO = IMPL / "ext" / "norebo"
DISK = IMPL / "ext" / "disk" / "Oberon-2016-08-02.dsk"


def build(work):
    disk = work / "kube.dsk"
    shutil.copy(DISK, disk)
    install_modules(disk, DEFAULT, NOREBO, NOREBO / "norebo.bin")
    for name in ("plane", "na", "nb"):
        shutil.copy(disk, work / f"{name}.dsk")
        with open(work / f"{name}.dsk", "r+b") as f:
            f.truncate(8 * 1024 * 1024)
    words = [int(x, 16) for x in (IMPL / "rtl" / "prom_sd.mem").read_text().split()]
    (work / "prom.bin").write_bytes(b"".join(w.to_bytes(4, "little") for w in words))
    shutil.copy(ROOT / "qemu" / "radio" / "relay.py", work)


def state(disk, name):
    """The lines of a Kube.Save file, read from the disk image."""
    img = Image(disk)
    files = img.files()
    if name not in files:
        return ""
    text = img.read(files[name]).decode("latin-1")
    text = text[text.find("nodes: "):]                     # past the text file header
    return "\n".join(l for l in re.split(r"[\r\n]", text) if re.search(r"(nodes:|deployment|replicaset|pod) ", l))


def run(cmds, qmp):
    """Types command lines under the last line of System.Tool and runs each one.

    New lines always go in right under that line (y 557), so the first of them
    is at y 569 every time: the editor drops keys at a viewer's bottom line.
    """
    qmp.click(900, 557)
    qmp.type("".join("\n" + c for c in cmds))
    for i in range(len(cmds)):
        qmp.click(680, 569 + 12 * i, "middle")
        time.sleep(1)


def main():
    if not (QEMU / "build" / "qemu-system-risc5").exists():
        raise SystemExit(f"  ❌ no {QEMU}/build/qemu-system-risc5; run make -C qemu build first")
    (IMPL / "build").mkdir(parents=True, exist_ok=True)
    work = pathlib.Path(tempfile.mkdtemp(prefix="kube-", dir=str(IMPL / "build")))
    build(work)
    net = f"oberon-kube-{uuid.uuid4().hex[:8]}"
    names = {k: f"{net}-{k}" for k in ("relay", "plane", "na", "nb")}
    docker("network", "create", net)
    try:
        docker("run", "-d", "--name", names["relay"], "--network", net, "--network-alias", "relay",
               "-v", f"{work}:/w", "qemu-build:risc5", "python3 -u /w/relay.py")
        q = {}
        for m in ("plane", "na", "nb"):
            docker("run", "-d", "--name", names[m], "--network", net, "-p", "127.0.0.1::4444",
                   "-v", f"{QEMU}:/src:ro", "-v", f"{work}:/w", "-w", "/w", "qemu-build:risc5",
                   f"/src/build/qemu-system-risc5 -machine oberon,radio=air -bios prom.bin "
                   f"-drive if=none,id=sd0,file={m}.dsk,format=raw -display none "
                   f"-chardev udp,id=air,host=relay,port=7524,localaddr=0.0.0.0,localport=7524 "
                   f"-qmp tcp:0.0.0.0:4444,server,wait=off")
        time.sleep(2)
        for m in ("plane", "na", "nb"):
            q[m] = QMP(int(docker("port", names[m], "4444").strip().rsplit(":", 1)[1]))
        time.sleep(30)                                   # boot

        run(["Kube.Start", "KubeNet.Serve"], q["plane"])
        run(["KubeNet.Join node-a"], q["na"])
        run(["KubeNet.Join node-b"], q["nb"])
        time.sleep(5)                                    # both kubelets heard
        run(["Kube.Apply web 3 Ticker ~"], q["plane"])
        time.sleep(10)
        run(["Kube.Save Kube.One"], q["plane"])

        docker("stop", "-t", "1", names["nb"])          # node-b goes away
        time.sleep(15)
        run(["Kube.Save Kube.Two"], q["plane"])
        time.sleep(2)
        for m in ("plane", "na"):
            q[m].screenshot(work, work / f"screen-{m}.png")
        q["plane"].cmd("quit")
        time.sleep(2)
        one = state(work / "plane.dsk", "Kube.One")
        two = state(work / "plane.dsk", "Kube.Two")
    finally:
        for n in names.values():
            docker("rm", "-f", n, check=False)
        docker("network", "rm", net, check=False)

    print("  -- with both nodes --\n" + "\n".join("     " + l for l in one.splitlines()))
    print("  -- after node-b was switched off --\n" + "\n".join("     " + l for l in two.splitlines()))
    pods_one = re.findall(r"pod web-rs-\d+ @(node-[ab]) Running", one)
    pods_two = re.findall(r"pod web-rs-\d+ @(node-[ab]) Running", two)
    checks = [
        ("both nodes Ready", "node-a Ready" in one and "node-b Ready" in one),
        ("three pods Running, on both nodes", len(pods_one) == 3 and set(pods_one) == {"node-a", "node-b"}),
        ("node-b NotReady after it went silent", "node-b NotReady" in two),
        ("all three pods moved to node-a", pods_two == ["node-a"] * 3),
    ]
    for what, ok in checks:
        print(f"  {'✅' if ok else '❌'} {what}")
    ok = all(c for _, c in checks)
    if ok:
        shutil.rmtree(work, ignore_errors=True)
    else:
        print(f"  disks kept in {work}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
