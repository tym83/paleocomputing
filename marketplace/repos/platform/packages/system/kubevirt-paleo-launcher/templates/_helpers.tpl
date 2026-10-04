{{- /*
  The names are fixed, not derived from the release name: there must be one
  writer in the cluster. A second release in the same namespace runs into
  someone else's resources and fails to install; that is the protection against
  two loops fighting over one patch.
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
  Pod restrictions follow the restricted profile: not root (the image defaults
  to root, so the user is set explicitly), no privilege escalation and no kernel
  capabilities, seccomp RuntimeDefault, read-only root. kubectl writes its cache
  to $HOME, so it gets /tmp on an emptyDir.
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
