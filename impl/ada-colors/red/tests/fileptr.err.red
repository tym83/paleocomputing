CAPSULE main EXPORTS NONE;
   TYPE cell : PTR RECORD[v : INT];
   VAR f : FILE[RECORD[c : cell, n : INT]]('SEQ, 'OUTPUT);
END CAPSULE main;
