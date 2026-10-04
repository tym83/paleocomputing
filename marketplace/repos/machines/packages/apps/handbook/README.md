[Русская версия](README.ru.md)

# handbook

Documentation that is deployed next to the application instead of living as a
separate link.

The reason is simple: the Cozystack catalog application description has no
field for documentation. `ApplicationDefinition.spec.dashboard` has
`description`, `icon`, `category`, `tags`, and that is all. There is nowhere to
give the dashboard a link to a manual, so the manual arrives as an ordinary
part of the environment and serves itself.

## Two sources

**Your own image** (`image`) already contains built documentation in
`/usr/share/nginx/html`. This is how `oberon-lab` does it: the eight-chapter
manual lives in the same image as the labs.

**Pages in the values** (`pages`), when there is no image of your own. Then the
manual comes up on stock unprivileged nginx, and nothing needs to be built.
The page text goes into a `ConfigMap` via JSON encoding: in a YAML literal block
arbitrary multi-line text would fall apart on indentation. Markup inside the
text is escaped: the page shows it rather than executing it.

One excludes the other: if `image` is set, the `pages` list is ignored.

| parameter | default | what it does |
|---|---|---|
| `title` | `Handbook` | front page title |
| `pages` | `[]` | pages: `name`, `title`, `body` |
| `image` | `""` | image with ready documentation |
| `host` | `""` | external host name; empty means no ingress is created |
