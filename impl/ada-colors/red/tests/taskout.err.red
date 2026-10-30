CAPSULE main EXPORTS NONE;
   TASK t(OUT x : INT);
      x := 1;
   END TASK t;
   VAR a : ACT;
   VAR v : INT;
   CREATE t(v) NAMED a;
   WRITELN("task OUT formal accepted");
END CAPSULE main;
