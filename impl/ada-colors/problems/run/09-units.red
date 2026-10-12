% The link processes L0..L9 that problem 9 assumes to be present: each sends one
% packet over its asynchronous line. A line takes a time of its own per packet.
CAPSULE links EXPORTS L0, L1, L2, L3, L4, L5, L6, L7, L8, L9;
   PROC line(CONST n : INT, READONLY p : STRING[ASCII]);
      DELAY(n + 1);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] L" & CNVT[STRING[ASCII]](n) & " sent " & p(1 .. 10));
   END PROC line;
   PROC L0(READONLY p : STRING[ASCII]); line(0, p); END PROC L0;
   PROC L1(READONLY p : STRING[ASCII]); line(1, p); END PROC L1;
   PROC L2(READONLY p : STRING[ASCII]); line(2, p); END PROC L2;
   PROC L3(READONLY p : STRING[ASCII]); line(3, p); END PROC L3;
   PROC L4(READONLY p : STRING[ASCII]); line(4, p); END PROC L4;
   PROC L5(READONLY p : STRING[ASCII]); line(5, p); END PROC L5;
   PROC L6(READONLY p : STRING[ASCII]); line(6, p); END PROC L6;
   PROC L7(READONLY p : STRING[ASCII]); line(7, p); END PROC L7;
   PROC L8(READONLY p : STRING[ASCII]); line(8, p); END PROC L8;
   PROC L9(READONLY p : STRING[ASCII]); line(9, p); END PROC L9;
END CAPSULE links;
