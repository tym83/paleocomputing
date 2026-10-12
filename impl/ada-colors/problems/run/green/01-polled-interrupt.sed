# Changes that make GREEN contract problem 1 (1979) translate.
#
# The ring buffer and its HEAD and TAIL live at fixed addresses, written by
# the I/O channel; representation specifications are read and ignored here, so
# the "memory" they name moves out of POLLING to where the simulated channel
# (problems/run/green/01-channel.grn) can reach it, with a flag for the
# keyboard enable line that ENABLE and DISABLE drive
/^      subtype INDEX is INTEGER range 0 \.\. 63;$/d
/^      BUFFER: array (INDEX'FIRST \.\. INDEX'LAST) of ITEM;$/d
/^      HEAD, TAIL: INTEGER range 8#500 \.\. 8#677;$/d
/^         -- initialized to 8#500 by I\/O channel$/d
s/^      end record;$/&\
\
   -- the memory the channel writes (for BUFFER use at 8#500)\
   subtype INDEX is INTEGER range 0 .. 63;\
   BUFFER: array (INDEX'FIRST .. INDEX'LAST) of ITEM;\
   HEAD, TAIL: INTEGER range 8#500 .. 8#677;\
      -- initialized to 8#500 by I\/O channel\
   KEYBOARD_ENABLED : BOOLEAN := TRUE;/
# ENABLE and DISABLE are "separate" and their subunits are not given
s/^      procedure ENABLE  is separate; -- restore keyboard input$/      procedure ENABLE is  -- restore keyboard input\
      begin\
         KEYBOARD_ENABLED := TRUE;\
         PUT("keyboards enabled"); PUT(NEWLINE);\
      end ENABLE;/
s/^      procedure DISABLE is separate; -- inhibits input from keyboard$/      procedure DISABLE is  -- inhibits input from keyboard\
      begin\
         KEYBOARD_ENABLED := FALSE;\
      end DISABLE;/
# The addresses of HEAD and TAIL are comments that swallow the semicolons
s/^      for HEAD use at  -- head address;$/      -- for HEAD use at ...;  (the address is not given)/
s/^      for TAIL use at  -- tail address;$/      -- for TAIL use at ...;  (the address is not given)/
# The interrupt entry is local to POLLING's body and only hardware calls it;
# the simulated channel is a task, so the entry moves to POLLING's visible part
/^      entry INTERRUPT;$/d
/^   task POLLING;$/r problems/run/green/01-channel.grn
s/^   task POLLING;$/   task POLLING is\
      entry INTERRUPT;\
   end;/
s/^   initiate POLLING, LOGICAL_KEYBOARD(DEVICE'FIRST \.\. DEVICE'LAST);$/   initiate POLLING, LOGICAL_KEYBOARD(DEVICE'FIRST .. DEVICE'LAST), CHANNEL;/
# "delay 0" gives an integer where the delay takes the floating-point type
# TIME (RM79 9.6)
s/^               delay 0;  -- effect of a guarded else$/               delay 0.0;  -- effect of a guarded else/
# OK_TO_READ starts TRUE, so a READ is accepted before any key was struck and
# returns LAST_CHARACTER, which was never set; and the first key is then the
# one that DEPOSIT keeps only because that READ cleared the flag. Run without
# this change, each reader first gets a character nobody typed
s/^      OK_TO_READ    : BOOLEAN := TRUE;$/      OK_TO_READ    : BOOLEAN := FALSE;/
# the program prints, so the body names TEXT_IO; the "other actions" of the
# overflow interrupt and the ENABLE given above report themselves
s/^task body CHANNEL_HANDLER is$/restricted(TEXT_IO) task body CHANNEL_HANDLER is\
   use TEXT_IO;/
s/^               -- Other actions may be taken$/               PUT("ring almost full: interrupt, keyboards disabled"); PUT(NEWLINE);/
