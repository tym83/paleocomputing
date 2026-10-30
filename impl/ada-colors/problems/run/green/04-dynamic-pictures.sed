# Changes that make GREEN contract problem 4 (1979) translate.
#
# GRID is a variable in the visible part of task DISPLAY, which RM79 9.1 does
# not allow; nothing uses it
/^   GRID              : array(0 \.\. 1023, 0 \.\. 1023) of BOOLEAN;$/d
# an integer literal does not multiply SECONDS, of the floating-point type TIME
s/^   BLINKING_DURATION : constant TIME := 5\*SECONDS;/   BLINKING_DURATION : constant TIME := 5.0*SECONDS;/
# the interrupt addresses of the START and RESET buttons are "..."; the test
# program presses the buttons by calling the entries
s/^   for START use at \.\.\.; -- interrupt for start$/   -- for START use at ...;  (the address is not given)/
s/^   for RESET use at \.\.\.; -- interrupt for reset$/   -- for RESET use at ...;  (the address is not given)/
# JOYSTICK is a separate library unit, but its family range SQUARE .. CIRCLE
# and the types OBJECT_ID and SPEED are declared in DISPLAY, which it neither
# names in a visibility restriction nor uses (RM79 8.3, 10.1); it also reads the sticks
# through STICKS (problems/run/green/04-units.grn)
s/^task JOYSTICK(SQUARE \.\. CIRCLE) is$/restricted(DISPLAY, STICKS)\
task JOYSTICK(DISPLAY.SQUARE .. DISPLAY.CIRCLE) is\
   use DISPLAY;/
s/^task body JOYSTICK is$/&\
   use DISPLAY;/
# the device numbers and the speed unit are "..."
s/^   DEVICE   : array(SQUARE \.\. CIRCLE) of INTEGER := \.\.\.;$/   DEVICE   : array(SQUARE .. CIRCLE) of INTEGER := (1, 2);/
s/^   SPEED_UNIT : constant INTEGER := \.\.\.;$/   SPEED_UNIT : constant INTEGER := 1;/
# the registers are at an address and SEND_CONTROL asks the device to fill
# them; here STICKS.SAMPLE fills them
s/^   for REGISTER use at \.\.\.;   -- address of device registers$/   -- for REGISTER use at ...;  (the address is not given)/
s/^         SEND_CONTROL(DEVICE(ME), REGISTER(ME)'ADDRESS);$/         STICKS.SAMPLE(DEVICE(ME), REGISTER(ME).LEFT_SPEED, REGISTER(ME).RIGHT_SPEED,\
                       REGISTER(ME).FORWARD_SPEED, REGISTER(ME).REVERSE_SPEED);/
# DRAW_OBJECT is "separate" and its subunit is not given: it prints where an
# object is drawn, every fifteenth time
s/^   SX, SY       : SPEED;$/&\
   DRAWN        : array(SQUARE .. CIRCLE) of INTEGER := (0, 0);/
s/^   procedure DRAW_OBJECT(WHICH : OBJECT_ID) is separate;$/   procedure DRAW_OBJECT(WHICH : OBJECT_ID) is\
   begin\
      DRAWN(WHICH) := DRAWN(WHICH) + 1;\
      if DRAWN(WHICH) mod 15 = 1 then\
         PUT(INTEGER(SYSTEM'CLOCK \/ SECONDS * 1000.0), 6); PUT(" ms  ");\
         if WHICH = SQUARE then PUT("square"); else PUT("circle"); end if;\
         PUT(" at"); PUT(OB(WHICH).X, 5); PUT(","); PUT(OB(WHICH).Y, 5);\
         if OB(WHICH).BLINK then PUT("  blinking"); end if;\
         PUT(NEWLINE);\
      end if;\
   end DRAW_OBJECT;/
# The body of DISPLAY calls JOYSTICK(I).READ: it names JOYSTICK in its
# visibility list (RM79 8.3, 10.1), as well as TEXT_IO for the trace
s/^task body DISPLAY is$/restricted(TEXT_IO, JOYSTICK) task body DISPLAY is\
   use TEXT_IO;/
# An object stops at the border only if it lands exactly on 0 or 1023; at
# speed 20 the square goes from 1020 to 1040, outside POSITION, and the
# RANGE_ERROR ends task DISPLAY (run as printed, the second START then raises
# TASKING_ERROR in the caller). The test is made on the next position
s/^                  if   (OB(I)\.X = 0    and SX < 0)$/                  if   (OB(I).X + SPEED_UNIT*SX < 0)/
s/^                     or(OB(I)\.X = 1023 and SX > 0)$/                     or(OB(I).X + SPEED_UNIT*SX > 1023)/
s/^                     or(OB(I)\.Y = 0    and SY < 0)$/                     or(OB(I).Y + SPEED_UNIT*SY < 0)/
s/^                     or(OB(I)\.Y = 1023 and SY > 0) then$/                     or(OB(I).Y + SPEED_UNIT*SY > 1023) then/
# BLINK_TIME counts down from 5.0 seconds by 0.033 seconds, a floating-point
# value that never equals 0.0 exactly: blinking never ends, the objects are
# never reset, START_BLINK never starts another blink, and the second START is
# never accepted. The tests use <=
s/^      if BLINK_TIME = 0\.0 then$/      if BLINK_TIME <= 0.0 then/
s/^               if BLINK_TIME = 0\.0 then$/               if BLINK_TIME <= 0.0 then/
