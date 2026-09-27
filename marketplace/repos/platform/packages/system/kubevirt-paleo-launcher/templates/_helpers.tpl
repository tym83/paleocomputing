{{- /*
  Имена постоянные, а не от имени релиза: писатель в кластере должен быть
  один. Второй релиз в том же пространстве имён упрётся в чужие ресурсы и не
  поставится — это и есть защита от двух циклов, спорящих за одну правку.
*/ -}}
{{- define "paleo-launcher.name" -}}kubevirt-paleo-launcher{{- end }}
{{- define "paleo-launcher.status" -}}kubevirt-paleo-launcher-status{{- end }}

{{- define "paleo-launcher.selector" -}}
app.kubernetes.io/name: kubevirt-paleo-launcher
app.kubernetes.io/instance: {{ .Release.Name }}
{{- end }}

{{- define "paleo-launcher.labels" -}}
{{ include "paleo-launcher.selector" . }}
app.kubernetes.io/managed-by: {{ .Release.Service }}
app.kubernetes.io/part-of: paleocomputing
{{- end }}

{{- /*
  Ограничения пода — профиль restricted: не root (образ по умолчанию root,
  поэтому пользователь задан явно), без повышения прав и возможностей ядра,
  seccomp RuntimeDefault, корень только для чтения. kubectl пишет кэш в
  $HOME — ему отдан /tmp на emptyDir.
*/ -}}
{{- define "paleo-launcher.podSecurity" -}}
runAsNonRoot: true
runAsUser: 65534
runAsGroup: 65534
seccompProfile:
  type: RuntimeDefault
{{- end }}

{{- define "paleo-launcher.containerSecurity" -}}
allowPrivilegeEscalation: false
readOnlyRootFilesystem: true
capabilities:
  drop: [ALL]
{{- end }}
