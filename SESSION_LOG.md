[Русская версия](SESSION_LOG.ru.md)

# Session log — paleocomputing (2026-09-25 → 26)

## Goal
Finish the episode's headline result in the browser (hardware switch + the cost of
bounds checking) and bring the machine's capabilities to parity between browser and cluster.

## Current state (28.09, after the v0.1.15 release)
- **v0.1.15** released (batch #47–#58). The `workshop` cluster is on the tag: the
  `machines` and `platform` catalogs are at v0.1.15, launcher `v1.8.4-paleo-v0.1.15`, the
  platform component is in the Applied state.
- The release check in `tenant-sandbox` passed in full: machine 17/17, platform
  component 5/5 (including booting a plain Ubuntu on our launcher).
- Test environments removed: kind `paleo-e2e`, the trial QEMU build, all worktrees and branches.

## Next step
No open items for the release. Next, follow BACKLOG.md; items 15 (application to the
Cozystack community index) and 16 (the next episodes of the series) are postponed by the
user's decision. Releases go in batches per milestone, each through the sandbox on `dev`.

## Journal
### 25.09 evening — the headline result
Two wasm variants (base and chk), the workload from a single template, the page
`/oberon/checks.html`. Numbers: 11.00 → 10.00 cycles per indexing operation, exactly 1
instruction and 1 cycle saved, 9.1% on this workload. Finding 55.

### 26.09 night — parity
CHK in QEMU (decoder + translator), the machine property `chk=on`, an annotation in the
catalog package, the hook reads it. QEMU↔RTL differential with a negative control.
Finding 56.

### 26.09 morning — disk and CI
The QEMU log (`-d cpu`, one instruction per block) filled the Docker VM's disk;
it now goes into a `head -c` pipeline. Added the `hardware` workflow (RTL + QEMU),
a page markup check, the lab moved to the working flow.
Reproducibility fixes: bench paths are absolute, the QEMU tree is pinned by
commit, the checks read the same files that ship to the reader.

### 26.09 day — PR #15 merged, the plan for tail 2 turned out wrong
- The PR was a draft; moved to ready and merged.
- Tag `v0.1.5` already exists, the latest is `v0.1.7`. The item "publish v0.1.5" is stale.
- **A tag will not bring CHK to the cluster.** `publish.yml` builds oberon-web/lab/run;
  `emulatorImage` (oberon-run) carries only the ROM and the disk. The emulator lives in the
  `virt-launcher` image (`kubevirt/Containerfile`), which CI does not build. The published
  `virt-launcher:v1.8.4-risc5` predates CHK.
- `kubevirt/Containerfile` clones QEMU without a pin (HEAD), although in #15 the tree is
  pinned by `QEMU_REF` in `qemu/Makefile`. It must be pinned to the same commit.

### 26.09 evening — launcher from the pinned tree
- `kubevirt/build.sh` + `Containerfile.dockerignore`, the context is the repo root.
- Locally (colima, no buildx → DOCKER_BUILDKIT=0) a bug turned up: the qemu-build stage
  has no /src → `mkdir -p`. After the fix the stage built, `chk` is present.
- The final stage (FROM virt-launcher:v1.8.4, amd64) did not build locally;
  CI will check it.

### 27.09 — publish green, launcher swapped
- Run 1: `oberon-web` failed (build stage without tools/ and tests/) → PR #17.
  `launcher`: `write_package`; the package had been uploaded by hand and was not linked
  to the repo; the user granted Actions Write access in the package settings.
- Run 36253092554: all five jobs green.
- `customizeComponents` in `cozy-kubevirt/kubevirt` → `-dev`, virt-controller rolled out.

### 27.09 — a live chk run in the cluster found a stale copy of the hook
- Catalog `tap-paleocomputing-machines` → `dev` (5 artifacts), `OberonVM wirth-chk`
  with `hardware: chk` in `tenant-sandbox`: pod 2/2, launcher `-dev`, the annotation on the VMI
  is present, yet `chk=on` is NOT in the QEMU arguments.
- Cause: #15 edited `kubevirt/onDefineDomain.py`, but the package carries its own copy
  `files/onDefineDomain.py` (Helm does not read outside the chart), without CHK. The hook test
  did not check chk and was not run in CI.
- Branch `fix/hook-chk-in-catalog`: a single copy (cluster paths `/usr/local/bin`,
  `/payload`), `cmp` in CI, a test for chk + a negative control (the old copy
  goes red exactly on chk).
- Next: merge → publish `dev` → re-read the catalog → recreate `wirth-chk`.

### 27.09 — CHK works in the cluster
- #19: the oberon-vm volume and fill job are pre-install only (otherwise an upgrade
  deletes the volume under the machine; before-hook-creation is the default); check.py runs
  in publish before the catalog is uploaded.
- Stuck releases wirth/wirth-chk deleted by the user; a race: flux finished installing
  wirth after the HR was deleted → orphaned resources, also deleted.
- Catalog dev@ab7ce00…, `wirth-chk` recreated: QEMU has `-machine chk=on`, the domain is
  running, the framebuffer is non-empty (6379 non-zero bytes).
- The launcher in `workshop` is still on `-dev`, the catalog too is on `dev`.

### 27.09 — release v0.1.8, signing identity
- PR #20 (the /cozystack/ page, index → v0.1.8) merged, tag v0.1.8, publish on the tag green.
- Finding 57: a signature from a tag push = `@refs/tags/vX`, the index expects `@refs/heads/main`,
  the index gate compares exactly; `cozypkg tap` does not verify the signature. #21: releases only
  via dispatch from main + building the tag's tree, the identity check is exact.

### 27.09 — plan in big chunks, agents
- #22 screen: the hook was stripping `graphics`, the launcher had no keymaps. Finding 59.
- #23 documentation (agent B): the README suggested tap by short name without --index.
- #24 the lab on the site was dead: `let lastCrc` twice → SyntaxError, the module
  was discarded. page-test.mjs now compiles inline modules. (In a controlled
  Chrome tab the module did not start even after the fix; not figured out, asked
  the user to open the production page by hand.)
- #25 FPU comparison with a single command `make -C qemu fp` + CI (agent D). My mistake:
  "no FPU" was a stale note.
- #26 (agent A): post-delete volume cleanup, launcher build on PR, digest pinning,
  the gha cache works for the first time (needs runtime-token). Finding 58.
- #27 CHERI (agent H): CHERIoT-Ibex SAFE A 8/9, B 9/10; Morello purecap = the same
  body length. Finding 63.
- #28 the ladder (agent E) + live CI: EPYC 9V45 — 1.000, GitHub's Arm core — +2…6%,
  M4 — noise; every compiler drops the `auto` check. Finding 61.
- Sandbox: reinstalling on top of leftovers → volume Terminating (held by a
  completed pod of the old job) → flux turned install into upgrade without hooks →
  "success" without a volume. Candidate for a finding / chart improvement.

### 27.09 — releases v0.1.9 and v0.1.10
- #29 launcher for KubeVirt 1.8.4 and 1.9.0 (agent C); #34 labs 10–12 (agent G,
  the plan's numbering shifted to 13–15); #33 screen via the KubeVirt API with tenant
  permissions = reference.
- v0.1.9 is the first release dispatched from main. In the tenant the volume cleanup hung:
  the pod lacked the `policy.cozystack.io/allow-to-apiserver` label → Cilium cuts it off → kubectl
  until the deadline. #36 label + check.py. v0.1.10 released, cleanup verified live.
- Race: after the launcher change the first machine got the previous image (the old
  controller leader).

### 28.09 — open items closed, release through the sandbox
- #39 lab: the browser does not execute an unclosed `<script>` (finding 66);
  a smoke test in headless Chrome in CI.
- #40 the `platform` component (finding 65), #41 machines as passports on the
  `retro-machine` library, OberonVM is a VirtualMachine (finding 64); publishing from a copy
  without symlinks (flux does not pack them, the tap unpacker skips them).
- v0.1.11 was stopped by our own checks (a test expected dev images), v0.1.12 by a
  fill deadlock (the post-install hook waited for the machine to be ready),
  v0.1.13 by a hard binding and a foreign volume group. The user rightly
  objected to "release after release" → #45: `dev` from branches + `tools/sandbox-e2e.sh`.
- v0.1.14: the end-to-end check before the tag passed in full; the stuck machines
  came up by themselves after the catalog update.

### 28.09 — the "what's left" list closed
- #47 KubeVirt e2e in kind (1.8.4 and 1.9.0, screen matches the reference), #48 why the check
  is free (Neoverse N2, spare width; 2 cycles on the critical path everywhere),
  #49 ECP5 FPGA (25 MHz with a 1.3–1.8× margin, CHK does not affect frequency),
  #50 node drain (evictionStrategy None) + image per release + browser on all
  pages, #51 labs 12 (A/B/E) and 13 (SQR, fixed point), #52 solutions
  7/12, #53–#54 platform scenario fixes.
- The platform scenario live: Unsupported → the stock launcher, the race heals
  itself, removing/reinstalling the component is clean. A plain VM: Running on our
  launcher; the boot check via the console did not work (method).
- Agents hung en masse (stream watchdog); I finished their branches myself.
- Cleanup: build/check2 removed, Docker images, worktrees, branches; colima stopped.

### 28.09 — release v0.1.15
- #57 guides "your own KubeVirt without Cozystack" and "plain QEMU" (en, ru),
  verified live: QEMU from scratch to the reference screen (base and chk), the KubeVirt steps
  and the rollback on kind; the rollback command was missing a table, fixed.
- #56 boot check for a plain VM: under pipefail the pipeline with `grep -q` failed
  when `login:` was found; `wait_for` counted only the pauses (1200 s → ~2 h).
- #58 index and site on v0.1.15, tag, publish green, catalogs reconnected.
- GitHub GraphQL kept breaking with EOF; PR and merge via `gh api` (REST).
