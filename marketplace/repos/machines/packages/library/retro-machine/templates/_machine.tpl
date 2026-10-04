{{/*
  Машина архитектуры, которой нет в KubeVirt, — общие шаблоны.

  Чарт машины несёт только данные: паспорт machine.yaml (схема —
  machine.schema.json рядом), форму values.yaml/values.schema.json, иконку и
  README. Его единственный шаблон — `{{ include "retro-machine.render" . }}`.
  Всё остальное здесь, и перехватчик тоже: files/onDefineDomain.py.

  Что получается из одного паспорта:

    * ConfigMap с перехватчиком — он переписывает домен KubeVirt по
      паспорту из аннотации машины;
    * том с файлами машины — ОБЫЧНЫЙ ресурс релиза: создаётся при любой
      удачной установке или обновлении, удаляется вместе с машиной;
    * VirtualMachine со стратегией запуска из `running`: перезапуск из
      дашборда, `virtctl restart`, самовосстановление после сбоя;
    * задача наполнения — обычный ресурс релиза (не хук, см. ниже): прошивку
      переписывает всегда, диск пользователя — только если его нет, и права
      на запись для группы qemu ставит явно.

  Почему не хуки для тома и не голый VMI — находка 64.
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

{{/* Под-селектор подов virt-launcher этой машины: метки шаблона машины
     KubeVirt переносит на VMI и дальше на под, а kubevirt.io=virt-launcher
     ставит сам. У задачи наполнения этой метки нет — она себя не выберет. */}}
{{- define "retro-machine.launcherSelector" -}}
kubevirt.io: virt-launcher
app.kubernetes.io/name: {{ .Chart.Name }}
app.kubernetes.io/instance: {{ .Release.Name }}
{{- end }}

{{/* Количество памяти в Mi: паспорт и форма разрешают только Mi и Gi. */}}
{{- define "retro-machine.mi" -}}
{{- if not (regexMatch "^[1-9][0-9]*(Mi|Gi)$" .) }}
{{- fail (printf "retro-machine: память %q — нужно целое число Mi или Gi" .) }}
{{- end }}
{{- if hasSuffix "Gi" . }}{{ mul (trimSuffix "Gi" . | atoi) 1024 }}{{ else }}{{ trimSuffix "Mi" . | atoi }}{{ end }}
{{- end }}

{{/*
  Паспорт машины. Проверяется при каждой отрисовке — не полной схемой (её
  держат проверки каталога), а тем, без чего шаблоны ниже собрали бы
  неправду: не тот вариант железа, путь с пробелом в команде оболочки.
*/}}
{{- define "retro-machine.descriptor" -}}
{{- $raw := .Files.Get "machine.yaml" }}
{{- if not $raw }}
{{- fail (printf "retro-machine: у чарта %s нет machine.yaml — паспорт машины обязателен" .Chart.Name) }}
{{- end }}
{{- $m := fromYaml $raw }}
{{- if hasKey $m "Error" }}
{{- fail (printf "retro-machine: machine.yaml не разбирается: %s" $m.Error) }}
{{- end }}
{{- if or (ne (toString $m.apiVersion) "paleocomputing.io/v1alpha1") (ne (toString $m.kind) "Machine") }}
{{- fail "retro-machine: machine.yaml — не паспорт (apiVersion paleocomputing.io/v1alpha1, kind Machine)" }}
{{- end }}
{{- range $f := $m.payload.files }}
{{- if not (and (regexMatch "^[A-Za-z0-9][A-Za-z0-9._-]*$" (toString $f.name)) (regexMatch "^/[A-Za-z0-9/._-]+$" (toString $f.from)) (has (toString $f.role) (list "firmware" "disk"))) }}
{{- fail (printf "retro-machine: файл машины %v — имя, путь в образе или роль недопустимы" $f) }}
{{- end }}
{{- if and (hasKey $f "size") (not (regexMatch "^[1-9][0-9]*$" (toString (int64 $f.size)))) }}
{{- fail (printf "retro-machine: файл машины %v — size must be a positive number of bytes" $f.name) }}
{{- end }}
{{- end }}
{{- if not (regexMatch "^/[A-Za-z0-9/._-]+$" (toString $m.payload.path)) }}
{{- fail "retro-machine: payload.path — нужен абсолютный путь без пробелов" }}
{{- end }}
{{- toJson $m }}
{{- end }}

{{/*
  Спецификация задачи наполнения. Отдельно — чтобы имя задачи несло хэш
  ВСЕЙ спецификации: шаблон Job неизменяем, и любая правка задачи (образ,
  паспорт, привязка, сроки) обязана давать новое имя, иначе обновление
  упрётся в «field is immutable».
*/}}
{{- define "retro-machine.fillJobSpec" -}}
{{- $ctx := .ctx }}{{- $m := .m }}{{- $fn := .fn }}{{- $base := .base }}{{- $running := .running }}
spec:
  backoffLimit: 10
  # Задача, которой не достался под (машина остановлена руками, узел
  # переполнен), иначе держит установку до таймаута релиза. Срок больше
  # предельной паузы KubeVirt между попытками запуска (300 с).
  activeDeadlineSeconds: 1800
  ttlSecondsAfterFinished: 3600
  template:
    metadata:
      labels: {{- include "retro-machine.labels" $ctx | nindent 8 }}
    spec:
      restartPolicy: OnFailure
      # ⚠ Образ работает от непривилегированного пользователя, а том приходит
      # принадлежащим root — записать в него нечего. fsGroup отдаёт том группе
      # контейнера; менять пользователя нельзя, ограничения тенанта root не
      # пустят.
      #
      # ⚠ Группа тома — 107, как у пода машины. virt-launcher работает от
      # qemu (107) и монтирует тот же том с fsGroup 107; задача с другой
      # группой при одновременном монтировании проигрывала — kubelet отдавал
      # том группе 107, и запись падала с Permission denied. Найдено
      # сквозной проверкой в тенанте. Пользователь образа остаётся своим:
      # группа тома приходит дополнительной.
      securityContext:
        fsGroup: 107
        runAsUser: 10001
        runAsGroup: 107
        runAsNonRoot: true
        seccompProfile:
          type: RuntimeDefault
      {{- if $running }}
      # Том ReadWriteOnce: лучше на тот же узел, что под машины. Но только
      # «лучше», не «обязательно». Жёсткая привязка не давала задаче встать
      # вовсе: без файлов машина падает сразу, и её под живёт секунды между
      # паузами KubeVirt — задаче не к чему привязаться, срок истекал, а
      # упавшую задачу никто не повторяет. Найдено в живом тенанте. На другом
      # узле задача дождётся, пока очередная неудачная попытка машины отпустит
      # том, и наполнит его.
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
            # Файлы — с правом записи для группы: диск машина пишет от qemu
            # (группа 107). ⚠ Одного umask мало: он только снимает биты, а cp
            # берёт права исходного файла (в образе 644) — и диск выходил
            # rw-r--r--. Пока наш QEMU не просил записи, этого не было видно;
            # с ней машина не стартует («Permission denied»). Права ставятся
            # явно — и уже лежащему диску тоже: его задача не перезаписывает.
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

{{- /* Вариант железа: значение hardware формы, иначе умолчание паспорта. */}}
{{- $variant := .Values.hardware | default $m.defaultVariant | toString }}
{{- if not (hasKey $m.variants $variant) }}
{{- fail (printf "%s: вариант железа %q не описан; есть: %s" .Chart.Name $variant (keys $m.variants | sortAlpha | join ", ")) }}
{{- end }}

{{- /* Память: в пределах паспорта. */}}
{{- $memory := .Values.memory | default $m.memory.default | toString }}
{{- $mem := include "retro-machine.mi" $memory | atoi }}
{{- if or (lt $mem (include "retro-machine.mi" $m.memory.min | atoi)) (gt $mem (include "retro-machine.mi" $m.memory.max | atoi)) }}
{{- fail (printf "%s: память %s вне пределов машины %s…%s" .Chart.Name $memory $m.memory.min $m.memory.max) }}
{{- end }}

{{- /* ⚠ `default true` здесь нельзя: false для default — пустое значение, и
       остановленная машина молча запустилась бы. */}}
{{- $running := true }}
{{- if hasKey .Values "running" }}
{{- if not (kindIs "bool" .Values.running) }}
{{- fail (printf "%s: running — true или false" .Chart.Name) }}
{{- end }}
{{- $running = .Values.running }}
{{- end }}

{{- $hook := (index .Subcharts "retro-machine").Files.Get "files/onDefineDomain.py" }}
{{- if not $hook }}
{{- fail "retro-machine: в библиотеке нет files/onDefineDomain.py" }}
{{- end }}

{{- /* Перехватчик: штатная обёртка sidecar-shim исполняет скрипт из
       ConfigMap, своего образа перехватчика не нужно. Том с файлами
       монтируется И в перехватчик, И в контейнер с libvirt
       (sharedComputePath) — по одному и тому же пути, поэтому перехватчик
       может проверить, что файлы уже на месте. */}}
{{- $sidecars := list (dict
      "args" (list "--version" "v1alpha2")
      "configMap" (dict "name" (printf "%s-hook" $fn) "key" "onDefineDomain" "hookPath" "/usr/bin/onDefineDomain")
      "pvc" (dict "name" (printf "%s-payload" $fn) "volumePath" $base "sharedComputePath" $base)) }}
{{- $passport := set (deepCopy $m) "variant" $variant }}
apiVersion: v1
kind: ConfigMap
metadata:
  name: {{ $fn }}-hook
  labels: {{- include "retro-machine.labels" . | nindent 4 }}
data:
  onDefineDomain: |
{{ $hook | indent 4 }}
---
# Том с файлами машины. Обычный ресурс релиза: создаётся любой удачной
# установкой или обновлением — в том числе обновлением, которым flux
# повторяет неудавшуюся установку, — и удаляется вместе с машиной. Раньше он
# был хуком pre-install: на повторе как обновлении его не было вовсе, а при
# удалении Helm его не трогал (находки 58 и 64).
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
# Сама машина. VirtualMachine, а не голый VirtualMachineInstance: у неё есть
# стратегия запуска, а значит перезапуск (`virtctl restart`, кнопки
# дашборда) и повторный запуск после сбоя с нарастающей паузой.
#
# Описание намеренно бедное: почти всё перехватчик заменит. KubeVirt требует
# заполнить поля, чтобы собрать домен, — а мы потом его переписываем.
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
      # Метаданные шаблона KubeVirt копирует в каждый новый VMI целиком
      # (SetupVMIFromVM), поэтому паспорт и перехватчик — здесь.
      annotations:
        paleocomputing.io/machine: {{ toJson $passport | quote }}
        hooks.kubevirt.io/hookSidecars: {{ toJson $sidecars | quote }}
    spec:
      # ⚠ Выселение — остановкой, а не миграцией. В кластере стратегия
      # LiveMigrate, а чужую машину мигрировать нечем: KubeVirt отказал бы в
      # выселении её пода, и слив узла встал бы на ней — чужие люди не смогли
      # бы обслужить общий кластер. С None под выселяется, а VirtualMachine
      # поднимает машину на другом узле; диск на томе переживает переезд.
      evictionStrategy: None
      terminationGracePeriodSeconds: {{ $m.domain.terminationGracePeriodSeconds }}
      domain:
        resources:
          requests:
            memory: {{ $memory }}
        devices: {}
      volumes: []
---
# Наполнение тома. Новая задача появляется на каждой установке и на каждом
# обновлении, которое меняет её спецификацию (имя несёт хэш), в том числе на
# обновлении, которым flux повторяет упавшую установку.
#
# Идемпотентна по ролям: прошивку переписывает всегда (новый выпуск каталога
# — новое ПЗУ), диск пользователя кладёт, только если его нет или он пуст.
# Каждый файл пишется во временный и переименовывается: машина, которая
# стартует параллельно, увидит либо старый файл, либо новый целиком.
#
# ⚠ Обычный ресурс релиза, НЕ хук. Хуком post-install она сидела в
# неразрешимом ожидании: Cozystack ставит релиз с ожиданием готовности,
# хук post-install Helm запускает только после готовности ресурсов, а машина
# не готова, пока том пуст, — перехватчик честно отказывает. Найдено в живом
# тенанте: машина перезапускалась, задача не появлялась. Теперь том, задача и
# машина создаются вместе; машина пробует стартовать, пока файлов нет, и
# поднимается, когда задача закончит.
#
# Шаблон Job неизменяем, поэтому в имени — хэш образа и паспорта: новый
# выпуск даёт новую задачу (она обновит прошивку, диск не тронет), прежнюю
# Helm удаляет как ушедшую из релиза.
{{- $fillSpec := include "retro-machine.fillJobSpec" (dict "ctx" . "m" $m "fn" $fn "base" $base "running" $running) }}
apiVersion: batch/v1
kind: Job
metadata:
  name: {{ $fn }}-fill-{{ $fillSpec | sha256sum | trunc 8 }}
  labels: {{- include "retro-machine.labels" . | nindent 4 }}
{{ $fillSpec }}
{{- end }}
