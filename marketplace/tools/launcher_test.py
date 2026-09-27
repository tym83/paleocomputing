#!/usr/bin/env python3
"""Проверка цикла kubevirt-paleo-launcher без кластера.

Сценарий files/reconcile.sh гоняется против поддельного kubectl: тот отдаёт
заготовленный JSON (ресурс KubeVirt, virt-controller, ConfigMap состояния),
а каждую запись записывает в журнал и применяет к своему состоянию — как
merge patch с предусловием на resourceVersion, как это делает API.

Каждый случай — утверждение о том, что пишется и чего НЕ пишется:
поддерживаемая версия добавляет правку; то, что уже верно, не пишется вовсе;
неподдерживаемая убирает свою правку; чужие правки сохраняются в том же
порядке; сомнительное и нечитаемое закрывает дверь; удаление убирает только
своё.

Нужны sh и jq (как в образе цикла).

    python3 marketplace/tools/launcher_test.py
"""
from __future__ import annotations

import copy
import json
import os
import pathlib
import shutil
import subprocess
import sys
import tempfile

HERE = pathlib.Path(__file__).resolve().parent
CHART = HERE.parent / "repos/platform/packages/system/kubevirt-paleo-launcher"
SCRIPT = CHART / "files/reconcile.sh"
TABLE = CHART / "files/launchers.txt"

# Образы берём из той же таблицы, что проверяем: при выпуске publish.yml
# пересобирает её под тег, и ожидания, зашитые под dev, валили проверку
# перед публикацией настоящего выпуска.
def _table_images() -> dict[str, str]:
    out = {}
    for line in TABLE.read_text(encoding="utf-8").splitlines():
        parts = line.split()
        if len(parts) == 2 and not line.startswith("#"):
            out[parts[0]] = parts[1]
    return out


IMG184 = _table_images()["v1.8.4"]
IMG190 = _table_images()["v1.9.0"]

# Правка, которую Cozystack main сам кладёт в ресурс KubeVirt (ресурсы
# virt-handler), — образец чужой записи, которую трогать нельзя.
HANDLER = {
    "resourceName": "virt-handler", "resourceType": "DaemonSet", "type": "strategic",
    "patch": '{"spec":{"template":{"spec":{"containers":[{"name":"virt-handler",'
             '"resources":{"requests":{"cpu":"100m","memory":"128Mi"}}}]}}}}\n',
}
# Прежняя ручная правка с сайта: весь список аргументов целиком.
MANUAL = {
    "resourceName": "virt-controller", "resourceType": "Deployment", "type": "json",
    "patch": json.dumps([{"op": "replace", "path": "/spec/template/spec/containers/0/args",
                          "value": ["--launcher-image", "ghcr.io/x/virt-launcher:v1.8.4-risc5-v0.1.10",
                                    "--exporter-image", "quay.io/kubevirt/virt-exportserver:v1.8.4",
                                    "--port", "8443", "-v", "2"]}]),
}

FAKE_KUBECTL = r'''#!/usr/bin/env python3
import json, os, pathlib, sys
S = pathlib.Path(os.environ["FAKE_STATE"])
argv = sys.argv[1:]
with open(S / "calls.log", "a") as f:
    f.write(json.dumps(argv) + "\n")
if argv[:1] == ["-n"]:
    argv = argv[2:]

def merge(dst, patch):
    if not isinstance(patch, dict):
        return patch
    dst = dict(dst) if isinstance(dst, dict) else {}
    for k, v in patch.items():
        if v is None:
            dst.pop(k, None)
        else:
            dst[k] = merge(dst.get(k), v)
    return dst

def record(kind, body):
    with open(S / "writes.log", "a") as f:
        f.write(json.dumps({"kind": kind, "body": body}) + "\n")

FILES = {"kubevirt": "kubevirt.json", "deployment": "virt-controller.json", "configmap": "status.json"}
verb = argv[0]
if verb == "get" and argv[1] in FILES:
    if (S / ("fail-get-" + argv[1])).exists():
        sys.stderr.write("Unable to connect to the server\n"); sys.exit(1)
    p = S / FILES[argv[1]]
    if not p.exists():
        if "--ignore-not-found" in argv:
            sys.exit(0)
        sys.stderr.write("Error from server (NotFound)\n"); sys.exit(1)
    sys.stdout.write(p.read_text()); sys.exit(0)
if verb == "get" and argv[1] == "pods":
    p = S / "pods"
    sys.stdout.write(p.read_text() if p.exists() else ""); sys.exit(0)
if verb == "patch" and argv[1] in ("kubevirt", "configmap"):
    body = json.loads(argv[argv.index("-p") + 1])
    assert "--type=merge" in argv
    record(argv[1], body)
    if argv[1] == "kubevirt" and (S / "conflict").exists():
        (S / "conflict").unlink()
        sys.stderr.write("Error from server (Conflict): the object has been modified\n"); sys.exit(1)
    p = S / FILES[argv[1]]
    cur = json.loads(p.read_text())
    rv = (body.get("metadata") or {}).get("resourceVersion")
    if rv is not None and rv != cur["metadata"].get("resourceVersion"):
        sys.stderr.write("Error from server (Conflict)\n"); sys.exit(1)
    new = merge(cur, body)
    new["metadata"]["resourceVersion"] = str(int(cur["metadata"].get("resourceVersion", "1")) + 1)
    p.write_text(json.dumps(new)); sys.exit(0)
if verb == "create":
    record("event", json.loads(sys.stdin.read())); sys.exit(0)
if verb == "scale":
    record("scale", argv); sys.exit(0)
sys.stderr.write("fake kubectl: не знаю " + " ".join(argv) + "\n"); sys.exit(3)
'''

ok = fail = 0


def report(passed: bool, text: str) -> None:
    global ok, fail
    ok, fail = ok + bool(passed), fail + (not passed)
    print(f"  {'✅' if passed else '❌'} {text}")


def ours(img: str) -> dict:
    """Запись, которую цикл обязан поставить, — ровно в его форме."""
    ops = [{"op": "test", "path": "/spec/template/spec/containers/0/name", "value": "virt-controller"},
           {"op": "test", "path": "/spec/template/spec/containers/0/args/0", "value": "--launcher-image"},
           {"op": "replace", "path": "/spec/template/spec/containers/0/args/1", "value": img}]
    return {"resourceName": "virt-controller", "resourceType": "Deployment", "type": "json",
            "patch": json.dumps(ops, separators=(",", ":"))}


def kubevirt(version="v1.8.4", target=None, patches=None, status=True):
    kv = {"apiVersion": "kubevirt.io/v1", "kind": "KubeVirt",
          "metadata": {"name": "kubevirt", "namespace": "cozy-kubevirt",
                       "uid": "11111111-2222-3333-4444-555555555555", "resourceVersion": "100"},
          "spec": {"customizeComponents": {} if patches is None else {"patches": patches}}}
    if status:
        kv["status"] = {"phase": "Deployed", "observedKubeVirtVersion": version,
                        "targetKubeVirtVersion": target or version}
    return kv


def controller(version="v1.8.4", launcher=None, args0="--launcher-image", rolled=True):
    launcher = launcher or f"quay.io/kubevirt/virt-launcher:{version}"
    st = {"observedGeneration": 5, "replicas": 2, "updatedReplicas": 2, "readyReplicas": 2} if rolled \
        else {"observedGeneration": 5, "replicas": 3, "updatedReplicas": 1, "readyReplicas": 2}
    return {"metadata": {"name": "virt-controller", "generation": 5,
                         "annotations": {"kubevirt.io/install-strategy-version": version}},
            "spec": {"replicas": 2, "template": {"spec": {"containers": [{
                "name": "virt-controller", "image": f"quay.io/kubevirt/virt-controller:{version}",
                "args": [args0, launcher, "--exporter-image",
                         f"quay.io/kubevirt/virt-exportserver:{version}", "--port", "8443", "-v", "2"]}]}}},
            "status": st}


class Cluster:
    def __init__(self, root: pathlib.Path, kv: dict | None, vc: dict | None, status: dict | None = None):
        self.s = root
        root.mkdir(parents=True)
        self.kubectl = root / "kubectl"
        self.kubectl.write_text(FAKE_KUBECTL)
        self.kubectl.chmod(0o755)
        if kv is not None:
            self.put("kubevirt.json", kv)
        if vc is not None:
            self.put("virt-controller.json", vc)
        self.put("status.json", status or {"metadata": {"name": "kubevirt-paleo-launcher-status",
                                                        "resourceVersion": "1"}})

    def put(self, name: str, obj) -> None:
        (self.s / name).write_text(json.dumps(obj))

    def get(self, name: str):
        return json.loads((self.s / name).read_text())

    def run(self, mode="once", table=TABLE, **env):
        (self.s / "writes.log").write_text("")
        e = dict(os.environ, KUBECTL=str(self.kubectl), FAKE_STATE=str(self.s),
                 LAUNCHER_TABLE=str(table), KUBEVIRT_NAMESPACE="cozy-kubevirt",
                 STATUS_CONFIGMAP="kubevirt-paleo-launcher-status", **env)
        r = subprocess.run(["sh", str(SCRIPT), mode], env=e, capture_output=True, text=True, timeout=60)
        self.out = r.stdout + r.stderr
        self.rc = r.returncode
        return self

    def writes(self, kind=None) -> list:
        lines = [json.loads(l) for l in (self.s / "writes.log").read_text().splitlines() if l.strip()]
        return [w for w in lines if kind is None or w["kind"] == kind]

    def patches(self):
        return self.get("kubevirt.json")["spec"].get("customizeComponents", {}).get("patches")

    def roll_out(self, img: str) -> None:
        """Что сделал бы virt-operator: перекатить virt-controller на новый образ."""
        vc = self.get("virt-controller.json")
        vc["spec"]["template"]["spec"]["containers"][0]["args"][1] = img
        self.put("virt-controller.json", vc)

    def state(self):
        return self.get("status.json").get("data", {}).get("state")


def main() -> None:
    if not shutil.which("jq"):
        print("  ❌ нет jq — цикл без него не работает")
        sys.exit(1)
    print("Цикл kubevirt-paleo-launcher на поддельном kubectl")
    tmp = pathlib.Path(tempfile.mkdtemp())
    n = iter(range(1000))

    def cluster(kv, vc=None, **kw) -> Cluster:
        return Cluster(tmp / str(next(n)), kv, controller() if vc is None else vc, **kw)

    try:
        # 1. Поддерживаемая версия, правок нет → одна запись, наша, с предусловием.
        c = cluster(kubevirt(patches=None)).run()
        w = c.writes("kubevirt")
        report(c.rc == 0 and len(w) == 1 and c.patches() == [ours(IMG184)],
               "поддерживаемая версия: ставится ровно своя правка с образом этой версии")
        report(w and w[0]["body"]["metadata"].get("resourceVersion") == "100",
               "запись идёт с предусловием на resourceVersion")
        report(c.state() == "Applying" and any(x["body"]["reason"] == "LauncherApplying"
                                               for x in c.writes("event")),
               "состояние Applying в ConfigMap и событие на ресурсе KubeVirt")
        report("пересоздайте" in c.out, "в журнале — предупреждение про окно старого launcher (находка 58)")

        # 2. Уже верно → ни одной записи в ресурс KubeVirt.
        c.roll_out(IMG184)
        c.run()
        report(c.rc == 0 and not c.writes("kubevirt"), "правка уже стоит: ресурс KubeVirt не пишется")
        report(c.state() == "Applied", "после перекатки virt-controller состояние Applied")
        c.run()
        report(not c.writes(), "третий проход: не пишется вообще ничего, даже состояние")

        # 2б. Правка стоит, но virt-controller ещё не перекатился → Rolling, без записи.
        c = cluster(kubevirt(patches=[ours(IMG184)]), controller(rolled=False)).run()
        report(not c.writes("kubevirt") and c.state() == "Rolling",
               "правка стоит, перекатка не закончена: Rolling, без записи")

        # 3. Чужие правки сохраняются, своя встаёт в конец.
        c = cluster(kubevirt(patches=[HANDLER])).run()
        report(c.patches() == [HANDLER, ours(IMG184)], "чужая правка (virt-handler) сохранена, своя — в конце")

        # 4. Своя правка от прежней версии → меняется на месте, порядок прежний.
        c = cluster(kubevirt("v1.9.0", patches=[ours(IMG184), HANDLER]), controller("v1.9.0")).run()
        report(c.patches() == [ours(IMG190), HANDLER],
               "образ прежней версии заменён на месте, чужая правка не сдвинулась")

        # 4б. Своя правка дважды → остаётся одна.
        c = cluster(kubevirt(patches=[ours(IMG190), HANDLER, ours(IMG184)])).run()
        report(c.patches() == [ours(IMG184), HANDLER], "дубль своей правки схлопывается в одну")

        # 5. Неподдерживаемая версия → своя убрана, чужая осталась.
        c = cluster(kubevirt("v1.7.0", patches=[HANDLER, ours(IMG184)]), controller("v1.7.0")).run()
        report(c.patches() == [HANDLER] and c.state() == "Unsupported",
               "неподдерживаемая версия: своя правка убрана, чужая на месте, состояние Unsupported")
        report(any(x["body"]["type"] == "Warning" for x in c.writes("event")),
               "неподдерживаемая версия: предупреждающее событие")
        c = cluster(kubevirt("v1.7.0", patches=[ours(IMG184)]), controller("v1.7.0")).run()
        report(c.patches() is None and c.writes("kubevirt")[0]["body"]["spec"]["customizeComponents"]["patches"] is None,
               "своя правка была единственной: список убран целиком, а не оставлен пустым")
        c = cluster(kubevirt("v1.7.0", patches=[HANDLER]), controller("v1.7.0")).run()
        report(not c.writes("kubevirt"), "неподдерживаемая версия без своей правки: ничего не пишется")

        # 6. Сомнения: закрыто — своя правка не ставится, а стоящая убирается.
        c = cluster(kubevirt(status=False, patches=[HANDLER])).run()
        report(not c.writes("kubevirt") and c.state() == "Doubt",
               "нет status: правка не ставится, ничего не пишется")
        c = cluster(kubevirt(status=False, patches=[HANDLER, ours(IMG184)])).run()
        report(c.patches() == [HANDLER], "нет status, а своя правка стоит: убирается (штатный launcher)")
        c = cluster(kubevirt("v1.8", patches=None)).run()
        report(not c.writes("kubevirt"), "испорченная версия в status: ничего не ставится")
        c = cluster(kubevirt("v1.8.4", target="v1.9.0", patches=[ours(IMG184)])).run()
        report(c.patches() is None and "обновляется" in c.out,
               "KubeVirt посреди обновления: своя правка снята до его конца")
        c = cluster(kubevirt(patches=None), controller("v1.9.0")).run()
        report(not c.writes("kubevirt") and "virt-controller помечен" in c.out,
               "версия virt-controller расходится с KubeVirt: ничего не ставится")
        c = cluster(kubevirt(patches=None), controller(args0="--port")).run()
        report(not c.writes("kubevirt") and "args[0]" in c.out,
               "раскладка аргументов virt-controller другая: правка не ставится")
        kv = kubevirt(patches=None)
        kv["spec"]["customizeComponents"]["patches"] = {"not": "a list"}
        c = cluster(kv).run()
        report(not c.writes("kubevirt") and c.state() == "Unknown", "patches не список: ничего не пишется")
        c = cluster(kubevirt(patches=None)).run(table=tmp / "nonexistent")
        report(c.rc != 0 and not c.writes(), "нет таблицы версий: ни одной записи")
        bad = tmp / "bad-table.txt"
        bad.write_text("v1.8.4\n")
        c = cluster(kubevirt(patches=[ours(IMG184)])).run(table=bad)
        report(c.patches() is None and "таблица версий испорчена" in c.out,
               "испорченная таблица: своя правка снята, новая не ставится")

        # 7. Не прочитали → не пишем вообще.
        c = cluster(kubevirt(patches=[ours(IMG184)]))
        (c.s / "fail-get-kubevirt").write_text("")
        c.run()
        report(c.rc != 0 and not c.writes(), "ресурс KubeVirt не прочитан: ни одной записи")
        c = cluster(kubevirt(patches=None), vc={})
        (c.s / "virt-controller.json").unlink()
        c.run()
        report(c.rc != 0 and not c.writes(), "virt-controller не прочитан: ни одной записи")
        c = cluster(None).run()
        report(c.rc != 0 and not c.writes(), "ресурса KubeVirt нет: ни одной записи")

        # 8. Чужая правка образа launcher → конфликт, не перебиваем.
        c = cluster(kubevirt(patches=[MANUAL])).run()
        report(not c.writes("kubevirt") and c.state() == "Conflict" and c.patches() == [MANUAL],
               "ручная правка аргументов virt-controller: Conflict, ничего не пишется")
        kv = kubevirt(patches=None)
        kv["spec"]["customizeComponents"]["flags"] = {"controller": {"launcher-image": "x"}}
        c = cluster(kv).run()
        report(not c.writes("kubevirt") and c.state() == "Conflict", "launcher через flags: тоже Conflict")

        # 9. Конфликт записи → ошибка прохода, следующий проход доводит.
        c = cluster(kubevirt(patches=[HANDLER]))
        (c.s / "conflict").write_text("")
        c.run()
        report(c.rc != 0 and c.patches() == [HANDLER], "конфликт resourceVersion: запись не легла, проход с ошибкой")
        c.run()
        report(c.rc == 0 and c.patches() == [HANDLER, ours(IMG184)], "следующий проход на свежем чтении доводит")

        # 10. Удаление: только своя правка, цикл сначала остановлен.
        c = cluster(kubevirt(patches=[HANDLER, ours(IMG184), MANUAL]))
        c.run("uninstall", SELF_DEPLOYMENT="kubevirt-paleo-launcher",
              SELF_SELECTOR="app.kubernetes.io/name=kubevirt-paleo-launcher,app.kubernetes.io/instance=r")
        calls = [json.loads(l) for l in (c.s / "calls.log").read_text().splitlines()]
        first_scale = next((i for i, a in enumerate(calls) if "scale" in a), None)
        first_patch = next((i for i, a in enumerate(calls) if "patch" in a), None)
        report(c.rc == 0 and c.patches() == [HANDLER, MANUAL], "удаление убирает только свою правку")
        report(first_scale is not None and first_patch is not None and first_scale < first_patch,
               "удаление сначала гасит цикл, потом пишет")
        report(not c.writes("configmap") and not c.writes("event"),
               "удаление не трогает ConfigMap состояния (его уберёт Helm)")
        c = cluster(kubevirt(patches=[HANDLER])).run("uninstall")
        report(c.rc == 0 and not c.writes("kubevirt"), "удаление без своей правки: ничего не пишется")
        c = cluster(kubevirt("v1.7.0", status=False, patches=[ours(IMG184)]), vc={})
        (c.s / "virt-controller.json").unlink()
        c.run("uninstall")
        report(c.rc == 0 and c.patches() is None, "удаление работает и без virt-controller, и без status")
        c = cluster(None).run("uninstall")
        report(c.rc == 0 and not c.writes(), "удаление без ресурса KubeVirt: успех, убирать нечего")

        # Отрицательный контроль: подделка обязана ловить запись без предусловия.
        c = cluster(kubevirt(patches=None))
        kv = c.get("kubevirt.json"); kv["metadata"]["resourceVersion"] = "999"; c.put("kubevirt.json", kv)
        body = json.dumps({"metadata": {"resourceVersion": "100"}, "spec": {}})
        r = subprocess.run([str(c.kubectl), "-n", "x", "patch", "kubevirt", "kubevirt", "--type=merge", "-p", body],
                           env=dict(os.environ, FAKE_STATE=str(c.s)), capture_output=True, text=True)
        report(r.returncode != 0, "отрицательный контроль: поддельный API отвергает устаревший resourceVersion")
    finally:
        shutil.rmtree(tmp, ignore_errors=True)

    print(f"Итог: успешно {ok}, провалено {fail}")
    sys.exit(1 if fail else 0)


if __name__ == "__main__":
    main()
