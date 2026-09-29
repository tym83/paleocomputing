#!/bin/sh
# Держит virt-launcher кластера в паре с версией KubeVirt.
#
#   reconcile.sh loop        цикл: раз в INTERVAL секунд — once
#   reconcile.sh once        один проход
#   reconcile.sh uninstall   остановить цикл и убрать свою правку (хук pre-delete)
#
# Что делает проход. Читает ресурс KubeVirt и развёртывание virt-controller,
# ищет версию KubeVirt в таблице этого выпуска (files/launchers.txt, собрана из
# kubevirt/versions.txt) и приводит СВОЮ запись в spec.customizeComponents.patches
# к нужной:
#
#   версия есть в таблице  → запись есть и ставит образ launcher этой версии;
#   версии нет в таблице   → записи нет: штатный launcher, чужие машины не
#                            стартуют, все остальные работают;
#   узел с виртуалками той архитектуры, под которую образа нет (строка
#   `# arch:` таблицы), → записи нет: наш образ заменяет launcher ВСЕМ
#                            виртуалкам, и на таком узле не запустилась бы ни
#                            одна. Без строки `# arch:` узлы не сверяются;
#   хоть что-то сомнительно → записи нет (штатный launcher — безопасная сторона);
#   не удалось прочитать   → ничего не пишется вовсе.
#
# Своя запись — ровно такой формы (JSON Patch из трёх операций):
#
#   test    /spec/template/spec/containers/0/name    == virt-controller
#   test    /spec/template/spec/containers/0/args/0  == --launcher-image
#   replace /spec/template/spec/containers/0/args/1  := <образ launcher>
#
# Меняется ОДИН элемент списка аргументов — значение после --launcher-image;
# прочие аргументы (образ экспорта, порт, уровень журнала) остаются теми, что
# собрал virt-operator. virt-operator строит этот список в коде
# (components/deployments.go: args[0] = "--launcher-image", args[1] = образ) —
# так в 1.8.4 и в 1.9.0. Если раскладка когда-нибудь поменяется, test не
# пройдёт, и virt-operator откажется применять правки громко, а не подставит
# образ launcher на место чужого аргумента. Чтобы до этого не доходило, проход
# сам сверяет раскладку у живого virt-controller и при расхождении убирает
# запись.
#
# Список customizeComponents.patches в CRD атомарный (listType=atomic): отдельной
# записи у него нет владельца, и server-side apply здесь не помогает — он забрал
# бы весь список. Поэтому запись пишется чтением-изменением-записью с
# предусловием на resourceVersion: если ресурс изменился между чтением и
# записью, API вернёт конфликт, и проход повторится на свежем чтении. Чужие
# записи сохраняются как были и в том же порядке.
#
# Пишет только когда нужно: если нужное уже стоит, ни ресурс KubeVirt, ни
# ConfigMap состояния не трогаются.
set -u

NS=${KUBEVIRT_NAMESPACE:-cozy-kubevirt}
KV=${KUBEVIRT_NAME:-kubevirt}
CTRL=virt-controller
TABLE=${LAUNCHER_TABLE:-/etc/kubevirt-paleo-launcher/launchers.txt}
STATUS=${STATUS_CONFIGMAP:-kubevirt-paleo-launcher-status}
INTERVAL=${INTERVAL:-30}
KUBECTL=${KUBECTL:-kubectl}
# Для uninstall: своё развёртывание и выборка его подов.
SELF_DEPLOYMENT=${SELF_DEPLOYMENT:-}
SELF_SELECTOR=${SELF_SELECTOR:-}
STOP_TIMEOUT=${STOP_TIMEOUT:-60}

last_log=

log() {
  printf '%s %s\n' "$(date -u +%Y-%m-%dT%H:%M:%SZ)" "$*"
}

# Одна и та же строка раз в тридцать секунд журнал не украшает.
log_once() {
  [ "$*" = "$last_log" ] && return 0
  last_log=$*
  log "$@"
}

k() {
  "$KUBECTL" -n "$NS" "$@"
}

# ── Решение ─────────────────────────────────────────────────────────────────
#
# Вход: ресурс KubeVirt (stdin), развёртывание virt-controller ($vc), узлы,
# где KubeVirt запускает виртуалки ($nodes), таблица ($table), режим
# ($mode: reconcile | uninstall).
# Выход: {action: write|none, state, reason, version, image, patches, rv}.
DECIDE='
def shape: [
  {op: "test",    path: "/spec/template/spec/containers/0/name"},
  {op: "test",    path: "/spec/template/spec/containers/0/args/0"},
  {op: "replace", path: "/spec/template/spec/containers/0/args/1"}];
def ops: .patch | if type == "string" then (try fromjson catch null) else null end;
def is_ours:
  type == "object"
  and .type == "json" and .resourceType == "Deployment" and .resourceName == "virt-controller"
  and ((ops | type) == "array")
  and ((ops | map({op, path})) == shape)
  and (ops[0].value == "virt-controller")
  and (ops[1].value == "--launcher-image")
  and ((ops[2].value | type) == "string");
def entry($img): {
  resourceName: "virt-controller", resourceType: "Deployment", type: "json",
  patch: ([
    {op: "test",    path: "/spec/template/spec/containers/0/name",   value: "virt-controller"},
    {op: "test",    path: "/spec/template/spec/containers/0/args/0", value: "--launcher-image"},
    {op: "replace", path: "/spec/template/spec/containers/0/args/1", value: $img}] | tojson)};
# Чужая правка, которая тоже трогает образ launcher: прежняя ручная замена всего
# списка аргументов, strategic/merge с args/command, что угодно с launcher-image.
def hits_ctrl:
  ((.resourceName // "" | ascii_downcase) as $n | $n == "virt-controller" or $n == "*")
  and ((.resourceType // "" | ascii_downcase) as $t | $t == "deployment" or $t == "*");
def touches_launcher:
  (.patch // "" | tostring) as $p
  | ($p | test("launcher-image"))
    or ((ops | type) == "array"
        and any(ops[]; (.path // "" | tostring)
                       | test("^/spec/template/spec/containers(/0(/(args|command)(/.*)?)?)?$")))
    or ((.type // "") != "json" and ($p | test("\"(args|command)\"")));
def semver: type == "string" and test("^v[0-9]+\\.[0-9]+\\.[0-9]+$");
def tag_of:
  if type != "string" or . == "" then null
  else (split("@")[0] | split("/") | last // "") as $last
       | if ($last | contains(":")) then ($last | split(":") | last) else null end end;

($table | split("\n") | map(sub("#.*$"; "") | split(" ") | map(select(length > 0)))
        | map(select(length > 0))) as $rows
| ($rows | all(length == 2 and (.[0] | semver) and (.[1] | test("^[^ ]+:[^ ]+$")))) as $table_ok
| ($rows | map({key: .[0], value: .[1]}) | from_entries) as $tbl
| ($table | split("\n") | map(select(test("^# arch:"))) | first
          | if . == null then null else sub("^# arch:"; "") | split(" ") | map(select(length > 0)) end) as $archs
| ([$nodes.items[]? | .metadata.labels["kubernetes.io/arch"] // "неизвестная"] | unique) as $node_archs
| (if $archs == null then [] else $node_archs - $archs end) as $alien
| .metadata.resourceVersion as $rv
| .spec.customizeComponents.patches as $raw
| if $raw != null and ($raw | type) != "array" then
    {action: "none", state: "Unknown", reason: "spec.customizeComponents.patches — не список"}
  else
  ($raw // []) as $patches
  | [$patches[] | select(is_ours)] as $mine
  | [$patches[] | select(is_ours | not)] as $others
  | ([$patches[] | select((is_ours | not) and hits_ctrl and touches_launcher)]
     + [(.spec.customizeComponents.flags.controller // {}) | keys[]
        | select(ascii_downcase | test("launcher"))]) as $foreign
  | (.status // {}) as $st
  | $st.observedKubeVirtVersion as $obs
  | $st.targetKubeVirtVersion as $tgt
  | ($vc.metadata.annotations["kubevirt.io/install-strategy-version"]) as $vcver
  | (($vc.spec.template.spec.containers // [])[0] // {}) as $c
  | ($c.image // "" | tag_of) as $vctag
  | [ (if .metadata.deletionTimestamp then "ресурс KubeVirt удаляется" else empty end),
      (if ($obs | semver) | not then "нет status.observedKubeVirtVersion" else empty end),
      (if ($tgt | semver) | not then "нет status.targetKubeVirtVersion" else empty end),
      (if ($obs | semver) and ($tgt | semver) and $tgt != $obs
       then "KubeVirt обновляется: \($obs) → \($tgt)" else empty end),
      (if ($obs | semver) and $vcver != $obs
       then "virt-controller помечен версией \($vcver // "—"), а KubeVirt — \($obs)" else empty end),
      (if ($obs | semver) and $vctag != null and $vctag != $obs
       then "образ virt-controller с тегом \($vctag), а KubeVirt — \($obs)" else empty end),
      (if $c.name != "virt-controller" or (($c.args // [])[0]) != "--launcher-image"
       then "у virt-controller args[0] не --launcher-image — правка рассчитана на другую раскладку"
       else empty end),
      (if $table_ok | not then "таблица версий испорчена" else empty end)
    ] as $doubts
  | def away($state; $reason):
      if ($mine | length) > 0
      then {action: "write", state: $state, reason: $reason, patches: $others}
      else {action: "none", state: $state, reason: $reason} end;
    (if $mode == "uninstall" then away("Removed"; "компонент удаляется")
     elif ($doubts | length) > 0 then away("Doubt"; $doubts | join("; "))
     elif ($alien | length) > 0 then
       away("Unsupported"; "узлы с архитектурой \($alien | join(", ")): образ launcher собран только под \($archs | join(", ")) — штатный launcher")
     elif $tbl[$obs] == null then
       away("Unsupported"; "KubeVirt \($obs) нет в таблице этого выпуска (\($tbl | keys | join(", "))) — штатный launcher")
     elif ($foreign | length) > 0 then
       {action: "none", state: "Conflict",
        reason: "образ launcher уже меняет чужая правка virt-controller — уберите её, эта её не перебивает"}
     else
       $tbl[$obs] as $img
       | if ($mine | length) == 1 and ($mine[0] | ops[2].value) == $img then
           (($vc.spec.replicas // 1) as $want
            | if (($c.args // [])[1]) == $img
                 and (($vc.status.observedGeneration // 0) >= ($vc.metadata.generation // 0))
                 and ($vc.status.updatedReplicas // 0) == $want
                 and ($vc.status.readyReplicas // 0) == $want
                 and ($vc.status.replicas // 0) == $want
              then {action: "none", state: "Applied", reason: "launcher совпадает с KubeVirt"}
              else {action: "none", state: "Rolling", reason: "правка стоит, virt-controller ещё не перекатился"} end)
         else
           ($patches | map(is_ours) | index(true)) as $i
           | {action: "write", state: "Applying", reason: "ставлю launcher для KubeVirt \($obs)",
              patches: (if $i == null then $patches + [entry($img)]
                        else [$patches | to_entries[]
                              | if (.value | is_ours)
                                then (if .key == $i then entry($img) else empty end)
                                else .value end] end)}
         end
       | .image = $img
     end)
    + {version: $obs, rv: $rv}
  end
'

decide() {  # kv vc nodes mode
  printf '%s' "$1" | jq -c --argjson vc "$2" --argjson nodes "$3" --arg mode "$4" \
    --rawfile table "$TABLE" "$DECIDE"
}

# Узлы, на которых KubeVirt запускает виртуалки (их метит virt-handler). Нужны,
# только если таблица говорит, под какие процессоры собран образ.
nodes_json() {
  grep -q '^# arch:' "$TABLE" 2>/dev/null || { echo '{"items":[]}'; return 0; }
  "$KUBECTL" get nodes -l kubevirt.io/schedulable=true -o json
}

# Запись с предусловием на resourceVersion: конфликт — не ошибка, а повод
# перечитать. null в merge patch убирает ключ, пустой список не оставляем.
write_patches() {  # decision
  body=$(printf '%s' "$1" | jq -c '{metadata: {resourceVersion: .rv},
    spec: {customizeComponents: {patches: (if (.patches | length) == 0 then null else .patches end)}}}')
  k patch kubevirt "$KV" --type=merge -p "$body" >/dev/null
}

# Состояние — в своём ConfigMap. Пишется только при изменении; при смене
# состояния — ещё и событие на ресурсе KubeVirt.
publish_status() {  # decision kv
  d=$1
  cur=$(k get configmap "$STATUS" -o json 2>/dev/null) || { log "не прочитан ConfigMap $STATUS — состояние не записано"; return 0; }
  want=$(printf '%s' "$d" | jq -c '{state, reason, kubevirtVersion: (.version // ""), launcherImage: (.image // "")}')
  have=$(printf '%s' "$cur" | jq -c '.data // {} | {state, reason, kubevirtVersion, launcherImage}
                                       | with_entries(.value //= "")')
  want_cmp=$(printf '%s' "$want" | jq -c 'with_entries(.value //= "")')
  [ "$want_cmp" = "$have" ] && return 0
  patch=$(printf '%s' "$want" | jq -c --arg ts "$(date -u +%Y-%m-%dT%H:%M:%SZ)" '{data: (. + {updated: $ts})}')
  k patch configmap "$STATUS" --type=merge -p "$patch" >/dev/null \
    || { log "не записано состояние в $STATUS"; return 0; }
  old_state=$(printf '%s' "$cur" | jq -r '.data.state // ""')
  new_state=$(printf '%s' "$d" | jq -r .state)
  [ "$old_state" = "$new_state" ] || emit_event "$d" "$2"
}

emit_event() {  # decision kv
  printf '%s' "$1" | jq -c --argjson kv "$2" --arg ns "$NS" --arg ts "$(date -u +%Y-%m-%dT%H:%M:%SZ)" '
    {apiVersion: "v1", kind: "Event",
     metadata: {generateName: "kubevirt-paleo-launcher-", namespace: $ns},
     involvedObject: {apiVersion: "kubevirt.io/v1", kind: "KubeVirt",
                      name: $kv.metadata.name, namespace: $ns, uid: $kv.metadata.uid},
     reason: ("Launcher" + .state),
     message: ((.reason // "") + (if .image then " (" + .image + ")" else "" end)),
     type: (if (.state | IN("Applied", "Applying", "Rolling", "Removed")) then "Normal" else "Warning" end),
     source: {component: "kubevirt-paleo-launcher"},
     firstTimestamp: $ts, lastTimestamp: $ts, count: 1}' \
  | k create -f - >/dev/null 2>&1 || log "событие не записано"
}

# ── Проход ──────────────────────────────────────────────────────────────────
once() {  # mode
  mode=${1:-reconcile}
  kv=$(k get kubevirt "$KV" --ignore-not-found -o json) \
    || { log_once "Unknown: ресурс KubeVirt $NS/$KV не прочитан — ничего не пишу"; return 1; }
  if [ -z "$kv" ]; then
    [ "$mode" = uninstall ] && { log "ресурса KubeVirt $NS/$KV нет — убирать нечего"; return 0; }
    log_once "Unknown: ресурса KubeVirt $NS/$KV нет — ничего не пишу"; return 1
  fi
  # При удалении virt-controller не нужен: своя запись убирается при любом его
  # состоянии.
  if ! vc=$(k get deployment "$CTRL" -o json); then
    [ "$mode" = uninstall ] || { log_once "Unknown: $NS/$CTRL не прочитан — ничего не пишу"; return 1; }
    vc='{}'
  fi
  # При удалении узлы не нужны: своя запись убирается на любом кластере.
  if [ "$mode" = uninstall ]; then
    nodes='{"items":[]}'
  elif ! nodes=$(nodes_json); then
    log_once "Unknown: узлы не прочитаны — ничего не пишу"; return 1
  fi
  d=$(decide "$kv" "$vc" "$nodes" "$mode") || { log_once "Unknown: решение не вычислено (ответ API не разобран) — ничего не пишу"; return 1; }
  state=$(printf '%s' "$d" | jq -r .state)
  reason=$(printf '%s' "$d" | jq -r .reason)
  if [ "$(printf '%s' "$d" | jq -r .action)" = write ]; then
    if write_patches "$d"; then
      log "$state: $reason — правка ресурса KubeVirt записана"
      if [ "$state" = Applying ]; then
        # ⚠ Находка 58: пока старый virt-controller держит аренду лидера, поды
        # машин создаёт он — со старым образом. Машины, запущенные в это окно,
        # надо пересоздать.
        log "virt-controller перекатится; машины, запущенные до того, как новый возьмёт аренду лидера, могут получить прежний launcher — пересоздайте их"
      fi
    else
      log "конфликт или отказ при записи ресурса KubeVirt — повторю на свежем чтении"
      return 1
    fi
  else
    log_once "$state: $reason"
  fi
  [ "$mode" = uninstall ] || publish_status "$d" "$kv"
  return 0
}

uninstall() {
  # Сначала остановить цикл: иначе он вернул бы правку в промежутке между
  # этим хуком и удалением развёртывания.
  if [ -n "$SELF_DEPLOYMENT" ]; then
    k scale deployment "$SELF_DEPLOYMENT" --replicas=0 >/dev/null \
      || log "не удалось остановить $SELF_DEPLOYMENT — убираю правку всё равно"
    waited=0
    while [ -n "$SELF_SELECTOR" ] && [ "$waited" -lt "$STOP_TIMEOUT" ]; do
      [ -z "$(k get pods -l "$SELF_SELECTOR" -o name 2>/dev/null)" ] && break
      sleep 2; waited=$((waited + 2))
    done
  fi
  tries=0
  until once uninstall; do
    tries=$((tries + 1))
    [ "$tries" -ge 5 ] && { log "правку убрать не удалось"; return 1; }
    sleep 2
  done
}

case "${1:-loop}" in
  once)      once reconcile ;;
  uninstall) uninstall ;;
  loop)
    trap 'log "остановлен"; exit 0' TERM INT
    log "старт: $NS/$KV, таблица $TABLE, раз в ${INTERVAL}s"
    while :; do
      once reconcile || true
      sleep "$INTERVAL" & wait $!
    done ;;
  *) echo "использование: $0 loop|once|uninstall" >&2; exit 2 ;;
esac
