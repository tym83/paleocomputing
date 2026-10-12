
% run sampleprocess at 5 ms, sampleinterval at 10, 20, 30 ms, and execute[job]
% every 7 ms from 3 ms until it is told to stop at 30 ms
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL scheduler;
   VAR done : MAILBOX[INT(0..0)](1);
   VAR p1, p2, av : ACT;
   CREATE sampleprocess(5) NAMED p1;
   CREATE sampleinterval(10, 10, 3) NAMED p2;
   CREATE execute [job] (3, 7, 10, done) NAMED av;
   DELAY_UNTIL(30);
   SEND(done, 0);
   DELAY_UNTIL_INACTIVE(av);
   DELAY_UNTIL_INACTIVE(p2);
   WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] all scheduled processes are done");
END CAPSULE main;
