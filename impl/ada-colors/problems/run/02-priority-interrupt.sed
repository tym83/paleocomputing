# Changes that make RED contract problem 2 (1979) translate.
# the interrupts come from simulated hardware: the interrupt mailboxes are
# ordinary ones (LOCATION (INTERRUPT n) is dropped; 16, 20, 24 and 28 are the
# vector 20(8)-34(8) rightly converted), and raise_interrupt plays the
# hardware posting an interrupt of a level
s/^CAPSULE interrupt_handler EXPORTS NONE;/CAPSULE interrupt_handler EXPORTS raise_interrupt;/
s/ LOCATION (INTERRUPT [0-9]*);/;/
# the counts are incremented but never initialized (X_INIT in RED)
s/^VAR count0,count1,count2,count3: INT;/VAR count0,count1,count2,count3: INT := 0;/
# the bodies "just increment a variable"; they also say so, to be seen
s/^        count\([0-3]\) := count[0-3] + 1;/&\
        WRITELN("[" \& CNVT[STRING[ASCII]](TIME) \& " ms] level \1 handles its interrupt " \& CNVT[STRING[ASCII]](count\1));/
s/^  % Initiate tasks upon exposure of capsule./PROC raise_interrupt (level: INT(0..3)) IMPORTS m0, m1, m2, m3;\
  CASE level\
    WHEN 0 => SEND (m0, TRUE);\
    WHEN 1 => SEND (m1, TRUE);\
    WHEN 2 => SEND (m2, TRUE);\
    WHEN 3 => SEND (m3, TRUE);\
  END CASE;\
  END PROC raise_interrupt;\
\
&/
