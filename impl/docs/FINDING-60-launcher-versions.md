[Русская версия](FINDING-60-launcher-versions.ru.md)

# Finding 60. A launcher built for one KubeVirt version is a launcher until the first upgrade

The `virt-launcher` image with the RISC5 machine was built for a single version,
KubeVirt 1.8.4. The launcher must match the KubeVirt version in the cluster exactly
(Finding 44): it talks to virt-handler over a versioned protocol. And Cozystack main
had already moved to KubeVirt 1.9.0 (commit 3e370e79a0 of 2026-09-04,
`chore(kubevirt): update KubeVirt to v1.9.0`). The very first platform upgrade would
have left OberonVM machines without a matching image.

Changing one FROM line is not enough. We replace **only the libvirt libraries** in
the stock image, so we must build the same libvirt version that is in it, and that
version changes between KubeVirt releases.

## Which versions and what is inside them

| KubeVirt | where | base | libvirt in the stock image |
|---|---|---|---|
| v1.8.2 | Cozystack 1.4.x | CentOS Stream 9 | 11.9.0 (`11.9.0-1.el9`) |
| **v1.8.4** | Cozystack 1.5.x and 1.6.x (latest release 1.6.3) | CentOS Stream 9 | **11.9.0** (`11.9.0-1.el9`) |
| **v1.9.0** | Cozystack main | CentOS Stream 9 | **11.10.0** (`11.10.0-12.el9`) |

Latest KubeVirt releases as of 2026-09-27: 1.8.4 in the 1.8 line, 1.9.0 in the 1.9
line; 1.10 exists only as an alpha.

Where the numbers come from:

* the KubeVirt version in Cozystack is the `image: quay.io/kubevirt/virt-operator:…`
  line in `packages/system/kubevirt-operator/templates/kubevirt-operator.yaml` on the
  release tags and on main;
* the base is `/etc/os-release` inside `quay.io/kubevirt/virt-launcher:<version>`;
* libvirt is read from the library name in the same image: `libvirt.so.0.11009.0` is
  11.9.0, `libvirt.so.0.11010.0` is 11.10.0. The image has no RPM database, so
  `rpm -q` knows nothing; the full package version with the build number was taken
  from `rpm/BUILD.bazel` in the KubeVirt tree at the same tag, which lists the
  packages the image is built from.

A build for 1.8.2 would cost one line (the libvirt is the same as for 1.8.4), but
Cozystack 1.4 is a past line and was not included in the list.

## The libvirt patch

`qemu/libvirt/patch_libvirt.py` was verified on both versions by running it on clean
`v11.9.0` and `v11.10.0` trees. The result is the same: five edits applied, and the
sixth (a branch in `qemu_domain.c` from libvirt 10) is absent as expected. The 11.10.0
build with the edits completed in full, and it builds with `-Werror=switch-enum`, so
there is no missing branch for the new architecture in 11.10.

## What changed

* `kubevirt/versions.txt` is the single place that records what belongs to which
  KubeVirt version: the libvirt version and the digest of the multi-architecture index
  of the stock `virt-launcher`. The first line is the default version.
* `kubevirt/build.sh` accepts `--kubevirt vX.Y.Z` (or `KUBEVIRT_VERSION`) and passes
  the whole line to the build. Without an argument it builds 1.8.4, as before. If the
  version is not in the list or its line has no digest, the build refuses.
* `kubevirt/Containerfile`: the base of the final image is
  `virt-launcher:${KUBEVIRT_VERSION}@${LAUNCHER_DIGEST}`. It is pinned by digest as
  before, only now each version has its own digest.
* The release (`publish.yml`) builds an image for every line in the list:
  `virt-launcher:<KubeVirt version>-risc5-<release>`. The PR build (`launcher.yml`)
  follows the same list, so a broken line surfaces before the release. Each version
  has its own cache, shared between both workflows: `scope=launcher-<KubeVirt version>`.
  Both take the version from the list rather than cutting it out of FROM.
* `kubevirt/check_image.sh`, the shared content check for release and PRs, got one
  more condition: the image contains exactly one `libvirt.so.0.*`. If a pair in the
  list is wrong, our library lands **next to** the stock one under a different name
  instead of replacing it, and the build still succeeds.

## Verified here

Locally, colima on arm64, 2 CPUs, 2 GB of memory, `DOCKER_BUILDKIT=0`:

* the `libvirt-build` stage for 11.10.0 (clone, patch, meson, 739 ninja targets,
  install) took 4 min 15 s (the layer with the `dnf builddep` dependencies came from
  the cache);
* the `qemu-build` stage does not depend on the KubeVirt version and came from the
  cache of the previous build with the same `QEMU_REF`;
* the final image `kubevirt/build.sh --kubevirt v1.9.0` was built on top of
  `virt-launcher:v1.9.0` (arm64);
* inside it: `virtqemud (libvirt) 11.10.0`, exactly one `libvirt.so.0.11010.0`, the
  machine has the `chk` property, the hook is in place, which is the same set the
  release checks;
* `kubevirt/test-in-image.sh` inside the image: the stock virtqemud 11.10.0 with our
  library defined and started the domain `arch='risc5' machine='oberon'`; the
  framebuffer snapshot is 98 304 bytes with 18 607 black pixels, **exactly like the
  reference** from `kubevirt/README.md`;
* the default version (`kubevirt/build.sh` without an argument) produces the previous
  image on 1.8.4 with libvirt 11.9.0, and it passes the same checks with the same
  snapshot;
* a deliberately wrong pair (base 1.9.0, libvirt 11.9.0) builds without a single error,
  and the image contains both libraries, `libvirt.so.0.11009.0` and
  `libvirt.so.0.11010.0`. The new `check_image.sh` condition catches exactly this.

## What was not verified

* A full run in a cluster on KubeVirt 1.9.0: the launcher talking to virt-handler of
  the same version and starting through the hook.
* The amd64 image: we built for arm64; in the release the build runs on amd64.
* We build libvirt from upstream sources, while the stock image has the CentOS build
  with their own patches (`-12.el9`). For 11.9.0 the same setup already works in the
  cluster; for 11.10.0 compatibility is confirmed only by running inside the image,
  not in a cluster.

## How to add a version

Look at libvirt in the stock image of the new version:

```
docker run --rm --entrypoint sh quay.io/kubevirt/virt-launcher:v1.9.1 \
  -c 'grep VERSION_ID /etc/os-release; ls /usr/lib64/libvirt.so.0.*'
```

get the index digest:

```
docker buildx imagetools inspect quay.io/kubevirt/virt-launcher:v1.9.1
```

add a line to `kubevirt/versions.txt`, and run `patch_libvirt.py` on the tree of that
libvirt version. If the image base has moved off CentOS Stream 9 (KubeVirt already has
a CentOS Stream 10 variant), one line is not enough: the build stages are based on
`centos:stream9`.
