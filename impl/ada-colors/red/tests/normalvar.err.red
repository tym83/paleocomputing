CAPSULE main EXPORTS NONE;
   FUNC f(VAR x : INT) => INT;
      x := 1; RETURN 2;
   END FUNC f;
   VAR v : INT := 0;
   WRITELN("normal func with VAR accepted " & CNVT[STRING[ASCII]](f(v)));
END CAPSULE main;
