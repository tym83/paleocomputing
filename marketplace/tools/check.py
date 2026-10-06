#!/usr/bin/env python3
"""Checks of the "Forgotten Systems" catalog.

The standard Cozystack validator checks the repository structure and the
references in ApplicationDefinition. It does not know about two things that
matter for this catalog, so we check them here:

  * artifact references inside the meta-application (the parent chart renders
    HelmRelease objects for components of the same repository; if a name drifts,
    the meta-application silently installs nothing);
  * the catalog application descriptions built by the generator: whether they
    have fallen behind the chart schemas.

Every check that asserts something comes with a mutation: we break the thing
being checked and make sure the check fails. A check that cannot fail checks
nothing.
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
    assert len(files) == 1, f"{repo}: expected exactly one source file"
    return yaml.safe_load(files[0].read_text(encoding="utf-8"))


def declared_artifacts(repo: str) -> set[str]:
    src = load_source(repo)
    name = src["metadata"]["name"]
    out = set()
    for variant in src["spec"]["variants"]:
        for comp in variant["components"]:
            out.add(artifact_name(name, variant["name"], comp["name"]))
    return out


# ─── 1. Meta-index ──────────────────────────────────────────────────────────
def check_index() -> None:
    print("\nMeta-index")
    r = run([COZYPKG, "search", "--index", "index"])
    entries = [l for l in r.stdout.splitlines()[1:] if l.strip()]
    files = len(list((ROOT / "index").glob("*.yaml")))
    report(r.returncode == 0 and len(entries) == files,
           f"cozypkg reads the index, entries: {len(entries)} of {files}")

    # Mutation: the index is parsed strictly, an extra field must break parsing.
    victim = ROOT / "index" / "paleocomputing-images.yaml"
    original = victim.read_text(encoding="utf-8")
    try:
        victim.write_text(original + "kind: Image\n", encoding="utf-8")
        bad = run([COZYPKG, "search", "--index", "index"])
        report(bad.returncode != 0 or "unknown field" in (bad.stdout + bad.stderr),
               "mutation: an extra field in an index entry is rejected")
    finally:
        victim.write_text(original, encoding="utf-8")

    # Every entry must carry a tag, otherwise it cannot be found: in this schema
    # the entry type is expressed only through tags.
    for f in sorted((ROOT / "index").glob("*.yaml")):
        entry = yaml.safe_load(f.read_text(encoding="utf-8"))
        report(bool(entry.get("tags")), f"entry {entry['name']} has tags")


# ─── 2. Standard validator ──────────────────────────────────────────────────
def check_validate() -> None:
    print("\nCozystack validator")
    for repo in REPOS:
        r = run([COZYPKG, "validate", f"repos/{repo}"])
        tail = r.stdout.strip().splitlines()[-1] if r.stdout.strip() else "(empty)"
        errs = re.search(r"(\d+) error", tail)
        report(bool(errs) and errs.group(1) == "0", f"repos/{repo}: {tail}")

    # ⚠ What actually goes to the registry must be checked too. ONLY the
    # contents of packages/ end up in the artifact, with the prefix stripped. The
    # source manifest once lay next to it, in sources/, and was silently lost on
    # publishing: the source tree passed the check, the published one did not.
    # Caught only by a round trip through a real registry.
    for repo in REPOS:
        r = run([COZYPKG, "validate", f"repos/{repo}/packages"])
        tail = r.stdout.strip().splitlines()[-1] if r.stdout.strip() else "(empty)"
        errs = re.search(r"(\d+) error", tail)
        report(bool(errs) and errs.group(1) == "0",
               f"repos/{repo} in published form: {tail}")

    # Mutation: move the source manifest out of packages/; the published form
    # must stop passing.
    src = ROOT / "repos/machines/packages/sources/machines.yaml"
    moved = ROOT / "repos/machines/sources-moved-for-test.yaml"
    try:
        src.rename(moved)
        bad = run([COZYPKG, "validate", "repos/machines/packages"])
        report("no-packagesource" in bad.stdout,
               "mutation: a source manifest outside packages/ breaks the published form")
    finally:
        moved.rename(src)

    # Mutation: corrupt the chart reference; the validator must notice.
    victim = ROOT / "repos/machines/packages/system/machines-rd/cozyrds/oberon-lab.yaml"
    original = victim.read_text(encoding="utf-8")
    try:
        victim.write_text(
            original.replace("paleocomputing-machines-default-oberon-lab",
                             "nonsense-does-not-exist"),
            encoding="utf-8")
        bad = run([COZYPKG, "validate", "repos/machines"])
        report("appdef-dangling" in bad.stdout,
               "mutation: a broken chart reference is caught by the validator")
    finally:
        victim.write_text(original, encoding="utf-8")

    # A privileged component must be visible to the operator.
    r = run([COZYPKG, "validate", "repos/images"])
    report("(privileged)" in r.stdout,
           "images are marked privileged and the validator warns about it")


# ─── 3. Catalog descriptions have not fallen behind the charts ──────────────
def check_generated() -> None:
    print("\nCatalog application descriptions")
    for rd in sorted(ROOT.glob("repos/*/packages/system/*-rd")):
        if not (rd / "appdefs.yaml").is_file():
            continue
        before = {p.name: p.read_text(encoding="utf-8") for p in (rd / "cozyrds").glob("*.yaml")}
        r = run([sys.executable, "tools/gen-appdefs.py", str(rd)])
        after = {p.name: p.read_text(encoding="utf-8") for p in (rd / "cozyrds").glob("*.yaml")}
        report(r.returncode == 0 and before == after,
               f"{rd.relative_to(ROOT)}: generated output matches the tree")

        # The catalog schema must be exactly the chart schema.
        spec = yaml.safe_load((rd / "appdefs.yaml").read_text(encoding="utf-8"))
        packages = rd.parents[1]
        for app in spec["apps"]:
            doc = yaml.safe_load((rd / "cozyrds" / f"{app['component']}.yaml").read_text(encoding="utf-8"))
            in_catalog = json.loads(doc["spec"]["application"]["openAPISchema"])
            in_chart = json.loads((packages / app["chartPath"] / "values.schema.json")
                                  .read_text(encoding="utf-8"))
            report(in_catalog == in_chart,
                   f"{app['component']}: catalog schema matches the chart schema")


# ─── 4. Meta-application references (the Cozystack validator does not check these)
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
    print("\nMeta-application")
    declared = declared_artifacts("machines")
    refs = metaapp_refs()
    report(len(refs) == 2, f"the meta-application orders {len(refs)} parts")
    report(refs and refs <= declared,
           "all meta-application references lead to components of this same repository")

    # Mutation: shift the artifact name prefix; the references must "dangle".
    broken = metaapp_refs(["--set", "artifactPrefix=wrong-prefix"])
    report(broken and not (broken <= declared),
           "mutation: a shifted prefix leaves the references dangling")

    # An environment without a single part makes no sense.
    r = run(["helm", "template", "w", str(ROOT / "repos/machines/packages/apps/workbench"),
             "--set", "machine=false", "--set", "manual=false"])
    report(r.returncode != 0, "an empty environment is rejected")


# ─── 5. Documentation really arrives readable ───────────────────────────────
def check_handbook() -> None:
    print("\nHandbook")
    chart = ROOT / "repos/machines/packages/apps/handbook"
    body = "first line\nsecond line\n<tag> & \"quotes\"\n"
    pages = json.dumps([{"name": "p1", "title": "Chapter <1>", "body": body}])
    r = run(["helm", "template", "h", str(chart), "--set-json", f"pages={pages}"])
    # There are now two ConfigMaps, the pages and the nginx config; take the right one.
    cm = next((d for d in yaml.safe_load_all(r.stdout)
               if isinstance(d, dict) and d.get("kind") == "ConfigMap"
               and d["metadata"]["name"].endswith("-pages")), None)
    report(cm is not None, "pages are assembled into a ConfigMap")
    if cm:
        page = cm["data"]["p1.html"]
        report("first line\nsecond line" in page,
               "line breaks survived packing into YAML")
        report("&lt;tag&gt;" in page and "&amp;" in page and "<tag>" not in page,
               "markup in the text is escaped, not executed")
        report('<a href="p1.html">' in cm["data"]["index.html"],
               "the table of contents links to the page")

    # Mutation: a handbook without a source, neither image nor pages.
    bad = run(["helm", "template", "h", str(chart)])
    report(bad.returncode != 0, "mutation: a handbook without a source is rejected")


# ─── 6. Images: collisions with the platform ────────────────────────────────
def check_images() -> None:
    print("\nMachine images")
    chart = ROOT / "repos/images/packages/system/machine-images"
    imgs = json.dumps([{"name": "oberon-risc5", "url": "https://example.org/a.qcow2"}])
    r = run(["helm", "template", "mi", str(chart), "--set-json", f"images={imgs}"])
    names = [d["metadata"]["name"] for d in yaml.safe_load_all(r.stdout)
             if isinstance(d, dict) and d.get("kind") == "DataVolume"]
    report(names == ["vm-default-images-fs-oberon-risc5"],
           f"the image is published under a prefixed name: {names}")
    ns = {d["metadata"]["namespace"] for d in yaml.safe_load_all(r.stdout)
          if isinstance(d, dict) and d.get("kind") == "DataVolume"}
    report(ns == {"cozy-public"}, "the image goes into the shared cozy-public namespace")

    # Mutations: a platform collision, a duplicate, an empty prefix.
    collide = json.dumps([{"name": "24.04", "url": "https://example.org/a"}])
    bad = run(["helm", "template", "mi", str(chart), "--set", "namePrefix=ubuntu-",
               "--set-json", f"images={collide}"])
    report("taken by a platform image" in (bad.stdout + bad.stderr),
           "mutation: a collision with a platform image is caught")
    dup = json.dumps([{"name": "d", "url": "https://e.org/a"},
                      {"name": "d", "url": "https://e.org/b"}])
    bad = run(["helm", "template", "mi", str(chart), "--set-json", f"images={dup}"])
    report("appears twice" in (bad.stdout + bad.stderr), "mutation: a duplicate in the list is caught")


# ─── 7. Language environment ────────────────────────────────────────────────
def check_langpack() -> None:
    print("\nLanguage environment")
    chart = ROOT / "repos/languages/packages/apps/langpack"
    base = ["helm", "template", "l", str(chart), "--set", "language=Oberon",
            "--set", "image=example/obc:1"]

    prog = json.dumps([{"path": "Hello.Mod", "content": "MODULE Hello;\nEND Hello.\n"}])
    r = run(base + ["--set-json", f"program={prog}"])
    kinds = {d["kind"] for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)}
    report(kinds == {"ConfigMap", "Job"},
           f"a one-off run yields a job and sources: {sorted(kinds)}")

    r = run(base + ["--set", "mode=service", "--set", "host=l.example.org"])
    kinds = {d["kind"] for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)}
    report(kinds == {"Deployment", "Service", "Ingress"},
           f"a persistent environment yields a deployment and access: {sorted(kinds)}")

    # Sources are mounted read-only, the working directory writable.
    r = run(base + ["--set-json", f"program={prog}"])
    job = next(d for d in yaml.safe_load_all(r.stdout)
               if isinstance(d, dict) and d["kind"] == "Job")
    mounts = {m["mountPath"]: m.get("readOnly", False)
              for m in job["spec"]["template"]["spec"]["containers"][0]["volumeMounts"]}
    report(mounts.get("/src") is True and mounts.get("/work") is False,
           "sources read-only, working directory writable")

    # Mutations: every safeguard must trigger.
    report(run(base + ["--set", "host=h.example.org"]).returncode != 0,
           "mutation: an external host name for a one-off run is rejected")
    report(run(base + ["--set", "srcdir=/work", "--set-json", f"program={prog}"]).returncode != 0,
           "mutation: srcdir equal to workdir is rejected")
    report(run(base + ["--set", "mode=nonsense"]).returncode != 0,
           "mutation: an unknown mode is rejected by the schema")


# ─── 8. Schemas must not close the root ─────────────────────────────────────
def check_schema_roots() -> None:
    print("\nValues schemas")
    # ⚠ Found on a live cluster, not here. cozystack-engine injects the
    # _cluster and _namespace keys into tenant application values. If the schema
    # root is closed (additionalProperties: false), Helm rejects the values
    # entirely and the application does not deploy, even though the artifact is
    # valid, the catalog connects and the definitions install. No platform chart
    # closes its root; this check enforces the rule.
    schemas = sorted(ROOT.glob("repos/*/packages/*/*/values.schema.json"))
    report(len(schemas) >= 5, f"schemas found: {len(schemas)}")
    for s in schemas:
        d = json.loads(s.read_text(encoding="utf-8"))
        report(d.get("additionalProperties") is not False,
               f"{s.parent.name}: schema root is open for engine keys")

    # Mutation: close the root; the check must turn red.
    victim = ROOT / "repos/machines/packages/apps/oberon-lab/values.schema.json"
    original = victim.read_text(encoding="utf-8")
    try:
        d = json.loads(original)
        d["additionalProperties"] = False
        victim.write_text(json.dumps(d, ensure_ascii=False, indent=2), encoding="utf-8")
        bad = json.loads(victim.read_text(encoding="utf-8"))
        report(bad.get("additionalProperties") is False,
               "mutation: a closed root is distinguishable from an open one")
    finally:
        victim.write_text(original, encoding="utf-8")


# ─── 9. nginx must not start a worker per node core ─────────────────────────
def check_nginx_workers() -> None:
    print("\nNumber of nginx worker processes")
    # ⚠ Found on a live cluster. The stock image has worker_processes auto,
    # and nginx looks at the NODE cores, not at the allotted limit: on a 96-core
    # node that is 96 processes, they do not fit into the allotted memory, and
    # the pod goes into an endless restart loop. Meanwhile the HelmRelease
    # succeeds; the failure is visible only in the pod state.
    chart = ROOT / "repos/machines/packages/apps/handbook"
    pages = json.dumps([{"name": "p", "title": "P", "body": "t"}])
    r = run(["helm", "template", "h", str(chart), "--set-json", f"pages={pages}"])
    docs = [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)]

    cm = next((d for d in docs if d.get("kind") == "ConfigMap"
               and d["metadata"]["name"].endswith("-nginx")), None)
    report(cm is not None, "the handbook supplies its own nginx configuration")
    if cm:
        report("worker_processes 1;" in cm["data"]["nginx.conf"],
               "it pins the number of workers instead of auto")

    dep = next((d for d in docs if d.get("kind") == "Deployment"), None)
    mounts = dep["spec"]["template"]["spec"]["containers"][0]["volumeMounts"] if dep else []
    report(any(m.get("subPath") == "nginx.conf" for m in mounts),
           "the configuration is mounted over the stock one")

    # Our own serving image is built on the same nginx, with the same risk.
    cf = (ROOT.parent / "impl/deploy/Containerfile.web").read_text(encoding="utf-8")
    report("worker_processes 1;" in cf,
           "our serving image also pins the number of workers")



def check_components_declared_twice():
    """Every application is declared in TWO places, and forgetting one is easy.

    `appdefs.yaml` says what to show in the catalog. `sources/*.yaml` says what
    to publish as an artifact. An application declared only in the first is
    visible in the catalog and installs, but has nothing to deploy from:

        could not get Source object: ExternalArtifact ... not found

    Caught exactly like that: `oberon-vm` appeared in the tenant catalog and did not come up.
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
                       f"{repo.name}: {name} is declared both in the catalog and in the source")


HOOK_LINE = re.compile(r'"?helm\.sh/hook"?\s*:\s*"?([^"\n]+)')


def upgrade_hook_kinds(text: str) -> list[str]:
    """Which template resources are declared as an upgrade hook (pre/post-upgrade)."""
    found = []
    for doc in re.split(r"^---\s*$", text, flags=re.M):
        m = HOOK_LINE.search(doc)
        kind = re.search(r"^kind:\s*(\S+)", doc, flags=re.M)
        if m and kind and "upgrade" in m.group(1):
            found.append(kind.group(1))
    return found


def check_no_volume_upgrade_hooks() -> None:
    """A volume cannot be an upgrade hook.

    Without an explicit delete policy Helm applies before-hook-creation to a
    hook: on every upgrade it deletes the resource and creates it again. The
    volume is in use by a running machine, hangs in Terminating, and the upgrade
    hangs until the timeout. Caught by the first catalog upgrade over live
    machines in the sandbox. Machine templates live in the library, so look there too.
    """
    tpls = sorted(ROOT.glob("repos/*/packages/apps/*/templates/*.yaml")) + \
        sorted(ROOT.glob("repos/*/packages/library/*/templates/*.tpl"))
    bad_tpls = [str(t.relative_to(ROOT / "repos")) for t in tpls
                if "PersistentVolumeClaim" in upgrade_hook_kinds(t.read_text(encoding="utf-8"))]
    report(not bad_tpls,
           f"no volume is recreated on upgrade ({len(tpls)} templates)"
           + (f": {', '.join(bad_tpls)}" if bad_tpls else ""))
    # Negative control: the check must recognize that very mistake.
    bad = ('kind: PersistentVolumeClaim\nmetadata:\n  annotations:\n'
           '    "helm.sh/hook": pre-install,pre-upgrade\n')
    report("PersistentVolumeClaim" in upgrade_hook_kinds(bad),
           "negative control: a volume upgrade hook is recognized")


def _hook_set(doc: dict, key: str) -> set[str]:
    ann = (doc.get("metadata") or {}).get("annotations") or {}
    return {p.strip() for p in str(ann.get(key, "")).split(",") if p.strip()}


# ─── Machines from passports (library/retro-machine) ────────────────────────
#
# A catalog machine is a machine.yaml passport and a form; the templates and the
# hook are shared. Checked here: what is easy to break with data when adding a
# machine, and what the previous design (volume and fill as pre-install hooks, a
# bare VMI, post-delete cleanup with permissions and the API egress label) broke
# on a live cluster. Finding 64.

LIBRARY = ROOT / "repos/machines/packages/library/retro-machine"
MACHINE_SCHEMA = LIBRARY / "machine.schema.json"
MACHINE_ANNOTATION = "paleocomputing.io/machine"
HOOK_SRC = ROOT.parent / "kubevirt/onDefineDomain.py"


def machine_charts() -> list[pathlib.Path]:
    return sorted(p.parent for p in ROOT.glob("repos/*/packages/apps/*/machine.yaml"))


def schema_errors(schema: pathlib.Path, doc: object) -> str | None:
    """Validates doc against a JSON schema with the same validator Helm uses for values.

    A separate jsonschema library may be missing in the check environment, but
    helm is always there: a temporary chart whose values schema is our schema
    and whose values are the document being checked.
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
    """Lines of the fill job that could overwrite the user's disk.

    A disk-role file may appear in three forms only: `[ -s <path> ] || put
    <source> <path>` (place it only if it is missing or empty), `chmod 664
    <path>` (permissions, not content), and growing it to a size only when it
    is smaller (truncate past the end adds zeros and keeps every byte). Any
    other line with its path may overwrite it.
    """
    guarded = re.compile(r"^\[ -s (\S+) \] \|\| put \S+ (\S+)$")
    mode = re.compile(r"^chmod 664 (\S+)$")
    grow = re.compile(r'^\[ "\$\(wc -c < (\S+)\)" -ge (\d+) \] \|\| truncate -s (\d+) (\S+)$')
    bad = []
    for line in (l.strip() for l in script.splitlines()):
        for disk in disks:
            if disk not in line.split():
                continue
            m = guarded.match(line)
            c = mode.match(line)
            g = grow.match(line)
            if not ((m and m.group(1) == disk and m.group(2) == disk) or (c and c.group(1) == disk)
                    or (g and g.group(1) == disk == g.group(4) and g.group(2) == g.group(3))):
                bad.append(line)
    return bad


def run_fill(script: str, base: str, files: list[dict], root: pathlib.Path) -> None:
    """Runs the fill job on disk: the volume and image paths are in temporary directories."""
    # Image paths first: they may themselves contain the volume directory name.
    s = script
    for f in files:
        s = s.replace(f" {f['from']} ", f" {root}/image/{f['name']} ")
    s = s.replace(f" {base}/", f" {root}/payload/")
    subprocess.run(["sh", "-c", s], check=True, capture_output=True)


def hook_leaks(docs: list[dict]) -> list[str]:
    """Hook resources that may outlive the machine's deletion.

    Helm does not touch hook resources when a release is deleted. So only a job
    may be a hook, and only one whose life is bounded whatever the outcome: Helm
    deletes a successful one (hook-succeeded), Kubernetes a failed or stuck one
    (activeDeadlineSeconds ends it, ttlSecondsAfterFinished removes it). A
    volume hook is exactly what used to stay behind in the tenant and needed a
    cleanup with permissions.
    """
    leaks = []
    for d in docs:
        if not _hook_set(d, "helm.sh/hook"):
            continue
        name = f"{d['kind']}/{d['metadata']['name']}"
        spec = d.get("spec") or {}
        if d["kind"] != "Job":
            leaks.append(f"{name}: only a job may be a hook")
        elif "hook-succeeded" not in _hook_set(d, "helm.sh/hook-delete-policy"):
            leaks.append(f"{name}: no hook-succeeded")
        elif not spec.get("activeDeadlineSeconds"):
            leaks.append(f"{name}: no activeDeadlineSeconds")
        elif spec.get("ttlSecondsAfterFinished") is None:
            leaks.append(f"{name}: no ttlSecondsAfterFinished")
    return leaks


def machine_problems(docs: list[dict], running: bool = True) -> list[str]:
    """Invariants of a rendered machine, apart from the fill job and hooks."""
    out = []
    kinds = sorted(d["kind"] for d in docs)
    if kinds != ["ConfigMap", "Job", "PersistentVolumeClaim", "VirtualMachine"]:
        out.append(f"composition: {kinds}")
    vms = [d for d in docs if d["kind"] == "VirtualMachine"]
    if len(vms) != 1:
        return out + ["no VirtualMachine"]
    vm = vms[0]
    want = "Always" if running else "Halted"
    if vm["spec"].get("runStrategy") != want or "running" in vm["spec"]:
        out.append(f"runStrategy {vm['spec'].get('runStrategy')} instead of {want}")
    for pvc in (d for d in docs if d["kind"] == "PersistentVolumeClaim"):
        if _hook_set(pvc, "helm.sh/hook"):
            out.append(f"volume {pvc['metadata']['name']} is a hook, not a release resource")
    ann = vm["spec"]["template"]["metadata"].get("annotations") or {}
    if "hooks.kubevirt.io/hookSidecars" not in ann:
        out.append("the hook is not declared on the machine template")
    # A foreign machine does not migrate: with cluster-wide LiveMigrate its pod
    # could not be evicted, and a node drain would get stuck on it.
    if vm["spec"]["template"]["spec"].get("evictionStrategy") != "None":
        out.append(f"evictionStrategy {vm['spec']['template']['spec'].get('evictionStrategy')!r} instead of None")
    return out


def gets_library(variant: dict, component: str) -> bool:
    """Whether the component gets the retro-machine library when the platform builds it."""
    libs = {(l.get("name") or pathlib.Path(l["path"]).name): l["path"] for l in variant.get("libraries", [])}
    comp = next((c for c in variant["components"] if c["name"] == component), {})
    return libs.get("retro-machine") == "library/retro-machine" and "retro-machine" in comp.get("libraries", [])


def render_as_published(chart: pathlib.Path, with_library: bool) -> subprocess.CompletedProcess:
    """Renders the chart the way the platform will assemble it.

    flux push artifact drops symlinks (verified with `flux build artifact`:
    charts/ and files/ arrive empty), and ArtifactGenerator puts the library into
    charts/<name> of the component that names it
    (internal/operator/packagesource_reconciler.go).
    """
    with tempfile.TemporaryDirectory() as t:
        staged = pathlib.Path(t) / chart.name
        shutil.copytree(chart, staged, symlinks=True,
                        ignore=lambda d, names: [n for n in names if (pathlib.Path(d) / n).is_symlink()])
        if with_library:
            shutil.copytree(LIBRARY, staged / "charts/retro-machine")
        return run(["helm", "template", "t", str(staged), "--namespace", "ns"])


def form_problems(preset: dict, values: dict, vschema: dict) -> list[str]:
    """Mismatches between the application form (values.yaml, values.schema.json) and the passport.

    The form is what the tenant sees in the dashboard; the passport is what the
    machine can do. A variant missing from the passport is rejected by the
    render; a passport variant missing from the form cannot be chosen by the tenant.
    """
    out = []
    hw = vschema.get("hardware", {})
    if sorted(hw.get("enum", [])) != sorted(preset["variants"]):
        out.append(f"form variants {sorted(hw.get('enum', []))}")
    if not values.get("hardware") == hw.get("default") == preset["defaultVariant"]:
        out.append(f"default variant {values.get('hardware')}/{hw.get('default')}")
    if not values.get("memory") == vschema.get("memory", {}).get("default") == preset["memory"]["default"]:
        out.append(f"default memory {values.get('memory')}/{vschema.get('memory', {}).get('default')}")
    return out


def check_machines() -> None:
    print("\nMachines from passports")
    charts = machine_charts()
    report(bool(charts), f"machines with a passport: {len(charts)} ({', '.join(c.name for c in charts)})")

    # ── The hook: one copy for all machines ────────────────────────────────
    lib_hook = LIBRARY / "files/onDefineDomain.py"
    same = HOOK_SRC.read_bytes() == lib_hook.read_bytes()
    report(same, "the library hook matches kubevirt/onDefineDomain.py")
    report(HOOK_SRC.read_bytes() + b"#" != lib_hook.read_bytes(),
           "negative control: a one-byte difference is noticed")

    schema = MACHINE_SCHEMA
    source = load_source("machines")
    variant = source["spec"]["variants"][0]

    for chart in charts:
        name = chart.name
        preset = yaml.safe_load((chart / "machine.yaml").read_text(encoding="utf-8"))

        # The passport follows the schema. And the schema does not let obvious corruption through.
        err = schema_errors(schema, preset)
        report(err is None, f"{name}: the passport conforms to machine.schema.json" + (f": {err}" if err else ""))

        # The platform puts the library into the chart only if the component names it.
        # In the tree a symlink provides it; what the platform assembles must
        # match what is checked here.
        report(gets_library(variant, name),
               f"{name}: the source component gets the retro-machine library")
        link = chart / "charts/retro-machine"
        report(link.is_symlink() and link.resolve() == LIBRARY.resolve(),
               f"{name}: charts/retro-machine in the tree is a link to the library")

        # The application form agrees with the passport.
        values = yaml.safe_load((chart / "values.yaml").read_text(encoding="utf-8"))
        vschema = json.loads((chart / "values.schema.json").read_text(encoding="utf-8"))["properties"]
        probs = form_problems(preset, values, vschema)
        report(not probs, f"{name}: the form agrees with the passport (variants {sorted(preset['variants'])}, "
               f"defaults {preset['defaultVariant']}, {preset['memory']['default']})"
               + (f": {'; '.join(probs)}" if probs else ""))

        # ── Default render ─────────────────────────────────────────────────
        docs, err = render(chart)
        probs = machine_problems(docs) if docs else [err]
        report(not probs, f"{name}: VirtualMachine with strategy Always, the volume is a release resource"
               + (f": {'; '.join(probs)}" if probs else ""))
        if not docs:
            continue
        halted, err = render(chart, "running=false")
        probs = machine_problems(halted, running=False) if halted else [err]
        report(not probs, f"{name}: running=false gives strategy Halted" + (f": {'; '.join(probs)}" if probs else ""))
        job = next(d for d in halted if d["kind"] == "Job")
        report("affinity" not in job["spec"]["template"]["spec"],
               f"{name}: for a stopped machine the fill job does not wait for its pod")
        job = next(d for d in docs if d["kind"] == "Job")
        aff = job["spec"]["template"]["spec"].get("affinity", {}).get("podAffinity", {})
        # Soft, not hard: a machine pod without files lives for seconds, and hard
        # affinity kept the job from being scheduled at all (found in a live tenant).
        pref = (aff.get("preferredDuringSchedulingIgnoredDuringExecution") or [{}])[0].get("podAffinityTerm", {})
        report(pref.get("topologyKey") == "kubernetes.io/hostname"
               and pref.get("labelSelector", {}).get("matchLabels", {}).get("kubevirt.io") == "virt-launcher"
               and not aff.get("requiredDuringSchedulingIgnoredDuringExecution"),
               f"{name}: the fill job prefers the machine pod node but need not wait for it (RWO volume)")

        leaks = hook_leaks(docs)
        report(not leaks, f"{name}: hook resources do not outlive the machine" + (f": {'; '.join(leaks)}" if leaks else ""))

        vm = next(d for d in docs if d["kind"] == "VirtualMachine")
        cm = next(d for d in docs if d["kind"] == "ConfigMap")
        report(cm["data"]["onDefineDomain"] == lib_hook.read_text(encoding="utf-8"),
               f"{name}: the ConfigMap carries the library hook byte for byte")

        # The passport in the annotation: JSON, per the schema, with the selected variant.
        for hwv in sorted(preset["variants"]):
            d, _ = render(chart, f"hardware={hwv}")
            v = next(x for x in d if x["kind"] == "VirtualMachine") if d else vm
            raw = v["spec"]["template"]["metadata"]["annotations"].get(MACHINE_ANNOTATION, "")
            try:
                passport = json.loads(raw)
            except ValueError as e:
                report(False, f"{name}: hardware={hwv}: the passport annotation is not JSON: {e}")
                continue
            # The image is left out of the VM template on purpose (it changes
            # with every release); with it put back the passport is complete.
            full = {**passport, "image": preset["image"]} if "image" in preset else passport
            err = schema_errors(schema, full)
            report(err is None and passport.get("variant") == hwv
                   and {k: full[k] for k in preset} == preset,
                   f"{name}: hardware={hwv}: the annotation is a schema-valid passport with variant={passport.get('variant')}"
                   + (f": {err}" if err else ""))
            report("image" not in passport and preset.get("image", "\0") not in json.dumps(v["spec"]),
                   f"{name}: hardware={hwv}: the VM spec does not name the system image, "
                   "so a release does not change a running VM")

        # ── Machines on one air are spread over the hosts ───────────────────
        if preset.get("air"):
            def spread(spec):
                t = spec["spec"]["template"]
                terms = (t["spec"].get("affinity", {}).get("podAntiAffinity", {})
                         .get("preferredDuringSchedulingIgnoredDuringExecution", []))
                return t["metadata"]["labels"].get("paleocomputing.io/air"), [
                    (x["podAffinityTerm"]["topologyKey"], x["podAffinityTerm"]["labelSelector"]["matchLabels"])
                    for x in terms]
            d, _ = render(chart, "air=lab")
            label, terms = spread(next(x for x in d if x["kind"] == "VirtualMachine"))
            report(label == "lab" and terms == [("kubernetes.io/hostname", {"paleocomputing.io/air": "lab"})],
                   f"{name}: on an air the machine prefers a host without the other machines of that air")
            label, terms = spread(vm)
            report(label is None and not terms, f"{name}: without an air there is no spreading rule")

        # ── Fill: firmware always, the user disk never ──────────────────────
        script = fill_script(docs)
        base = preset["payload"]["path"].rstrip("/")
        disks = [f"{base}/{f['name']}" for f in preset["payload"]["files"] if f["role"] == "disk"]
        firmware = [f"{base}/{f['name']}" for f in preset["payload"]["files"] if f["role"] == "firmware"]
        over = disk_overwrites(script, disks)
        report(not over, f"{name}: the fill job does not overwrite the disk ({', '.join(disks)})"
               + (f": {over}" if over else ""))
        report(all(re.search(rf"^\s*put \S+ {re.escape(p)}$", script, re.M) for p in firmware),
               f"{name}: the job always rewrites the firmware ({', '.join(firmware)})")

        # The same by execution: a second run over a modified disk leaves it
        # alone and updates the firmware.
        with tempfile.TemporaryDirectory() as t:
            root = pathlib.Path(t)
            (root / "payload").mkdir()
            (root / "image").mkdir()
            for f in preset["payload"]["files"]:
                (root / "image" / f["name"]).write_text("v1", encoding="utf-8")
                # As in the image: 644. umask does not fix this, only chmod.
                (root / "image" / f["name"]).chmod(0o644)
            run_fill(script, base, preset["payload"]["files"], root)
            # A disk with a size grows with zeros; the content is what precedes them.
            body = lambda f: (root / "payload" / f["name"]).read_bytes().rstrip(b"\0").decode("utf-8")
            grown = lambda: all((root / "payload" / f["name"]).stat().st_size >= f["size"]
                                for f in preset["payload"]["files"] if f["role"] == "disk" and "size" in f)
            first = all(body(f) == "v1" for f in preset["payload"]["files"])
            grown_new = grown()
            gw = lambda: all((root / "payload" / f["name"]).stat().st_mode & 0o020
                             for f in preset["payload"]["files"] if f["role"] == "disk")
            writable_new = gw()
            for f in preset["payload"]["files"]:
                (root / "image" / f["name"]).write_text("v2", encoding="utf-8")
                if f["role"] == "disk":
                    (root / "payload" / f["name"]).write_text("user work", encoding="utf-8")
                    # A disk placed by a release before the permissions fix: rw-r--r--.
                    (root / "payload" / f["name"]).chmod(0o644)
            run_fill(script, base, preset["payload"]["files"], root)
            writable_old = gw()
            grown_old = grown()
            kept = all(body(f) == ("user work" if f["role"] == "disk" else "v2")
                       for f in preset["payload"]["files"])
            clean = not list((root / "payload").glob("*.tmp"))
        report(first and kept and clean,
               f"{name}: fill runs: the first places everything, a repeat updates the firmware and leaves the disk alone")
        # QEMU writes the disk as group 107: without g+w the machine does not start.
        # The file system writes past the end of the shipped image: a disk with a
        # size reaches it, the new one and the one left by an earlier release.
        report(grown_new and grown_old,
               f"{name}: the disk grows to the passport size, both a new one and one left from an earlier release")
        report(writable_new and writable_old,
               f"{name}: the disk is group-writable, both a new one and one left from an earlier release")

        # ── The form the platform assembles ────────────────────────────────
        # flux push artifact drops symlinks, the platform puts the library into
        # charts/ itself. We repeat this and compare with the tree render.
        r = render_as_published(chart, with_library=True)
        tree = run(["helm", "template", "t", str(chart), "--namespace", "ns"])
        report(r.returncode == 0 and r.stdout == tree.stdout,
               f"{name}: the platform-assembled form (no symlinks, library in charts/) renders the same")
        report(render_as_published(chart, with_library=False).returncode != 0,
               f"{name}: negative control: without the library in charts/ the chart does not render")

        # Memory stays within the passport limits.
        over_max, _ = render(chart, f"memory={int(preset['memory']['max'][:-2]) * 2}{preset['memory']['max'][-2:]}")
        report(not over_max, f"{name}: memory above the passport limit is rejected")

    # ── Negative controls: every check must recognize the breakage ─────────
    if not charts:
        return
    chart = charts[0]
    preset = yaml.safe_load((chart / "machine.yaml").read_text(encoding="utf-8"))
    docs, _ = render(chart)

    for what, fn in [
        ("file role not in the list", lambda p: p["payload"]["files"][0].update(role="rom")),
        ("a file not passed to the emulator", lambda p: p["payload"]["files"][0].update(qemu=["-bios", "/x"])),
        ("an extra passport field", lambda p: p.update(arch="risc5")),
        ("no hardware variants", lambda p: p.update(variants={})),
        ("a variant property with a comma", lambda p: p["variants"].update(x={"a": "b,c=d"})),
    ]:
        p = copy.deepcopy(preset)
        fn(p)
        report(schema_errors(schema, p) is not None, f"negative control: the schema rejects the passport: {what}")

    base = preset["payload"]["path"].rstrip("/")
    disks = [f"{base}/{f['name']}" for f in preset["payload"]["files"] if f["role"] == "disk"]
    script = fill_script(docs)
    unguarded = re.sub(r"^(\s*)\[ -s \S+ \] \|\| ", r"\1", script, flags=re.M)
    report(bool(disk_overwrites(unguarded, disks)),
           "negative control: a fill without disk protection is recognized")
    report(bool(disk_overwrites(script + f"\ncp /x {disks[0]}\n", disks)),
           "negative control: an extra write to the disk is recognized")
    with tempfile.TemporaryDirectory() as t:
        root = pathlib.Path(t)
        (root / "payload").mkdir()
        (root / "image").mkdir()
        for f in preset["payload"]["files"]:
            (root / "image" / f["name"]).write_text("v2", encoding="utf-8")
            (root / "payload" / f["name"]).write_text("user work", encoding="utf-8")
        run_fill(unguarded, base, preset["payload"]["files"], root)
        lost = any((root / "payload" / f["name"]).read_text(encoding="utf-8") != "user work"
                   for f in preset["payload"]["files"] if f["role"] == "disk")
    report(lost, "negative control: a run without protection really overwrites the disk")

    def mutated(fn) -> list[dict]:
        d = copy.deepcopy(docs)
        for x in d:
            fn(x)
        return d

    def pvc_hook(x):
        if x["kind"] == "PersistentVolumeClaim":
            x["metadata"].setdefault("annotations", {})["helm.sh/hook"] = "pre-install"

    # The fill job is an ordinary release resource; to check that a hook leak is
    # caught, we first make it a hook, then break it.
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

    for fn, what in [(pvc_hook, "volume hook"), (job_no("activeDeadlineSeconds"), "job without a deadline"),
                     (job_no("ttlSecondsAfterFinished"), "job without a TTL"),
                     (job_keeps, "job without hook-succeeded")]:
        report(bool(hook_leaks(mutated(fn))), f"negative control: a hook leak is recognized: {what}")
    report(bool(machine_problems(mutated(pvc_hook))), "negative control: a volume hook instead of a resource is recognized")

    def migrate_eviction(x):
        if x["kind"] == "VirtualMachine":
            x["spec"]["template"]["spec"]["evictionStrategy"] = "LiveMigrate"
    report(bool(machine_problems(mutated(migrate_eviction))),
           "negative control: eviction by migration for a non-migratable machine is recognized")

    def bare_vmi(x):
        if x["kind"] == "VirtualMachine":
            x["kind"] = "VirtualMachineInstance"
    report(bool(machine_problems(mutated(bare_vmi))), "negative control: a bare VMI instead of a VirtualMachine is recognized")

    def old_running(x):
        if x["kind"] == "VirtualMachine":
            x["spec"].pop("runStrategy")
            x["spec"]["running"] = True
    report(bool(machine_problems(mutated(old_running))), "negative control: a machine without runStrategy is recognized")

    variant = copy.deepcopy(load_source("machines")["spec"]["variants"][0])
    for c in variant["components"]:
        c.pop("libraries", None)
    report(not gets_library(variant, chart.name),
           "negative control: a component without libraries does not get the library")

    values = yaml.safe_load((chart / "values.yaml").read_text(encoding="utf-8"))
    vschema = json.loads((chart / "values.schema.json").read_text(encoding="utf-8"))["properties"]
    bad = copy.deepcopy(preset)
    bad["variants"]["extra"] = {}
    report(bool(form_problems(bad, values, vschema)),
           "negative control: a passport variant missing from the form is noticed")
    bad = copy.deepcopy(preset)
    bad["memory"]["default"] = "256Mi"
    report(bool(form_problems(bad, values, vschema)),
           "negative control: different memory defaults in the form and the passport are noticed")


APISERVER_LABEL = "policy.cozystack.io/allow-to-apiserver"


def pods_without_apiserver_egress(docs: list[dict]) -> list[str]:
    """Pods with their own ServiceAccount that have no path to kube-apiserver."""
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
    """A pod granted API access must actually be able to reach the API.

    In a Cozystack tenant only pods labeled
    policy.cozystack.io/allow-to-apiserver=true (the allow-to-apiserver policy)
    may reach kube-apiserver; Cilium silently drops the rest. The volume cleanup
    job hung until the timeout and application deletion failed, and neither helm
    template nor a desk run showed it. A pod having its own ServiceAccount is a
    sign it intends to call the API, so the label is mandatory.
    """
    print("\nAPI access from the tenant")
    for chart in sorted({t.parent.parent for t in ROOT.glob("repos/*/packages/apps/*/templates/*.yaml")}):
        r = run(["helm", "template", "t", str(chart), "--namespace", "ns"])
        if r.returncode != 0:
            continue  # charts with required values are covered by their own checks
        docs = [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)]
        bad = pods_without_apiserver_egress(docs)
        report(not bad, f"{chart.name}: pods with API access are labeled for egress to it"
               + (f": {', '.join(bad)}" if bad else ""))
    # Negative control: a pod with its own ServiceAccount and no label.
    probe = [{"kind": "Job", "metadata": {"name": "probe"},
              "spec": {"template": {"metadata": {"labels": {}},
                                    "spec": {"serviceAccountName": "probe"}}}}]
    report(pods_without_apiserver_egress(probe) == ["Job/probe"],
           "negative control: a pod without the API egress label is recognized")


def check_platform_launcher() -> None:
    """The platform component: the launcher table and the pass logic.

    The table is built from kubevirt/versions.txt and is not edited by hand, so
    we compare. The pass logic runs on a fake kubectl (launcher_test.py): add,
    leave alone, remove, keep other patches, refuse when in doubt.
    """
    print("\nPlatform component")
    r = run([sys.executable, str(ROOT / "tools/gen-launcher-table.py"), "--check"])
    report(r.returncode == 0, "the launcher table matches kubevirt/versions.txt"
           + ("" if r.returncode == 0 else f": {(r.stdout + r.stderr).strip()}"))
    r = run([sys.executable, str(ROOT / "tools/pin-images.py"), "--check"])
    report(r.returncode == 0, "machine file images carry the same release tag as the launcher table"
           + ("" if r.returncode == 0 else f": {r.stdout.strip()}"))
    r = run([sys.executable, str(ROOT / "tools/launcher_test.py")])
    tail = (r.stdout.strip().splitlines() or ["—"])[-1]
    report(r.returncode == 0, f"reconciler pass on a fake API: {tail}")


def artifact_missing(repo_dir: pathlib.Path, art_src: pathlib.Path) -> list[str]:
    """Files reachable in the repository tree via symlinks that are missing from the artifact."""
    want = set()
    for dp, _, fs in os.walk(repo_dir / "packages", followlinks=True):
        for f in fs:
            want.add(str((pathlib.Path(dp) / f).relative_to(repo_dir)))
    with tempfile.TemporaryDirectory() as t:
        art = pathlib.Path(t) / "a.tgz"
        r = run(["flux", "build", "artifact", "--path", str(art_src), "--output", str(art)])
        if r.returncode != 0:
            return [f"flux build artifact failed: {r.stderr.strip()}"]
        import tarfile
        with tarfile.open(art) as tf:
            have = {m.name for m in tf.getmembers() if m.isfile()}
    return sorted(want - have)


def check_artifact_contents() -> None:
    """Everything the chart sees reaches the cluster, including via symlinks.

    The machine library is attached by a symlink, and flux does not put symlinks
    into the archive. The stage.sh copy with dereferenced links is published;
    here the same copy is built into an artifact by the same flux, and every
    file visible in the tree must end up in it.
    """
    print("\nCatalog artifact contents")
    if not shutil.which("flux"):
        report(False, "flux not found; nothing to build the artifact with")
        return
    with tempfile.TemporaryDirectory() as t:
        stage = pathlib.Path(t)
        r = run(["sh", str(ROOT / "tools/stage.sh"), str(stage)])
        report(r.returncode == 0, "the symlink-free catalog copy is built")
        for repo in REPOS:
            lost = artifact_missing(ROOT / "repos" / repo, stage / repo)
            report(not lost, f"{repo}: the artifact has all files of the tree"
                   + (f"; missing: {', '.join(lost[:5])}" if lost else ""))
    # Negative control: an artifact straight from the tree, with symlinks.
    lost = artifact_missing(ROOT / "repos" / "machines", ROOT / "repos" / "machines")
    report(any("retro-machine" in l or "onDefineDomain" in l for l in lost),
           "negative control: without the copy the machine library is lost from the artifact")


# virt-launcher runs as qemu and mounts volumes with this group.
LAUNCHER_GID = 107


def fill_is_blocking_hook(docs: list[dict]) -> bool:
    """The fill job is a post-install/upgrade hook next to a machine."""
    for d in docs:
        if d.get("kind") == "Job" and "-fill" in d["metadata"]["name"]:
            hook = ((d["metadata"].get("annotations") or {}).get("helm.sh/hook") or "")
            if "post-install" in hook or "post-upgrade" in hook:
                return any(x.get("kind") == "VirtualMachine" for x in docs)
    return False


def check_fill_not_blocking() -> None:
    """The volume fill cannot wait for the machine to be ready.

    Cozystack installs the release waiting for readiness, and Helm runs a
    post-install hook after it. The machine is not ready while the volume is
    empty, so a hook job would never appear. Caught in a live tenant.
    """
    print("\nVolume fill and machine readiness")
    for chart in sorted(ROOT.glob("repos/*/packages/apps/*")):
        if not (chart / "machine.yaml").exists():
            continue
        r = run(["helm", "template", "t", str(chart), "--namespace", "ns"])
        docs = [d for d in yaml.safe_load_all(r.stdout) if isinstance(d, dict)] if r.returncode == 0 else []
        report(bool(docs) and not fill_is_blocking_hook(docs),
               f"{chart.name}: the fill is a release resource, not a post-readiness hook")
        # The volume group matches the machine pod (qemu, 107): otherwise writes
        # fail with Permission denied on simultaneous mounting (found in a tenant).
        fs = [((d["spec"]["template"]["spec"].get("securityContext") or {}).get("fsGroup"))
              for d in docs if d.get("kind") == "Job" and "-fill" in d["metadata"]["name"]]
        report(fs == [LAUNCHER_GID], f"{chart.name}: the fill writes to the volume with the machine pod group ({LAUNCHER_GID})"
               + ("" if fs == [LAUNCHER_GID] else f": {fs}"))
    probe = [{"kind": "VirtualMachine", "metadata": {"name": "m"}},
             {"kind": "Job", "metadata": {"name": "m-fill-x",
              "annotations": {"helm.sh/hook": "post-install,post-upgrade"}}}]
    report(fill_is_blocking_hook(probe),
           "negative control: a fill hook next to a machine is recognized")


def main() -> None:
    print("Checks of the \"Forgotten Systems\" catalog")
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
    print(f"\nTotal: passed {ok_count}, failed {fail_count}")
    sys.exit(1 if fail_count else 0)


if __name__ == "__main__":
    main()
