#!/usr/bin/env bash
#
# Сквозная проверка машины каталога в живом тенанте — до тега, а не после.
#
# Всё, что до сих пор проверялось руками по кускам и ловило ошибки только
# после выпуска (взаимная блокировка наполнения, метка выхода к API, ссылки,
# не доехавшие до кластера), — одним прогоном: поставить машину от имени
# тенанта, дождаться запуска, проверить её устройство и экран через консоль
# тенанта, перезапустить, удалить и убедиться, что не осталось ничего.
#
#   tools/sandbox-e2e.sh
#
# Переменные (умолчания — наша песочница):
#   TENANT_KUBECONFIG, TENANT_CONTEXT, NS   — от чьего имени ставить (тенант)
#   ADMIN_KUBECONFIG, ADMIN_CONTEXT         — только чтение: аргументы QEMU
#   NAME                                    — имя пробной машины
#   HARDWARE                                — base | chk
set -uo pipefail

TENANT_KUBECONFIG=${TENANT_KUBECONFIG:-$HOME/claude2-sandbox.kubeconfig}
TENANT_CONTEXT=${TENANT_CONTEXT:-sandbox}
ADMIN_KUBECONFIG=${ADMIN_KUBECONFIG:-$HOME/eng-cluster-admin.kubeconfig}
ADMIN_CONTEXT=${ADMIN_CONTEXT:-admin@workshop}
NS=${NS:-tenant-sandbox}
NAME=${NAME:-e2e}
HARDWARE=${HARDWARE:-chk}
REF_DARK=18607          # тёмных точек на экране загруженного Оберона (находка 48)
HERE=$(cd "$(dirname "$0")/.." && pwd)

t() { kubectl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" "$@"; }
a() { kubectl --kubeconfig "$ADMIN_KUBECONFIG" --context "$ADMIN_CONTEXT" -n "$NS" "$@"; }
vmi="oberon-vm-oberon-vm-$NAME"

bad=0
say() { if [ "$1" = ok ]; then echo "  ✅ $2"; else echo "  ❌ $2"; bad=1; fi; }
step() { echo; echo "── $*"; }
# ждать(секунд, описание, команда...) — повторять команду, пока не вернёт 0
wait_for() {
  local limit=$1 what=$2; shift 2
  local s=0
  until "$@" >/dev/null 2>&1; do
    [ $s -ge "$limit" ] && { echo "  … $what: не дождались за ${limit} с"; return 1; }
    sleep 5; s=$((s+5))
  done
}
running() { [ "$(a get vmi "$vmi" -o jsonpath='{.status.phase}' 2>/dev/null)" = Running ]; }
launcher_pod() { a get pods --no-headers 2>/dev/null | awk -v n="virt-launcher-$vmi-" 'index($1,n)==1 && $3=="Running"{print $1; exit}'; }
qemu_up() { local p; p=$(launcher_pod); [ -n "$p" ] && a exec "$p" -c compute -- sh -c 'ps -eo args | grep -q "[q]emu-system-"'; }

# Экран через подресурс vnc API KubeVirt — с правами тенанта, как консоль
# дашборда. Прокси virtctl принимает одно подключение и выходит.
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
# Экран эталонный — с повторами: системе нужно время загрузиться.
screen_ok() {
  local d
  for _ in $(seq 1 12); do
    d=$(screen_dark); [ "$d" = "$REF_DARK" ] && { echo "$d"; return 0; }; sleep 10
  done
  echo "${d:-нет кадра}"; return 1
}

step "установка $NAME (hardware: $HARDWARE) от имени тенанта"
t get oberonvms.apps.cozystack.io "$NAME" >/dev/null 2>&1 \
  && { echo "  машина $NAME уже есть — удалите её или задайте NAME"; exit 2; }
t apply -f - <<EOF >/dev/null
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata:
  name: $NAME
spec:
  memory: 128Mi
  hardware: $HARDWARE
EOF
wait_for 600 "машина запущена" running && say ok "машина запущена" || say no "машина не запустилась за 10 минут"
wait_for 300 "релиз готов" sh -c "[ \"\$(kubectl --kubeconfig '$ADMIN_KUBECONFIG' --context '$ADMIN_CONTEXT' -n '$NS' get hr oberon-vm-$NAME -o jsonpath='{.status.conditions[?(@.type==\"Ready\")].status}')\" = True ]" \
  && say ok "релиз Helm готов" || say no "релиз Helm не готов: $(a get hr "oberon-vm-$NAME" -o jsonpath='{.status.conditions[?(@.type=="Ready")].message}' 2>/dev/null | cut -c1-160)"

step "устройство машины"
rs=$(a get vm "$vmi" -o jsonpath='{.spec.runStrategy}' 2>/dev/null)
[ -n "$rs" ] && say ok "VirtualMachine, runStrategy=$rs" || say no "VirtualMachine $vmi нет"
img=$(a get vmi "$vmi" -o jsonpath='{.status.launcherContainerImageVersion}' 2>/dev/null)
case "$img" in *-paleo-*|*-risc5-*) say ok "launcher: $img";; *) say no "launcher не наш: ${img:-?}";; esac
wait_for 180 "эмулятор запущен" qemu_up
pod=$(launcher_pod)
args=$(a exec "$pod" -c compute -- sh -c 'ps -eo args | grep "[q]emu-system-"' 2>/dev/null | tr ' ' '\n')
echo "$args" | grep -q '^-vnc$' && say ok "экран отдаётся по VNC" || say no "у эмулятора нет -vnc"
if [ "$HARDWARE" = chk ]; then
  echo "$args" | grep -qx 'chk=on' && say ok "-machine chk=on" || say no "нет -machine chk=on"
fi
# Диск пользователя — на запись. Раньше это не проверялось: загрузка только
# читает, и диск с правами rw-r--r-- проходил все проверки, пока сохранение
# файла внутри Оберона не роняло машину. Смотрим двумя способами: право
# записи у пользователя контейнера (qemu) и режим, с которым эмулятор держит
# файл открытым (флаг O_RDWR в fdinfo).
# shellcheck disable=SC2016 # раскрывается в поде
a exec "$pod" -c compute -- sh -c 'test -w /payload/oberon.dsk' \
  && say ok "диск доступен эмулятору на запись" || say no "диск только для чтения"
# shellcheck disable=SC2016
rw=$(a exec "$pod" -c compute -- sh -c '
  pid=$(ps -eo pid,args | awk "/[q]emu-system-/ { print \$1; exit }")
  for fd in /proc/$pid/fd/*; do
    [ "$(readlink "$fd")" = /payload/oberon.dsk ] || continue
    awk "/^flags:/ { print (int(substr(\$2, length(\$2)) ) % 4 == 2) ? \"rw\" : \"ro\" }" /proc/$pid/fdinfo/${fd##*/}
  done' 2>/dev/null | sort -u)
[ "$rw" = rw ] && say ok "эмулятор держит диск открытым на запись" || say no "эмулятор держит диск: ${rw:-не открыт}"
pvc_uid=$(a get pvc "$vmi-payload" -o jsonpath='{.metadata.uid}' 2>/dev/null)
[ -n "$pvc_uid" ] && say ok "том $vmi-payload в составе релиза" || say no "тома нет"

step "слив узла не упирается в машину"
# Кластер в LiveMigrate, чужая машина не мигрирует — без evictionStrategy None
# выселение её пода было бы отклонено, и слив узла встал бы. Проверяем прямо
# настройку машины и дополнительно пробный слив (--dry-run=server) только её
# пода: узел не трогается. Отклоняет ли KubeVirt пробное выселение так же, как
# настоящее, не проверено — поэтому решающая проверка первая.
node=$(a get vmi "$vmi" -o jsonpath='{.status.nodeName}' 2>/dev/null)
es=$(a get vmi "$vmi" -o jsonpath='{.spec.evictionStrategy}' 2>/dev/null)
[ "$es" = None ] && say ok "у машины evictionStrategy None" || say no "у машины evictionStrategy ${es:-не задан} — при кластерной LiveMigrate слив встанет"
if drain_out=$(kubectl --kubeconfig "$ADMIN_KUBECONFIG" --context "$ADMIN_CONTEXT" drain "$node" \
     --dry-run=server --pod-selector="kubevirt.io=virt-launcher,app.kubernetes.io/instance=oberon-vm-$NAME" \
     --ignore-daemonsets --delete-emptydir-data --timeout=60s 2>&1); then
  say ok "пробный слив узла $node проходит"
else
  say no "пробный слив узла $node упирается в машину: $(printf '%s' "$drain_out" | tail -2 | tr '\n' ' ' | cut -c1-200)"
fi

step "экран через консоль тенанта"
d=$(screen_ok) && say ok "кадр — эталон ($d тёмных точек)" || say no "кадр не эталон: $d (ждали $REF_DARK)"

step "перезапуск от имени тенанта"
old=$(a get vmi "$vmi" -o jsonpath='{.metadata.uid}' 2>/dev/null)
if virtctl --kubeconfig "$TENANT_KUBECONFIG" --context "$TENANT_CONTEXT" -n "$NS" restart "$vmi" >/dev/null 2>&1; then
  say ok "virtctl restart принят"
  restarted() { local u; u=$(a get vmi "$vmi" -o jsonpath='{.metadata.uid}' 2>/dev/null); [ -n "$u" ] && [ "$u" != "$old" ] && running; }
  wait_for 300 "машина перезапущена" restarted && say ok "машина поднялась заново" || say no "после перезапуска машина не поднялась"
  [ "$(a get pvc "$vmi-payload" -o jsonpath='{.metadata.uid}' 2>/dev/null)" = "$pvc_uid" ] \
    && say ok "том тот же — диск пережил перезапуск" || say no "том пересоздан"
  wait_for 180 "эмулятор запущен" qemu_up
  d=$(screen_ok) && say ok "после перезапуска кадр — эталон" || say no "после перезапуска кадр не эталон: $d"
else
  say no "virtctl restart отклонён (права тенанта?)"
fi

step "удаление от имени тенанта"
t delete oberonvms.apps.cozystack.io "$NAME" --wait=false >/dev/null
gone() { [ -z "$(a get hr,vm,vmi,pvc,job,pod,cm --no-headers 2>/dev/null | grep -- "-$NAME")" ]; }
wait_for 240 "всё удалено" gone && say ok "от машины не осталось ничего" \
  || say no "осталось: $(a get hr,vm,vmi,pvc,job,pod,cm --no-headers 2>/dev/null | grep -- "-$NAME" | awk '{print $1}' | tr '\n' ' ')"

echo
[ $bad = 0 ] && echo "✅ сквозная проверка пройдена" || echo "❌ сквозная проверка не пройдена"
exit $bad
