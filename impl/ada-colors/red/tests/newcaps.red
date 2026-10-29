% capsules invoked as NEW (8.1): each invocation elaborates the body again,
% with its own variables, and RENAMING keeps two of them apart
CAPSULE counter (start : INT, VAR total : INT) EXPORTS bump, value;
   VAR n : INT := start;
   PROC bump IMPORTS n, total;
      n := n + 1;
      total := total + 1;
   END PROC bump;
   FUNC value => INT IMPORTS n;
      RETURN n;
   END FUNC value;
END CAPSULE counter;

CAPSULE main EXPORTS NONE;
   VAR grand : INT := 0;
   EXPOSE bump, value FROM NEW EXTERNAL counter (10, grand) RENAMING bump TO bump_a, value TO value_a;
   EXPOSE ALL FROM NEW EXTERNAL counter (100, grand) RENAMING bump TO bump_b, value TO value_b;
   bump_a;
   bump_a;
   bump_b;
   WRITELN("a = " & CNVT[STRING[ASCII]](value_a) & ", b = " & CNVT[STRING[ASCII]](value_b)
           & ", grand total = " & CNVT[STRING[ASCII]](grand));
END CAPSULE main;
