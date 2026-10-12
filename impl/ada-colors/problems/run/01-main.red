
% Four keyboards share the channel. Three type a word each while their
% readers wait; the fourth types 70 characters at once, a burst bigger than
% the hard-wired buffer, and its reader comes only at 300 ms. Nothing is lost:
% the overflow interrupt moves characters into the keyboard's mailbox.
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL channel_handler;

   TASK reader (CONST k, n, start: INT);
      VAR s: STRING[ASCII](n);
      DELAY_UNTIL (start);
      FOR i: INT(1..n) REPEAT
         s(i) := read(k);
      END REPEAT;
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] keyboard " & CNVT[STRING[ASCII]](k) & ": " & s);
   END TASK reader;

   VAR k0, k1, k2, k3, r0, r1, r2, r3: ACT;
   CREATE keyboard ("hello", 0, 0, 7) NAMED k0;
   CREATE keyboard ("polling", 1, 3, 5) NAMED k1;
   CREATE keyboard ("red", 2, 20, 11) NAMED k2;
   CREATE keyboard ("abcdefghijABCDEFGHIJ0123456789abcdefghijABCDEFGHIJ0123456789abcdefghij", 3, 100, 1) NAMED k3;
   CREATE reader (0, 5, 0) NAMED r0;
   CREATE reader (1, 7, 0) NAMED r1;
   CREATE reader (2, 3, 0) NAMED r2;
   CREATE reader (3, 70, 300) NAMED r3;
   DELAY_UNTIL_INACTIVE (r3);
   HALT (0);
END CAPSULE main;
