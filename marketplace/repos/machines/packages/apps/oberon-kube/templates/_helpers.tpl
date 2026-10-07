{{- define "oberon-kube.labels" -}}
app.kubernetes.io/name: oberon-kube
app.kubernetes.io/instance: {{ .Release.Name }}
app.kubernetes.io/version: {{ .Chart.AppVersion | quote }}
app.kubernetes.io/managed-by: {{ .Release.Service }}
{{- end }}

{{- /* Reference to the artifact of a component of this same repository. */ -}}
{{- define "oberon-kube.artifact" -}}
{{- printf "%s-%s" .root.Values.artifactPrefix .component -}}
{{- end }}
