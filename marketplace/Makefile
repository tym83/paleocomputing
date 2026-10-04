# The "Forgotten Systems" catalog for Cozystack.
#
# The unit of installation is a whole repository, not a single package: the
# things inside are built and tested together. There are three repositories,
# each with its own OCI artifact and its own meta-index entry.

COZYPKG ?= /tmp/cozypkg
REGISTRY ?= ghcr.io/tym83/paleocomputing
TAG      ?= v0.1.0
REPOS    := machines languages images platform

.PHONY: help check validate gen search push clean-check

help:
	@echo "  make check      all catalog checks (including mutations)"
	@echo "  make validate   only the standard Cozystack validator on each repository"
	@echo "  make gen        regenerate application definitions from chart schemas"
	@echo "  make search     show the meta-index as cozypkg sees it"
	@echo "  make push       push repositories to OCI (needs your own REGISTRY=)"

check:
	@python3 tools/check.py

# The standard Cozystack validator. Each repository is checked separately:
# each has its own artifact root.
#
# --helm-lint is intentionally off: helm 4 treats an icon path like
# /logos/foo.svg as an error, but that is Cozystack's own convention
# (hack/update-crd.sh resolves such a path into the chart). On their own charts
# (nats, redis, kafka, mongodb) helm 4 complains in exactly the same way.
validate:
	@for r in $(REPOS); do \
	  echo "── repos/$$r"; \
	  $(COZYPKG) validate repos/$$r || exit 1; \
	done

gen:
	@for d in repos/*/packages/system/*-rd; do \
	  [ -f "$$d/appdefs.yaml" ] || continue; \
	  echo "── $$d"; python3 tools/gen-appdefs.py "$$d" || exit 1; \
	done

search:
	@$(COZYPKG) search --index index

# Publishing. Each repository ships as a separate artifact under its own tag:
# the tag is the repository version, and it is what pins it when connected.
push:
	@for r in $(REPOS); do \
	  echo "── repos/$$r -> oci://$(REGISTRY)/$$r:$(TAG)"; \
	  $(COZYPKG) push oci://$(REGISTRY)/$$r:$(TAG) --path repos/$$r || exit 1; \
	done
