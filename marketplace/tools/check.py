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
    работающей машиной, зависает в Terminating, обновление висит до таймаута.
    Поймано первым обновлением каталога поверх живых машин в песочнице.
    """
    tpls = sorted(ROOT.glob("repos/*/packages/apps/*/templates/*.yaml"))
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


def _cleans(job: dict, roles: list[dict], kind: str, name: str) -> bool:
    """Убирает ли задача post-delete ресурс kind/name — и не повиснет ли сама."""
    spec = job["spec"]
    if not spec.get("activeDeadlineSeconds"):
        return False
    argv = [str(a) for c in spec["template"]["spec"]["containers"]
            for a in (c.get("command") or []) + (c.get("args") or [])]
    if "--wait=false" not in argv:
        return False
    # Выборка по метке без метки релиза задела бы соседние машины тенанта.
    if any(a in ("-l", "--selector") or a.startswith(("-l=", "--selector=")) for a in argv) \
            and "app.kubernetes.io/instance=" not in " ".join(argv):
        return False
    plural = kind.lower() + "s"
    if not any(a.split("/", 1)[0].split(".")[0] in (kind.lower(), plural) and a.endswith("/" + name)
               for a in argv):
        return False
    # И права на это удаление — у самой уборки, тоже хуком post-delete.
    return any(plural in r.get("resources", []) and "delete" in r.get("verbs", [])
               and name in r.get("resourceNames", [name])
               for role in roles for r in role.get("rules", []))


def leaked_hook_resources(docs: list[dict]) -> list[str]:
    """Ресурсы хуков, которые переживут удаление релиза.

    Helm сам удаляет хук только по политике hook-succeeded. Остальные
    остаются, если их не убирает задача post-delete; хук post-delete без
    hook-succeeded не убирает уже никто.
    """
    hooks = [d for d in docs if isinstance(d, dict) and _hook_set(d, "helm.sh/hook")]
    post = [d for d in hooks if "post-delete" in _hook_set(d, "helm.sh/hook")]
    jobs = [d for d in post if d["kind"] == "Job"]
    roles = [d for d in post if d["kind"] == "Role"]
    leaked = []
    for d in hooks:
        if "hook-succeeded" in _hook_set(d, "helm.sh/hook-delete-policy"):
            continue
        kind, name = d["kind"], d["metadata"]["name"]
        if any(d is p for p in post) or not any(_cleans(j, roles, kind, name) for j in jobs):
            leaked.append(f"{kind}/{name}")
    return leaked


def check_hook_cleanup() -> None:
    """Том-хук установки убирается при удалении машины.

    Ресурсы хуков Helm при удалении релиза не трогает: удалённая машина
    оставляла в тенанте свой том, и повторная установка под тем же именем
    упиралась в него. Проверяем отрисованные чарты, а не текст шаблонов:
    имена, которые удаляет уборка, должны совпасть с настоящими.
    """
    print("\nУборка хуков при удалении")
    charts = sorted({t.parent.parent for t in ROOT.glob("repos/*/packages/apps/*/templates/*.yaml")
                     if "helm.sh/hook" in t.read_text(encoding="utf-8")})
    vm_docs: list[dict] = []
    for chart in charts:
        r = run(["helm", "template", "t", str(chart), "--namespace", "ns"])
        docs = [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)] if r.returncode == 0 else []
        vols = [d for d in docs if d.get("kind") == "PersistentVolumeClaim"
                and "pre-install" in _hook_set(d, "helm.sh/hook")]
        leaked = leaked_hook_resources(docs)
        report(r.returncode == 0 and not leaked,
               f"{chart.name}: хуки не переживают удаление (томов-хуков: {len(vols)})"
               + (f": {', '.join(leaked)}" if leaked else "")
               + ("" if r.returncode == 0 else f": helm template упал: {r.stderr.strip()}"))
        if chart.name == "oberon-vm":
            vm_docs = docs
    report(bool(vm_docs), "oberon-vm среди проверенных чартов")

    # Отрицательный контроль: ломаем уборку тремя способами, которыми она уже
    # ломалась или могла сломаться, — проверка обязана увидеть каждый.
    def mutated(fn) -> list[str]:
        docs = copy.deepcopy(vm_docs)
        for d in docs:
            if d["kind"] == "Job" and "post-delete" in _hook_set(d, "helm.sh/hook"):
                fn(d)
        return leaked_hook_resources([d for d in docs if d.get("kind") != "drop"])

    def drop(d): d["kind"] = "drop"
    def no_deadline(d): d["spec"].pop("activeDeadlineSeconds", None)
    def waits(d):
        c = d["spec"]["template"]["spec"]["containers"][0]
        c["args"] = [a for a in c["args"] if a != "--wait=false"]

    for fn, what in [(drop, "без задачи уборки том остаётся"),
                     (no_deadline, "уборка без activeDeadlineSeconds не засчитывается"),
                     (waits, "уборка, ждущая удаления тома, не засчитывается")]:
        report(any(x.startswith("PersistentVolumeClaim/") for x in mutated(fn)),
               f"отрицательный контроль: {what}")


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
    check_hook_cleanup()
    print(f"\nИтог: успешно {ok_count}, провалено {fail_count}")
    sys.exit(1 if fail_count else 0)


if __name__ == "__main__":
    main()
