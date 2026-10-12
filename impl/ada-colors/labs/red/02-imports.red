% Lab 2. A procedure is a closed scope: it sees outer variables only if it imports them.
CAPSULE main EXPORTS NONE;
   VAR hits : INT := 0;
   VAR limit : INT := 3;
   PROC hit IMPORTS hits, READONLY limit;
      IF hits < limit THEN
         hits := hits + 1;
      END IF;
   END PROC hit;
   FOR i : INT(1 .. 5) REPEAT
      hit;
   END REPEAT;
   WRITELN("hits " & CNVT[STRING[ASCII]](hits));
END CAPSULE main;
