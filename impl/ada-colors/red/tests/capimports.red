% a capsule importing a variable declared before it in the same body is
% elaborated in order (3.6, 8.1)
CAPSULE main EXPORTS NONE;
   VAR g : INT := 1;
   CAPSULE k IMPORTS g EXPORTS show;
      PROC show IMPORTS g;
         WRITELN("g = " & CNVT[STRING[ASCII]](g));
      END PROC show;
      g := 5;
   END CAPSULE k;
   EXPOSE show FROM k RENAMING show TO display;
   display;
   g := 7;
   display;
END CAPSULE main;
