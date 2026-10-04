#!/usr/bin/env python3
"""Образы с файлами машин — под тег выпуска.

В паспорте машины (apps/*/machine.yaml) `image` — наш образ, который несёт ПЗУ
и диски. В дереве он помечен `dev`; публикация переписывает метку на тег
выпуска — так же, как gen-launcher-table.py переписывает таблицу launcher'ов.
Иначе паспорт отставал бы от выпуска: v0.1.14 возил ПЗУ из v0.1.4.

    python3 tools/pin-images.py                  # показать, что где стоит
    python3 tools/pin-images.py --release v0.1.15
    python3 tools/pin-images.py --check          # метка совпадает с таблицей launcher'ов
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
        sys.exit(f"выпуск {a.release!r} — нужен vX.Y.Z или dev")
    bad = 0
    want = table_release()
    for p in passports():
        text = p.read_text(encoding="utf-8")
        tags = LINE.findall(text)
        if not tags:
            print(f"  {p.relative_to(MARKET)}: нашего образа нет")
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
                      + ("" if ok else f" — таблица launcher'ов на {want}"))
        else:
            for img, tag in tags:
                print(f"  {p.relative_to(MARKET)}: {img.split()[-1]}:{tag}")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
