CAPSULE main EXPORTS NONE;
   TYPE word : RECORD[op : INT(0 .. 15), addr : INT(0 .. 4095)]
      REP RECORD[op : SIZE(3), addr : SIZE(12)];
END CAPSULE main;
