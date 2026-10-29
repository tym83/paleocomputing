% RED Reference Manual, March 1979, section 14.4.1: how monitors can be used.
% Transcribed from the printed example as it stands, errors included.
% -----
CAPSULE line_buffer EXPORTS send, receive;
   VAR lock : MONITOR_LOCK;
   VAR contents : line;
   VAR full : BOOL;
   VAR sender, receiver : MONITOR_QUEUE (lock);

   PROC receive (OUT text : line) IMPORTS ALL;
      REGION lock DO
         IF NOT full THEN
            DELAY (receiver);
         END IF;
         text := contents;
         full := FALSE;
         CONTINUE (sender);
      END REGION;
   END PROC receive;

   PROC send (text : line) IMPORTS ALL;
      REGION lock DO
         IF full THEN
            DELAY (sender);
         END IF;
         contents := text;
         full := TRUE;
         CONTINUE (receiver);
      END REGION;
   END PROC send;

END CAPSULE line_buffer;
