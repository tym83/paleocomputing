[Русская версия](FINDING-57-signing-identity.ru.md)

# Finding 57. The signing identity depends on where the release is run from

The catalog is signed keylessly: the build workflow itself becomes the signing
identity. The meta-index entry stores this identity, and the community index
gate checks every new version against it:

```
signing:
  identity: https://github.com/tym83/paleocomputing/.github/workflows/publish.yml@refs/heads/main
```

Releases, however, were triggered by a tag push. And the identity is the
workflow file **plus the ref it was run from**:

| how it was run | identity |
|---|---|
| manually from main | `publish.yml@refs/heads/main` |
| by pushing tag v0.1.8 | `publish.yml@refs/tags/v0.1.8` |

Not a single tag-triggered release matched the entry. The tag cannot be put
into the entry: the identity must be the same for all versions of the entry;
that is the whole point of the check.

## Why it was not noticed

The signature check in the publishing workflow itself compared only the prefix:

```
--certificate-identity-regexp "^https://github.com/tym83/paleocomputing/"
```

Any ref matches it. And `cozypkg tap` does not verify signatures at all; that is
the index gate's job. Connecting the catalog in the cluster worked, and the
mismatch would only have surfaced when submitting the entry to the official
index.

It was found by reading the `cozypkg` sources (`cmd/cozypkg/cmd/tap.go`,
`validate.go`), not by running anything.

## What was changed

* A release is run manually from main, and the tree for the build is taken from
  the tag:

  ```
  git tag -a v0.1.9 -m ... && git push origin v0.1.9
  gh workflow run publish.yml --ref main -f tag=v0.1.9
  ```

  The workflow rejects a run not from main and a release of a nonexistent tag.
* The signature check after publishing compares the identity **exactly**,
  against the same string that is recorded in the meta-index.

## The common thread

The same signature as in Findings 35, 45 and 46: the check looked at something
that was bound to match. The repository prefix always matches, so it checked
nothing.
