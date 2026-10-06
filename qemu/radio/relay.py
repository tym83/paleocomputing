#!/usr/bin/env python3
"""The air between Oberon machines: a UDP relay for their nRF24L01+ radios.

Each machine runs QEMU with

    -chardev udp,id=air,host=<relay>,port=7524,localport=7524
    -machine oberon,radio=air

and its radio sends every 32-byte payload as one datagram: the channel number
followed by the payload. A one-byte datagram 0xFF is a hello, sent at start and
every few seconds, so the relay knows a machine before it transmits.

The relay forwards each frame to every other machine it has heard from in the
last minute, which is what a shared radio channel does. Frames carry their
channel, and the receiving radio drops frames for other channels.

A lossy air for tests: --loss P drops each delivery with probability P, for
each receiver on its own, as a noisy channel would.

    python3 qemu/radio/relay.py [--port 7524] [--loss 0.0] [--verbose]
"""
import argparse
import random
import socket
import time

HELLO = 0xFF
FRAME = 1 + 32
FORGET_AFTER = 60.0


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--port", type=int, default=7524)
    ap.add_argument("--loss", type=float, default=0.0)
    ap.add_argument("--verbose", action="store_true")
    a = ap.parse_args()

    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind(("0.0.0.0", a.port))
    peers: dict[tuple[str, int], float] = {}
    print(f"air relay on udp/{a.port}" + (f", loss {a.loss:.0%}" if a.loss else ""), flush=True)

    while True:
        data, src = sock.recvfrom(2048)
        now = time.monotonic()
        if src not in peers:
            print(f"station {src[0]}:{src[1]} joined", flush=True)
        peers[src] = now
        for p, seen in list(peers.items()):
            if now - seen > FORGET_AFTER:
                del peers[p]
                print(f"station {p[0]}:{p[1]} gone", flush=True)
        if len(data) == 1 and data[0] == HELLO:
            continue
        if len(data) != FRAME:
            continue
        if a.verbose:
            print(f"{src[0]}:{src[1]} ch {data[0]} -> {len(peers) - 1} stations", flush=True)
        for p in peers:
            if p != src and (a.loss <= 0 or random.random() >= a.loss):
                sock.sendto(data, p)


if __name__ == "__main__":
    main()
