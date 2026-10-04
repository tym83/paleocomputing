[Русская версия](README.ru.md)

# langpack

An environment for a programming language: what you can work with it in.

## About "serverless"

Cozystack has no FaaS substrate: neither Knative nor an equivalent is installed
in the tree. So there is nothing to provide scale-to-zero on an incoming
request, and promising it would be dishonest.

The practical property that serverless is usually chosen for, "nothing spins
idle", is provided here by the `job` mode: the environment comes up for the
duration of a run and disappears. The `service` mode is an ordinary
permanently running environment: a REPL, a notebook, an IDE.

## Sources

The program is placed into `srcdir` (`/src` by default) read-only: it is a
`ConfigMap`. The working directory `workdir` (`/work`) is an empty writable
volume where the language puts whatever it produces. Copying the sources
elsewhere is the image's own business; the chart imposes neither a shell nor an
extra container for that.

`srcdir` equal to `workdir` is rejected: the read-only volume would cover the
working directory.

| parameter | default | what it does |
|---|---|---|
| `language` | — | language name, required |
| `image` | — | image with the implementation, required |
| `mode` | `job` | `job` is a one-off run, `service` a persistent environment |
| `program` | `[]` | sources: `path`, `content` |
| `command` / `args` | `[]` | what to run |
| `host` | `""` | external host name; cannot be set in `job` mode |
