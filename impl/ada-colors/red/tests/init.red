% reading a variable that was never given a value raises X_INIT (5.1)
CAPSULE main EXPORTS NONE;
   PROC maybe(OUT x : INT, CONST give : BOOL);
      IF give THEN
         x := 7;
      END IF;
   END PROC maybe;
   VAR x, y : INT;
   VAR f : FLOAT;
   VAR e : ENUM['a, 'b];
   VAR r : RECORD[n : INT, ok : BOOL];
   VAR a : ARRAY INT(1 .. 3) OF INT;
   TYPE cell : PTR RECORD[n : INT, ok : BOOL];
   VAR p : cell;
   VAR s : STRING[ASCII](3);
   GUARD
      y := x + 1;
   BY
      WHEN X_INIT => WRITELN("X_INIT: x");
   END GUARD;
   GUARD
      f := f * 2.0;
   BY
      WHEN X_INIT => WRITELN("X_INIT: f");
   END GUARD;
   GUARD
      IF e = 'a THEN
         WRITELN("no");
      END IF;
   BY
      WHEN X_INIT => WRITELN("X_INIT: e");
   END GUARD;
   r.n := 1;
   GUARD
      IF r.ok THEN
         WRITELN("no");
      END IF;
   BY
      WHEN X_INIT => WRITELN("X_INIT: r.ok, though r.n = " & CNVT[STRING[ASCII]](r.n));
   END GUARD;
   a(2) := 5;
   GUARD
      y := a(2) + a(3);
   BY
      WHEN X_INIT => WRITELN("X_INIT: a(3)");
   END GUARD;
   maybe(x, FALSE);
   GUARD
      y := x;
   BY
      WHEN X_INIT => WRITELN("an OUT formal never given a value leaves x uninitialized");
   END GUARD;
   maybe(x, TRUE);
   WRITELN("x = " & CNVT[STRING[ASCII]](x));
   ALLOC p PTR;
   p.n := 4;
   GUARD
      IF p.ok THEN
         WRITELN("no");
      END IF;
   BY
      WHEN X_INIT => WRITELN("X_INIT: p.ok of a dynamic variable, though p.n = " & CNVT[STRING[ASCII]](p.n));
   END GUARD;
   s(1) := 'A;
   WRITELN("s(1) = " & s(1 .. 1));
   GUARD
      WRITELN(s);
   BY
      WHEN X_INIT => WRITELN("X_INIT: s(2) and s(3) have no value");
   END GUARD;
   GUARD
      WRITELN(CNVT[STRING[ASCII]](POS(s(3))));
   BY
      WHEN X_INIT => WRITELN("X_INIT: s(3)");
   END GUARD;
   PRAG(SUPPRESS(X_INIT)) BEGIN
      y := y;
      WRITELN("SUPPRESS(X_INIT)");
   END;
END CAPSULE main;
