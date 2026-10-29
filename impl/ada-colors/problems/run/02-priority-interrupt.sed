# Changes that make RED contract problem 2 (1979) translate.
# the interrupts come from simulated hardware: raise_interrupt plays the
# hardware and raises the interrupt of a level through the interrupt
# controller, device 2 of LOW_IO (16, 20, 24 and 28 are the vector
# 20(8)-34(8) rightly converted)
s/^CAPSULE interrupt_handler EXPORTS NONE;/CAPSULE interrupt_handler EXPORTS raise_interrupt;/
# the counts are incremented but never initialized (X_INIT in RED)
s/^VAR count0,count1,count2,count3: INT;/VAR count0,count1,count2,count3: INT := 0;/
# the bodies "just increment a variable"; they also say so, to be seen
s/^        count\([0-3]\) := count[0-3] + 1;/&\
        WRITELN("[" \& CNVT[STRING[ASCII]](TIME) \& " ms] level \1 handles its interrupt " \& CNVT[STRING[ASCII]](count\1));/
s/^  % Initiate tasks upon exposure of capsule./PROC raise_interrupt (level: INT(0..3));\
  VAR data : INT := 1;\
  LOW_IO (2, 16 + 4 * level, data);\
  END PROC raise_interrupt;\
\
&/
