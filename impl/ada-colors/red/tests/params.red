% binding classes (7.3): an OUT formal is a local variable that is assigned to
% the actual on normal completion only, so an unhandled exception leaves the
% actual as it was and the actual does not change while the body runs
CAPSULE main EXPORTS NONE;
   VAR g : INT := 0;

   PROC full_divide(a, b : INT, OUT c, d : INT);
      c := a DIV b;
      d := a - c * b;
   END PROC full_divide;

   PROC set_then_fail(OUT x : INT);
      x := 5;
      RAISE X_RANGE;
   END PROC set_then_fail;

   PROC set_and_recover(OUT x : INT);
      x := 7;
      GUARD
         RAISE X_RANGE;
      BY
      WHEN X_RANGE => WRITELN("recovered inside");
      END GUARD;
   END PROC set_and_recover;

   PROC out_and_var(OUT x : INT, VAR y : INT);
      x := 10;
      WRITELN("y during the call: " & CNVT[STRING[ASCII]](y));
   END PROC out_and_var;

   PROC out_and_import(OUT x : INT) IMPORTS g;
      x := 3;
      WRITELN("g during the call: " & CNVT[STRING[ASCII]](g));
   END PROC out_and_import;

   ABNORMAL FUNC label(OUT s : STRING[ASCII]) => INT;
      s := "done";
      RETURN 1;
   END FUNC label;

   VAR q, r, a : INT;
   VAR s : STRING[ASCII](4) := "none";
   VAR n : INT;

   full_divide(17, 5, q, r);
   WRITELN("17 / 5 = " & CNVT[STRING[ASCII]](q) & " rem " & CNVT[STRING[ASCII]](r));

   a := 1;
   GUARD
      set_then_fail(a);
   BY
   WHEN X_RANGE => WRITELN("after the exception a = " & CNVT[STRING[ASCII]](a));
   END GUARD;

   set_and_recover(a);
   WRITELN("after recovery a = " & CNVT[STRING[ASCII]](a));

   a := 1;
   out_and_var(a, a);
   WRITELN("after the call a = " & CNVT[STRING[ASCII]](a));

   out_and_import(g);
   WRITELN("after the call g = " & CNVT[STRING[ASCII]](g));

   n := label(s);
   WRITELN("s = " & s & ", n = " & CNVT[STRING[ASCII]](n));
END CAPSULE main;
