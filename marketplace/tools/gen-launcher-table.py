#!/usr/bin/env python3
"""Launcher table for the kubevirt-paleo-launcher platform component.

The single source is kubevirt/versions.txt: which KubeVirt versions the
virt-launcher image is built for. Helm does not read files outside the chart, so
the table is placed as a copy into the chart's files/, but not by hand, from here:

    python3 tools/gen-launcher-table.py                       # dev release
    python3 tools/gen-launcher-table.py --release v0.1.11     # when publishing
    python3 tools/gen-launcher-table.py --check               # does the stored one match

The tree holds the dev release table. publish.yml substitutes the real release
tag before pushing the catalog: the same run builds the launchers under that
tag, so the table cannot refer to an image that does not exist.
"""
from __future__ import annotations

import argparse
import json
import pathlib
import re
import sys
import urllib.request

MARKET = pathlib.Path(__file__).resolve().parent.parent
VERSIONS = MARKET.parent / "kubevirt" / "versions.txt"
PLATFORMS = MARKET.parent / "kubevirt" / "platforms.txt"
TABLE = MARKET / "repos/platform/packages/system/kubevirt-paleo-launcher/files/launchers.txt"
REGISTRY = "ghcr.io/tym83/paleocomputing"

SEMVER = re.compile(r"^v\d+\.\d+\.\d+$")
RELEASE = re.compile(r"^(v\d+\.\d+\.\d+|dev)$")
REGISTRY_RE = re.compile(r"^[a-z0-9.-]+(:\d+)?(/[a-z0-9._-]+)+$")
ARCH = re.compile(r"^[a-z0-9_]+$")


def kubevirt_versions(path: pathlib.Path = VERSIONS) -> list[str]:
    out = []
    for line in path.read_text(encoding="utf-8").splitlines():
        if not line.strip() or line.startswith("#"):
            continue
        v = line.split()[0]
        if not SEMVER.match(v):
            sys.exit(f"{path}: version {v!r} is not vX.Y.Z")
        out.append(v)
    if not out:
        sys.exit(f"{path}: no versions")
    return out


def architectures(path: pathlib.Path = PLATFORMS) -> list[str]:
    """Which node CPUs the image is built for: the first column of platforms.txt."""
    out = []
    for line in path.read_text(encoding="utf-8").splitlines():
        if not line.strip() or line.startswith("#"):
            continue
        a = line.split()[0]
        if not ARCH.match(a):
            sys.exit(f"{path}: architecture {a!r} is not a name like amd64")
        out.append(a)
    if not out:
        sys.exit(f"{path}: no architectures")
    return out


def registry_digest(ref: str) -> str:
    """Digest of the image index a tag points to, asked from ghcr anonymously."""
    host, rest = ref.split("/", 1)
    repo, tag = rest.rsplit(":", 1)
    with urllib.request.urlopen(f"https://{host}/token?scope=repository:{repo}:pull") as r:
        token = json.load(r)["token"]
    req = urllib.request.Request(
        f"https://{host}/v2/{repo}/manifests/{tag}", method="HEAD",
        headers={"Authorization": f"Bearer {token}",
                 "Accept": "application/vnd.oci.image.index.v1+json,"
                           "application/vnd.docker.distribution.manifest.list.v2+json"})
    with urllib.request.urlopen(req) as r:
        digest = r.headers["Docker-Content-Digest"]
    if not re.match(r"^sha256:[0-9a-f]{64}$", digest or ""):
        sys.exit(f"{ref}: the registry returned no digest")
    return digest


def render(release: str, registry: str, versions: list[str], archs: list[str],
           pin: bool = False) -> str:
    if not RELEASE.match(release):
        sys.exit(f"release {release!r}: vX.Y.Z or dev required")
    if not REGISTRY_RE.match(registry):
        sys.exit(f"registry {registry!r}: host/path form required")
    lines = [
        "# Built by marketplace/tools/gen-launcher-table.py from kubevirt/versions.txt.",
        "# Do not edit by hand: check.py compares it with the source, publish.yml rebuilds it",
        "# for the release tag.",
        f"# release: {release}",
        f"# registry: {registry}",
        f"# arch: {' '.join(archs)}",
        "#",
        "# The arch line lists node CPUs the image is built for (kubevirt/platforms.txt).",
        "# On a cluster with a node of another architecture the component leaves the launcher alone.",
        "#",
        "# KubeVirt version   virt-launcher image (paleo family, same digest as -risc5-)",
    ]
    # With pin the reference carries the digest as well. The dev tag is rewritten
    # by every check build, and nodes pull launchers with IfNotPresent, so a node
    # that saw an older dev kept running it: the sandbox check tested a stale
    # emulator (finding 86). A digest makes the node fetch exactly this build.
    for v in versions:
        ref = f"{registry}/virt-launcher:{v}-paleo-{release}"
        lines.append(f"{v} {ref}@{registry_digest(ref)}" if pin else f"{v} {ref}")
    return "\n".join(lines) + "\n"


def header(text: str, key: str) -> str | None:
    m = re.search(rf"^# {key}: (\S+)$", text, flags=re.M)
    return m.group(1) if m else None


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--release")
    ap.add_argument("--registry")
    ap.add_argument("--check", action="store_true",
                    help="compare the stored table with kubevirt/versions.txt, write nothing")
    ap.add_argument("--pin", action="store_true",
                    help="append the registry digest to the images (when publishing)")
    ap.add_argument("--out", default=str(TABLE))
    a = ap.parse_args()
    out = pathlib.Path(a.out)

    if a.check:
        have = out.read_text(encoding="utf-8") if out.is_file() else ""
        # A published table carries digests; the tree copy and the source do not.
        have = re.sub(r"@sha256:[0-9a-f]{64}$", "", have, flags=re.M)
        release = a.release or header(have, "release") or "?"
        registry = a.registry or header(have, "registry") or "?"
        want = render(release, registry, kubevirt_versions(), architectures())
        if have != want:
            sys.exit(f"{out} differs from kubevirt/versions.txt or platforms.txt; regenerate it")
        print(f"table matches kubevirt/versions.txt (release {release})")
        return

    text = render(a.release or "dev", a.registry or REGISTRY, kubevirt_versions(), architectures(),
                  pin=a.pin)
    out.write_text(text, encoding="utf-8")
    print(f"wrote {out}")


if __name__ == "__main__":
    main()
