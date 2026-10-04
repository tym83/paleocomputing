#!/usr/bin/env bash
#
# Live check of the kubevirt-paleo-launcher platform component and of what it
# does to the cluster: the paths the machine end-to-end check does not cover.
#
#   tools/sandbox-platform-e2e.sh
#
# ⚠ Changes the SHARED cluster: during the check the launcher is switched to the stock one and
# back. Machines that start in this window get the stock image:
# ordinary ones survive that, foreign ones restart until they get ours.
#
# What it covers:
#   1. the component's patch: exactly one image replacement, the other arguments intact;
#   2. an unknown KubeVirt version: the version is removed from the component's table:
#      the patch is lifted and the cluster runs the stock launcher; the table comes back:
#      the patch is in place again;
#   3. a race: an Oberon machine is installed right after the table returns, while
#      virt-controller is still rolling out, and must survive until our image;
#   4. an ordinary machine (Ubuntu) boots fully on the current launcher;
#   5. removing the component restores the stock launcher, reinstalling it restores
#      ours (UNINSTALL=0 skips this).
set -uo pipefail

TENANT_KUBECONFIG=${TENANT_KUBECONFIG:-$HOME/claude2-sandbox.kubeconfig}
TENANT_CONTEXT=${TENANT_CONTEXT:-sandbox}
ADMIN_KUBECONFIG=${ADMIN_KUBECONFIG:-$HOME/eng-cluster-admin.kubeconfig}
ADMIN_CONTEXT=${ADMIN_CONTEXT:-admin@workshop}
NS=${NS:-tenant-sandbox}
KVNS=cozy-kubevirt
COZYPKG=${COZYPKG:-/tmp/cozypkg}
UNINSTALL=${UNINSTALL:-1}
# ONLY=4 runs a single step (by number) without touching the rest: for example,
# to check an ordinary machine without switching the shared cluster's launcher.
ONLY=${ONLY:-}

t()  { kubectl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" "$@"; }
a()  { kubectl --kubeconfig "$ADMIN_KUBECONFIG" --context "$ADMIN_CONTEXT" "$@"; }
kv() { a -n "$KVNS" "$@"; }

bad=0
say()  { if [ "$1" = ok ]; then echo "  ✅ $2"; else echo "  ❌ $2"; bad=1; fi; }
step() { echo; echo "── $*"; }
# The deadline is by the clock, not by the sum of pauses: an attempt itself can take tens of seconds
# (the console waits up to 25 s), and counting only pauses stretched 1200 s to two hours.
wait_for() {
  local limit=$1 what=$2; shift 2; local end=$((SECONDS + limit))
  until "$@" >/dev/null 2>&1; do
    [ $SECONDS -ge $end ] && { echo "  … $what: gave up after ${limit} s"; return 1; }
    sleep 5
  done
}
state()    { kv get cm kubevirt-paleo-launcher-status -o jsonpath='{.data.state}' 2>/dev/null; }
img()      { kv get cm kubevirt-paleo-launcher-status -o jsonpath='{.data.launcherImage}' 2>/dev/null; }
args()     { kv get deploy virt-controller -o jsonpath='{.spec.template.spec.containers[0].args}' 2>/dev/null; }
rolled()   { kv rollout status deploy/virt-controller --timeout=5s; }
ours_arg() { args | grep -q 'paleocomputing/virt-launcher'; }
stock_arg(){ args | grep -q 'quay.io/kubevirt/virt-launcher'; }
is()       { [ "$(state)" = "$1" ]; }
want()     { [ -z "$ONLY" ] || [ "$ONLY" = "$1" ]; }

if want 1; then
step "1. component patch"
is Applied && say ok "state Applied, image $(img)" || say no "state $(state)"
python3 - "$(args)" <<'EOF' && say ok "only the launcher image is replaced in the virt-controller arguments" || say no "virt-controller arguments are not in the expected form: $(args)"
import json, sys
a = json.loads(sys.argv[1])
assert a[0] == "--launcher-image" and "paleocomputing/virt-launcher" in a[1]
assert "--exporter-image" in a and "--port" in a
EOF
n=$(kv get kubevirt kubevirt -o json | python3 -c "import json,sys;print(len(json.load(sys.stdin)['spec'].get('customizeComponents',{}).get('patches',[])))")
[ "$n" = 1 ] && say ok "exactly one entry in customizeComponents" || say no "entries in customizeComponents: $n"
fi

if want 2; then
step "2. unknown KubeVirt version"
saved=$(kv get cm kubevirt-paleo-launcher -o jsonpath='{.data.launchers\.txt}')
ver=$(kv get kubevirt kubevirt -o jsonpath='{.status.observedKubeVirtVersion}')
stripped=$(printf '%s\n' "$saved" | grep -v "^$ver ")
kv create cm kubevirt-paleo-launcher --from-literal=launchers.txt="$stripped" --dry-run=client -o yaml \
  | kv patch cm kubevirt-paleo-launcher --type=merge --patch-file=/dev/stdin >/dev/null
echo "  table without $ver"
wait_for 180 "Unsupported" is Unsupported && say ok "state Unsupported" || say no "state $(state)"
wait_for 240 "stock launcher" stock_arg && say ok "patch lifted: virt-controller has the stock launcher" || say no "arguments: $(args)"
kv create cm kubevirt-paleo-launcher --from-literal=launchers.txt="$saved" --dry-run=client -o yaml \
  | kv patch cm kubevirt-paleo-launcher --type=merge --patch-file=/dev/stdin >/dev/null
echo "  table restored"
fi

if want 3; then
step "3. race: a machine right after the launcher returns"
t apply -f - <<EOF >/dev/null
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata: {name: race}
spec: {memory: 128Mi, hardware: base}
EOF
wait_for 180 "Applied" is Applied && say ok "patch is back: $(img)" || say no "state $(state)"
vmi=oberon-vm-oberon-vm-race
on_ours() {
  [ "$(a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.phase}' 2>/dev/null)" = Running ] &&
  a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.launcherContainerImageVersion}' | grep -q paleocomputing
}
wait_for 900 "machine on our launcher" on_ours \
  && say ok "the machine survived until our launcher: $(a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.launcherContainerImageVersion}')" \
  || say no "the machine did not come up on our launcher: $(a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.phase} {.status.launcherContainerImageVersion}' 2>/dev/null)"
t delete oberonvms.apps.cozystack.io race --wait=false >/dev/null
fi

if want 4; then
step "4. ordinary machine on the current launcher"
wait_for 300 "virt-controller rolled out" rolled
t apply -f - <<'EOF' >/dev/null
apiVersion: apps.cozystack.io/v1alpha1
kind: VMDisk
metadata: {name: plain}
spec:
  source: {image: {name: ubuntu-24.04}}
  # The disk is cloned from a shared image, and a clone cannot be smaller than
  # its source: for ubuntu-24.04 in cozy-public that is 20Gi (CDI rejects a smaller one
  # with CloneValidationFailed; the first run stopped right there).
  storage: 20Gi
  storageClass: replicated
---
apiVersion: apps.cozystack.io/v1alpha1
kind: VMInstance
metadata: {name: plain}
spec:
  instanceType: u1.medium
  instanceProfile: ubuntu
  runStrategy: Always
  disks: [{name: plain}]
EOF
pvmi=vm-instance-plain
# Whether the OS booted is judged by the login: prompt on the serial console, with
# tenant rights. The guest agent signal does not work here: a clean cloud
# image without cloud-init has no agent, and the machine would "never boot"
# (the first run failed the step this way while Ubuntu was running).
booted() {
  [ "$(a -n "$NS" get vmi "$pvmi" -o jsonpath='{.status.phase}' 2>/dev/null)" = Running ] || return 1
  # virtctl console without a terminal stays silent: the second run never saw
  # login: on a running Ubuntu. script gives it a pseudo-terminal; there is no
  # serial console log in this cluster (disableSerialConsoleLog).
  #
  # ⚠ Output goes to a variable first, then grep. Under pipefail a pipeline ending
  # in `grep -q` fails even when login: is found: the console
  # ends with the alarm or SIGPIPE, and its non-zero code wins;
  # the third run kept waiting on an Ubuntu that had already booted.
  local out
  out=$(printf '\r' | perl -e 'alarm 25; exec @ARGV' script -q /dev/null virtctl \
    --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" console "$pvmi" \
    2>/dev/null | tr -d '\r') || true
  grep -q "login:" <<<"$out"
}
wait_for 1200 "Ubuntu booted" booted \
  && say ok "Ubuntu booted (login: prompt on the console) on $(a -n "$NS" get vmi "$pvmi" -o jsonpath='{.status.launcherContainerImageVersion}')" \
  || say no "Ubuntu did not boot: $(a -n "$NS" get vmi "$pvmi" -o jsonpath='{.status.phase}' 2>/dev/null)"
t delete vminstances.apps.cozystack.io plain --wait=false >/dev/null
t delete vmdisks.apps.cozystack.io plain --wait=false >/dev/null
fi

if [ "$UNINSTALL" = 1 ] && want 5; then
  step "5. removal and reinstallation of the component"
  a delete packages.cozystack.io paleocomputing.platform --wait=false >/dev/null
  wait_for 300 "stock launcher" stock_arg && say ok "after removal: stock launcher" || say no "arguments after removal: $(args)"
  n=$(kv get kubevirt kubevirt -o json | python3 -c "import json,sys;print(len(json.load(sys.stdin)['spec'].get('customizeComponents',{}).get('patches',[])))")
  [ "$n" = 0 ] && say ok "no entry of ours left in customizeComponents" || say no "entries left: $n"
  printf '1\n' | "$COZYPKG" add --kubeconfig "$ADMIN_KUBECONFIG" paleocomputing.platform --allow-privileged >/dev/null 2>&1
  wait_for 300 "Applied" is Applied && wait_for 300 "our launcher" ours_arg \
    && say ok "after reinstallation: our launcher again" || say no "state $(state), arguments: $(args)"
fi

step "cleanup"
gone() { [ -z "$(a -n "$NS" get hr,vm,vmi,pvc,dv --no-headers 2>/dev/null | grep -E -- '-(race|plain)( |-|$)')" ]; }
wait_for 300 "everything deleted" gone && say ok "no test machines left" \
  || say no "left over: $(a -n "$NS" get hr,vm,vmi,pvc,dv --no-headers 2>/dev/null | grep -E -- '-(race|plain)( |-|$)' | awk '{print $1}' | tr '\n' ' ')"

echo
[ $bad = 0 ] && echo "✅ platform component check passed" || echo "❌ platform component check failed"
exit $bad
