#!/usr/bin/env python3
"""Images carrying machine files, pinned to the release tag.

In a machine passport (apps/*/machine.yaml) `image` is our image that carries
the ROM and disks. In the tree it is tagged `dev`; publishing rewrites the tag
to the release tag, the same way gen-launcher-table.py rewrites the launcher
table. Otherwise the passport would lag behind the release: v0.1.14 shipped the
ROM from v0.1.4.

    python3 tools/pin-images.py                  # show what is set where
    python3 tools/pin-images.py --release v0.1.15
    python3 tools/pin-images.py --check          # tag matches the launcher table
"""
from __future__ import annotations

import argparse
import importlib.util
import pathlib
import re
import sys

MARKET = pathlib.Path(__file__).resolve().parent.parent
REGISTRY = "ghcr.io/tym83/paleocomputing"
# An image line, optionally already pinned: a published passport carries the digest.
LINE = re.compile(r"^(image:\s*" + re.escape(REGISTRY) + r"/[a-z0-9._-]+):([A-Za-z0-9._-]+)(?:@sha256:[0-9a-f]{64})?\s*$", re.M)
RELEASE = re.compile(r"^(v\d+\.\d+\.\d+|dev)$")
TABLE = MARKET / "repos/platform/packages/system/kubevirt-paleo-launcher/files/launchers.txt"


def registry_digest(ref: str) -> str:
    """The same lookup gen-launcher-table.py uses for the launchers."""
    spec = importlib.util.spec_from_file_location("gen_launcher_table", MARKET / "tools/gen-launcher-table.py")
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod.registry_digest(ref)


def passports() -> list[pathlib.Path]:
    return sorted(MARKET.glob("repos/*/packages/apps/*/machine.yaml"))


def table_release() -> str | None:
    for line in TABLE.read_text(encoding="utf-8").splitlines():
        if line.startswith("# release:"):
            return line.split(":", 1)[1].strip()
    return None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--release")
    ap.add_argument("--check", action="store_true")
    # The dev tag is rewritten by every check build and the fill job pulls with
    # IfNotPresent, so a node that saw an older dev kept its ROM and disk (finding 86).
    ap.add_argument("--pin", action="store_true", help="append the registry digest (when publishing)")
    a = ap.parse_args()
    if a.release and not RELEASE.match(a.release):
        sys.exit(f"release {a.release!r}: vX.Y.Z or dev required")
    bad = 0
    want = table_release()
    for p in passports():
        text = p.read_text(encoding="utf-8")
        tags = LINE.findall(text)
        if not tags:
            print(f"  {p.relative_to(MARKET)}: none of our images")
            continue
        if a.release:
            def repl(m: re.Match) -> str:
                ref = f"{m.group(1)}:{a.release}"
                if a.pin:
                    ref += "@" + registry_digest(ref.split(None, 1)[1])
                return ref
            p.write_text(LINE.sub(repl, text), encoding="utf-8")
            print(f"  {p.relative_to(MARKET)}: → {a.release}")
        elif a.check:
            for img, tag in tags:
                ok = tag == want
                bad += not ok
                print(f"  {'✅' if ok else '❌'} {p.relative_to(MARKET)}: {img.split()[-1]}:{tag}"
                      + ("" if ok else f": launcher table is at {want}"))
        else:
            for img, tag in tags:
                print(f"  {p.relative_to(MARKET)}: {img.split()[-1]}:{tag}")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
