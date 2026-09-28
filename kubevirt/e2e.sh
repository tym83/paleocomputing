#!/bin/sh
# Сквозная проверка launcher на настоящем KubeVirt — без живого кластера.
#
#   kubevirt/e2e.sh <шаг>          шаги по порядку:
#
#     tools      скачать kind и virtctl (версии прибиты) в $E2E_DIR/bin
#     cluster    поднять кластер kind и загрузить в него образ launcher
#     kubevirt   поставить KubeVirt $KUBEVIRT_VERSION: эмуляция, признак Sidecar
#     launcher   подменить launcher тем же проходом, что компонент платформы
#                kubevirt-paleo-launcher (его reconcile.sh once), и дождаться,
#                пока virt-controller перекатится и возьмёт аренду лидера
#     machine    отрисовать чарт oberon-vm, применить, дождаться машины
#     screen     снять экран через `virtctl vnc --proxy-only` и сверить
#                с эталоном: dark_pixels=18607
#     diag       выгрузить всё, что нужно для разбора отказа
#     down       удалить кластер kind
#
# Версия KubeVirt — KUBEVIRT_VERSION или первая строка kubevirt/versions.txt.
# Образ launcher (LAUNCHER_IMAGE) уже должен лежать в локальном docker:
#
#   kubevirt/build.sh --kubevirt v1.9.0 paleo.local/virt-launcher:v1.9.0-paleo-e2e --load
#
# Всё своё — kubeconfig, бинарники, снимок — в $E2E_DIR; ~/.kube/config не
# читается и не пишется, каждая команда kubectl идёт с явным --context.
# Находка 67.
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

# kind и его образ узла — парой из заметок к выпуску kind. Kubernetes 1.35 —
# в окне поддержки и KubeVirt 1.8, и 1.9.
KIND_VERSION=${KIND_VERSION:-v0.33.0}
KIND_NODE_IMAGE=${KIND_NODE_IMAGE:-kindest/node:v1.35.8@sha256:07b2536e30b803ed61d1677a79df6115f798ce64c80f9e22f6ed45afd09323c0}

# Сроки. Эмуляция на раннере медленная, а машина стартует не сразу: пока
# задача наполнения не положила файлы, перехватчик отказывает, и KubeVirt
# повторяет запуск с нарастающей паузой (до 300 с).
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
die() { log "ОТКАЗ: $*"; exit 1; }

k() { kubectl --kubeconfig "$KUBECONFIG_FILE" --context "$CONTEXT" "$@"; }

# Длительность шага — в журнал и в сводку задачи GitHub Actions.
STEP_START=$(date +%s)
took() {
  s=$(( $(date +%s) - STEP_START ))
  log "шаг $1: $s с"
  if [ -n "${GITHUB_STEP_SUMMARY:-}" ]; then
    printf '| %s | %s | %s с |\n' "$KUBEVIRT_VERSION" "$1" "$s" >> "$GITHUB_STEP_SUMMARY"
  fi
}

# Ждать, пока команда не пройдёт, но не дольше $1 секунд.
wait_for() {  # срок описание команда...
  limit=$1 what=$2; shift 2
  t0=$(date +%s)
  until "$@"; do
    [ $(( $(date +%s) - t0 )) -lt "$limit" ] || { log "не дождался за $limit с: $what"; return 1; }
    sleep 5
  done
  log "готово за $(( $(date +%s) - t0 )) с: $what"
}

os_arch() {
  os=$(uname -s | tr '[:upper:]' '[:lower:]')
  case $(uname -m) in x86_64|amd64) arch=amd64 ;; aarch64|arm64) arch=arm64 ;; *) die "архитектура $(uname -m)" ;; esac
}

# ── Шаги ────────────────────────────────────────────────────────────────────

step_tools() {
  if [ -n "${GITHUB_STEP_SUMMARY:-}" ]; then
    printf '| KubeVirt | шаг | время |\n|---|---|---|\n' >> "$GITHUB_STEP_SUMMARY"
  fi
  os_arch
  curl -fsSL -o "$BIN/kind" "https://github.com/kubernetes-sigs/kind/releases/download/$KIND_VERSION/kind-$os-$arch"
  # virtctl — той же версии, что KubeVirt: подресурс vnc версионирован.
  curl -fsSL -o "$BIN/virtctl" "https://github.com/kubevirt/kubevirt/releases/download/$KUBEVIRT_VERSION/virtctl-$KUBEVIRT_VERSION-$os-$arch"
  chmod +x "$BIN/kind" "$BIN/virtctl"
  kind version
  virtctl version --client
  kubectl version --client
  helm version --short
}

step_cluster() {
  docker image inspect "$LAUNCHER_IMAGE" >/dev/null 2>&1 \
    || die "образа $LAUNCHER_IMAGE нет в локальном docker — сначала kubevirt/build.sh ... --load"
  kind create cluster --name "$CLUSTER" --image "$KIND_NODE_IMAGE" \
    --kubeconfig "$KUBECONFIG_FILE" --wait 180s
  # Образ launcher только локальный (paleo.local — не реестр): под машины
  # берёт его с узла, скачать его неоткуда. Не загрузился — машина упадёт
  # на ErrImagePull, а не на чужом образе.
  kind load docker-image "$LAUNCHER_IMAGE" --name "$CLUSTER"
  k get nodes -o wide
  k get storageclass
}

step_kubevirt() {
  base=https://github.com/kubevirt/kubevirt/releases/download/$KUBEVIRT_VERSION
  k apply -f "$base/kubevirt-operator.yaml"
  k -n "$KV_NS" rollout status deployment/virt-operator --timeout=600s
  # useEmulation: на раннере нет /dev/kvm. Машине Вирта это ничего не стоит:
  # чужую архитектуру QEMU исполняет программно (TCG) и при KVM тоже.
  # Sidecar — без него перехватчик не запускается (находка 48).
  k apply -f - <<EOF
apiVersion: kubevirt.io/v1
kind: KubeVirt
metadata:
  name: kubevirt
  namespace: $KV_NS
spec:
  configuration:
    developerConfiguration:
      useEmulation: true
      featureGates: [Sidecar]
EOF
  k -n "$KV_NS" wait kubevirt/kubevirt --for=condition=Available --timeout="${KUBEVIRT_TIMEOUT}s"
  obs=$(k -n "$KV_NS" get kubevirt kubevirt -o jsonpath='{.status.observedKubeVirtVersion}')
  [ "$obs" = "$KUBEVIRT_VERSION" ] || die "KubeVirt сообщает версию $obs, ждали $KUBEVIRT_VERSION"
  k -n "$KV_NS" get pods -o wide
}

# Что сейчас видит проход платформы: состояние из его ConfigMap.
launcher_state() {
  k -n "$KV_NS" get configmap kubevirt-paleo-launcher-status -o jsonpath='{.data.state}' 2>/dev/null
}

# Аренду лидера держит под нового virt-controller (находка 58: пока её держит
# старый, поды машин создаёт он — со штатным launcher).
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
  # reconcile.sh зовёт "$KUBECTL" без аргументов — обёртка несёт наш
  # kubeconfig и контекст.
  cat > "$BIN/kubectl-e2e" <<EOF
#!/bin/sh
exec kubectl --kubeconfig "$KUBECONFIG_FILE" --context "$CONTEXT" "\$@"
EOF
  chmod +x "$BIN/kubectl-e2e"
  # Таблица — как files/launchers.txt компонента, только с локальным образом.
  printf '# kubevirt/e2e.sh\n%s %s\n' "$KUBEVIRT_VERSION" "$LAUNCHER_IMAGE" > "$E2E_DIR/launchers.txt"
  # ConfigMap состояния в платформе создаёт чарт компонента; здесь — руками.
  k -n "$KV_NS" create configmap kubevirt-paleo-launcher-status --dry-run=client -o yaml | k apply -f -

  reconcile_once || die "первый проход reconcile.sh не удался"
  [ "$(launcher_state)" = Applying ] || die "после первого прохода состояние $(launcher_state), ждали Applying"
  k -n "$KV_NS" get kubevirt kubevirt -o jsonpath='{.spec.customizeComponents}'; echo

  wait_for "$LAUNCHER_TIMEOUT" "virt-controller перекатился на launcher (состояние Applied)" reconcile_applied \
    || die "состояние $(launcher_state)"
  args=$(k -n "$KV_NS" get deployment virt-controller -o jsonpath='{.spec.template.spec.containers[0].args}')
  log "аргументы virt-controller: $args"
  case $args in
    *'"--launcher-image","'"$LAUNCHER_IMAGE"'"'*) ;;
    *) die "у virt-controller не наш --launcher-image" ;;
  esac
  wait_for "$LAUNCHER_TIMEOUT" "аренду лидера держит новый virt-controller" leader_is_new \
    || die "аренда лидера: $(k -n "$KV_NS" get lease virt-controller -o jsonpath='{.spec.holderIdentity}')"
}

vm_ready() {
  [ "$(k -n "$NS" get vm "$VM" -o jsonpath='{.status.ready}' 2>/dev/null)" = true ]
}

step_machine() {
  k create namespace "$NS" --dry-run=client -o yaml | k apply -f -
  # Чарт каталога как есть — отличается только класс тома: у kind это
  # standard (local-path), а не replicated из LINSTOR.
  helm template "$RELEASE" "$ROOT/marketplace/repos/machines/packages/apps/oberon-vm" \
    --namespace "$NS" --set storageClass=standard > "$E2E_DIR/oberon-vm.yaml"
  k -n "$NS" apply -f "$E2E_DIR/oberon-vm.yaml"

  k -n "$NS" wait job -l app.kubernetes.io/instance="$RELEASE" --for=condition=Complete \
    --timeout="${MACHINE_TIMEOUT}s" || die "задача наполнения тома не завершилась"
  wait_for "$MACHINE_TIMEOUT" "VirtualMachine $VM готова" vm_ready || die "машина не готова"

  pod=$(k -n "$NS" get pods -l kubevirt.io=virt-launcher,app.kubernetes.io/instance="$RELEASE" \
          --field-selector=status.phase=Running -o jsonpath='{.items[0].metadata.name}')
  img=$(k -n "$NS" get pod "$pod" -o jsonpath='{.spec.containers[?(@.name=="compute")].image}')
  log "под машины $pod, launcher $img"
  [ "$img" = "$LAUNCHER_IMAGE" ] || die "под машины на чужом launcher: $img"
  # Эмулятор — наш qemu-system-risc5: значит, перехватчик переписал домен, а
  # libvirt в образе принял архитектуру.
  # shellcheck disable=SC2016 # раскрывается в поде, не здесь
  emu=$(k -n "$NS" exec "$pod" -c compute -- sh -c \
    'for p in /proc/[0-9]*; do tr "\0" " " < "$p/cmdline" 2>/dev/null; echo; done' \
    | grep -m1 'qemu-system-risc5') || die "в поде машины не запущен qemu-system-risc5"
  log "эмулятор: $emu"
}

snapshot_once() {
  port=$(( 5900 + $(date +%s) % 90 ))
  virtctl --kubeconfig "$KUBECONFIG_FILE" --context "$CONTEXT" -n "$NS" \
    vnc "$VM" --proxy-only --port "$port" > "$E2E_DIR/virtctl-vnc.log" 2>&1 &
  proxy=$!
  sleep 3
  # ⚠ Прокси принимает одно подключение и выходит: порт не проверять ничем,
  # кроме самого снимка (находка 59).
  out=$(python3 "$ROOT/kubevirt/vnc_snapshot.py" 127.0.0.1 "$port" "$E2E_DIR/screen.ppm" 2>&1) || true
  kill "$proxy" 2>/dev/null || true
  wait "$proxy" 2>/dev/null || true
  log "снимок: ${out:-пусто}"
  case $out in *"dark_pixels=$EXPECT_DARK"*) return 0 ;; esac
  [ -s "$E2E_DIR/virtctl-vnc.log" ] && sed 's/^/  virtctl: /' "$E2E_DIR/virtctl-vnc.log"
  return 1
}

step_screen() {
  wait_for "$SCREEN_TIMEOUT" "экран Оберона совпал с эталоном (dark_pixels=$EXPECT_DARK)" snapshot_once \
    || die "экран не совпал с эталоном"
}

step_diag() {
  set +e
  section() { printf '\n::group::%s\n' "$1"; }
  endsec() { printf '::endgroup::\n'; }
  section "узлы и поды"; k get nodes -o wide; k get pods -A -o wide; endsec
  section "KubeVirt"; k -n "$KV_NS" get kubevirt kubevirt -o yaml; endsec
  section "virt-controller"
  k -n "$KV_NS" get deployment virt-controller -o jsonpath='{.spec.template.spec.containers[0].args}'; echo
  k -n "$KV_NS" get lease virt-controller -o yaml
  k -n "$KV_NS" logs -l kubevirt.io=virt-controller --tail=200 --prefix
  endsec
  section "состояние компонента launcher"; k -n "$KV_NS" get configmap kubevirt-paleo-launcher-status -o yaml; endsec
  section "virt-handler"; k -n "$KV_NS" logs -l kubevirt.io=virt-handler --tail=300 --prefix; endsec
  section "машина: VM, VMI, задача, том"
  k -n "$NS" get vm,vmi,job,pvc,pods -o wide
  k -n "$NS" get vm "$VM" -o yaml
  k -n "$NS" get vmi "$VM" -o yaml
  k -n "$NS" logs -l job-name --tail=100 --prefix
  endsec
  section "события"; k -n "$NS" get events --sort-by=.lastTimestamp; k -n "$KV_NS" get events --sort-by=.lastTimestamp | tail -50; endsec
  for pod in $(k -n "$NS" get pods -l kubevirt.io=virt-launcher -o jsonpath='{.items[*].metadata.name}'); do
    section "под $pod"
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

step=${1:?укажите шаг: tools cluster kubevirt launcher machine screen diag down}
log "шаг $step, launcher $LAUNCHER_IMAGE, каталог $E2E_DIR"
case $step in
  tools|cluster|kubevirt|launcher|machine|screen|diag|down) "step_$step" ;;
  *) die "неизвестный шаг $step" ;;
esac
took "$step"
