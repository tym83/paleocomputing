
% Two objects head for each other and collide at 3 s: they blink, and two
% seconds later they are back home. START sends them off again with new
% joystick settings, and RESET at 9.5 s brings them home before they meet.
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL graphics;

   TASK screen;
      simulate_objects;
   END TASK screen;

   TASK operator;
      DELAY_UNTIL(7000);
      set_joy_stick('o1, 2, 3, 3, 1);
      set_joy_stick('o2, 1, 3, 3, 1);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] operator: START");
      press_start;
      DELAY_UNTIL(9500);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] operator: RESET");
      press_reset;
   END TASK operator;

   VAR s, op : ACT;
   set_joy_stick('o1, 2, 5, 3, 1);
   set_joy_stick('o2, 1, 5, 3, 1);
   SET_PRIORITY(ME, 10);
   CREATE screen NAMED s;
   SET_PRIORITY(s, 10);
   CREATE operator NAMED op;
   DELAY_UNTIL(11000);
   HALT(0);
END CAPSULE main;
