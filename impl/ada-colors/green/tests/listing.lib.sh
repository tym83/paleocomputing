# pragma LIST and PAGE (RM79 App. B): greenc writes the listing of the source
# to the file GREEN_LISTING names; LIST(OFF) .. LIST(ON) leaves lines out; a
# body with pragma INLINE is expanded at its calls, so no function of its
# name is left in the program
set -e
GREENC=$1; DIR=$2; RT=$(dirname "$GREENC")/../../rt
cat > "$DIR/m.grn" <<'G'
restricted (TEXT_IO)
procedure MAIN is
   use TEXT_IO;
   pragma LIST(OFF);
   function TWICE(X : INTEGER) return INTEGER is
      pragma INLINE;
   begin
      return 2 * X;
   end TWICE;
   pragma LIST(ON);
   pragma PAGE;
begin
   PUT(TWICE(21)); PUT(NEWLINE);
end MAIN;
G
GREEN_LISTING="$DIR/m.lst" "$GREENC" < "$DIR/m.grn" > "$DIR/m.c"
cc -std=gnu11 -O0 -Wno-everything -Werror=incompatible-pointer-types -Werror=int-conversion -I"$RT" "$DIR/m.c" "$RT/paleo.c" -o "$DIR/m" -lpthread -lm
"$DIR/m"
tr '\014' '#' < "$DIR/m.lst"
cc -std=gnu11 -O0 -Wno-everything -Werror=incompatible-pointer-types -Werror=int-conversion -I"$RT" -c "$DIR/m.c" -o "$DIR/m.o"
if nm "$DIR/m.o" | grep -q twice; then echo "TWICE was not expanded"; else echo "TWICE expanded"; fi
