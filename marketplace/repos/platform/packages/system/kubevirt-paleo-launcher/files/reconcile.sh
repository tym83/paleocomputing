#!/bin/sh
# Keeps the cluster's virt-launcher paired with the KubeVirt version.
#
#   reconcile.sh loop        loop: once every INTERVAL seconds
#   reconcile.sh once        a single pass
#   reconcile.sh uninstall   stop the loop and remove our patch (pre-delete hook)
#
# What a pass does. It reads the KubeVirt resource and the virt-controller
# Deployment, looks up the KubeVirt version in this release's table
# (files/launchers.txt, built from kubevirt/versions.txt) and brings OUR entry in
# spec.customizeComponents.patches to the desired form:
#
#   version in the table     → the entry exists and sets that version's launcher image;
#   version not in the table → no entry: stock launcher, foreign machines do not
#                              start, everything else works;
#   an image change while KubeVirt has automatic workload updates enabled
#   (workloadUpdateMethods not empty) without explicit consent → we neither set
#   nor change the entry, state NeedsConsent: KubeVirt would move ALL virtual
#   machines of the cluster onto the new launcher (finding 49). Consent is
#   ALLOW_WORKLOAD_UPDATE=true (chart value allowWorkloadUpdate) or the annotation
#   paleocomputing.io/allow-workload-update=true on the KubeVirt resource.
#   Removing our entry does not wait for consent: it restores the stock launcher;
#   a node running VMs of an architecture the image is not built for (the
#   table's `# arch:` line) → no entry: our image replaces the launcher for ALL
#                              VMs, and not a single one would start on such a
#                              node. Without the `# arch:` line nodes are not checked;
#   anything doubtful        → no entry (the stock launcher is the safe side);
#   failed to read           → nothing is written at all.
#
# Our entry has exactly this form (a JSON Patch of three operations):
#
#   test    /spec/template/spec/containers/0/name    == virt-controller
#   test    /spec/template/spec/containers/0/args/0  == --launcher-image
#   replace /spec/template/spec/containers/0/args/1  := <launcher image>
#
# ONE element of the argument list changes: the value after --launcher-image;
# the other arguments (export image, port, log level) stay as virt-operator
# built them. virt-operator builds this list in code
# (components/deployments.go: args[0] = "--launcher-image", args[1] = image),
# both in 1.8.4 and in 1.9.0. If the layout ever changes, the test op fails and
# virt-operator refuses to apply the patches loudly, instead of putting the
# launcher image in place of some other argument. To avoid getting there, the
# pass itself checks the layout of the live virt-controller and removes the
# entry on a mismatch.
#
# The customizeComponents.patches list in the CRD is atomic (listType=atomic): a
# single entry has no owner, and server-side apply does not help here: it would
# take over the whole list. So the entry is written by read-modify-write with a
# resourceVersion precondition: if the resource changed between read and write,
# the API returns a conflict and the pass is repeated on a fresh read. Other
# entries are kept as they were and in the same order.
#
# It writes only when needed: if the desired state is already in place, neither
# the KubeVirt resource nor the status ConfigMap is touched.
set -u

NS=${KUBEVIRT_NAMESPACE:-cozy-kubevirt}
KV=${KUBEVIRT_NAME:-kubevirt}
CTRL=virt-controller
TABLE=${LAUNCHER_TABLE:-/etc/kubevirt-paleo-launcher/launchers.txt}
STATUS=${STATUS_CONFIGMAP:-kubevirt-paleo-launcher-status}
INTERVAL=${INTERVAL:-30}
ALLOW_WORKLOAD_UPDATE=${ALLOW_WORKLOAD_UPDATE:-false}
KUBECTL=${KUBECTL:-kubectl}
# For uninstall: our own Deployment and the selector of its pods.
SELF_DEPLOYMENT=${SELF_DEPLOYMENT:-}
SELF_SELECTOR=${SELF_SELECTOR:-}
STOP_TIMEOUT=${STOP_TIMEOUT:-60}

last_log=

log() {
  printf '%s %s\n' "$(date -u +%Y-%m-%dT%H:%M:%SZ)" "$*"
}

# The same line every thirty seconds does not improve the log.
log_once() {
  [ "$*" = "$last_log" ] && return 0
  last_log=$*
  log "$@"
}

k() {
  "$KUBECTL" -n "$NS" "$@"
}

# ── Decision ────────────────────────────────────────────────────────────────
#
# Input: the KubeVirt resource (stdin), the virt-controller Deployment ($vc),
# architectures of the nodes where KubeVirt runs VMs ($node_archs, a list of
# strings), the table ($table), the mode ($mode: reconcile | uninstall).
# Output: {action: write|none, state, reason, version, image, patches, rv}.
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
# A foreign patch that also touches the launcher image: an earlier manual
# replacement of the whole argument list, strategic/merge with args/command,
# anything mentioning launcher-image.
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
| ($node_archs | unique) as $node_archs
| (if $archs == null then [] else $node_archs - $archs end) as $alien
| .metadata.resourceVersion as $rv
| .spec.customizeComponents.patches as $raw
| if $raw != null and ($raw | type) != "array" then
    {action: "none", state: "Unknown", reason: "spec.customizeComponents.patches is not a list"}
  else
  ($raw // []) as $patches
  | [$patches[] | select(is_ours)] as $mine
  | [$patches[] | select(is_ours | not)] as $others
  | ([$patches[] | select((is_ours | not) and hits_ctrl and touches_launcher)]
     + [(.spec.customizeComponents.flags.controller // {}) | keys[]
        | select(ascii_downcase | test("launcher"))]) as $foreign
  | ((.spec.workloadUpdateStrategy.workloadUpdateMethods // []) | map(tostring)) as $wum
  | ($allow or ($wum | length) == 0
     or ((.metadata.annotations // {})["paleocomputing.io/allow-workload-update"] == "true")) as $consent
  | (.status // {}) as $st
  | $st.observedKubeVirtVersion as $obs
  | $st.targetKubeVirtVersion as $tgt
  | ($vc.metadata.annotations["kubevirt.io/install-strategy-version"]) as $vcver
  | (($vc.spec.template.spec.containers // [])[0] // {}) as $c
  | ($c.image // "" | tag_of) as $vctag
  | [ (if .metadata.deletionTimestamp then "the KubeVirt resource is being deleted" else empty end),
      (if ($obs | semver) | not then "no status.observedKubeVirtVersion" else empty end),
      (if ($tgt | semver) | not then "no status.targetKubeVirtVersion" else empty end),
      (if ($obs | semver) and ($tgt | semver) and $tgt != $obs
       then "KubeVirt is updating: \($obs) → \($tgt)" else empty end),
      (if ($obs | semver) and $vcver != $obs
       then "virt-controller is labeled with version \($vcver // "—"), but KubeVirt is \($obs)" else empty end),
      (if ($obs | semver) and $vctag != null and $vctag != $obs
       then "the virt-controller image has tag \($vctag), but KubeVirt is \($obs)" else empty end),
      (if $c.name != "virt-controller" or (($c.args // [])[0]) != "--launcher-image"
       then "virt-controller args[0] is not --launcher-image; the patch expects a different layout"
       else empty end),
      (if $table_ok | not then "the version table is corrupted" else empty end)
    ] as $doubts
  | def away($state; $reason):
      if ($mine | length) > 0
      then {action: "write", state: $state, reason: $reason, patches: $others}
      else {action: "none", state: $state, reason: $reason} end;
    (if $mode == "uninstall" then away("Removed"; "the component is being removed")
     elif ($doubts | length) > 0 then away("Doubt"; $doubts | join("; "))
     elif ($alien | length) > 0 then
       away("Unsupported"; "nodes with architecture \($alien | join(", ")): the launcher image is built only for \($archs | join(", ")); using the stock launcher")
     elif $tbl[$obs] == null then
       away("Unsupported"; "KubeVirt \($obs) is not in the table of this release (\($tbl | keys | join(", "))); using the stock launcher")
     elif ($foreign | length) > 0 then
       {action: "none", state: "Conflict",
        reason: "another virt-controller patch already changes the launcher image; remove it, this one does not override it"}
     else
       $tbl[$obs] as $img
       | if ($mine | length) == 1 and ($mine[0] | ops[2].value) == $img then
           (($vc.spec.replicas // 1) as $want
            | if (($c.args // [])[1]) == $img
                 and (($vc.status.observedGeneration // 0) >= ($vc.metadata.generation // 0))
                 and ($vc.status.updatedReplicas // 0) == $want
                 and ($vc.status.readyReplicas // 0) == $want
                 and ($vc.status.replicas // 0) == $want
              then {action: "none", state: "Applied", reason: "launcher matches KubeVirt"}
              else {action: "none", state: "Rolling", reason: "patch is in place, virt-controller has not rolled out yet"} end)
         else
           ($patches | map(is_ours) | index(true)) as $i
           | ((($mine | length) == 0) or (($mine[0] | ops[2].value) != $img)) as $switch
           | if $switch and ($consent | not) then
               {action: "none", state: "NeedsConsent",
                reason: ("changing the launcher will move all virtual machines of the cluster (workloadUpdateMethods: \($wum | join(", "))); "
                         + "allow it explicitly: allowWorkloadUpdate: true in the component values or the annotation "
                         + "paleocomputing.io/allow-workload-update=true on the KubeVirt resource, or clear workloadUpdateMethods")}
             else
               {action: "write", state: "Applying", reason: "setting the launcher for KubeVirt \($obs)",
                patches: (if $i == null then $patches + [entry($img)]
                          else [$patches | to_entries[]
                                | if (.value | is_ours)
                                  then (if .key == $i then entry($img) else empty end)
                                  else .value end] end)}
             end
         end
       | .image = $img
     end)
    + {version: $obs, rv: $rv}
  end
'

decide() {  # kv vc node_archs mode
  case "$ALLOW_WORKLOAD_UPDATE" in true|1|yes) allow=true ;; *) allow=false ;; esac
  printf '%s' "$1" | jq -c --argjson vc "$2" --argjson node_archs "$3" --arg mode "$4" --argjson allow "$allow" \
    --rawfile table "$TABLE" "$DECIDE"
}

# Nodes on which KubeVirt runs VMs (virt-handler labels them). Needed only if
# the table says which CPUs the image is built for.
#
# ⚠ Only the list of architectures goes out, not the nodes themselves. Node
# objects on a live cluster are huge (image lists, statuses), and passed to jq
# as an argument they exceeded the command line length limit: "Argument list
# too long", the decision was not computed, and the component stalled. The fake
# API in the tests returned tiny nodes; it was found only by the sandbox check.
node_archs() {
  grep -q '^# arch:' "$TABLE" 2>/dev/null || { echo '[]'; return 0; }
  f=$(mktemp) || return 1
  if ! "$KUBECTL" get nodes -l kubevirt.io/schedulable=true -o json > "$f"; then
    rm -f "$f"; return 1
  fi
  jq -c '[.items[]? | .metadata.labels["kubernetes.io/arch"] // "unknown"]' "$f"
  rc=$?; rm -f "$f"; return $rc
}

# A write with a resourceVersion precondition: a conflict is not an error but a
# reason to re-read. null in a merge patch removes the key; we never leave an empty list.
write_patches() {  # decision
  body=$(printf '%s' "$1" | jq -c '{metadata: {resourceVersion: .rv},
    spec: {customizeComponents: {patches: (if (.patches | length) == 0 then null else .patches end)}}}')
  k patch kubevirt "$KV" --type=merge -p "$body" >/dev/null
}

# Status lives in our own ConfigMap. It is written only on change; on a state
# change an event on the KubeVirt resource is emitted as well.
publish_status() {  # decision kv
  d=$1
  cur=$(k get configmap "$STATUS" -o json 2>/dev/null) || { log "could not read ConfigMap $STATUS; status not written"; return 0; }
  want=$(printf '%s' "$d" | jq -c '{state, reason, kubevirtVersion: (.version // ""), launcherImage: (.image // "")}')
  have=$(printf '%s' "$cur" | jq -c '.data // {} | {state, reason, kubevirtVersion, launcherImage}
                                       | with_entries(.value //= "")')
  want_cmp=$(printf '%s' "$want" | jq -c 'with_entries(.value //= "")')
  [ "$want_cmp" = "$have" ] && return 0
  patch=$(printf '%s' "$want" | jq -c --arg ts "$(date -u +%Y-%m-%dT%H:%M:%SZ)" '{data: (. + {updated: $ts})}')
  k patch configmap "$STATUS" --type=merge -p "$patch" >/dev/null \
    || { log "failed to write status to $STATUS"; return 0; }
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
  | k create -f - >/dev/null 2>&1 || log "event not written"
}

# ── Pass ────────────────────────────────────────────────────────────────────
once() {  # mode
  mode=${1:-reconcile}
  kv=$(k get kubevirt "$KV" --ignore-not-found -o json) \
    || { log_once "Unknown: could not read KubeVirt resource $NS/$KV; writing nothing"; return 1; }
  if [ -z "$kv" ]; then
    [ "$mode" = uninstall ] && { log "KubeVirt resource $NS/$KV does not exist; nothing to remove"; return 0; }
    log_once "Unknown: KubeVirt resource $NS/$KV does not exist; writing nothing"; return 1
  fi
  # On uninstall virt-controller is not needed: our entry is removed whatever
  # its state.
  if ! vc=$(k get deployment "$CTRL" -o json); then
    [ "$mode" = uninstall ] || { log_once "Unknown: could not read $NS/$CTRL; writing nothing"; return 1; }
    vc='{}'
  fi
  # On uninstall nodes are not needed: our entry is removed on any cluster.
  if [ "$mode" = uninstall ]; then
    nodes='[]'
  elif ! nodes=$(node_archs); then
    log_once "Unknown: could not read nodes; writing nothing"; return 1
  fi
  d=$(decide "$kv" "$vc" "$nodes" "$mode") || { log_once "Unknown: decision not computed (API response not parsed); writing nothing"; return 1; }
  state=$(printf '%s' "$d" | jq -r .state)
  reason=$(printf '%s' "$d" | jq -r .reason)
  if [ "$(printf '%s' "$d" | jq -r .action)" = write ]; then
    if write_patches "$d"; then
      log "$state: $reason; KubeVirt resource patch written"
      if [ "$state" = Applying ]; then
        # ⚠ Finding 58: while the old virt-controller holds the leader lease, it
        # creates the machine pods, with the old image. Machines started in this
        # window have to be recreated.
        log "virt-controller will roll out; machines started before the new one takes the leader lease may get the previous launcher: recreate them"
      fi
    else
      log "conflict or refusal writing the KubeVirt resource; will retry on a fresh read"
      return 1
    fi
  else
    log_once "$state: $reason"
  fi
  [ "$mode" = uninstall ] || publish_status "$d" "$kv"
  return 0
}

uninstall() {
  # Stop the loop first: otherwise it would restore the patch between this
  # hook and the Deployment deletion.
  if [ -n "$SELF_DEPLOYMENT" ]; then
    k scale deployment "$SELF_DEPLOYMENT" --replicas=0 >/dev/null \
      || log "failed to stop $SELF_DEPLOYMENT; removing the patch anyway"
    waited=0
    while [ -n "$SELF_SELECTOR" ] && [ "$waited" -lt "$STOP_TIMEOUT" ]; do
      [ -z "$(k get pods -l "$SELF_SELECTOR" -o name 2>/dev/null)" ] && break
      sleep 2; waited=$((waited + 2))
    done
  fi
  tries=0
  until once uninstall; do
    tries=$((tries + 1))
    [ "$tries" -ge 5 ] && { log "failed to remove the patch"; return 1; }
    sleep 2
  done
}

case "${1:-loop}" in
  once)      once reconcile ;;
  uninstall) uninstall ;;
  loop)
    trap 'log "stopped"; exit 0' TERM INT
    log "start: $NS/$KV, table $TABLE, every ${INTERVAL}s"
    while :; do
      once reconcile || true
      sleep "$INTERVAL" & wait $!
    done ;;
  *) echo "usage: $0 loop|once|uninstall" >&2; exit 2 ;;
esac
