% translation units for the library (3.1): PRAG(LIBRARY) keeps each as counter.red and twice.red
PRAG(LIBRARY) CAPSULE counter EXPORTS bump, value;
   VAR n : INT := 0;
   PROC bump IMPORTS n;
      n := n + 1;
   END PROC bump;
   ABNORMAL FUNC value => INT IMPORTS n;
      RETURN n;
   END FUNC value;
END CAPSULE counter;
PRAG(LIBRARY) CAPSULE twice EXPORTS bump2;
   EXPOSE bump FROM EXTERNAL counter;
   PROC bump2;
      bump;
      bump;
   END PROC bump2;
END CAPSULE twice;
