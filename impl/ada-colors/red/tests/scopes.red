% names in generic instances (11.3) and RETURN in a capsule body (6.7)
CAPSULE main EXPORTS NONE;
   PROC helper;
      WRITELN("the helper of the generic's definition environment");
   END PROC helper;
   GENERIC t : TYPE
      PROC run(x : t);
         helper;
      END PROC run;
   PROC user;
      PROC helper;
         WRITELN("the invoker's helper");
      END PROC helper;
      run(1);
   END PROC user;
   PROC outer;
      VAR loc : INT := 7;
      GENERIC t : TYPE
         PROC show(x : t) IMPORTS loc;
            WRITELN("a generic in a procedure sees its local: " & CNVT[STRING[ASCII]](loc));
         END PROC show;
      PROC deeper;
         show(TRUE);
      END PROC deeper;
      show(1);
      deeper;
   END PROC outer;
   CAPSULE inner EXPORTS NONE;
      WRITELN("inner start");
      BEGIN
         RETURN;
      END;
      WRITELN("inner after RETURN");
   END CAPSULE inner;
   user;
   outer;
   WRITELN("main continues after inner");
END CAPSULE main;
