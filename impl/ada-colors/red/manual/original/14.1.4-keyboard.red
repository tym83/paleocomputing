% RED Reference Manual, March 1979, section 14.1.4: interrupts.
% Transcribed from the printed example as it stands, errors included.
% -----
VAR m : MAILBOX [ASCII] (5) LOCATION (INTERRUPT 16);

TASK keyboard_handler IMPORTS m;
   VAR char : ASCII;
   ...
   RECEIVE (m,char); % Get next interrupt
   ...
END TASK keyboard_handler;
