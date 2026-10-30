CAPSULE main EXPORTS NONE;
   VAR cnt : INT := 0;
   FUNC f(x : INT) => INT IMPORTS cnt;
      cnt := cnt + 1; RETURN x;
   END FUNC f;
   WRITELN(CNVT[STRING[ASCII]](f(1)) & " normal func imports in main capsule + invoked inside it: accepted");
END CAPSULE main;
