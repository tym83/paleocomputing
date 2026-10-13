#!/usr/bin/env bash
#
# End-to-end check of the X8 catalog machine (x8-vm, Dijkstra's THE) in a live
# tenant, before the tag. The same run as tools/sandbox-e2e.sh does for Oberon:
# install as the tenant, wait for it to start, check its setup and its console
# through the tenant's KubeVirt API, restart it, delete it and make sure nothing
# is left.
#
#   tools/sandbox-x8-e2e.sh
#
# Variables (defaults are our sandbox):
#   TENANT_KUBECONFIG, TENANT_CONTEXT, NS   — whose identity to install as (the tenant)
#   ADMIN_KUBECONFIG, ADMIN_CONTEXT         — read only: QEMU arguments
#   NAME                                    — name of the test machine
set -uo pipefail

TENANT_KUBECONFIG=${TENANT_KUBECONFIG:-$HOME/claude2-sandbox.kubeconfig}
TENANT_CONTEXT=${TENANT_CONTEXT:-sandbox}
ADMIN_KUBECONFIG=${ADMIN_KUBECONFIG:-$HOME/eng-cluster-admin.kubeconfig}
ADMIN_CONTEXT=${ADMIN_CONTEXT:-admin@workshop}
NS=${NS:-tenant-sandbox}
NAME=${NAME:-x8e2e}
# Dark pixels of the console once THE has booted and waits for the operator; the
# cursor blinks, so a settled screen shows one of two counts. The same values as
# the kind run in kubevirt-e2e.yml: the same QEMU draws the same text.
REF_DARK="373913 374041"
HERE=$(cd "$(dirname "$0")/.." && pwd)

t() { kubectl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" "$@"; }
a() { kubectl --kubeconfig "$ADMIN_KUBECONFIG" --context "$ADMIN_CONTEXT" -n "$NS" "$@"; }
vmi="x8-vm-x8-vm-$NAME"

bad=0
say() { if [ "$1" = ok ]; then echo "  ✅ $2"; else echo "  ❌ $2"; bad=1; fi; }
step() { echo; echo "── $*"; }
wait_for() {
  local limit=$1 what=$2; shift 2
  local s=0
  until "$@" >/dev/null 2>&1; do
    [ $s -ge "$limit" ] && { echo "  … $what: gave up after ${limit} s"; return 1; }
    sleep 5; s=$((s+5))
  done
}
running() { [ "$(a get vmi "$vmi" -o jsonpath='{.status.phase}' 2>/dev/null)" = Running ]; }
launcher_pod() { a get pods --no-headers 2>/dev/null | awk -v n="virt-launcher-$vmi-" 'index($1,n)==1 && $3=="Running"{print $1; exit}'; }
qemu_up() { local p; p=$(launcher_pod); [ -n "$p" ] && a exec "$p" -c compute -- sh -c 'ps -eo args | grep -q "[q]emu-system-x8"'; }

screen_dark() {
  local port=$((5900 + RANDOM % 90)) log; log=$(mktemp)
  virtctl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" \
    vnc "$vmi" --proxy-only --port "$port" >"$log" 2>&1 &
  local pid=$!
  for _ in $(seq 1 40); do grep -q '"port"' "$log" && break; sleep 0.5; done
  python3 "$HERE/kubevirt/vnc_snapshot.py" 127.0.0.1 "$port" "$(mktemp).ppm" 2>/dev/null \
    | sed -n 's/.*dark_pixels=\([0-9]*\).*/\1/p'
  kill $pid 2>/dev/null; rm -f "$log"
}
screen_ok() {
  local d
  for _ in $(seq 1 18); do
    d=$(screen_dark)
    case " $REF_DARK " in *" $d "*) [ -n "$d" ] && { echo "$d"; return 0; } ;; esac
    sleep 10
  done
  echo "${d:-no frame}"; return 1
}

step "installing $NAME as the tenant"
t get x8vms.apps.cozystack.io "$NAME" >/dev/null 2>&1 \
  && { echo "  machine $NAME already exists; delete it or set NAME"; exit 2; }
t apply -f - <<EOF >/dev/null
apiVersion: apps.cozystack.io/v1alpha1
kind: X8VM
metadata:
  name: $NAME
spec:
  memory: 128Mi
EOF
wait_for 600 "machine running" running && say ok "machine running" || say no "machine did not start within 10 minutes"
wait_for 300 "release ready" sh -c "[ \"\$(kubectl --kubeconfig '$ADMIN_KUBECONFIG' --context '$ADMIN_CONTEXT' -n '$NS' get hr x8-vm-$NAME -o jsonpath='{.status.conditions[?(@.type==\"Ready\")].status}')\" = True ]" \
  && say ok "Helm release ready" || say no "Helm release not ready: $(a get hr "x8-vm-$NAME" -o jsonpath='{.status.conditions[?(@.type=="Ready")].message}' 2>/dev/null | cut -c1-160)"

step "machine setup"
rs=$(a get vm "$vmi" -o jsonpath='{.spec.runStrategy}' 2>/dev/null)
[ -n "$rs" ] && say ok "VirtualMachine, runStrategy=$rs" || say no "no VirtualMachine $vmi"
img=$(a get vmi "$vmi" -o jsonpath='{.status.launcherContainerImageVersion}' 2>/dev/null)
case "$img" in *-paleo-*) say ok "launcher: $img";; *) say no "launcher is not ours: ${img:-?}";; esac
wait_for 180 "emulator running" qemu_up
pod=$(launcher_pod)
args=$(a exec "$pod" -c compute -- sh -c 'ps -eo args | grep "[q]emu-system-x8"' 2>/dev/null)
case "$args" in *qemu-system-x8*) say ok "qemu-system-x8 runs in the machine pod";; *) say no "qemu-system-x8 is not running";; esac
case "$args" in *"-kernel /payload/the.tape"*) say ok "the THE tape is the kernel";; *) say no "the THE tape is not the kernel";; esac
es=$(a get vmi "$vmi" -o jsonpath='{.spec.evictionStrategy}' 2>/dev/null)
[ "$es" = None ] && say ok "machine has evictionStrategy None" || say no "machine has evictionStrategy ${es:-unset}"

step "console through the tenant's KubeVirt API"
d=$(screen_ok) && say ok "THE booted and waits for the operator ($d dark pixels)" || say no "console does not match the booted THE: $d (expected one of $REF_DARK)"

step "restart as the tenant"
old=$(a get vmi "$vmi" -o jsonpath='{.metadata.uid}' 2>/dev/null)
pvc_uid=$(a get pvc "$vmi-payload" -o jsonpath='{.metadata.uid}' 2>/dev/null)
if virtctl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" restart "$vmi" >/dev/null 2>&1; then
  say ok "virtctl restart accepted"
  restarted() { local u; u=$(a get vmi "$vmi" -o jsonpath='{.metadata.uid}' 2>/dev/null); [ -n "$u" ] && [ "$u" != "$old" ] && running; }
  wait_for 300 "machine restarted" restarted && say ok "machine came back up" || say no "machine did not come back after restart"
  [ "$(a get pvc "$vmi-payload" -o jsonpath='{.metadata.uid}' 2>/dev/null)" = "$pvc_uid" ] \
    && say ok "same volume after the restart" || say no "volume recreated"
  wait_for 180 "emulator running" qemu_up
  d=$(screen_ok) && say ok "after restart THE booted again ($d)" || say no "after restart the console does not match: $d"
else
  say no "virtctl restart rejected (tenant rights?)"
fi

step "deletion as the tenant"
t delete x8vms.apps.cozystack.io "$NAME" --wait=false >/dev/null
gone() { [ -z "$(a get hr,vm,vmi,pvc,job,pod,cm --no-headers 2>/dev/null | grep -- "-$NAME")" ]; }
wait_for 240 "everything deleted" gone && say ok "nothing is left of the machine" \
  || say no "left over: $(a get hr,vm,vmi,pvc,job,pod,cm --no-headers 2>/dev/null | grep -- "-$NAME" | awk '{print $1}' | tr '\n' ' ')"

echo
[ $bad = 0 ] && echo "✅ X8 end-to-end check passed" || echo "❌ X8 end-to-end check failed"
exit $bad
