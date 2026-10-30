% subtypes of formal parameters and results (7.2, 7.3), constraints kept from
% their elaboration (4.1.4), manifest constants (5.5)
CAPSULE main EXPORTS NONE;
   PROC set9(VAR x : INT);
      x := 9;
   END PROC set9;
   PROC set1(VAR x : INT(1 .. 10));
      x := 1;
   END PROC set1;
   PROC out7(OUT x : INT);
      x := 7;
   END PROC out7;
   PROC look(READONLY x : INT(1 .. 5));
      WRITELN("READONLY of an equal subtype: " & CNVT[STRING[ASCII]](x));
   END PROC look;
   FUNC f => INT(0 .. 5);
      RETURN 9;
   END FUNC f;
   FUNC pad(n : INT) => STRING[ASCII](n);
      VAR s : STRING[ASCII](n);
      FOR i : INT(1 .. n) REPEAT
         s(i) := 'X;
      END REPEAT;
      RETURN s;
   END FUNC pad;
   FUNC bad(n : INT) => STRING[ASCII](n);
      RETURN "toolong";
   END FUNC bad;
   CONST three := 10 DIV 3;
   CONST debug := FALSE;
   CONST eps := 1.0E-5 * 2.0;
   VAR v : INT(1 .. 5) := 2;
   VAR w : INT := 0;
   VAR m : INT := 4;
   VAR u : INT(1 .. m) := 1;
   GUARD
      set9(v);
   BY
      WHEN X_RANGE => WRITELN("a VAR formal by type takes the subtype of the actual");
   END GUARD;
   WRITELN("v = " & CNVT[STRING[ASCII]](v));
   set9(w);
   WRITELN("w = " & CNVT[STRING[ASCII]](w));
   GUARD
      set1(v);
   BY
      WHEN X_SUBTYPE => WRITELN("X_SUBTYPE: VAR actual of another subtype");
   END GUARD;
   GUARD
      out7(v);
   BY
      WHEN X_RANGE => WRITELN("OUT copied back into a narrower actual: X_RANGE");
   END GUARD;
   look(v);
   GUARD
      w := f;
   BY
      WHEN X_RANGE => WRITELN("result outside the result subtype: X_RANGE");
   END GUARD;
   WRITELN(pad(3));
   GUARD
      WRITELN(bad(2));
   BY
      WHEN X_SUBTYPE => WRITELN("result of the wrong length: X_SUBTYPE");
   END GUARD;
   m := 10;
   GUARD
      u := 7;
   BY
      WHEN X_RANGE => WRITELN("INT(1 .. m) keeps the m of its elaboration");
   END GUARD;
   GUARD
      VAR c : INT(0 .. three) := 0;
      c := 7;
   BY
      WHEN X_RANGE => WRITELN("10 DIV 3 is manifest");
   END GUARD;
   IF debug THEN
      not_declared_anywhere(1, 2);
   ELSE
      WRITELN("conditional translation");
   END IF;
   IF eps < 0.0 THEN
      not_declared_either;
   ELSEIF eps > 1.0E-5 THEN
      WRITELN("conditional translation on FLOAT constants");
   END IF;
   IF ACTIVE(NIL_ACT) THEN
      WRITELN("NIL_ACT is active");
   END IF;
END CAPSULE main;
