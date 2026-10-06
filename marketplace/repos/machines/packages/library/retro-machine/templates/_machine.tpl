{{/*
  A machine of an architecture KubeVirt does not have: shared templates.

  A machine chart carries only data: the machine.yaml passport (schema:
  machine.schema.json next to this), the values.yaml/values.schema.json form, an
  icon and a README. Its only template is `{{ include "retro-machine.render" . }}`.
  Everything else is here, including the hook: files/onDefineDomain.py.

  What one passport produces:

    * a ConfigMap with the hook, which rewrites the KubeVirt domain according
      to the passport from the machine annotation;
    * a volume with the machine files, an ORDINARY release resource: created on
      any successful install or upgrade, deleted together with the machine;
    * a VirtualMachine with the run strategy from `running`: restart from the
      dashboard, `virtctl restart`, self-healing after a failure;
    * a fill job, an ordinary release resource (not a hook, see below): it
      always rewrites the firmware, the user's disk only if it is missing, and
      sets write permissions for the qemu group explicitly.

  Why not hooks for the volume and not a bare VMI: finding 64.
*/}}

{{- define "retro-machine.fullname" -}}
{{ .Chart.Name }}-{{ .Release.Name }}
{{- end }}

{{- define "retro-machine.labels" -}}
app.kubernetes.io/name: {{ .Chart.Name }}
app.kubernetes.io/instance: {{ .Release.Name }}
app.kubernetes.io/version: {{ .Chart.AppVersion | quote }}
app.kubernetes.io/managed-by: {{ .Release.Service }}
{{- end }}

{{/* Selector for this machine's virt-launcher pods: KubeVirt carries the
     machine template labels over to the VMI and then to the pod, and sets
     kubevirt.io=virt-launcher itself. The fill job lacks that label, so it
     does not select itself. */}}
{{- define "retro-machine.launcherSelector" -}}
kubevirt.io: virt-launcher
app.kubernetes.io/name: {{ .Chart.Name }}
app.kubernetes.io/instance: {{ .Release.Name }}
{{- end }}

{{/* Memory amount in Mi: the passport and the form allow only Mi and Gi. */}}
{{- define "retro-machine.mi" -}}
{{- if not (regexMatch "^[1-9][0-9]*(Mi|Gi)$" .) }}
{{- fail (printf "retro-machine: memory %q: an integer number of Mi or Gi is required" .) }}
{{- end }}
{{- if hasSuffix "Gi" . }}{{ mul (trimSuffix "Gi" . | atoi) 1024 }}{{ else }}{{ trimSuffix "Mi" . | atoi }}{{ end }}
{{- end }}

{{/*
  The machine passport. It is checked on every render, not against the full
  schema (the catalog checks hold that) but for what the templates below would
  otherwise get wrong: the wrong hardware variant, a path with a space in a
  shell command.
*/}}
{{- define "retro-machine.descriptor" -}}
{{- $raw := .Files.Get "machine.yaml" }}
{{- if not $raw }}
{{- fail (printf "retro-machine: chart %s has no machine.yaml; a machine passport is required" .Chart.Name) }}
{{- end }}
{{- $m := fromYaml $raw }}
{{- if hasKey $m "Error" }}
{{- fail (printf "retro-machine: machine.yaml does not parse: %s" $m.Error) }}
{{- end }}
{{- if or (ne (toString $m.apiVersion) "paleocomputing.io/v1alpha1") (ne (toString $m.kind) "Machine") }}
{{- fail "retro-machine: machine.yaml is not a passport (apiVersion paleocomputing.io/v1alpha1, kind Machine)" }}
{{- end }}
{{- range $f := $m.payload.files }}
{{- if not (and (regexMatch "^[A-Za-z0-9][A-Za-z0-9._-]*$" (toString $f.name)) (regexMatch "^/[A-Za-z0-9/._-]+$" (toString $f.from)) (has (toString $f.role) (list "firmware" "disk"))) }}
{{- fail (printf "retro-machine: machine file %v: invalid name, image path or role" $f) }}
{{- end }}
{{- if and (hasKey $f "size") (not (regexMatch "^[1-9][0-9]*$" (toString (int64 $f.size)))) }}
{{- fail (printf "retro-machine: machine file %v: size must be a positive number of bytes" $f.name) }}
{{- end }}
{{- end }}
{{- if not (regexMatch "^/[A-Za-z0-9/._-]+$" (toString $m.payload.path)) }}
{{- fail "retro-machine: payload.path must be an absolute path without spaces" }}
{{- end }}
{{- toJson $m }}
{{- end }}

{{/*
  The fill job spec. Kept separate so that the job name carries the hash of the
  WHOLE spec: a Job template is immutable, and any change to the job (image,
  passport, affinity, deadlines) must produce a new name, otherwise the upgrade
  hits "field is immutable".
*/}}
{{- define "retro-machine.fillJobSpec" -}}
{{- $ctx := .ctx }}{{- $m := .m }}{{- $fn := .fn }}{{- $base := .base }}{{- $running := .running }}
spec:
  backoffLimit: 10
  # A job that got no pod (machine stopped by hand, node full) would otherwise
  # hold the install until the release timeout. The deadline is longer than
  # KubeVirt's maximum pause between start attempts (300 s).
  activeDeadlineSeconds: 1800
  ttlSecondsAfterFinished: 3600
  template:
    metadata:
      labels: {{- include "retro-machine.labels" $ctx | nindent 8 }}
    spec:
      restartPolicy: OnFailure
      # ⚠ The image runs as an unprivileged user, and the volume arrives owned
      # by root, so it cannot write to it. fsGroup gives the volume to the
      # container's group; changing the user is not possible, tenant
      # restrictions do not admit root.
      #
      # ⚠ The volume group is 107, as in the machine pod. virt-launcher runs as
      # qemu (107) and mounts the same volume with fsGroup 107; a job with a
      # different group lost on simultaneous mounting: kubelet gave the volume
      # to group 107 and writes failed with Permission denied. Found by the
      # end-to-end check in a tenant. The image user stays its own: the volume
      # group comes as a supplementary one.
      securityContext:
        fsGroup: 107
        runAsUser: 10001
        runAsGroup: 107
        runAsNonRoot: true
        seccompProfile:
          type: RuntimeDefault
      {{- if $running }}
      # The volume is ReadWriteOnce: better on the same node as the machine pod.
      # But only "better", not "required". Hard affinity kept the job from
      # being scheduled at all: without files the machine fails at once, and
      # its pod lives for seconds between KubeVirt pauses, so the job had
      # nothing to attach to, the deadline expired, and nobody retries a failed
      # job. Found in a live tenant. On another node the job waits until the
      # machine's next failed attempt releases the volume, and fills it.
      affinity:
        podAffinity:
          preferredDuringSchedulingIgnoredDuringExecution:
          - weight: 100
            podAffinityTerm:
              topologyKey: kubernetes.io/hostname
              labelSelector:
                matchLabels: {{- include "retro-machine.launcherSelector" $ctx | nindent 18 }}
      {{- end }}
      containers:
      - name: fill
        image: {{ $m.image }}
        command: ["sh", "-c"]
        args:
          - |
            set -eu
            # Files are group-writable: the machine writes the disk as qemu
            # (group 107). ⚠ umask alone is not enough: it only clears bits, and
            # cp takes the source file's mode (644 in the image), so the disk came
            # out rw-r--r--. While our QEMU did not ask for write access this was
            # invisible; with it the machine does not start ("Permission denied").
            # The mode is set explicitly, also for a disk already in place: the
            # job does not overwrite it.
            umask 002
            put() { cp "$1" "$2.tmp"; chmod 664 "$2.tmp"; mv -f "$2.tmp" "$2"; }
            {{- range $f := $m.payload.files }}
            {{- $dst := printf "%s/%s" $base $f.name }}
            {{- if eq $f.role "disk" }}
            [ -s {{ $dst }} ] || put {{ $f.from }} {{ $dst }}
            chmod 664 {{ $dst }}
            {{- with $f.size }}
            # Grow, never shrink: the file system writes past the end of the
            # shipped image, and a raw drive cannot grow on its own.
            [ "$(wc -c < {{ $dst }})" -ge {{ int64 . }} ] || truncate -s {{ int64 . }} {{ $dst }}
            {{- end }}
            {{- else }}
            put {{ $f.from }} {{ $dst }}
            {{- end }}
            {{- end }}
            ls -la {{ $base }}/
        securityContext:
          allowPrivilegeEscalation: false
          capabilities:
            drop: [ALL]
        volumeMounts:
        - name: payload
          mountPath: {{ $base }}
      volumes:
      - name: payload
        persistentVolumeClaim:
          claimName: {{ $fn }}-payload
{{- end }}

{{- define "retro-machine.render" -}}
{{- $m := include "retro-machine.descriptor" . | fromJson }}
{{- $fn := include "retro-machine.fullname" . }}
{{- $base := trimSuffix "/" $m.payload.path }}

{{- /* Hardware variant: the form's hardware value, otherwise the passport default. */}}
{{- $variant := .Values.hardware | default $m.defaultVariant | toString }}
{{- if not (hasKey $m.variants $variant) }}
{{- fail (printf "%s: hardware variant %q is not described; available: %s" .Chart.Name $variant (keys $m.variants | sortAlpha | join ", ")) }}
{{- end }}

{{- /* Memory: within the passport limits. */}}
{{- $memory := .Values.memory | default $m.memory.default | toString }}
{{- $mem := include "retro-machine.mi" $memory | atoi }}
{{- if or (lt $mem (include "retro-machine.mi" $m.memory.min | atoi)) (gt $mem (include "retro-machine.mi" $m.memory.max | atoi)) }}
{{- fail (printf "%s: memory %s is outside the machine limits %s…%s" .Chart.Name $memory $m.memory.min $m.memory.max) }}
{{- end }}

{{- /* ⚠ `default true` must not be used here: for default, false is an empty
       value, and a stopped machine would silently start. */}}
{{- $running := true }}
{{- if hasKey .Values "running" }}
{{- if not (kindIs "bool" .Values.running) }}
{{- fail (printf "%s: running must be true or false" .Chart.Name) }}
{{- end }}
{{- $running = .Values.running }}
{{- end }}

{{- $hook := (index .Subcharts "retro-machine").Files.Get "files/onDefineDomain.py" }}
{{- if not $hook }}
{{- fail "retro-machine: the library has no files/onDefineDomain.py" }}
{{- end }}

{{- /* The hook: the stock sidecar-shim wrapper runs the script from a
       ConfigMap, so no hook image of our own is needed. The volume with the
       files is mounted BOTH into the hook AND into the libvirt container
       (sharedComputePath) at the same path, so the hook can check that the
       files are already in place. */}}
{{- $sidecars := list (dict
      "args" (list "--version" "v1alpha2")
      "configMap" (dict "name" (printf "%s-hook" $fn) "key" "onDefineDomain" "hookPath" "/usr/bin/onDefineDomain")
      "pvc" (dict "name" (printf "%s-payload" $fn) "volumePath" $base "sharedComputePath" $base)) }}
{{- /* The passport in the VM template leaves out the system image: the hook
       does not need it (the fill job copies the disk), and the image reference
       changes with every catalog release. A VM template that changes makes a
       running VM wait for a restart (the cluster does not update workloads),
       and the Helm upgrade then times out waiting for it. */}}
{{- $passport := omit (set (deepCopy $m) "variant" $variant) "image" }}
{{- /* The air: the instance names an OberonAir in the tenant; its Service is
       oberon-air-<name>. Only a machine whose passport declares a radio can join. */}}
{{- with .Values.air }}
{{- if not $m.air }}
{{- fail (printf "%s: this machine has no radio, air cannot be set" $.Chart.Name) }}
{{- end }}
{{- if not (regexMatch "^[a-z0-9]([a-z0-9-]{0,40}[a-z0-9])?$" (toString .)) }}
{{- fail (printf "%s: air %q is not the name of an air in this tenant" $.Chart.Name .) }}
{{- end }}
{{- $_ := set $passport.air "host" (printf "oberon-air-%s" .) }}
{{- end }}
apiVersion: v1
kind: ConfigMap
metadata:
  name: {{ $fn }}-hook
  labels: {{- include "retro-machine.labels" . | nindent 4 }}
data:
  onDefineDomain: |
{{ $hook | indent 4 }}
---
# Volume with the machine files. An ordinary release resource: created by any
# successful install or upgrade, including the upgrade flux uses to retry a
# failed install, and deleted together with the machine. It used to be a
# pre-install hook: on a retry as an upgrade it was not there at all, and on
# delete Helm did not touch it (findings 58 and 64).
apiVersion: v1
kind: PersistentVolumeClaim
metadata:
  name: {{ $fn }}-payload
  labels: {{- include "retro-machine.labels" . | nindent 4 }}
spec:
  accessModes: [ReadWriteOnce]
  storageClassName: {{ .Values.storageClass | quote }}
  resources:
    requests:
      storage: {{ .Values.storage | quote }}
---
# The machine itself. A VirtualMachine, not a bare VirtualMachineInstance: it
# has a run strategy, and therefore restart (`virtctl restart`, dashboard
# buttons) and restart after a failure with increasing backoff.
#
# The spec is intentionally sparse: the hook replaces almost everything.
# KubeVirt requires the fields to be filled in to build the domain, and then we
# rewrite it.
apiVersion: kubevirt.io/v1
kind: VirtualMachine
metadata:
  name: {{ $fn }}
  labels: {{- include "retro-machine.labels" . | nindent 4 }}
spec:
  runStrategy: {{ ternary "Always" "Halted" $running }}
  template:
    metadata:
      labels: {{- include "retro-machine.labels" . | nindent 8 }}
        {{- with .Values.air }}
        paleocomputing.io/air: {{ . | quote }}
        {{- end }}
      # KubeVirt copies the template metadata into every new VMI in full
      # (SetupVMIFromVM), so the passport and the hook go here.
      annotations:
        paleocomputing.io/machine: {{ toJson $passport | quote }}
        hooks.kubevirt.io/hookSidecars: {{ toJson $sidecars | quote }}
    spec:
      # ⚠ Eviction by stopping, not by migration. The cluster strategy is
      # LiveMigrate, but there is nothing to migrate a foreign machine with:
      # KubeVirt would refuse to evict its pod, and a node drain would get stuck
      # on it, so other people could not maintain the shared cluster. With None
      # the pod is evicted and the VirtualMachine brings the machine up on
      # another node; the disk on the volume survives the move.
      evictionStrategy: None
      {{- with .Values.air }}
      # Machines on one air are a cluster, of Kube for instance: a host that
      # fails should take as few of them as it can. They are spread over the
      # hosts when there are enough, and share one when there are not; only
      # "preferred", as a required rule would leave a machine unscheduled.
      affinity:
        podAntiAffinity:
          preferredDuringSchedulingIgnoredDuringExecution:
          - weight: 100
            podAffinityTerm:
              topologyKey: kubernetes.io/hostname
              labelSelector:
                matchLabels:
                  paleocomputing.io/air: {{ . | quote }}
      {{- end }}
      terminationGracePeriodSeconds: {{ $m.domain.terminationGracePeriodSeconds }}
      domain:
        resources:
          requests:
            memory: {{ $memory }}
        devices:
          # No pod interface for the guest. The hook drops every PCI device, the
          # NIC included, so the guest never had a network; but by default
          # KubeVirt still binds the pod interface to the guest and takes the
          # pod's address with it, and then the pod itself has no network. The
          # radio of a machine on the air talks to its relay from the pod, so
          # the pod keeps its address.
          autoattachPodInterface: false
      volumes: []
---
# Volume fill. A new job appears on every install and on every upgrade that
# changes its spec (the name carries a hash), including the upgrade flux uses
# to retry a failed install.
#
# Idempotent by role: it always rewrites the firmware (a new catalog release
# means a new ROM), and places the user's disk only if it is missing or empty.
# Each file is written to a temporary one and renamed: a machine starting in
# parallel sees either the old file or the new one in full.
#
# ⚠ An ordinary release resource, NOT a hook. As a post-install hook it was
# stuck in an unresolvable wait: Cozystack installs the release waiting for
# readiness, Helm runs a post-install hook only after the resources are ready,
# and the machine is not ready while the volume is empty: the hook honestly
# refuses. Found in a live tenant: the machine kept restarting, the job never
# appeared. Now the volume, the job and the machine are created together; the
# machine tries to start while the files are missing and comes up when the job
# finishes.
#
# A Job template is immutable, so the name carries a hash of the image and the
# passport: a new release yields a new job (it updates the firmware and leaves
# the disk alone), and Helm deletes the previous one as gone from the release.
{{- $fillSpec := include "retro-machine.fillJobSpec" (dict "ctx" . "m" $m "fn" $fn "base" $base "running" $running) }}
apiVersion: batch/v1
kind: Job
metadata:
  name: {{ $fn }}-fill-{{ $fillSpec | sha256sum | trunc 8 }}
  labels: {{- include "retro-machine.labels" . | nindent 4 }}
{{ $fillSpec }}
{{- end }}
