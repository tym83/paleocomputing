# Open flow for Lattice ECP5: yosys -> nextpnr-ecp5 -> ecppack.
#
# Why Debian and not a nightly OSS CAD Suite build: nightly releases live
# for a limited time and get deleted, while Debian packages and an image snapshot
# by digest stay. Also the image is multi-arch, so on arm64 the flow runs without emulation.
#
# Versions are pinned. If a package is updated in trixie, the install fails loudly,
# which is the point: a silent tool change shifts fmax, and looking at the shift
# without knowing its cause is pointless. Bump versions in a separate commit
# together with re-measuring results.md.
FROM debian:trixie-slim@sha256:a99cfc517144bc59b1978475ec53b46ecabec7e43635402ee5b77cc54cd1b20a

# ⚠ Debian's rebuilt-package versions (+bN) differ per architecture:
# the source is the same (nextpnr 0.7-1, trellis 1.4-2), but the suffix differs on arm64 and amd64.
# A pinned arm64 version broke the amd64 build in CI. So the suffix
# is chosen by the image architecture via dpkg, not TARGETARCH: the legacy Docker
# builder does not set it.
RUN set -e; arch=$(dpkg --print-architecture); \
    case "$arch" in \
      amd64) npr=0.7-1+b2; trl=1.4-2+b4 ;; \
      arm64) npr=0.7-1+b3; trl=1.4-2+b5 ;; \
      *) echo "architecture $arch: versions not pinned"; exit 1 ;; \
    esac; \
    apt-get update -qq \
 && apt-get install -y --no-install-recommends \
      make python3-minimal \
      yosys=0.52-2 \
      nextpnr-ecp5=$npr \
      fpga-trellis=$trl \
      openfpgaloader=0.13.1-1 \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /work
