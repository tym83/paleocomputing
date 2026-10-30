% subtype and type inquiry, attributes (4.5), abbreviations (4.4.1) and
% indirect types with formal parameters (4.4.3)
CAPSULE main EXPORTS NONE;
   ABBREV small(n : INT) : INT(0 .. n);
   ABBREV upper : ASCII('A .. 'Z);
   ABBREV r : INT(2 .. 7);
   TYPE matrix(first, second : INT) : ARRAY INT(1 .. first), INT(1 .. second) OF INT;
   TYPE str(n : INT) : PTR STRING[ASCII](n);
   TYPE vstr : PTR (u : INT) STRING[ASCII](u);
   VAR x : small(5) := 3;
   VAR c : upper := 'Q;
   VAR i : INT(1 .. 10) := 3;
   VAR y : SUBTYPEOF(i) := 2;
   VAR z : TYPEOF(i) := 200;
   VAR f : FLOAT(6, 0.0 .. 1.0) := 0.5;
   VAR a : ARRAY INT(1 .. 10) OF INT;
   VAR mb : MAILBOX[INT](4);
   VAR p : str(5);
   VAR q : str(3);
   VAR v : vstr;
   VAR sum : INT := 0;
   GUARD
      x := 9;
   BY
      WHEN X_RANGE => WRITELN("small(5) is INT(0 .. 5)");
   END GUARD;
   GUARD
      c := 'L_A;
   BY
      WHEN X_RANGE => WRITELN("upper is an ASCII subrange");
   END GUARD;
   GUARD
      y := 11;
   BY
      WHEN X_RANGE => WRITELN("SUBTYPEOF(i) is INT(1 .. 10)");
   END GUARD;
   WRITELN("TYPEOF(i) is INT: " & CNVT[STRING[ASCII]](z));
   FOR k : INDEXOF(a) REPEAT
      a(k) := k;
      sum := sum + k;
   END REPEAT;
   WRITELN("INDEXOF(a): " & CNVT[STRING[ASCII]](sum) & " " & CNVT[STRING[ASCII]](INDEXOF(a).MAX));
   WRITELN("i.MIN, i.MAX: " & CNVT[STRING[ASCII]](i.MIN) & " " & CNVT[STRING[ASCII]](i.MAX));
   WRITELN("INT(2 .. 7).MIN, r.MAX: " & CNVT[STRING[ASCII]](INT(2 .. 7).MIN) & " " & CNVT[STRING[ASCII]](r.MAX));
   WRITELN("f.PREC: " & CNVT[STRING[ASCII]](f.PREC));
   WRITELN("STRING[ASCII](8).LEN: " & CNVT[STRING[ASCII]](STRING[ASCII](8).LEN));
   WRITELN("matrix(5, 8).second: " & CNVT[STRING[ASCII]](matrix(5, 8).second));
   WRITELN("mb.LEN: " & CNVT[STRING[ASCII]](mb.LEN));
   IF TYPEOF(i) = INT THEN
      WRITELN("TYPEOF(i) = INT");
   END IF;
   IF INT(1 .. 5) = INT(1 .. 5) AND SUBTYPEOF(i) /= INT(1 .. 5) THEN
      WRITELN("subtype comparison");
   END IF;
   ALLOC v PTR (5) := "ABCDE";
   WRITELN(v.ALL & " has u = " & CNVT[STRING[ASCII]](v.u));
   ALLOC p PTR := "ABCDE";
   ALLOC q PTR := "ABC";
   GUARD
      p := q;
   BY
      WHEN X_SUBTYPE => WRITELN("X_SUBTYPE: str(5) := str(3)");
   END GUARD;
   WRITELN("p.n = " & CNVT[STRING[ASCII]](p.n));
END CAPSULE main;
