#!/usr/bin/env python3
"""Проверки каталога «Забытые системы».

Штатный валидатор Cozystack проверяет структуру репозитория и ссылки в
ApplicationDefinition. Он не знает про две вещи, которые для этого каталога
важны, и их проверяем здесь:

  * ссылки на артефакты внутри метаприложения (родительский чарт рендерит
    HelmRelease на компоненты того же репозитория — если имя разъедется,
    метаприложение молча поставит пустоту);
  * описания приложений в каталоге, собранные генератором, — не отстали ли они
    от схем чартов.

Каждая проверка, которая что-то утверждает, сопровождается мутацией: мы ломаем
проверяемое и убеждаемся, что проверка падает. Проверка, которая не умеет
провалиться, ничего не проверяет.
"""
from __future__ import annotations

import copy
import json
import os
import pathlib
import re
import shutil
import subprocess
import sys
import tempfile

import yaml

ROOT = pathlib.Path(__file__).resolve().parent.parent
COZYPKG = shutil.which("cozypkg") or "/tmp/cozypkg"
REPOS = ["machines", "languages", "images", "platform"]

ok_count = 0
fail_count = 0


def report(passed: bool, text: str) -> None:
    global ok_count, fail_count
    if passed:
        ok_count += 1
        print(f"  ✅ {text}")
    else:
        fail_count += 1
        print(f"  ❌ {text}")


def run(args: list[str], cwd: pathlib.Path | None = None) -> subprocess.CompletedProcess:
    return subprocess.run(args, cwd=cwd or ROOT, capture_output=True, text=True)


def artifact_name(ps: str, variant: str, component: str) -> str:
    part = lambda s: s.replace(".", "-")
    return f"{part(ps)}-{part(variant)}-{part(component)}"


def load_source(repo: str) -> dict:
    files = list((ROOT / "repos" / repo / "packages" / "sources").glob("*.yaml"))
    assert len(files) == 1, f"{repo}: ожидался ровно один файл источника"
    return yaml.safe_load(files[0].read_text(encoding="utf-8"))


def declared_artifacts(repo: str) -> set[str]:
    src = load_source(repo)
    name = src["metadata"]["name"]
    out = set()
    for variant in src["spec"]["variants"]:
        for comp in variant["components"]:
            out.add(artifact_name(name, variant["name"], comp["name"]))
    return out


# ─── 1. Метаиндекс ──────────────────────────────────────────────────────────
def check_index() -> None:
    print("\nМетаиндекс")
    r = run([COZYPKG, "search", "--index", "index"])
    entries = [l for l in r.stdout.splitlines()[1:] if l.strip()]
    files = len(list((ROOT / "index").glob("*.yaml")))
    report(r.returncode == 0 and len(entries) == files,
           f"cozypkg читает индекс, записей: {len(entries)} из {files}")

    # Мутация: индекс разбирается строго, лишнее поле должно ломать разбор.
    victim = ROOT / "index" / "paleocomputing-images.yaml"
    original = victim.read_text(encoding="utf-8")
    try:
        victim.write_text(original + "kind: Image\n", encoding="utf-8")
        bad = run([COZYPKG, "search", "--index", "index"])
        report(bad.returncode != 0 or "unknown field" in (bad.stdout + bad.stderr),
               "мутация: лишнее поле в записи индекса отвергается")
    finally:
        victim.write_text(original, encoding="utf-8")

    # Каждая запись должна нести тег, иначе её не найти: тип записи в этой
    # схеме выражается только тегами.
    for f in sorted((ROOT / "index").glob("*.yaml")):
        entry = yaml.safe_load(f.read_text(encoding="utf-8"))
        report(bool(entry.get("tags")), f"у записи {entry['name']} есть теги")


# ─── 2. Штатный валидатор ───────────────────────────────────────────────────
def check_validate() -> None:
    print("\nВалидатор Cozystack")
    for repo in REPOS:
        r = run([COZYPKG, "validate", f"repos/{repo}"])
        tail = r.stdout.strip().splitlines()[-1] if r.stdout.strip() else "(пусто)"
        errs = re.search(r"(\d+) error", tail)
        report(bool(errs) and errs.group(1) == "0", f"repos/{repo}: {tail}")

    # ⚠ Проверять надо и то, что реально уезжает в реестр. В артефакт попадает
    # ТОЛЬКО содержимое packages/, с отброшенной приставкой. Манифест источника
    # когда-то лежал рядом, в sources/, и молча терялся при публикации: дерево
    # исходников проходило проверку, а опубликованное — нет. Поймано только
    # круговым прогоном через настоящий реестр.
    for repo in REPOS:
        r = run([COZYPKG, "validate", f"repos/{repo}/packages"])
        tail = r.stdout.strip().splitlines()[-1] if r.stdout.strip() else "(пусто)"
        errs = re.search(r"(\d+) error", tail)
        report(bool(errs) and errs.group(1) == "0",
               f"repos/{repo} в опубликованной форме: {tail}")

    # Мутация: убрать манифест источника из packages/ — публикуемая форма
    # обязана перестать проходить.
    src = ROOT / "repos/machines/packages/sources/machines.yaml"
    moved = ROOT / "repos/machines/sources-moved-for-test.yaml"
    try:
        src.rename(moved)
        bad = run([COZYPKG, "validate", "repos/machines/packages"])
        report("no-packagesource" in bad.stdout,
               "мутация: манифест источника вне packages/ ломает публикуемую форму")
    finally:
        moved.rename(src)

    # Мутация: испортить ссылку на чарт — валидатор обязан заметить.
    victim = ROOT / "repos/machines/packages/system/machines-rd/cozyrds/oberon-lab.yaml"
    original = victim.read_text(encoding="utf-8")
    try:
        victim.write_text(
            original.replace("paleocomputing-machines-default-oberon-lab",
                             "nonsense-does-not-exist"),
            encoding="utf-8")
        bad = run([COZYPKG, "validate", "repos/machines"])
        report("appdef-dangling" in bad.stdout,
               "мутация: сломанная ссылка на чарт поймана валидатором")
    finally:
        victim.write_text(original, encoding="utf-8")

    # Привилегированный компонент обязан быть виден оператору.
    r = run([COZYPKG, "validate", "repos/images"])
    report("(privileged)" in r.stdout,
           "образы помечены привилегированными и валидатор об этом предупреждает")


# ─── 3. Описания каталога не отстали от чартов ──────────────────────────────
def check_generated() -> None:
    print("\nОписания приложений для каталога")
    for rd in sorted(ROOT.glob("repos/*/packages/system/*-rd")):
        if not (rd / "appdefs.yaml").is_file():
            continue
        before = {p.name: p.read_text(encoding="utf-8") for p in (rd / "cozyrds").glob("*.yaml")}
        r = run([sys.executable, "tools/gen-appdefs.py", str(rd)])
        after = {p.name: p.read_text(encoding="utf-8") for p in (rd / "cozyrds").glob("*.yaml")}
        report(r.returncode == 0 and before == after,
               f"{rd.relative_to(ROOT)}: сгенерированное совпадает с лежащим в дереве")

        # Схема в каталоге обязана быть ровно схемой чарта.
        spec = yaml.safe_load((rd / "appdefs.yaml").read_text(encoding="utf-8"))
        packages = rd.parents[1]
        for app in spec["apps"]:
            doc = yaml.safe_load((rd / "cozyrds" / f"{app['component']}.yaml").read_text(encoding="utf-8"))
            in_catalog = json.loads(doc["spec"]["application"]["openAPISchema"])
            in_chart = json.loads((packages / app["chartPath"] / "values.schema.json")
                                  .read_text(encoding="utf-8"))
            report(in_catalog == in_chart,
                   f"{app['component']}: схема в каталоге совпадает со схемой чарта")


# ─── 4. Ссылки метаприложения (этого валидатор Cozystack не проверяет) ──────
def metaapp_refs(values_overrides: list[str] | None = None) -> set[str]:
    chart = ROOT / "repos/machines/packages/apps/workbench"
    args = ["helm", "template", "w", str(chart)] + (values_overrides or [])
    r = run(args)
    if r.returncode != 0:
        return set()
    refs = set()
    for doc in yaml.safe_load_all(r.stdout):
        if isinstance(doc, dict) and doc.get("kind") == "HelmRelease":
            ref = doc["spec"]["chartRef"]
            if ref.get("kind") == "ExternalArtifact":
                refs.add(ref["name"])
    return refs


def check_metaapp() -> None:
    print("\nМетаприложение")
    declared = declared_artifacts("machines")
    refs = metaapp_refs()
    report(len(refs) == 2, f"метаприложение заказывает {len(refs)} части")
    report(refs and refs <= declared,
           "все ссылки метаприложения ведут в компоненты этого же репозитория")

    # Мутация: сдвинуть приставку имени артефакта — ссылки обязаны «повиснуть».
    broken = metaapp_refs(["--set", "artifactPrefix=wrong-prefix"])
    report(broken and not (broken <= declared),
           "мутация: сдвинутая приставка делает ссылки висячими")

    # Окружение без единой части не имеет смысла.
    r = run(["helm", "template", "w", str(ROOT / "repos/machines/packages/apps/workbench"),
             "--set", "machine=false", "--set", "manual=false"])
    report(r.returncode != 0, "пустое окружение отвергается")


# ─── 5. Документация действительно доезжает читаемой ────────────────────────
def check_handbook() -> None:
    print("\nМетодичка")
    chart = ROOT / "repos/machines/packages/apps/handbook"
    body = "первая строка\nвторая строка\n<tag> & \"кавычки\"\n"
    pages = json.dumps([{"name": "p1", "title": "Глава <1>", "body": body}])
    r = run(["helm", "template", "h", str(chart), "--set-json", f"pages={pages}"])
    # ConfigMap теперь два — страницы и конфигурация nginx; берём нужный.
    cm = next((d for d in yaml.safe_load_all(r.stdout)
               if isinstance(d, dict) and d.get("kind") == "ConfigMap"
               and d["metadata"]["name"].endswith("-pages")), None)
    report(cm is not None, "страницы собираются в ConfigMap")
    if cm:
        page = cm["data"]["p1.html"]
        report("первая строка\nвторая строка" in page,
               "переносы строк пережили укладку в YAML")
        report("&lt;tag&gt;" in page and "&amp;" in page and "<tag>" not in page,
               "разметка в тексте экранирована, а не выполнена")
        report('<a href="p1.html">' in cm["data"]["index.html"],
               "оглавление ссылается на страницу")

    # Мутация: методичка без источника — ни образа, ни страниц.
    bad = run(["helm", "template", "h", str(chart)])
    report(bad.returncode != 0, "мутация: методичка без источника отвергается")


# ─── 6. Образы: коллизии с платформой ───────────────────────────────────────
def check_images() -> None:
    print("\nОбразы машин")
    chart = ROOT / "repos/images/packages/system/machine-images"
    imgs = json.dumps([{"name": "oberon-risc5", "url": "https://example.org/a.qcow2"}])
    r = run(["helm", "template", "mi", str(chart), "--set-json", f"images={imgs}"])
    names = [d["metadata"]["name"] for d in yaml.safe_load_all(r.stdout)
             if isinstance(d, dict) and d.get("kind") == "DataVolume"]
    report(names == ["vm-default-images-fs-oberon-risc5"],
           f"образ публикуется под именем с приставкой: {names}")
    ns = {d["metadata"]["namespace"] for d in yaml.safe_load_all(r.stdout)
          if isinstance(d, dict) and d.get("kind") == "DataVolume"}
    report(ns == {"cozy-public"}, "образ кладётся в общее пространство cozy-public")

    # Мутации: совпадение с платформой, дубль, пустая приставка.
    collide = json.dumps([{"name": "24.04", "url": "https://example.org/a"}])
    bad = run(["helm", "template", "mi", str(chart), "--set", "namePrefix=ubuntu-",
               "--set-json", f"images={collide}"])
    report("занято образом платформы" in (bad.stdout + bad.stderr),
           "мутация: совпадение с образом платформы поймано")
    dup = json.dumps([{"name": "d", "url": "https://e.org/a"},
                      {"name": "d", "url": "https://e.org/b"}])
    bad = run(["helm", "template", "mi", str(chart), "--set-json", f"images={dup}"])
    report("дважды" in (bad.stdout + bad.stderr), "мутация: дубль в списке пойман")


# ─── 7. Окружение для языка ─────────────────────────────────────────────────
def check_langpack() -> None:
    print("\nОкружение для языка")
    chart = ROOT / "repos/languages/packages/apps/langpack"
    base = ["helm", "template", "l", str(chart), "--set", "language=Oberon",
            "--set", "image=example/obc:1"]

    prog = json.dumps([{"path": "Hello.Mod", "content": "MODULE Hello;\nEND Hello.\n"}])
    r = run(base + ["--set-json", f"program={prog}"])
    kinds = {d["kind"] for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)}
    report(kinds == {"ConfigMap", "Job"},
           f"разовый прогон даёт задание и исходники: {sorted(kinds)}")

    r = run(base + ["--set", "mode=service", "--set", "host=l.example.org"])
    kinds = {d["kind"] for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)}
    report(kinds == {"Deployment", "Service", "Ingress"},
           f"постоянная среда даёт развёртывание и доступ: {sorted(kinds)}")

    # Исходники монтируются только на чтение, рабочий каталог — на запись.
    r = run(base + ["--set-json", f"program={prog}"])
    job = next(d for d in yaml.safe_load_all(r.stdout)
               if isinstance(d, dict) and d["kind"] == "Job")
    mounts = {m["mountPath"]: m.get("readOnly", False)
              for m in job["spec"]["template"]["spec"]["containers"][0]["volumeMounts"]}
    report(mounts.get("/src") is True and mounts.get("/work") is False,
           "исходники только на чтение, рабочий каталог на запись")

    # Мутации: каждая защита обязана сработать.
    report(run(base + ["--set", "host=h.example.org"]).returncode != 0,
           "мутация: внешнее имя у разового прогона отвергается")
    report(run(base + ["--set", "srcdir=/work", "--set-json", f"program={prog}"]).returncode != 0,
           "мутация: совпадение srcdir и workdir отвергается")
    report(run(base + ["--set", "mode=nonsense"]).returncode != 0,
           "мутация: неизвестный режим отвергается схемой")


# ─── 8. Схемы не должны закрывать корень ────────────────────────────────────
def check_schema_roots() -> None:
    print("\nСхемы значений")
    # ⚠ Найдено на живом кластере, не здесь. cozystack-engine подмешивает в
    # values приложения тенанта ключи _cluster и _namespace. Если корень схемы
    # закрыт (additionalProperties: false), Helm отвергает значения целиком и
    # приложение не разворачивается — при том что артефакт валиден, каталог
    # подключается и описания встают. Ни один чарт платформы корень не
    # закрывает; проверка держит это правило.
    schemas = sorted(ROOT.glob("repos/*/packages/*/*/values.schema.json"))
    report(len(schemas) >= 5, f"схем найдено: {len(schemas)}")
    for s in schemas:
        d = json.loads(s.read_text(encoding="utf-8"))
        report(d.get("additionalProperties") is not False,
               f"{s.parent.name}: корень схемы открыт для ключей движка")

    # Мутация: закрыть корень — проверка обязана покраснеть.
    victim = ROOT / "repos/machines/packages/apps/oberon-lab/values.schema.json"
    original = victim.read_text(encoding="utf-8")
    try:
        d = json.loads(original)
        d["additionalProperties"] = False
        victim.write_text(json.dumps(d, ensure_ascii=False, indent=2), encoding="utf-8")
        bad = json.loads(victim.read_text(encoding="utf-8"))
        report(bad.get("additionalProperties") is False,
               "мутация: закрытый корень отличим от открытого")
    finally:
        victim.write_text(original, encoding="utf-8")


# ─── 9. nginx не должен заводить воркер на каждое ядро узла ─────────────────
def check_nginx_workers() -> None:
    print("\nЧисло рабочих процессов nginx")
    # ⚠ Найдено на живом кластере. У стокового образа worker_processes стоит
    # auto, и nginx смотрит на ядра УЗЛА, а не на выделенный предел: на узле
    # с 96 ядрами это 96 процессов, они не влезают в отведённую память, и под
    # уходит в бесконечную перезагрузку. При этом HelmRelease успешен —
    # отказ виден только по состоянию пода.
    chart = ROOT / "repos/machines/packages/apps/handbook"
    pages = json.dumps([{"name": "p", "title": "П", "body": "т"}])
    r = run(["helm", "template", "h", str(chart), "--set-json", f"pages={pages}"])
    docs = [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)]

    cm = next((d for d in docs if d.get("kind") == "ConfigMap"
               and d["metadata"]["name"].endswith("-nginx")), None)
    report(cm is not None, "методичка подкладывает свою конфигурацию nginx")
    if cm:
        report("worker_processes 1;" in cm["data"]["nginx.conf"],
               "в ней число воркеров прибито, а не auto")

    dep = next((d for d in docs if d.get("kind") == "Deployment"), None)
    mounts = dep["spec"]["template"]["spec"]["containers"][0]["volumeMounts"] if dep else []
    report(any(m.get("subPath") == "nginx.conf" for m in mounts),
           "конфигурация примонтирована поверх штатной")

    # Наш собственный образ раздачи собран на том же nginx — там тот же риск.
    cf = (ROOT.parent / "impl/deploy/Containerfile.web").read_text(encoding="utf-8")
    report("worker_processes 1;" in cf,
           "наш образ раздачи тоже прибивает число воркеров")



def check_components_declared_twice():
    """Каждое приложение объявляется В ДВУХ местах, и забыть одно легко.

    `appdefs.yaml` говорит, что показать в каталоге. `sources/*.yaml` говорит,
    что выложить артефактом. Приложение, объявленное только в первом, видно в
    каталоге и ставится — а разворачиваться ему не из чего:

        could not get Source object: ExternalArtifact ... not found

    Поймано ровно так: `oberon-vm` появился в каталоге тенанта и не поднялся.
    """
    for repo in sorted(ROOT.glob("repos/*")):
        src = next(iter((repo / "packages/sources").glob("*.yaml")), None)
        rds = list((repo / "packages/system").glob("*-rd/appdefs.yaml"))
        if not src or not rds:
            continue
        declared = set()
        for v in yaml.safe_load(src.read_text(encoding="utf-8"))["spec"]["variants"]:
            declared |= {c["name"] for c in v.get("components", [])}
        for rd in rds:
            spec = yaml.safe_load(rd.read_text(encoding="utf-8"))
            for app in spec["apps"]:
                name = app["component"]
                report(name in declared,
                       f"{repo.name}: {name} объявлен и в каталоге, и в источнике")


HOOK_LINE = re.compile(r'"?helm\.sh/hook"?\s*:\s*"?([^"\n]+)')


def upgrade_hook_kinds(text: str) -> list[str]:
    """Какие ресурсы шаблона объявлены хуком обновления (pre/post-upgrade)."""
    found = []
    for doc in re.split(r"^---\s*$", text, flags=re.M):
        m = HOOK_LINE.search(doc)
        kind = re.search(r"^kind:\s*(\S+)", doc, flags=re.M)
        if m and kind and "upgrade" in m.group(1):
            found.append(kind.group(1))
    return found


def check_no_volume_upgrade_hooks() -> None:
    """Том не может быть хуком обновления.

    Без явной политики удаления Helm применяет к хуку before-hook-creation:
    на каждом обновлении удаляет ресурс и создаёт заново. Том занят
    работающей машиной, зависает в Terminating, обновление висит до
    таймаута. Поймано первым обновлением каталога поверх живых машин в
    песочнице. Шаблоны машин живут в библиотеке — смотрим и туда.
    """
    tpls = sorted(ROOT.glob("repos/*/packages/apps/*/templates/*.yaml")) + \
        sorted(ROOT.glob("repos/*/packages/library/*/templates/*.tpl"))
    bad_tpls = [str(t.relative_to(ROOT / "repos")) for t in tpls
                if "PersistentVolumeClaim" in upgrade_hook_kinds(t.read_text(encoding="utf-8"))]
    report(not bad_tpls,
           f"ни один том не пересоздаётся при обновлении ({len(tpls)} шаблонов)"
           + (f": {', '.join(bad_tpls)}" if bad_tpls else ""))
    # Отрицательный контроль: проверка обязана узнать ту самую ошибку.
    bad = ('kind: PersistentVolumeClaim\nmetadata:\n  annotations:\n'
           '    "helm.sh/hook": pre-install,pre-upgrade\n')
    report("PersistentVolumeClaim" in upgrade_hook_kinds(bad),
           "отрицательный контроль: том-хук обновления распознаётся")


def _hook_set(doc: dict, key: str) -> set[str]:
    ann = (doc.get("metadata") or {}).get("annotations") or {}
    return {p.strip() for p in str(ann.get(key, "")).split(",") if p.strip()}


# ─── Машины по паспортам (library/retro-machine) ────────────────────────────
#
# Машина каталога — паспорт machine.yaml и форма; шаблоны и перехватчик общие.
# Здесь проверяется то, что при добавлении машины легко испортить данными, и
# то, что прежняя схема (том и наполнение хуками pre-install, голый VMI,
# уборка post-delete с правами и меткой выхода к API) ломала на живом
# кластере. Находка 64.

LIBRARY = ROOT / "repos/machines/packages/library/retro-machine"
MACHINE_SCHEMA = LIBRARY / "machine.schema.json"
MACHINE_ANNOTATION = "paleocomputing.io/machine"
HOOK_SRC = ROOT.parent / "kubevirt/onDefineDomain.py"


def machine_charts() -> list[pathlib.Path]:
    return sorted(p.parent for p in ROOT.glob("repos/*/packages/apps/*/machine.yaml"))


def schema_errors(schema: pathlib.Path, doc: object) -> str | None:
    """Проверяет doc по JSON-схеме тем же валидатором, что Helm — values.

    Отдельной библиотеки jsonschema в окружении проверок может не быть, а
    helm есть всегда: временный чарт, у которого схема значений — наша
    схема, а значения — проверяемый документ.
    """
    with tempfile.TemporaryDirectory() as d:
        c = pathlib.Path(d)
        (c / "Chart.yaml").write_text("apiVersion: v2\nname: probe\nversion: 0.0.0\n", encoding="utf-8")
        (c / "values.schema.json").write_text(schema.read_text(encoding="utf-8"), encoding="utf-8")
        (c / "values.yaml").write_text(json.dumps(doc), encoding="utf-8")
        r = run(["helm", "template", "p", str(c)])
    return None if r.returncode == 0 else (r.stderr.strip().splitlines() or ["?"])[-1]


def render(chart: pathlib.Path, *overrides: str) -> tuple[list[dict], str]:
    args = ["helm", "template", "t", str(chart), "--namespace", "ns"]
    for o in overrides:
        args += ["--set", o]
    r = run(args)
    if r.returncode != 0:
        return [], r.stderr.strip()
    return [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)], ""


def fill_script(docs: list[dict]) -> str:
    job = next(d for d in docs if d["kind"] == "Job" and "-fill" in d["metadata"]["name"])
    return job["spec"]["template"]["spec"]["containers"][0]["args"][0]


def disk_overwrites(script: str, disks: list[str]) -> list[str]:
    """Строки задачи наполнения, которые могут переписать диск пользователя.

    Файл роли disk разрешено упоминать ровно в одной форме:
    `[ -s <путь> ] || put <источник> <путь>` — положить, только если его нет
    или он пуст. Любая другая строка с его путём — возможная перезапись.
    """
    guarded = re.compile(r"^\[ -s (\S+) \] \|\| put \S+ (\S+)$")
    bad = []
    for line in (l.strip() for l in script.splitlines()):
        for disk in disks:
            if disk not in line.split():
                continue
            m = guarded.match(line)
            if not (m and m.group(1) == disk and m.group(2) == disk):
                bad.append(line)
    return bad


def run_fill(script: str, base: str, files: list[dict], root: pathlib.Path) -> None:
    """Исполняет задачу наполнения на диске: пути тома и образа — во временных каталогах."""
    # Сначала пути в образе: они сами могут содержать имя каталога тома.
    s = script
    for f in files:
        s = s.replace(f" {f['from']} ", f" {root}/image/{f['name']} ")
    s = s.replace(f" {base}/", f" {root}/payload/")
    subprocess.run(["sh", "-c", s], check=True, capture_output=True)


def hook_leaks(docs: list[dict]) -> list[str]:
    """Ресурсы хуков, которые могут пережить удаление машины.

    Ресурсы хуков Helm при удалении релиза не трогает. Поэтому хуком может
    быть только задача, и только такая, чья жизнь ограничена при любом
    исходе: удачную удаляет Helm (hook-succeeded), неудачную или зависшую —
    Kubernetes (activeDeadlineSeconds доводит её до конца,
    ttlSecondsAfterFinished убирает). Том-хук — ровно то, что прежде
    оставалось в тенанте и требовало уборки с правами.
    """
    leaks = []
    for d in docs:
        if not _hook_set(d, "helm.sh/hook"):
            continue
        name = f"{d['kind']}/{d['metadata']['name']}"
        spec = d.get("spec") or {}
        if d["kind"] != "Job":
            leaks.append(f"{name}: хуком может быть только задача")
        elif "hook-succeeded" not in _hook_set(d, "helm.sh/hook-delete-policy"):
            leaks.append(f"{name}: нет hook-succeeded")
        elif not spec.get("activeDeadlineSeconds"):
            leaks.append(f"{name}: нет activeDeadlineSeconds")
        elif spec.get("ttlSecondsAfterFinished") is None:
            leaks.append(f"{name}: нет ttlSecondsAfterFinished")
    return leaks


def machine_problems(docs: list[dict], running: bool = True) -> list[str]:
    """Инварианты отрисованной машины, кроме наполнения и хуков."""
    out = []
    kinds = sorted(d["kind"] for d in docs)
    if kinds != ["ConfigMap", "Job", "PersistentVolumeClaim", "VirtualMachine"]:
        out.append(f"состав: {kinds}")
    vms = [d for d in docs if d["kind"] == "VirtualMachine"]
    if len(vms) != 1:
        return out + ["нет VirtualMachine"]
    vm = vms[0]
    want = "Always" if running else "Halted"
    if vm["spec"].get("runStrategy") != want or "running" in vm["spec"]:
        out.append(f"runStrategy {vm['spec'].get('runStrategy')} вместо {want}")
    for pvc in (d for d in docs if d["kind"] == "PersistentVolumeClaim"):
        if _hook_set(pvc, "helm.sh/hook"):
            out.append(f"том {pvc['metadata']['name']} — хук, а не ресурс релиза")
    ann = vm["spec"]["template"]["metadata"].get("annotations") or {}
    if "hooks.kubevirt.io/hookSidecars" not in ann:
        out.append("перехватчик не объявлен на шаблоне машины")
    return out


def gets_library(variant: dict, component: str) -> bool:
    """Получит ли компонент библиотеку retro-machine при сборке платформой."""
    libs = {(l.get("name") or pathlib.Path(l["path"]).name): l["path"] for l in variant.get("libraries", [])}
    comp = next((c for c in variant["components"] if c["name"] == component), {})
    return libs.get("retro-machine") == "library/retro-machine" and "retro-machine" in comp.get("libraries", [])


def render_as_published(chart: pathlib.Path, with_library: bool) -> subprocess.CompletedProcess:
    """Отрисовка чарта в том виде, в каком его соберёт платформа.

    flux push artifact отбрасывает символические ссылки (проверено
    `flux build artifact`: charts/ и files/ приезжают пустыми), а
    ArtifactGenerator кладёт библиотеку в charts/<имя> компонента, который её
    назвал (internal/operator/packagesource_reconciler.go).
    """
    with tempfile.TemporaryDirectory() as t:
        staged = pathlib.Path(t) / chart.name
        shutil.copytree(chart, staged, symlinks=True,
                        ignore=lambda d, names: [n for n in names if (pathlib.Path(d) / n).is_symlink()])
        if with_library:
            shutil.copytree(LIBRARY, staged / "charts/retro-machine")
        return run(["helm", "template", "t", str(staged), "--namespace", "ns"])


def form_problems(preset: dict, values: dict, vschema: dict) -> list[str]:
    """Расхождения формы приложения (values.yaml, values.schema.json) с паспортом.

    Форма — то, что тенант видит в дашборде; паспорт — то, что машина умеет.
    Вариант, которого нет в паспорте, отвергнет отрисовка; вариант паспорта,
    которого нет в форме, тенант не сможет выбрать.
    """
    out = []
    hw = vschema.get("hardware", {})
    if sorted(hw.get("enum", [])) != sorted(preset["variants"]):
        out.append(f"варианты формы {sorted(hw.get('enum', []))}")
    if not values.get("hardware") == hw.get("default") == preset["defaultVariant"]:
        out.append(f"вариант по умолчанию {values.get('hardware')}/{hw.get('default')}")
    if not values.get("memory") == vschema.get("memory", {}).get("default") == preset["memory"]["default"]:
        out.append(f"память по умолчанию {values.get('memory')}/{vschema.get('memory', {}).get('default')}")
    return out


def check_machines() -> None:
    print("\nМашины по паспортам")
    charts = machine_charts()
    report(bool(charts), f"машин с паспортом: {len(charts)} ({', '.join(c.name for c in charts)})")

    # ── Перехватчик: одна копия на все машины ──────────────────────────────
    lib_hook = LIBRARY / "files/onDefineDomain.py"
    same = HOOK_SRC.read_bytes() == lib_hook.read_bytes()
    report(same, "перехватчик в библиотеке совпадает с kubevirt/onDefineDomain.py")
    report(HOOK_SRC.read_bytes() + b"#" != lib_hook.read_bytes(),
           "отрицательный контроль: отличие в байт замечается")

    schema = MACHINE_SCHEMA
    source = load_source("machines")
    variant = source["spec"]["variants"][0]

    for chart in charts:
        name = chart.name
        preset = yaml.safe_load((chart / "machine.yaml").read_text(encoding="utf-8"))

        # Паспорт — по схеме. И схема не пропускает очевидной порчи.
        err = schema_errors(schema, preset)
        report(err is None, f"{name}: паспорт соответствует machine.schema.json" + (f": {err}" if err else ""))

        # Платформа кладёт библиотеку в чарт только если компонент её назвал.
        # В дереве её подставляет ссылка — собранное платформой обязано
        # совпасть с тем, что проверяется здесь.
        report(gets_library(variant, name),
               f"{name}: компонент источника получает библиотеку retro-machine")
        link = chart / "charts/retro-machine"
        report(link.is_symlink() and link.resolve() == LIBRARY.resolve(),
               f"{name}: charts/retro-machine в дереве — ссылка на библиотеку")

        # Форма приложения согласована с паспортом.
        values = yaml.safe_load((chart / "values.yaml").read_text(encoding="utf-8"))
        vschema = json.loads((chart / "values.schema.json").read_text(encoding="utf-8"))["properties"]
        probs = form_problems(preset, values, vschema)
        report(not probs, f"{name}: форма согласована с паспортом (варианты {sorted(preset['variants'])}, "
               f"умолчания {preset['defaultVariant']}, {preset['memory']['default']})"
               + (f": {'; '.join(probs)}" if probs else ""))

        # ── Отрисовка по умолчанию ─────────────────────────────────────────
        docs, err = render(chart)
        probs = machine_problems(docs) if docs else [err]
        report(not probs, f"{name}: VirtualMachine со стратегией Always, том — ресурс релиза"
               + (f": {'; '.join(probs)}" if probs else ""))
        if not docs:
            continue
        halted, err = render(chart, "running=false")
        probs = machine_problems(halted, running=False) if halted else [err]
        report(not probs, f"{name}: running=false — стратегия Halted" + (f": {'; '.join(probs)}" if probs else ""))
        job = next(d for d in halted if d["kind"] == "Job")
        report("affinity" not in job["spec"]["template"]["spec"],
               f"{name}: у остановленной машины задача наполнения не ждёт её пода")
        job = next(d for d in docs if d["kind"] == "Job")
        aff = job["spec"]["template"]["spec"].get("affinity", {}).get("podAffinity", {})
        # Мягко, не жёстко: под машины без файлов живёт секунды, и жёсткая
        # привязка не давала задаче встать вовсе (найдено в живом тенанте).
        pref = (aff.get("preferredDuringSchedulingIgnoredDuringExecution") or [{}])[0].get("podAffinityTerm", {})
        report(pref.get("topologyKey") == "kubernetes.io/hostname"
               and pref.get("labelSelector", {}).get("matchLabels", {}).get("kubevirt.io") == "virt-launcher"
               and not aff.get("requiredDuringSchedulingIgnoredDuringExecution"),
               f"{name}: наполнение предпочитает узел пода машины, но не обязано ждать его (том RWO)")

        leaks = hook_leaks(docs)
        report(not leaks, f"{name}: ресурсы хуков не переживают машину" + (f": {'; '.join(leaks)}" if leaks else ""))

        vm = next(d for d in docs if d["kind"] == "VirtualMachine")
        cm = next(d for d in docs if d["kind"] == "ConfigMap")
        report(cm["data"]["onDefineDomain"] == lib_hook.read_text(encoding="utf-8"),
               f"{name}: в ConfigMap уезжает перехватчик библиотеки байт в байт")

        # Паспорт в аннотации: JSON, по схеме, с выбранным вариантом.
        for hwv in sorted(preset["variants"]):
            d, _ = render(chart, f"hardware={hwv}")
            v = next(x for x in d if x["kind"] == "VirtualMachine") if d else vm
            raw = v["spec"]["template"]["metadata"]["annotations"].get(MACHINE_ANNOTATION, "")
            try:
                passport = json.loads(raw)
            except ValueError as e:
                report(False, f"{name}: hardware={hwv}: аннотация паспорта — не JSON: {e}")
                continue
            err = schema_errors(schema, passport)
            report(err is None and passport.get("variant") == hwv
                   and {k: passport[k] for k in preset} == preset,
                   f"{name}: hardware={hwv}: аннотация — паспорт по схеме с variant={passport.get('variant')}"
                   + (f": {err}" if err else ""))

        # ── Наполнение: прошивка всегда, диск пользователя — никогда ─────────
        script = fill_script(docs)
        base = preset["payload"]["path"].rstrip("/")
        disks = [f"{base}/{f['name']}" for f in preset["payload"]["files"] if f["role"] == "disk"]
        firmware = [f"{base}/{f['name']}" for f in preset["payload"]["files"] if f["role"] == "firmware"]
        over = disk_overwrites(script, disks)
        report(not over, f"{name}: задача наполнения не перезаписывает диск ({', '.join(disks)})"
               + (f": {over}" if over else ""))
        report(all(re.search(rf"^\s*put \S+ {re.escape(p)}$", script, re.M) for p in firmware),
               f"{name}: прошивку задача переписывает всегда ({', '.join(firmware)})")

        # То же — исполнением: второй прогон поверх изменённого диска его не
        # трогает, а прошивку обновляет.
        with tempfile.TemporaryDirectory() as t:
            root = pathlib.Path(t)
            (root / "payload").mkdir()
            (root / "image").mkdir()
            for f in preset["payload"]["files"]:
                (root / "image" / f["name"]).write_text("v1", encoding="utf-8")
            run_fill(script, base, preset["payload"]["files"], root)
            first = all((root / "payload" / f["name"]).read_text() == "v1" for f in preset["payload"]["files"])
            for f in preset["payload"]["files"]:
                (root / "image" / f["name"]).write_text("v2", encoding="utf-8")
                if f["role"] == "disk":
                    (root / "payload" / f["name"]).write_text("работа пользователя", encoding="utf-8")
            run_fill(script, base, preset["payload"]["files"], root)
            kept = all((root / "payload" / f["name"]).read_text(encoding="utf-8") ==
                       ("работа пользователя" if f["role"] == "disk" else "v2")
                       for f in preset["payload"]["files"])
            clean = not list((root / "payload").glob("*.tmp"))
        report(first and kept and clean,
               f"{name}: прогон наполнения — первый кладёт всё, повторный обновляет прошивку и не трогает диск")

        # ── Форма, которую собирает платформа ──────────────────────────────
        # flux push artifact отбрасывает ссылки, платформа кладёт библиотеку
        # в charts/ сама. Повторяем это и сравниваем с отрисовкой дерева.
        r = render_as_published(chart, with_library=True)
        tree = run(["helm", "template", "t", str(chart), "--namespace", "ns"])
        report(r.returncode == 0 and r.stdout == tree.stdout,
               f"{name}: собранное платформой (без ссылок, библиотека в charts/) рисуется так же")
        report(render_as_published(chart, with_library=False).returncode != 0,
               f"{name}: отрицательный контроль: без библиотеки в charts/ чарт не рисуется")

        # Память — в пределах паспорта.
        over_max, _ = render(chart, f"memory={int(preset['memory']['max'][:-2]) * 2}{preset['memory']['max'][-2:]}")
        report(not over_max, f"{name}: память больше предела паспорта отвергается")

    # ── Отрицательные контроли: каждая проверка обязана узнать поломку ─────
    if not charts:
        return
    chart = charts[0]
    preset = yaml.safe_load((chart / "machine.yaml").read_text(encoding="utf-8"))
    docs, _ = render(chart)

    for what, fn in [
        ("роль файла вне списка", lambda p: p["payload"]["files"][0].update(role="rom")),
        ("файл, не переданный эмулятору", lambda p: p["payload"]["files"][0].update(qemu=["-bios", "/x"])),
        ("лишнее поле паспорта", lambda p: p.update(arch="risc5")),
        ("нет вариантов железа", lambda p: p.update(variants={})),
        ("свойство варианта с запятой", lambda p: p["variants"].update(x={"a": "b,c=d"})),
    ]:
        p = copy.deepcopy(preset)
        fn(p)
        report(schema_errors(schema, p) is not None, f"отрицательный контроль: схема отвергает паспорт — {what}")

    base = preset["payload"]["path"].rstrip("/")
    disks = [f"{base}/{f['name']}" for f in preset["payload"]["files"] if f["role"] == "disk"]
    script = fill_script(docs)
    unguarded = re.sub(r"^(\s*)\[ -s \S+ \] \|\| ", r"\1", script, flags=re.M)
    report(bool(disk_overwrites(unguarded, disks)),
           "отрицательный контроль: наполнение без защиты диска распознаётся")
    report(bool(disk_overwrites(script + f"\ncp /x {disks[0]}\n", disks)),
           "отрицательный контроль: лишняя запись в диск распознаётся")
    with tempfile.TemporaryDirectory() as t:
        root = pathlib.Path(t)
        (root / "payload").mkdir()
        (root / "image").mkdir()
        for f in preset["payload"]["files"]:
            (root / "image" / f["name"]).write_text("v2", encoding="utf-8")
            (root / "payload" / f["name"]).write_text("работа пользователя", encoding="utf-8")
        run_fill(unguarded, base, preset["payload"]["files"], root)
        lost = any((root / "payload" / f["name"]).read_text(encoding="utf-8") != "работа пользователя"
                   for f in preset["payload"]["files"] if f["role"] == "disk")
    report(lost, "отрицательный контроль: прогон без защиты действительно затирает диск")

    def mutated(fn) -> list[dict]:
        d = copy.deepcopy(docs)
        for x in d:
            fn(x)
        return d

    def pvc_hook(x):
        if x["kind"] == "PersistentVolumeClaim":
            x["metadata"].setdefault("annotations", {})["helm.sh/hook"] = "pre-install"

    # Задача наполнения — обычный ресурс релиза; чтобы проверить, что утечку
    # хука ловят, сначала делаем её хуком, потом портим.
    def as_hook(x):
        x["metadata"].setdefault("annotations", {}).update({
            "helm.sh/hook": "post-install,post-upgrade",
            "helm.sh/hook-delete-policy": "before-hook-creation,hook-succeeded"})

    def job_no(key):
        def f(x):
            if x["kind"] == "Job":
                as_hook(x)
                x["spec"].pop(key, None)
        return f

    def job_keeps(x):
        if x["kind"] == "Job":
            as_hook(x)
            x["metadata"]["annotations"]["helm.sh/hook-delete-policy"] = "before-hook-creation"

    for fn, what in [(pvc_hook, "том-хук"), (job_no("activeDeadlineSeconds"), "задача без срока"),
                     (job_no("ttlSecondsAfterFinished"), "задача без срока жизни"),
                     (job_keeps, "задача без hook-succeeded")]:
        report(bool(hook_leaks(mutated(fn))), f"отрицательный контроль: утечка хука распознаётся — {what}")
    report(bool(machine_problems(mutated(pvc_hook))), "отрицательный контроль: том-хук вместо ресурса распознаётся")

    def bare_vmi(x):
        if x["kind"] == "VirtualMachine":
            x["kind"] = "VirtualMachineInstance"
    report(bool(machine_problems(mutated(bare_vmi))), "отрицательный контроль: голый VMI вместо VirtualMachine распознаётся")

    def old_running(x):
        if x["kind"] == "VirtualMachine":
            x["spec"].pop("runStrategy")
            x["spec"]["running"] = True
    report(bool(machine_problems(mutated(old_running))), "отрицательный контроль: машина без runStrategy распознаётся")

    variant = copy.deepcopy(load_source("machines")["spec"]["variants"][0])
    for c in variant["components"]:
        c.pop("libraries", None)
    report(not gets_library(variant, chart.name),
           "отрицательный контроль: компонент без libraries библиотеку не получит")

    values = yaml.safe_load((chart / "values.yaml").read_text(encoding="utf-8"))
    vschema = json.loads((chart / "values.schema.json").read_text(encoding="utf-8"))["properties"]
    bad = copy.deepcopy(preset)
    bad["variants"]["extra"] = {}
    report(bool(form_problems(bad, values, vschema)),
           "отрицательный контроль: вариант паспорта, которого нет в форме, замечается")
    bad = copy.deepcopy(preset)
    bad["memory"]["default"] = "256Mi"
    report(bool(form_problems(bad, values, vschema)),
           "отрицательный контроль: разные умолчания памяти в форме и паспорте замечаются")


APISERVER_LABEL = "policy.cozystack.io/allow-to-apiserver"


def pods_without_apiserver_egress(docs: list[dict]) -> list[str]:
    """Поды со своим ServiceAccount, которым не открыт путь к kube-apiserver."""
    bad = []
    for d in docs:
        tpl = (d.get("spec") or {}).get("template") or {}
        pod = tpl.get("spec") or {}
        sa = pod.get("serviceAccountName")
        if not sa or sa == "default":
            continue
        labels = (tpl.get("metadata") or {}).get("labels") or {}
        if str(labels.get(APISERVER_LABEL)) != "true":
            bad.append(f"{d.get('kind')}/{d['metadata']['name']}")
    return bad


def check_apiserver_egress() -> None:
    """Под, которому выдан доступ к API, должен до API и доехать.

    В тенанте Cozystack до kube-apiserver пускают только поды с меткой
    policy.cozystack.io/allow-to-apiserver=true (политика allow-to-apiserver),
    остальных Cilium молча отбрасывает. Задача уборки тома висела до
    таймаута, удаление приложения падало — и ни helm template, ни прогон
    на столе этого не показывали. Свой ServiceAccount у пода — признак, что
    он собирается ходить в API: значит, метка обязательна.
    """
    print("\nДоступ к API из тенанта")
    for chart in sorted({t.parent.parent for t in ROOT.glob("repos/*/packages/apps/*/templates/*.yaml")}):
        r = run(["helm", "template", "t", str(chart), "--namespace", "ns"])
        if r.returncode != 0:
            continue  # чарты с обязательными значениями проверяются своими проверками
        docs = [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)]
        bad = pods_without_apiserver_egress(docs)
        report(not bad, f"{chart.name}: поды с доступом к API помечены для выхода к нему"
               + (f": {', '.join(bad)}" if bad else ""))
    # Отрицательный контроль: под со своим ServiceAccount и без метки.
    probe = [{"kind": "Job", "metadata": {"name": "probe"},
              "spec": {"template": {"metadata": {"labels": {}},
                                    "spec": {"serviceAccountName": "probe"}}}}]
    report(pods_without_apiserver_egress(probe) == ["Job/probe"],
           "отрицательный контроль: под без метки выхода к API распознаётся")


def check_platform_launcher() -> None:
    """Компонент платформы: таблица launcher'ов и логика прохода.

    Таблица собирается из kubevirt/versions.txt и не правится руками — сверяем.
    Логику прохода гоняем на поддельном kubectl (launcher_test.py): добавить,
    не трогать, убрать, сохранить чужие правки, отказать при сомнении.
    """
    print("\nКомпонент платформы")
    r = run([sys.executable, str(ROOT / "tools/gen-launcher-table.py"), "--check"])
    report(r.returncode == 0, "таблица launcher'ов совпадает с kubevirt/versions.txt"
           + ("" if r.returncode == 0 else f": {(r.stdout + r.stderr).strip()}"))
    r = run([sys.executable, str(ROOT / "tools/launcher_test.py")])
    tail = (r.stdout.strip().splitlines() or ["—"])[-1]
    report(r.returncode == 0, f"проход реконсайлера на поддельном API: {tail}")


def artifact_missing(repo_dir: pathlib.Path, art_src: pathlib.Path) -> list[str]:
    """Файлы, достижимые в дереве репозитория по ссылкам, которых нет в артефакте."""
    want = set()
    for dp, _, fs in os.walk(repo_dir / "packages", followlinks=True):
        for f in fs:
            want.add(str((pathlib.Path(dp) / f).relative_to(repo_dir)))
    with tempfile.TemporaryDirectory() as t:
        art = pathlib.Path(t) / "a.tgz"
        r = run(["flux", "build", "artifact", "--path", str(art_src), "--output", str(art)])
        if r.returncode != 0:
            return [f"flux build artifact упал: {r.stderr.strip()}"]
        import tarfile
        with tarfile.open(art) as tf:
            have = {m.name for m in tf.getmembers() if m.isfile()}
    return sorted(want - have)


def check_artifact_contents() -> None:
    """В кластер уезжает всё, что видит чарт, — в том числе через ссылки.

    Библиотека машин подключена ссылкой, а flux ссылки в архив не кладёт.
    Публикуется копия stage.sh с разыменованными ссылками; здесь та же копия
    собирается в артефакт тем же flux, и в нём обязан оказаться каждый файл,
    который видно в дереве.
    """
    print("\nСодержимое артефакта каталога")
    if not shutil.which("flux"):
        report(False, "flux не найден — артефакт собрать нечем")
        return
    with tempfile.TemporaryDirectory() as t:
        stage = pathlib.Path(t)
        r = run(["sh", str(ROOT / "tools/stage.sh"), str(stage)])
        report(r.returncode == 0, "копия каталога без ссылок собрана")
        for repo in REPOS:
            lost = artifact_missing(ROOT / "repos" / repo, stage / repo)
            report(not lost, f"{repo}: в артефакте все файлы дерева"
                   + (f" — нет: {', '.join(lost[:5])}" if lost else ""))
    # Отрицательный контроль: артефакт прямо из дерева, со ссылками.
    lost = artifact_missing(ROOT / "repos" / "machines", ROOT / "repos" / "machines")
    report(any("retro-machine" in l or "onDefineDomain" in l for l in lost),
           "отрицательный контроль: без копии библиотека машин из артефакта пропадает")


def fill_is_blocking_hook(docs: list[dict]) -> bool:
    """Задача наполнения — хук post-install/upgrade рядом с машиной."""
    for d in docs:
        if d.get("kind") == "Job" and "-fill" in d["metadata"]["name"]:
            hook = ((d["metadata"].get("annotations") or {}).get("helm.sh/hook") or "")
            if "post-install" in hook or "post-upgrade" in hook:
                return any(x.get("kind") == "VirtualMachine" for x in docs)
    return False


def check_fill_not_blocking() -> None:
    """Наполнение тома не может ждать готовности машины.

    Cozystack ставит релиз с ожиданием готовности, а хук post-install Helm
    запускает после неё. Машина не готова, пока том пуст, — задача-хук не
    появилась бы никогда. Поймано в живом тенанте.
    """
    print("\nНаполнение тома и готовность машины")
    for chart in sorted(ROOT.glob("repos/*/packages/apps/*")):
        if not (chart / "machine.yaml").exists():
            continue
        r = run(["helm", "template", "t", str(chart), "--namespace", "ns"])
        docs = [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)] if r.returncode == 0 else []
        report(bool(docs) and not fill_is_blocking_hook(docs),
               f"{chart.name}: наполнение — ресурс релиза, а не хук после готовности")
    probe = [{"kind": "VirtualMachine", "metadata": {"name": "m"}},
             {"kind": "Job", "metadata": {"name": "m-fill-x",
              "annotations": {"helm.sh/hook": "post-install,post-upgrade"}}}]
    report(fill_is_blocking_hook(probe),
           "отрицательный контроль: наполнение-хук рядом с машиной распознаётся")


def main() -> None:
    print("Проверки каталога «Забытые системы»")
    check_index()
    check_validate()
    check_generated()
    check_metaapp()
    check_handbook()
    check_images()
    check_langpack()
    check_schema_roots()
    check_nginx_workers()
    check_components_declared_twice()
    check_no_volume_upgrade_hooks()
    check_apiserver_egress()
    check_platform_launcher()
    check_machines()
    check_fill_not_blocking()
    check_artifact_contents()
    print(f"\nИтог: успешно {ok_count}, провалено {fail_count}")
    sys.exit(1 if fail_count else 0)


if __name__ == "__main__":
    main()
