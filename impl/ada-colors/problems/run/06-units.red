% The units problem 6 assumes to be present: the card reader (read and its
% completion messages on mr) and the processing step. The output of task c is
% added to the original at the place of its comment, see 06-process-control.sed.
CAPSULE units EXPORTS read, process, cards;
   VAR cards : INT := 0;
   PROC read(VAR b : STRING[ASCII]) IMPORTS cards;
      VAR s : STRING[ASCII](80) := "card ...                                                                        ";
      cards := cards + 1;
      s(6 .. 8) := CNVT[STRING[ASCII]](100 + cards);
      b := s;
   END PROC read;
   FUNC process(CONST b : STRING[ASCII]) => STRING[ASCII];
      VAR r : STRING[ASCII](b.LEN) := b;
      r(1 .. 4) := "CARD";
      RETURN r;
   END FUNC process;
END CAPSULE units;
