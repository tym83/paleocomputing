# Changes that make GREEN contract problem 6 (1979) translate.
#
# RESULT_AREA is printed without a type (the listing leaves it schematic); here
# it counts the elements B has processed
s/^   RESULT_AREA:  -- working area filled by B and read by C/   RESULT_AREA : INTEGER := 0;  -- working area filled by B and read by C/
# the package prints, so it names TEXT_IO in its visibility list
s/^package body BUFFERS is$/restricted(TEXT_IO) package body BUFFERS is\
   use TEXT_IO;/
# READ is "separate" and its subunit is not given: it reads one character of
# the environment (problems/run/green/06-main.grn has the source); the library
# routine is played by a body that takes a millisecond per character
s/^   procedure READ(C : in out ITEM) is separate;/   READS : INTEGER := 0;\
   procedure READ(C : in out ITEM) is\
   begin\
      delay 0.001 * SECONDS;\
      READS := READS + 1;\
      C := ITEM(CHARACTER'VAL(READS mod 26 + 65));\
   end READ;/
# B leaves its loop with "exit when" inside the body of accept NEXT_BUFFER,
# and RM79 5.7 forbids an exit that leaves an accept statement: the count is
# saved and the loop is left after the rendezvous
s/^   task body B is$/&\
      LAST : BOOLEAN := FALSE;/
s/^            -- compute values using BUF, and store$/            RESULT_AREA := RESULT_AREA + N_ELTS;\
            PUT("B got a buffer of"); PUT(N_ELTS, 5); PUT(" items, total"); PUT(RESULT_AREA, 6);\
            PUT(NEWLINE);/
s/^            exit when N_ELTS < MAX_SIZE;$/            LAST := N_ELTS < MAX_SIZE;/
s/^         end NEXT_BUFFER;$/&\
         exit when LAST;/
# C's "some actions" become a periodic look at RESULT_AREA; without a delay the
# loop would never let another task run
s/^         -- perform some actions, using contents of RESULT_AREA$/         delay 1.0 * SECONDS;\
         PUT("C sees"); PUT(RESULT_AREA, 6); PUT(NEWLINE);/
# D's interrupt address is "..." and its other controls are "...": the
# interrupt entry stays an ordinary entry, called by the operator in
# problems/run/green/06-main.grn, and the other alternative is a long delay
s/^      for INTERRUPT use at \.\.\.;$/      -- for INTERRUPT use at ...;  (the address is not given)/
s/^         or -- accept other controls, or do other things$/         or delay 100.0 * SECONDS;/
/^            \.\.\.$/d
# the interrupt entry is local to D's body and only hardware calls it; here the
# operator is a program, so the entry moves to D's visible part, and the main
# program reads the count of items through a function
s/^   task D;$/   task D is\
      entry INTERRUPT;\
   end;\
   function ITEMS_READ return INTEGER;/
/^      entry INTERRUPT;$/d
s/^begin -- initialization of BUFFERS$/   function ITEMS_READ return INTEGER is\
   begin\
      return READS;\
   end ITEMS_READ;\
\
&/
