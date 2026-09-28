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
import pathlib
import re
import sys

MARKET = pathlib.Path(__file__).resolve().parent.parent
REGISTRY = "ghcr.io/tym83/paleocomputing"
LINE = re.compile(r"^(image:\s*" + re.escape(REGISTRY) + r"/[a-z0-9._-]+):([A-Za-z0-9._-]+)\s*$", re.M)
RELEASE = re.compile(r"^(v\d+\.\d+\.\d+|dev)$")
TABLE = MARKET / "repos/platform/packages/system/kubevirt-paleo-launcher/files/launchers.txt"


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
            p.write_text(LINE.sub(lambda m: f"{m.group(1)}:{a.release}", text), encoding="utf-8")
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
