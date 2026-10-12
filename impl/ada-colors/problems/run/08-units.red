% What problem 8 leaves to the reader: the body of a process and a job to run.
CAPSULE jobs EXPORTS body_of_process, job;
   PROC body_of_process;
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] process body");
   END PROC body_of_process;
   TASK job;
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] job runs at priority " & CNVT[STRING[ASCII]](PRIORITY(ME)));
   END TASK job;
END CAPSULE jobs;
