% arrays (C.7), constructors (5.6) and unions (C.6)
CAPSULE main EXPORTS NONE;
   ABBREV row : ARRAY INT(1 .. 5) OF INT;
   VAR a : ARRAY INT(1 .. 5) OF INT := [1, 2, 3, 4, 5];
   VAR b : ARRAY INT(1 .. 2) OF INT;
   VAR c : ARRAY INT(1 .. 4) OF INT;
   VAR k : ARRAY INT(1 .. 4) OF INT;
   VAR m : ARRAY INT(1 .. 3), ENUM['a, 'b, 'c] OF INT;
   VAR m2 : ARRAY INT(1 .. 2), INT(1 .. 2) OF INT;
   VAR cube : ARRAY INT(1 .. 2), INT(1 .. 3), INT(0 .. 1) OF INT;
   VAR r : RECORD[x, y : INT, z : BOOL];
   VAR u, v : UNION[n : INT, s : STRING[ASCII](3), f : BOOL];
   VAR only : UNION[n : INT, s : STRING[ASCII](3), f : BOOL]('n);
   VAR e1 : ARRAY INT(1 .. 2) OF INT := [1, 2];
   VAR e2 : ARRAY INT(0 .. 1) OF INT := [1, 2];
   VAR total : INT := 0;
   b := a(2 .. 3);
   a(4 .. 5) := b;
   WRITELN("slices: " & CNVT[STRING[ASCII]](a(4)) & " " & CNVT[STRING[ASCII]](a(5)));
   a(2 .. 4) := a(1 .. 3);
   WRITELN("overlapping slice: " & CNVT[STRING[ASCII]](a(2)) & CNVT[STRING[ASCII]](a(3)) & CNVT[STRING[ASCII]](a(4)));
   c := b & b;
   WRITELN("catenation: " & CNVT[STRING[ASCII]](c(3)));
   GUARD
      b := a;
   BY
      WHEN X_ARRAY => WRITELN("X_ARRAY: arrays of different length");
   END GUARD;
   k := [1 .. 2 : 7, 3, 4 : 9];
   WRITELN("keyed: " & CNVT[STRING[ASCII]](k(1)) & CNVT[STRING[ASCII]](k(4)));
   m := [1, 'a : 0, 1, 'b : 1, 1, 'c : 2, 2, 'a : 3, 2, 'b : 4, 2, 'c : 5, 3, 'a : 6, 3, 'b : 7, 3, 'c : 8];
   WRITELN("2-D keyed: " & CNVT[STRING[ASCII]](m(2, 'c)));
   m := [1 .. 3, 'a .. 'c : 10];
   WRITELN("2-D ranges: " & CNVT[STRING[ASCII]](m(3, 'b)));
   m2 := [1 : [1 : 1, 2 : 2], 2 : [1 : 3, 2 : 4]];
   WRITELN("rows: " & CNVT[STRING[ASCII]](m2(2, 1)));
   cube := [1 .. 2, 1 .. 3, 0 .. 1 : 1];
   cube(2, 3, 1) := 5;
   FOR i : INT(1 .. 2) REPEAT
      FOR j : INT(1 .. 3) REPEAT
         FOR l : INT(0 .. 1) REPEAT
            total := total + cube(i, j, l);
         END REPEAT;
      END REPEAT;
   END REPEAT;
   WRITELN("three dimensions: " & CNVT[STRING[ASCII]](total));
   GUARD
      k := [1 .. 3 : 0];
   BY
      WHEN X_ARRAY => WRITELN("X_ARRAY: a component without a value");
   END GUARD;
   IF e1 = e2 THEN
      WRITELN("equal");
   ELSE
      WRITELN("different index subtypes: not equal");
   END IF;
   r := [x, y : 0, z : TRUE];
   WRITELN("shared keys: " & CNVT[STRING[ASCII]](r.y));
   u := [s : "abc"];
   IF u.TAG = 's THEN
      WRITELN("union: " & u.s);
   END IF;
   v := u;
   IF u = v THEN
      WRITELN("unions equal");
   END IF;
   GUARD
      WRITELN(CNVT[STRING[ASCII]](u.n));
   BY
      WHEN X_TAG => WRITELN("X_TAG: n is not present");
   END GUARD;
   only.n := 4;
   GUARD
      only := u;
   BY
      WHEN X_RANGE => WRITELN("X_RANGE: the subtype allows only n");
   END GUARD;
   only := [n : 5];
   WRITELN("only n: " & CNVT[STRING[ASCII]](only.n));
END CAPSULE main;
