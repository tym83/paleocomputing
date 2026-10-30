% goto statements and labels (6.8)
CAPSULE main EXPORTS NONE;
   VAR i : INT := 0;
   again : i := i + 1;
   IF i < 3 THEN
      GOTO again;
   END IF;
   WRITELN("i = " & CNVT[STRING[ASCII]](i));
   GUARD
      BEGIN
         IF i = 3 THEN
            GOTO done;
         END IF;
         WRITELN("not reached");
      END;
   BY
      WHEN X_RANGE => WRITELN("no");
   END GUARD;
   done : first : WRITELN("left the guarded body by GOTO");
   GUARD
      RAISE X_RANGE;
   BY
      WHEN X_RANGE => WRITELN("the guard still works after the GOTO");
   END GUARD;
END CAPSULE main;
