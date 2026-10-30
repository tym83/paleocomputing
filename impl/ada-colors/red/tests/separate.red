% separate translation (3.1, 8.1): counter and twice come from the library
% that translating counter.lib.red made
CAPSULE main EXPORTS NONE;
   EXPOSE bump2 FROM EXTERNAL twice;
   EXPOSE value FROM EXTERNAL counter;
   bump2;
   WRITELN("separately translated: " & CNVT[STRING[ASCII]](value));
END CAPSULE main;
