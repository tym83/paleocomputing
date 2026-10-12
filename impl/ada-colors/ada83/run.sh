#!/bin/sh
# Build the Ada 83 comparison programs with GNAT in Ada 83 mode and check their output.
set -eu
cd "$(dirname "$0")"
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
for src in *.adb; do
  name=$(basename "$src" .adb)
  (cd "$tmp" && gnatmake -q -gnat83 -o "$name" "$OLDPWD/$src")
  "$tmp/$name" > "$tmp/$name.txt"
  diff -u "$name.out" "$tmp/$name.txt"
  echo "ok $name"
done
