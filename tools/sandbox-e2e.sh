#!/usr/bin/env bash
#
# End-to-end check of the catalog machine in a live tenant: before the tag, not after.
#
# Everything that used to be checked by hand, piece by piece, and caught errors only
# after a release (the fill deadlock, the API egress label, links
# that never reached the cluster) in one run: install the machine as the
# tenant, wait for it to start, check its setup and its screen through the tenant
# console, restart it, delete it and make sure nothing is left.
#
#   tools/sandbox-e2e.sh
#
# Variables (defaults are our sandbox):
#   TENANT_KUBECONFIG, TENANT_CONTEXT, NS   — whose identity to install as (the tenant)
#   ADMIN_KUBECONFIG, ADMIN_CONTEXT         — read only: QEMU arguments
#   NAME                                    — name of the test machine
#   HARDWARE                                — base | chk
set -uo pipefail

TENANT_KUBECONFIG=${TENANT_KUBECONFIG:-$HOME/claude2-sandbox.kubeconfig}
TENANT_CONTEXT=${TENANT_CONTEXT:-sandbox}
ADMIN_KUBECONFIG=${ADMIN_KUBECONFIG:-$HOME/eng-cluster-admin.kubeconfig}
ADMIN_CONTEXT=${ADMIN_CONTEXT:-admin@workshop}
NS=${NS:-tenant-sandbox}
NAME=${NAME:-e2e}
HARDWARE=${HARDWARE:-chk}
REF_DARK=18607          # dark pixels on the screen of a booted Oberon (finding 48)
HERE=$(cd "$(dirname "$0")/.." && pwd)

t() { kubectl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" "$@"; }
a() { kubectl --kubeconfig "$ADMIN_KUBECONFIG" --context "$ADMIN_CONTEXT" -n "$NS" "$@"; }
vmi="oberon-vm-oberon-vm-$NAME"

bad=0
say() { if [ "$1" = ok ]; then echo "  ✅ $2"; else echo "  ❌ $2"; bad=1; fi; }
step() { echo; echo "── $*"; }
# wait_for(seconds, description, command...) — repeat the command until it returns 0
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
qemu_up() { local p; p=$(launcher_pod); [ -n "$p" ] && a exec "$p" -c compute -- sh -c 'ps -eo args | grep -q "[q]emu-system-"'; }

# The screen through the KubeVirt API vnc subresource, with tenant rights, like the
# dashboard console. The virtctl proxy accepts one connection and exits.
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
# The screen matches the reference, with retries: the system needs time to boot.
screen_ok() {
  local d
  for _ in $(seq 1 12); do
    d=$(screen_dark); [ "$d" = "$REF_DARK" ] && { echo "$d"; return 0; }; sleep 10
  done
  echo "${d:-no frame}"; return 1
}

step "installing $NAME (hardware: $HARDWARE) as the tenant"
t get oberonvms.apps.cozystack.io "$NAME" >/dev/null 2>&1 \
  && { echo "  machine $NAME already exists; delete it or set NAME"; exit 2; }
t apply -f - <<EOF >/dev/null
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata:
  name: $NAME
spec:
  memory: 128Mi
  hardware: $HARDWARE
EOF
wait_for 600 "machine running" running && say ok "machine running" || say no "machine did not start within 10 minutes"
wait_for 300 "release ready" sh -c "[ \"\$(kubectl --kubeconfig '$ADMIN_KUBECONFIG' --context '$ADMIN_CONTEXT' -n '$NS' get hr oberon-vm-$NAME -o jsonpath='{.status.conditions[?(@.type==\"Ready\")].status}')\" = True ]" \
  && say ok "Helm release ready" || say no "Helm release not ready: $(a get hr "oberon-vm-$NAME" -o jsonpath='{.status.conditions[?(@.type=="Ready")].message}' 2>/dev/null | cut -c1-160)"

step "machine setup"
rs=$(a get vm "$vmi" -o jsonpath='{.spec.runStrategy}' 2>/dev/null)
[ -n "$rs" ] && say ok "VirtualMachine, runStrategy=$rs" || say no "no VirtualMachine $vmi"
img=$(a get vmi "$vmi" -o jsonpath='{.status.launcherContainerImageVersion}' 2>/dev/null)
case "$img" in *-paleo-*|*-risc5-*) say ok "launcher: $img";; *) say no "launcher is not ours: ${img:-?}";; esac
wait_for 180 "emulator running" qemu_up
pod=$(launcher_pod)
args=$(a exec "$pod" -c compute -- sh -c 'ps -eo args | grep "[q]emu-system-"' 2>/dev/null | tr ' ' '\n')
echo "$args" | grep -q '^-vnc$' && say ok "screen served over VNC" || say no "the emulator has no -vnc"
if [ "$HARDWARE" = chk ]; then
  echo "$args" | grep -qx 'chk=on' && say ok "-machine chk=on" || say no "no -machine chk=on"
fi
# The user disk is writable. This used not to be checked: booting only
# reads, and a disk with rw-r--r-- permissions passed every check until saving
# a file inside Oberon crashed the machine. We look two ways: write
# permission for the container user (qemu) and the emulator's own answer on how it
# opened the drive (query-block through libvirt). ⚠ The emulator's /proc/<pid>/fd
# is unreadable even for the same user: the process is non-dumpable.
# shellcheck disable=SC2016 # expanded inside the pod
a exec "$pod" -c compute -- sh -c 'test -w /payload/oberon.dsk' \
  && say ok "disk writable by the emulator" || say no "disk is read-only"
# shellcheck disable=SC2016
ro=$(a exec "$pod" -c compute -- sh -c \
  'virsh -c qemu:///session qemu-monitor-command "$(virsh -c qemu:///session list --name | head -1)" "{\"execute\":\"query-block\"}"' 2>/dev/null \
  | python3 -c 'import json,sys; print(" ".join(str(b["inserted"]["ro"]) for b in json.load(sys.stdin)["return"] if (b.get("inserted") or {}).get("file") == "/payload/oberon.dsk"))' 2>/dev/null)
[ "$ro" = False ] && say ok "the emulator opened the disk read-write (query-block: ro=false)" || say no "the emulator opened the disk: ro=${ro:-not found}"
pvc_uid=$(a get pvc "$vmi-payload" -o jsonpath='{.metadata.uid}' 2>/dev/null)
[ -n "$pvc_uid" ] && say ok "volume $vmi-payload is part of the release" || say no "no volume"

step "node drain is not blocked by the machine"
# The cluster is in LiveMigrate, and a foreign machine does not migrate: without evictionStrategy None
# the eviction of its pod would be rejected and the node drain would hang. We check the
# machine setting directly and, in addition, a trial drain (--dry-run=server) of its pod
# only: the node is not touched. Whether KubeVirt rejects a trial eviction the same way as
# a real one is not verified, which is why the decisive check comes first.
node=$(a get vmi "$vmi" -o jsonpath='{.status.nodeName}' 2>/dev/null)
es=$(a get vmi "$vmi" -o jsonpath='{.spec.evictionStrategy}' 2>/dev/null)
[ "$es" = None ] && say ok "machine has evictionStrategy None" || say no "machine has evictionStrategy ${es:-unset}; with cluster-wide LiveMigrate the drain will hang"
if drain_out=$(kubectl --kubeconfig "$ADMIN_KUBECONFIG" --context "$ADMIN_CONTEXT" drain "$node" \
     --dry-run=server --pod-selector="kubevirt.io=virt-launcher,app.kubernetes.io/instance=oberon-vm-$NAME" \
     --ignore-daemonsets --delete-emptydir-data --timeout=60s 2>&1); then
  say ok "trial drain of node $node passes"
else
  say no "trial drain of node $node is blocked by the machine: $(printf '%s' "$drain_out" | tail -2 | tr '\n' ' ' | cut -c1-200)"
fi

step "screen through the tenant console"
d=$(screen_ok) && say ok "frame matches the reference ($d dark pixels)" || say no "frame does not match the reference: $d (expected $REF_DARK)"

step "restart as the tenant"
old=$(a get vmi "$vmi" -o jsonpath='{.metadata.uid}' 2>/dev/null)
if virtctl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" restart "$vmi" >/dev/null 2>&1; then
  say ok "virtctl restart accepted"
  restarted() { local u; u=$(a get vmi "$vmi" -o jsonpath='{.metadata.uid}' 2>/dev/null); [ -n "$u" ] && [ "$u" != "$old" ] && running; }
  wait_for 300 "machine restarted" restarted && say ok "machine came back up" || say no "machine did not come back after restart"
  [ "$(a get pvc "$vmi-payload" -o jsonpath='{.metadata.uid}' 2>/dev/null)" = "$pvc_uid" ] \
    && say ok "same volume: the disk survived the restart" || say no "volume recreated"
  wait_for 180 "emulator running" qemu_up
  d=$(screen_ok) && say ok "after restart the frame matches the reference" || say no "after restart the frame does not match the reference: $d"
else
  say no "virtctl restart rejected (tenant rights?)"
fi

step "deletion as the tenant"
t delete oberonvms.apps.cozystack.io "$NAME" --wait=false >/dev/null
gone() { [ -z "$(a get hr,vm,vmi,pvc,job,pod,cm --no-headers 2>/dev/null | grep -- "-$NAME")" ]; }
wait_for 240 "everything deleted" gone && say ok "nothing is left of the machine" \
  || say no "left over: $(a get hr,vm,vmi,pvc,job,pod,cm --no-headers 2>/dev/null | grep -- "-$NAME" | awk '{print $1}' | tr '\n' ' ')"

echo
[ $bad = 0 ] && echo "✅ end-to-end check passed" || echo "❌ end-to-end check failed"
exit $bad
