[Русская версия](FINDING-46-retap.ru.md)

# Finding 46. Switching the catalog tag is not enough

A catalog is connected to Cozystack by a reference to an OCI artifact. It seems
that to update it, it is enough to change the tag on the `OCIRepository`: the
platform will pull the new revision and lay everything out.

It is not enough. **The list of components lives in the `PackageSource`
manifest inside the cluster** and is not updated along with the artifact.

## What it looks like

The artifact is updated, the revision is new, the status is green:

```
revision: v0.1.5@sha256:b26e78...
Ready=True Succeeded: reconciliation succeeded, generated 4 artifact(s)
```

Four, while the new version has five components. The new application is
visible in the catalog (the descriptions are laid out by a separate component,
and that one did get updated), a tenant installs it, and it does not deploy:

```
could not get Source object: ExternalArtifact ... not found
```

## Why

The state is spread across two places:

| where | what | updated by |
|---|---|---|
| `OCIRepository` | reference and revision | changing the tag |
| `PackageSource` | **list of components** | only a repeated `tap` |

The first changes with one command, the second does not, and nothing reports
this.

## What to do

Update the catalog by connecting it again, not by editing the tag:

```
cozypkg tap oci://ghcr.io/<owner>/<repository>:<new-version>
```

After that the source rereads the list:

```
reconciliation succeeded, generated 5 artifact(s)
```

## What it shares with the other catalog traps

The same signature as in Findings 35 and 45: **everything is green, and nothing
works**. The state is spread across several places, it is updated partially,
and the check looks at what did get updated.

Practical rule: after updating the catalog, compare not the source's status but
**the number of generated artifacts** with the number of components.
