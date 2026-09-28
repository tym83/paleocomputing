#!/usr/bin/env bash
#
# Живая проверка компонента платформы kubevirt-paleo-launcher и того, что он
# делает с кластером, — те пути, которые сквозная проверка машины не проходит.
#
#   tools/sandbox-platform-e2e.sh
#
# ⚠ Меняет ОБЩИЙ кластер: на время проверки launcher уходит на штатный и
# возвращается. Машины, которые стартуют в этом окне, получают штатный образ —
# обычные это переживают, чужие перезапускаются, пока не получат наш.
#
# Что проходит:
#   1. правка компонента — ровно одна замена образа, остальные аргументы целы;
#   2. неизвестная версия KubeVirt: версия убирается из таблицы компонента —
#      правка снимается, кластер на штатном launcher; таблица возвращается —
#      правка на месте;
#   3. гонка: машина Оберона ставится сразу после возврата, пока
#      virt-controller ещё перекатывается, — и обязана дожить до нашего образа;
#   4. обычная машина (Ubuntu) на текущем launcher загружается целиком;
#   5. удаление компонента возвращает штатный launcher, повторная установка —
#      наш (UNINSTALL=0 — пропустить).
set -uo pipefail

TENANT_KUBECONFIG=${TENANT_KUBECONFIG:-$HOME/claude2-sandbox.kubeconfig}
TENANT_CONTEXT=${TENANT_CONTEXT:-sandbox}
ADMIN_KUBECONFIG=${ADMIN_KUBECONFIG:-$HOME/eng-cluster-admin.kubeconfig}
ADMIN_CONTEXT=${ADMIN_CONTEXT:-admin@workshop}
NS=${NS:-tenant-sandbox}
KVNS=cozy-kubevirt
COZYPKG=${COZYPKG:-/tmp/cozypkg}
UNINSTALL=${UNINSTALL:-1}
# ONLY=4 — прогнать один шаг (по номеру), не трогая остальные: например,
# проверить обычную машину, не переключая launcher общего кластера.
ONLY=${ONLY:-}

t()  { kubectl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" "$@"; }
a()  { kubectl --kubeconfig "$ADMIN_KUBECONFIG" --context "$ADMIN_CONTEXT" "$@"; }
kv() { a -n "$KVNS" "$@"; }

bad=0
say()  { if [ "$1" = ok ]; then echo "  ✅ $2"; else echo "  ❌ $2"; bad=1; fi; }
step() { echo; echo "── $*"; }
# Срок — по часам, а не по сумме пауз: попытка сама может идти десятки секунд
# (консоль ждёт до 25 с), и счёт одних пауз растягивал 1200 с до двух часов.
wait_for() {
  local limit=$1 what=$2; shift 2; local end=$((SECONDS + limit))
  until "$@" >/dev/null 2>&1; do
    [ $SECONDS -ge $end ] && { echo "  … $what: не дождались за ${limit} с"; return 1; }
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
step "1. правка компонента"
is Applied && say ok "состояние Applied, образ $(img)" || say no "состояние $(state)"
python3 - "$(args)" <<'EOF' && say ok "в аргументах virt-controller заменён только образ launcher" || say no "аргументы virt-controller не в той форме: $(args)"
import json, sys
a = json.loads(sys.argv[1])
assert a[0] == "--launcher-image" and "paleocomputing/virt-launcher" in a[1]
assert "--exporter-image" in a and "--port" in a
EOF
n=$(kv get kubevirt kubevirt -o json | python3 -c "import json,sys;print(len(json.load(sys.stdin)['spec'].get('customizeComponents',{}).get('patches',[])))")
[ "$n" = 1 ] && say ok "в customizeComponents ровно одна запись" || say no "записей в customizeComponents: $n"
fi

if want 2; then
step "2. неизвестная версия KubeVirt"
saved=$(kv get cm kubevirt-paleo-launcher -o jsonpath='{.data.launchers\.txt}')
ver=$(kv get kubevirt kubevirt -o jsonpath='{.status.observedKubeVirtVersion}')
stripped=$(printf '%s\n' "$saved" | grep -v "^$ver ")
kv create cm kubevirt-paleo-launcher --from-literal=launchers.txt="$stripped" --dry-run=client -o yaml \
  | kv patch cm kubevirt-paleo-launcher --type=merge --patch-file=/dev/stdin >/dev/null
echo "  таблица без $ver"
wait_for 180 "Unsupported" is Unsupported && say ok "состояние Unsupported" || say no "состояние $(state)"
wait_for 240 "штатный launcher" stock_arg && say ok "правка снята — у virt-controller штатный launcher" || say no "аргументы: $(args)"
kv create cm kubevirt-paleo-launcher --from-literal=launchers.txt="$saved" --dry-run=client -o yaml \
  | kv patch cm kubevirt-paleo-launcher --type=merge --patch-file=/dev/stdin >/dev/null
echo "  таблица возвращена"
fi

if want 3; then
step "3. гонка: машина сразу после возврата launcher"
t apply -f - <<EOF >/dev/null
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata: {name: race}
spec: {memory: 128Mi, hardware: base}
EOF
wait_for 180 "Applied" is Applied && say ok "правка вернулась: $(img)" || say no "состояние $(state)"
vmi=oberon-vm-oberon-vm-race
on_ours() {
  [ "$(a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.phase}' 2>/dev/null)" = Running ] &&
  a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.launcherContainerImageVersion}' | grep -q paleocomputing
}
wait_for 900 "машина на нашем launcher" on_ours \
  && say ok "машина дожила до нашего launcher: $(a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.launcherContainerImageVersion}')" \
  || say no "машина не поднялась на нашем launcher: $(a -n "$NS" get vmi "$vmi" -o jsonpath='{.status.phase} {.status.launcherContainerImageVersion}' 2>/dev/null)"
t delete oberonvms.apps.cozystack.io race --wait=false >/dev/null
fi

if want 4; then
step "4. обычная машина на текущем launcher"
wait_for 300 "virt-controller перекатился" rolled
t apply -f - <<'EOF' >/dev/null
apiVersion: apps.cozystack.io/v1alpha1
kind: VMDisk
metadata: {name: plain}
spec:
  source: {image: {name: ubuntu-24.04}}
  # Диск клонируется из общего образа, а клон не может быть меньше
  # источника: у ubuntu-24.04 в cozy-public это 20Gi (CDI отклоняет меньший —
  # CloneValidationFailed, первый прогон на этом и встал).
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
# Загрузилась ли ОС — по приглашению login: в последовательной консоли, с
# правами тенанта. Сигнал агента гостя здесь не годится: в чистом облачном
# образе без cloud-init агента нет, и машина «не загружалась» бы вечно
# (первый прогон так и провалил шаг при работающей Ubuntu).
booted() {
  [ "$(a -n "$NS" get vmi "$pvmi" -o jsonpath='{.status.phase}' 2>/dev/null)" = Running ] || return 1
  # virtctl console без терминала молчит — второй прогон так и не увидел
  # login: у работающей Ubuntu. script даёт ему псевдотерминал; журнала
  # последовательной консоли в этом кластере нет (disableSerialConsoleLog).
  #
  # ⚠ Вывод сначала в переменную, потом grep. Под pipefail конвейер с
  # `grep -q` в конце проваливается и при найденном login:: консоль
  # заканчивается будильником или SIGPIPE, и её ненулевой код побеждает —
  # третий прогон так и ждал у загрузившейся Ubuntu.
  local out
  out=$(printf '\r' | perl -e 'alarm 25; exec @ARGV' script -q /dev/null virtctl \
    --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" console "$pvmi" \
    2>/dev/null | tr -d '\r') || true
  grep -q "login:" <<<"$out"
}
wait_for 1200 "Ubuntu загрузилась" booted \
  && say ok "Ubuntu загрузилась (приглашение login: в консоли) на $(a -n "$NS" get vmi "$pvmi" -o jsonpath='{.status.launcherContainerImageVersion}')" \
  || say no "Ubuntu не загрузилась: $(a -n "$NS" get vmi "$pvmi" -o jsonpath='{.status.phase}' 2>/dev/null)"
t delete vminstances.apps.cozystack.io plain --wait=false >/dev/null
t delete vmdisks.apps.cozystack.io plain --wait=false >/dev/null
fi

if [ "$UNINSTALL" = 1 ] && want 5; then
  step "5. удаление и повторная установка компонента"
  a delete packages.cozystack.io paleocomputing.platform --wait=false >/dev/null
  wait_for 300 "штатный launcher" stock_arg && say ok "после удаления — штатный launcher" || say no "после удаления аргументы: $(args)"
  n=$(kv get kubevirt kubevirt -o json | python3 -c "import json,sys;print(len(json.load(sys.stdin)['spec'].get('customizeComponents',{}).get('patches',[])))")
  [ "$n" = 0 ] && say ok "своей записи в customizeComponents не осталось" || say no "записей осталось: $n"
  printf '1\n' | "$COZYPKG" add --kubeconfig "$ADMIN_KUBECONFIG" paleocomputing.platform --allow-privileged >/dev/null 2>&1
  wait_for 300 "Applied" is Applied && wait_for 300 "наш launcher" ours_arg \
    && say ok "после повторной установки — снова наш launcher" || say no "состояние $(state), аргументы: $(args)"
fi

step "уборка"
gone() { [ -z "$(a -n "$NS" get hr,vm,vmi,pvc,dv --no-headers 2>/dev/null | grep -E -- '-(race|plain)( |-|$)')" ]; }
wait_for 300 "всё удалено" gone && say ok "пробных машин не осталось" \
  || say no "осталось: $(a -n "$NS" get hr,vm,vmi,pvc,dv --no-headers 2>/dev/null | grep -E -- '-(race|plain)( |-|$)' | awk '{print $1}' | tr '\n' ' ')"

echo
[ $bad = 0 ] && echo "✅ проверка компонента платформы пройдена" || echo "❌ проверка компонента платформы не пройдена"
exit $bad
