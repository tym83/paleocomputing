% 8.2: exporting a type does not export selection of its components
CAPSULE main EXPORTS NONE;
   CAPSULE stackcap EXPORTS stack, init;
      TYPE stack : RECORD[top : INT(0 .. 10)];
      PROC init(VAR s : stack);
         s.top := 0;
      END PROC init;
   END CAPSULE stackcap;
   EXPOSE ALL FROM stackcap;
   VAR s : stack;
   init(s);
   s.top := 5;
END CAPSULE main;
