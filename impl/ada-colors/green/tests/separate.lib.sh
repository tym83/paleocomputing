# separate compilations through the program library (RM79 10.1 - 10.5):
# a package, then a main program that names it, then a subunit compiled after
# its enclosing unit
set -e
GREENC=$1; DIR=$2; RT=$(dirname "$GREENC")/../../rt
run() { "$GREENC" < "$1" > "$DIR/p.c" || { cat "$DIR/p.c"; exit 1; }
        cc -std=gnu11 -O1 -Wno-everything -Werror=incompatible-pointer-types -Werror=int-conversion -I"$RT" "$DIR/p.c" "$RT/paleo.c" -o "$DIR/p" -lpthread -lm; "$DIR/p"; }
cat > "$DIR/lib.grn" <<'G'
package COUNTER is
   procedure TICK;
   function VALUE return INTEGER;
end COUNTER;
package body COUNTER is
   N : INTEGER := 0;
   procedure TICK is
   begin
      N := N + 1;
   end TICK;
   function VALUE return INTEGER is
   begin
      return N;
   end VALUE;
begin
   N := 40;
end COUNTER;
restricted (TEXT_IO)
procedure INIT is
   use TEXT_IO;
begin
   PUT("library compiled"); PUT(NEWLINE);
end INIT;
G
run "$DIR/lib.grn"
cat > "$DIR/main.grn" <<'G'
restricted (COUNTER, TEXT_IO)
procedure MAIN is
   use TEXT_IO;
   procedure SHOW is separate;
begin
   COUNTER.TICK; COUNTER.TICK;
   SHOW;
end MAIN;
restricted (MAIN, COUNTER, TEXT_IO)
separate procedure SHOW is
   use TEXT_IO;
begin
   PUT("first SHOW"); PUT(COUNTER.VALUE); PUT(NEWLINE);
end SHOW;
G
run "$DIR/main.grn"
cat > "$DIR/show.grn" <<'G'
restricted (MAIN, COUNTER, TEXT_IO)
separate procedure SHOW is
   use TEXT_IO;
begin
   PUT("new SHOW, recompiled alone"); PUT(COUNTER.VALUE); PUT(NEWLINE);
end SHOW;
G
run "$DIR/show.grn"
cat > "$DIR/bad.grn" <<'G'
restricted (NOWHERE)
procedure BAD is
begin
   null;
end BAD;
G
"$GREENC" < "$DIR/bad.grn" 2>/dev/null | head -1
