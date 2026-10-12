
% The hardware runs above every handler (priority 255, like level 0, which
% therefore waits its turn). At 10 ms it raises one interrupt on each level,
% lowest level first; at 20 ms a mixed burst. The handlers serve them by
% level, whatever the order of arrival. Enabling and disabling interrupts is
% left to the scheduler; replacing a handler body at run time, which the
% problem asks for, the solution does not offer (it exports nothing).
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL interrupt_handler;

   PROC post(CONST l : INT);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] hardware: interrupt on level " & CNVT[STRING[ASCII]](l));
      raise_interrupt(l);
   END PROC post;

   TASK hardware;
      SET_PRIORITY(ME, 255);
      DELAY_UNTIL(10);
      post(3); post(2); post(1); post(0);
      DELAY_UNTIL(20);
      post(3); post(3); post(2); post(0); post(3); post(2);
   END TASK hardware;

   VAR h : ACT;
   CREATE hardware NAMED h;
   DELAY_UNTIL(30);
   HALT(0);
END CAPSULE main;
