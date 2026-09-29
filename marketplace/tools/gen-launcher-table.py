#!/usr/bin/env python3
"""Таблица launcher'ов для компонента платформы kubevirt-paleo-launcher.

Единственный источник — kubevirt/versions.txt: под какие версии KubeVirt
собирается образ virt-launcher. Helm не читает файлы вне чарта, поэтому
таблица кладётся копией в files/ чарта — но не руками, а отсюда:

    python3 tools/gen-launcher-table.py                       # выпуск dev
    python3 tools/gen-launcher-table.py --release v0.1.11     # при публикации
    python3 tools/gen-launcher-table.py --check               # совпадает ли лежащая

В дереве лежит таблица выпуска dev. Настоящий тег выпуска подставляет
publish.yml перед выкладкой каталога: тот же прогон собирает и launcher'ы
под этим тегом, так что таблица не может сослаться на образ, которого нет.
"""
from __future__ import annotations

import argparse
import pathlib
import re
import sys

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
            sys.exit(f"{path}: версия {v!r} — не vX.Y.Z")
        out.append(v)
    if not out:
        sys.exit(f"{path}: ни одной версии")
    return out


def architectures(path: pathlib.Path = PLATFORMS) -> list[str]:
    """Под какие процессоры узлов собран образ — первая колонка platforms.txt."""
    out = []
    for line in path.read_text(encoding="utf-8").splitlines():
        if not line.strip() or line.startswith("#"):
            continue
        a = line.split()[0]
        if not ARCH.match(a):
            sys.exit(f"{path}: архитектура {a!r} — не имя вида amd64")
        out.append(a)
    if not out:
        sys.exit(f"{path}: ни одной архитектуры")
    return out


def render(release: str, registry: str, versions: list[str], archs: list[str]) -> str:
    if not RELEASE.match(release):
        sys.exit(f"выпуск {release!r} — нужен vX.Y.Z или dev")
    if not REGISTRY_RE.match(registry):
        sys.exit(f"реестр {registry!r} — нужен вид host/путь")
    lines = [
        "# Собрано marketplace/tools/gen-launcher-table.py из kubevirt/versions.txt.",
        "# Руками не править: check.py сверяет с источником, publish.yml пересобирает",
        "# под тег выпуска.",
        f"# release: {release}",
        f"# registry: {registry}",
        f"# arch: {' '.join(archs)}",
        "#",
        "# arch — процессоры узлов, под которые собран образ (kubevirt/platforms.txt).",
        "# На кластере с узлом другой архитектуры компонент launcher не трогает.",
        "#",
        "# версия KubeVirt   образ virt-launcher (семейство paleo, тот же дайджест, что -risc5-)",
    ]
    lines += [f"{v} {registry}/virt-launcher:{v}-paleo-{release}" for v in versions]
    return "\n".join(lines) + "\n"


def header(text: str, key: str) -> str | None:
    m = re.search(rf"^# {key}: (\S+)$", text, flags=re.M)
    return m.group(1) if m else None


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--release")
    ap.add_argument("--registry")
    ap.add_argument("--check", action="store_true",
                    help="сверить лежащую таблицу с kubevirt/versions.txt, ничего не писать")
    ap.add_argument("--out", default=str(TABLE))
    a = ap.parse_args()
    out = pathlib.Path(a.out)

    if a.check:
        have = out.read_text(encoding="utf-8") if out.is_file() else ""
        release = a.release or header(have, "release") or "?"
        registry = a.registry or header(have, "registry") or "?"
        want = render(release, registry, kubevirt_versions(), architectures())
        if have != want:
            sys.exit(f"{out} расходится с kubevirt/versions.txt или platforms.txt — make gen")
        print(f"таблица совпадает с kubevirt/versions.txt (выпуск {release})")
        return

    text = render(a.release or "dev", a.registry or REGISTRY, kubevirt_versions(), architectures())
    out.write_text(text, encoding="utf-8")
    print(f"записано {out}")


if __name__ == "__main__":
    main()
