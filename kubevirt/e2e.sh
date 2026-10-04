#!/bin/sh
# End-to-end check of the launcher on real KubeVirt, without a live cluster.
#
#   kubevirt/e2e.sh <step>         steps in order:
#
#     tools      download kind and virtctl (pinned versions) into $E2E_DIR/bin
#     cluster    bring up a kind cluster and load the launcher image into it
#     kubevirt   install KubeVirt $KUBEVIRT_VERSION: emulation, Sidecar gate
#     launcher   replace the launcher with the same pass as the platform
#                component kubevirt-paleo-launcher (its reconcile.sh once), and
#                wait until virt-controller rolls out and takes the leader lease
#     machine    render the oberon-vm chart, apply it, wait for the machine
#     screen     capture the screen via `virtctl vnc --proxy-only` and compare
#                with the reference: dark_pixels=18607
#     diag       dump everything needed to analyse a failure
#     down       delete the kind cluster
#
# KubeVirt version: KUBEVIRT_VERSION or the first line of kubevirt/versions.txt.
# The launcher image (LAUNCHER_IMAGE) must already be in the local docker:
#
#   kubevirt/build.sh --kubevirt v1.9.0 paleo.local/virt-launcher:v1.9.0-paleo-e2e --load
#
# Everything of our own (kubeconfig, binaries, snapshot) lives in $E2E_DIR;
# ~/.kube/config is neither read nor written, and every kubectl command uses an
# explicit --context. Finding 67.
set -eu
ROOT=$(cd "$(dirname "$0")/.." && pwd)

KUBEVIRT_VERSION=${KUBEVIRT_VERSION:-$(awk '!/^#/ && NF { print $1; exit }' "$ROOT/kubevirt/versions.txt")}
LAUNCHER_IMAGE=${LAUNCHER_IMAGE:-paleo.local/virt-launcher:$KUBEVIRT_VERSION-paleo-e2e}
E2E_DIR=${E2E_DIR:-${RUNNER_TEMP:-/tmp}/paleo-e2e-$KUBEVIRT_VERSION}
CLUSTER=${CLUSTER:-paleo-e2e}
CONTEXT=kind-$CLUSTER
NS=${NS:-e2e}
RELEASE=${RELEASE:-wirth}
KV_NS=kubevirt

# kind and its node image as a pair from the kind release notes. Kubernetes
# 1.35 is within the support window of both KubeVirt 1.8 and 1.9.
KIND_VERSION=${KIND_VERSION:-v0.33.0}
KIND_NODE_IMAGE=${KIND_NODE_IMAGE:-kindest/node:v1.35.8@sha256:07b2536e30b803ed61d1677a79df6115f798ce64c80f9e22f6ed45afd09323c0}

# Timeouts. Emulation on the runner is slow, and the machine does not start at
# once: until the fill job has put the files in place, the hook refuses, and
# KubeVirt retries the launch with a growing backoff (up to 300 s).
KUBEVIRT_TIMEOUT=${KUBEVIRT_TIMEOUT:-900}
LAUNCHER_TIMEOUT=${LAUNCHER_TIMEOUT:-600}
MACHINE_TIMEOUT=${MACHINE_TIMEOUT:-1200}
SCREEN_TIMEOUT=${SCREEN_TIMEOUT:-600}
EXPECT_DARK=${EXPECT_DARK:-18607}

KUBECONFIG_FILE=$E2E_DIR/kubeconfig
BIN=$E2E_DIR/bin
VM=oberon-vm-$RELEASE
mkdir -p "$BIN"
PATH=$BIN:$PATH

log() { printf '%s [e2e %s] %s\n' "$(date -u +%H:%M:%S)" "$KUBEVIRT_VERSION" "$*"; }
die() { log "FAILED: $*"; exit 1; }

k() { kubectl --kubeconfig "$KUBECONFIG_FILE" --context "$CONTEXT" "$@"; }

# Step duration goes to the log and to the GitHub Actions job summary.
STEP_START=$(date +%s)
took() {
  s=$(( $(date +%s) - STEP_START ))
  log "step $1: $s s"
  if [ -n "${GITHUB_STEP_SUMMARY:-}" ]; then
    printf '| %s | %s | %s s |\n' "$KUBEVIRT_VERSION" "$1" "$s" >> "$GITHUB_STEP_SUMMARY"
  fi
}

# Wait until the command succeeds, but no longer than $1 seconds.
wait_for() {  # timeout description command...
  limit=$1 what=$2; shift 2
  t0=$(date +%s)
  until "$@"; do
    [ $(( $(date +%s) - t0 )) -lt "$limit" ] || { log "gave up after $limit s: $what"; return 1; }
    sleep 5
  done
  log "done in $(( $(date +%s) - t0 )) s: $what"
}

os_arch() {
  os=$(uname -s | tr '[:upper:]' '[:lower:]')
  case $(uname -m) in x86_64|amd64) arch=amd64 ;; aarch64|arm64) arch=arm64 ;; *) die "architecture $(uname -m)" ;; esac
}

# ── Steps ───────────────────────────────────────────────────────────────────

step_tools() {
  if [ -n "${GITHUB_STEP_SUMMARY:-}" ]; then
    printf '| KubeVirt | step | time |\n|---|---|---|\n' >> "$GITHUB_STEP_SUMMARY"
  fi
  os_arch
  curl -fsSL -o "$BIN/kind" "https://github.com/kubernetes-sigs/kind/releases/download/$KIND_VERSION/kind-$os-$arch"
  # virtctl at the same version as KubeVirt: the vnc subresource is versioned.
  curl -fsSL -o "$BIN/virtctl" "https://github.com/kubevirt/kubevirt/releases/download/$KUBEVIRT_VERSION/virtctl-$KUBEVIRT_VERSION-$os-$arch"
  chmod +x "$BIN/kind" "$BIN/virtctl"
  kind version
  virtctl version --client
  kubectl version --client
  helm version --short
}

step_cluster() {
  docker image inspect "$LAUNCHER_IMAGE" >/dev/null 2>&1 \
    || die "image $LAUNCHER_IMAGE is not in the local docker: run kubevirt/build.sh ... --load first"
  kind create cluster --name "$CLUSTER" --image "$KIND_NODE_IMAGE" \
    --kubeconfig "$KUBECONFIG_FILE" --wait 180s
  # The launcher image is local only (paleo.local is not a registry): the
  # machine pod takes it from the node, there is nowhere to pull it from. If it
  # did not load, the machine fails with ErrImagePull rather than running on a
  # foreign image.
  kind load docker-image "$LAUNCHER_IMAGE" --name "$CLUSTER"
  k get nodes -o wide
  k get storageclass
}

step_kubevirt() {
  base=https://github.com/kubevirt/kubevirt/releases/download/$KUBEVIRT_VERSION
  k apply -f "$base/kubevirt-operator.yaml"
  k -n "$KV_NS" rollout status deployment/virt-operator --timeout=600s
  # useEmulation: the runner has no /dev/kvm. This costs the Wirth machine
  # nothing: QEMU runs a foreign architecture in software (TCG) even with KVM.
  # Sidecar: without it the hook does not run (finding 48).
  k apply -f - <<EOF
apiVersion: kubevirt.io/v1
kind: KubeVirt
metadata:
  name: kubevirt
  namespace: $KV_NS
spec:
  # A single node: second replicas of virt-api and virt-controller would only
  # eat the runner's memory. This does not simplify the leader lease (the
  # launcher step): we still wait for it explicitly.
  infra:
    replicas: 1
  configuration:
    developerConfiguration:
      useEmulation: true
      featureGates: [Sidecar]
EOF
  k -n "$KV_NS" wait kubevirt/kubevirt --for=condition=Available --timeout="${KUBEVIRT_TIMEOUT}s"
  obs=$(k -n "$KV_NS" get kubevirt kubevirt -o jsonpath='{.status.observedKubeVirtVersion}')
  [ "$obs" = "$KUBEVIRT_VERSION" ] || die "KubeVirt reports version $obs, expected $KUBEVIRT_VERSION"
  k -n "$KV_NS" get pods -o wide
}

# What the platform pass currently sees: the state from its ConfigMap.
launcher_state() {
  k -n "$KV_NS" get configmap kubevirt-paleo-launcher-status -o jsonpath='{.data.state}' 2>/dev/null
}

# The leader lease is held by a pod of the new virt-controller (finding 58:
# while the old one holds it, it creates the machine pods, with the stock
# launcher).
leader_is_new() {
  holder=$(k -n "$KV_NS" get lease virt-controller -o jsonpath='{.spec.holderIdentity}' 2>/dev/null) || return 1
  [ -n "$holder" ] || return 1
  for p in $(k -n "$KV_NS" get pods -l kubevirt.io=virt-controller -o jsonpath='{.items[*].metadata.name}'); do
    img=$(k -n "$KV_NS" get pod "$p" -o jsonpath='{.spec.containers[0].args[1]}')
    [ "$p" = "$holder" ] && [ "$img" = "$LAUNCHER_IMAGE" ] && return 0
  done
  return 1
}

reconcile_once() {
  KUBECTL=$BIN/kubectl-e2e KUBEVIRT_NAMESPACE=$KV_NS KUBEVIRT_NAME=kubevirt \
    LAUNCHER_TABLE=$E2E_DIR/launchers.txt \
    sh "$ROOT/marketplace/repos/platform/packages/system/kubevirt-paleo-launcher/files/reconcile.sh" once
}

reconcile_applied() {
  reconcile_once || true
  [ "$(launcher_state)" = Applied ]
}

step_launcher() {
  # reconcile.sh calls "$KUBECTL" without arguments, so the wrapper carries
  # our kubeconfig and context.
  cat > "$BIN/kubectl-e2e" <<EOF
#!/bin/sh
exec kubectl --kubeconfig "$KUBECONFIG_FILE" --context "$CONTEXT" "\$@"
EOF
  chmod +x "$BIN/kubectl-e2e"
  # The table is like the component's files/launchers.txt, only with the local image.
  printf '# kubevirt/e2e.sh\n%s %s\n' "$KUBEVIRT_VERSION" "$LAUNCHER_IMAGE" > "$E2E_DIR/launchers.txt"
  # On the platform the state ConfigMap is created by the component chart; here, by hand.
  k -n "$KV_NS" create configmap kubevirt-paleo-launcher-status --dry-run=client -o yaml | k apply -f -

  reconcile_once || die "the first reconcile.sh pass failed"
  [ "$(launcher_state)" = Applying ] || die "after the first pass the state is $(launcher_state), expected Applying"
  k -n "$KV_NS" get kubevirt kubevirt -o jsonpath='{.spec.customizeComponents}'; echo

  wait_for "$LAUNCHER_TIMEOUT" "virt-controller rolled out with the launcher (state Applied)" reconcile_applied \
    || die "state $(launcher_state)"
  args=$(k -n "$KV_NS" get deployment virt-controller -o jsonpath='{.spec.template.spec.containers[0].args}')
  log "virt-controller arguments: $args"
  case $args in
    *'"--launcher-image","'"$LAUNCHER_IMAGE"'"'*) ;;
    *) die "virt-controller does not have our --launcher-image" ;;
  esac
  wait_for "$LAUNCHER_TIMEOUT" "the new virt-controller holds the leader lease" leader_is_new \
    || die "leader lease: $(k -n "$KV_NS" get lease virt-controller -o jsonpath='{.spec.holderIdentity}')"
}

vm_ready() {
  [ "$(k -n "$NS" get vm "$VM" -o jsonpath='{.status.ready}' 2>/dev/null)" = true ]
}

step_machine() {
  k create namespace "$NS" --dry-run=client -o yaml | k apply -f -
  # The catalog chart as is; only the storage class differs: on kind it is
  # standard (local-path), not replicated from LINSTOR.
  helm template "$RELEASE" "$ROOT/marketplace/repos/machines/packages/apps/oberon-vm" \
    --namespace "$NS" --set storageClass=standard > "$E2E_DIR/oberon-vm.yaml"
  k -n "$NS" apply -f "$E2E_DIR/oberon-vm.yaml"

  k -n "$NS" wait job -l app.kubernetes.io/instance="$RELEASE" --for=condition=Complete \
    --timeout="${MACHINE_TIMEOUT}s" || die "the volume fill job did not complete"
  wait_for "$MACHINE_TIMEOUT" "VirtualMachine $VM ready" vm_ready || die "machine not ready"

  pod=$(k -n "$NS" get pods -l kubevirt.io=virt-launcher,app.kubernetes.io/instance="$RELEASE" \
          --field-selector=status.phase=Running -o jsonpath='{.items[0].metadata.name}')
  img=$(k -n "$NS" get pod "$pod" -o jsonpath='{.spec.containers[?(@.name=="compute")].image}')
  log "machine pod $pod, launcher $img"
  [ "$img" = "$LAUNCHER_IMAGE" ] || die "machine pod runs a foreign launcher: $img"
  # The emulator is our qemu-system-risc5: so the hook rewrote the domain and
  # libvirt in the image accepted the architecture.
  # shellcheck disable=SC2016 # expanded in the pod, not here
  emu=$(k -n "$NS" exec "$pod" -c compute -- sh -c \
    'for p in /proc/[0-9]*; do tr "\0" " " < "$p/cmdline" 2>/dev/null; echo; done' \
    | grep -m1 'qemu-system-risc5') || die "qemu-system-risc5 is not running in the machine pod"
  log "emulator: $emu"
}

snapshot_once() {
  port=$(( 5900 + $(date +%s) % 90 ))
  virtctl --kubeconfig "$KUBECONFIG_FILE" --context "$CONTEXT" -n "$NS" \
    vnc "$VM" --proxy-only --port "$port" > "$E2E_DIR/virtctl-vnc.log" 2>&1 &
  proxy=$!
  sleep 3
  # ⚠ The proxy accepts one connection and exits: do not probe the port with
  # anything but the snapshot itself (finding 59).
  out=$(python3 "$ROOT/kubevirt/vnc_snapshot.py" 127.0.0.1 "$port" "$E2E_DIR/screen.ppm" 2>&1) || true
  kill "$proxy" 2>/dev/null || true
  wait "$proxy" 2>/dev/null || true
  log "snapshot: ${out:-empty}"
  case $out in *"dark_pixels=$EXPECT_DARK"*) return 0 ;; esac
  [ -s "$E2E_DIR/virtctl-vnc.log" ] && sed 's/^/  virtctl: /' "$E2E_DIR/virtctl-vnc.log"
  return 1
}

step_screen() {
  wait_for "$SCREEN_TIMEOUT" "Oberon screen matched the reference (dark_pixels=$EXPECT_DARK)" snapshot_once \
    || die "screen did not match the reference"
}

step_diag() {
  set +e
  section() { printf '\n::group::%s\n' "$1"; }
  endsec() { printf '::endgroup::\n'; }
  section "nodes and pods"; k get nodes -o wide; k get pods -A -o wide; endsec
  section "KubeVirt"; k -n "$KV_NS" get kubevirt kubevirt -o yaml; endsec
  section "virt-controller"
  k -n "$KV_NS" get deployment virt-controller -o jsonpath='{.spec.template.spec.containers[0].args}'; echo
  k -n "$KV_NS" get lease virt-controller -o yaml
  k -n "$KV_NS" logs -l kubevirt.io=virt-controller --tail=200 --prefix
  endsec
  section "launcher component state"; k -n "$KV_NS" get configmap kubevirt-paleo-launcher-status -o yaml; endsec
  section "virt-handler"; k -n "$KV_NS" logs -l kubevirt.io=virt-handler --tail=300 --prefix; endsec
  section "machine: VM, VMI, job, volume"
  k -n "$NS" get vm,vmi,job,pvc,pods -o wide
  k -n "$NS" get vm "$VM" -o yaml
  k -n "$NS" get vmi "$VM" -o yaml
  k -n "$NS" logs -l job-name --tail=100 --prefix
  endsec
  section "events"; k -n "$NS" get events --sort-by=.lastTimestamp; k -n "$KV_NS" get events --sort-by=.lastTimestamp | tail -50; endsec
  for pod in $(k -n "$NS" get pods -l kubevirt.io=virt-launcher -o jsonpath='{.items[*].metadata.name}'); do
    section "pod $pod"
    k -n "$NS" describe pod "$pod"
    for c in $(k -n "$NS" get pod "$pod" -o jsonpath='{.spec.containers[*].name}'); do
      echo "── $c"; k -n "$NS" logs "$pod" -c "$c" --tail=300
    done
    endsec
  done
  [ -s "$E2E_DIR/virtctl-vnc.log" ] && { section "virtctl vnc"; cat "$E2E_DIR/virtctl-vnc.log"; endsec; }
  return 0
}

step_down() {
  kind delete cluster --name "$CLUSTER" --kubeconfig "$KUBECONFIG_FILE"
}

step=${1:?specify a step: tools cluster kubevirt launcher machine screen diag down}
log "step $step, launcher $LAUNCHER_IMAGE, directory $E2E_DIR"
case $step in
  tools|cluster|kubevirt|launcher|machine|screen|diag|down) "step_$step" ;;
  *) die "unknown step $step" ;;
esac
took "$step"
