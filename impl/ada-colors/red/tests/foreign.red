% foreign code (12.4): a capsule whose deferred units are C functions, here
% those of the C mathematical library the program is linked with
CAPSULE cmath EXPORTS hypot, atan2;
   FUNC hypot(x, y : FLOAT) => FLOAT PRAG(FOREIGN);
   END FUNC hypot;
   FUNC atan2(y, x : FLOAT) => FLOAT PRAG(FOREIGN);
   END FUNC atan2;
END CAPSULE cmath;
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL cmath;
   WRITELN("hypot(3.0, 4.0) = " & CNVT[STRING[ASCII]](hypot(3.0, 4.0)));
   WRITELN("4.0 * atan2(1.0, 1.0) = " & FORMAT(4.0 * atan2(1.0, 1.0), 1, 5));
END CAPSULE main;
