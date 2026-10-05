#!/usr/bin/env python3
"""Our images in the catalog, pinned to the release tag.

A machine passport (apps/*/machine.yaml) names the image that carries the ROM
and disks; chart values, their schemas and the dashboard definitions generated
from those schemas (cozyrds/*.yaml) name the images of the lab, the language
pack and the air relay. In the tree they are tagged `dev`; publishing rewrites
every reference to the release tag, the same way gen-launcher-table.py rewrites
the launcher table. Otherwise a release ships whatever the tree says: v0.1.14
shipped the ROM from v0.1.4, and until v0.1.18 the lab pulled the floating `dev`
and the language pack offered v0.1.4 as its default.

    python3 tools/pin-images.py                  # show what is set where
    python3 tools/pin-images.py --release v0.1.15
    python3 tools/pin-images.py --release v0.1.15 --pin   # with registry digests
    python3 tools/pin-images.py --check          # tags match the launcher table
"""
from __future__ import annotations

import argparse
import importlib.util
import pathlib
import re
import sys

MARKET = pathlib.Path(__file__).resolve().parent.parent
REGISTRY = "ghcr.io/tym83/paleocomputing"
# A reference to one of our images, optionally already pinned by digest.
REF = re.compile(re.escape(REGISTRY) + r"/([a-z0-9._-]+):([A-Za-z0-9._-]+)(@sha256:[0-9a-f]{64})?")
RELEASE = re.compile(r"^(v\d+\.\d+\.\d+|dev)$")
TABLE = MARKET / "repos/platform/packages/system/kubevirt-paleo-launcher/files/launchers.txt"


def registry_digest(ref: str) -> str:
    """The same lookup gen-launcher-table.py uses for the launchers."""
    spec = importlib.util.spec_from_file_location("gen_launcher_table", MARKET / "tools/gen-launcher-table.py")
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod.registry_digest(ref)


def files() -> list[pathlib.Path]:
    out = []
    for pattern in ("repos/*/packages/apps/*/machine.yaml",
                    "repos/*/packages/apps/*/values.yaml",
                    "repos/*/packages/apps/*/values.schema.json",
                    "repos/*/packages/system/*/cozyrds/*.yaml"):
        out += MARKET.glob(pattern)
    return sorted(out)


def table_release() -> str | None:
    for line in TABLE.read_text(encoding="utf-8").splitlines():
        if line.startswith("# release:"):
            return line.split(":", 1)[1].strip()
    return None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--release")
    ap.add_argument("--check", action="store_true")
    # The dev tag is rewritten by every check build and pods pull with
    # IfNotPresent, so a node that saw an older dev kept running it (finding 86).
    ap.add_argument("--pin", action="store_true", help="append the registry digest (when publishing)")
    a = ap.parse_args()
    if a.release and not RELEASE.match(a.release):
        sys.exit(f"release {a.release!r}: vX.Y.Z or dev required")
    bad = 0
    want = table_release()
    digests: dict[str, str] = {}
    for p in files():
        text = p.read_text(encoding="utf-8")
        refs = REF.findall(text)
        if not refs:
            continue
        rel = p.relative_to(MARKET)
        if a.release:
            def repl(m: re.Match) -> str:
                ref = f"{REGISTRY}/{m.group(1)}:{a.release}"
                if a.pin:
                    if ref not in digests:
                        digests[ref] = registry_digest(ref)
                    ref += "@" + digests[ref]
                return ref
            p.write_text(REF.sub(repl, text), encoding="utf-8")
            print(f"  {rel}: {len(refs)} reference(s) → {a.release}")
        elif a.check:
            for name, tag, _ in refs:
                ok = tag == want
                bad += not ok
                print(f"  {'✅' if ok else '❌'} {rel}: {name}:{tag}"
                      + ("" if ok else f": the launcher table is at {want}"))
        else:
            for name, tag, digest in refs:
                print(f"  {rel}: {name}:{tag}{digest}")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
