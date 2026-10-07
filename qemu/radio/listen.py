#!/usr/bin/env python3
"""A passive station on the air: prints every radio packet it hears.

It joins the relay like a machine (a hello every few seconds) and never sends a
frame. Each frame is the channel and a 32-byte radio payload; the payload starts
with the 8-byte SCC header (valid, dadr, sadr, typ, len as a 4-byte integer),
then up to 24 bytes of data.

Kube's messages (KubeNet) are decoded: 60H heartbeat and 61H assignment, both
[cluster tag][node name, 6 bytes][n][n pod ids][counter, 2][mac, 4]. With
--key the mac is checked with the reference HalfSipHash: "auth" is true for a
message signed with that key. Others are printed as typ and length. With
--json every frame also carries its raw bytes.

    python3 qemu/radio/listen.py [relay host] [--port 7524] [--json]

Tests import `frames()` to measure a cluster from outside, without touching it.
"""
import argparse
import json
import socket
import time

from halfsiphash import halfsiphash, key_of

HELLO = bytes([0xFF])
KUBE = {0x60: "heartbeat", 0x61: "assign"}


def cluster_tag(name: str) -> int:
    """KubeNet's tag of a cluster name: (sum of (i+1)*ord(c[i])) mod 255 + 1."""
    return sum((i + 1) * ord(c) for i, c in enumerate(name)) % 255 + 1


def decode(frame: bytes, key: bytes | None = None) -> dict:
    p = frame[1:]
    typ, length = p[3], int.from_bytes(p[4:8], "little")
    msg = {"t": time.time(), "ch": frame[0], "dadr": p[1], "sadr": p[2], "typ": typ, "len": length,
           "raw": frame.hex()}
    data = p[8:8 + min(length, 24)]
    if typ in KUBE and len(data) >= 14:
        n = min(data[7], 10)
        msg.update(kind=KUBE[typ], cluster=data[0], node=data[1:7].rstrip(b"\0").decode("latin-1"),
                   ids=list(data[8:8 + n]), counter=int.from_bytes(data[8 + n:10 + n], "little"))
        if key is not None and len(data) >= 14 + n:
            want = halfsiphash(key, bytes([typ]) + data[:10 + n])
            msg["auth"] = int.from_bytes(data[10 + n:14 + n], "little") == want
    return msg


def sign(key: bytes, typ: int, cluster: int, node: str, ids: list, counter: int) -> bytes:
    """The 24 data bytes of a KubeNet message, as a station with the key sends it."""
    body = bytes([cluster]) + node.encode("latin-1")[:6].ljust(6, b"\0") + bytes([len(ids)]) + bytes(ids)
    body += (counter % 65536).to_bytes(2, "little")
    return body + halfsiphash(key, bytes([typ]) + body).to_bytes(4, "little")


def frames(host: str, port: int = 7524, local_port: int = 0, key: bytes | None = None):
    """Yields decoded frames forever; joins the relay first."""
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.bind(("0.0.0.0", local_port))
    s.settimeout(1.0)
    last = 0.0
    while True:
        if time.monotonic() - last > 5:
            try:
                s.sendto(HELLO, (host, port))
            except OSError:
                pass    # the relay is not up yet, or gone for a while: try again
            last = time.monotonic()
        try:
            data, _ = s.recvfrom(2048)
        except socket.timeout:
            continue
        if len(data) == 33:
            yield decode(data, key)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("host", nargs="?", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=7524)
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--key", help="the cluster key, up to 16 hex digits, to check the macs")
    a = ap.parse_args()
    t0 = time.time()
    for m in frames(a.host, a.port, key=key_of(a.key) if a.key is not None else None):
        if a.json:
            print(json.dumps(m), flush=True)
        elif "kind" in m:
            print(f"{m['t'] - t0:8.2f}  {m['kind']:9}  [{m['cluster']:3}] {m['node']:8}  {m['ids']}", flush=True)
        else:
            print(f"{m['t'] - t0:8.2f}  typ {m['typ']:#04x}  len {m['len']}  {m['sadr']} -> {m['dadr']}", flush=True)


if __name__ == "__main__":
    main()
