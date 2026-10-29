# Fill-ins for the elisions of the interrupt example of 14.1.4: the handler
# echoes what is typed on the teletype, with the time, until a full stop
/^   VAR char/,/RECEIVE/s/^   \.\.\.$/   loop WHILE TRUE REPEAT/
/RECEIVE/,/^END TASK/s/^   \.\.\.$/   WRITE(SYS_OUT, char); WRITELN(" at " \& CNVT[STRING[ASCII]](TIME));\
   IF char = 'PERIOD THEN EXIT loop; END IF;\
   END REPEAT loop;/
