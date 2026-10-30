CAPSULE main EXPORTS NONE;
   TYPE word : RECORD[op : INT(0 .. 15), addr : INT(0 .. 4095)]
      REP SIZE(16), RECORD[op : OFFSET(0), SIZE(4), addr : OFFSET(4), SIZE(12)];
   PROC p(VAR x : INT);
      x := 1;
   END PROC p;
   VAR w : word;
   p(w.op);
END CAPSULE main;
