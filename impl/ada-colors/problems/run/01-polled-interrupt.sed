# Changes that make RED contract problem 1 (1979) translate.
# keyboard (below) plays the ten keyboards and the I/O channel
s/^CAPSULE channel_handler EXPORTS read;/CAPSULE channel_handler EXPORTS read, keyboard;/
# the configuration capsule comes from problems/run/configuration.red
s/^EXPOSE bytes FROM Configuration;/EXPOSE bytes FROM EXTERNAL configuration;/
# RED has no OCTAL function and no octal literals; and 440(8) is the interrupt
# location, while the buffer is at 500(8) = 320
s/^CONST hw_buff_start := OCTAL ("440");/CONST hw_buff_start := 320;/
# 0..hw_buff_size is one entry more than the 64 of the hard-wired buffer
s/^TYPE hw_buff : ARRAY int (0..hw_buff_size) OF mem/TYPE hw_buff : ARRAY int (0..hw_buff_size-1) OF mem/
# the hardware is simulated: the buffer and its pointers are ordinary
# variables that keyboard writes as the channel would, and both pointers
# start at the beginning of the buffer
s/^VAR hw_buffer:  hw_buff LOCATION (OCTAL ("500"));/VAR hw_buffer:  hw_buff;/
s/LOCATION (OCTAL ("474"));/:= hw_buff_start;/
s/LOCATION (OCTAL("476"));/:= hw_buff_start;/
# the device id in the buffer is 0-9, so DEVICE cannot start at 1
s/^ABBREV device:  INT(1..numdevices);/ABBREV device:  INT(0..numdevices-1);/
# transfer_char uses headpointer, hw_buffer and the lock d without importing
# them, and ends under another name
s/^        IMPORTS buffers, tailpointer;/        IMPORTS buffers, tailpointer, headpointer, hw_buffer, d;/
s/^    END PROC transfer_chars;/    END PROC transfer_char;/
# the interrupt mailbox (LOCATION (INTERRUPT 440)) is one the channel can
# reach: it moves out of the task, and keyboard sends to it when the head
# pointer reaches the entry just below the tail
s/^   VAR m:MAILBOX \[BOOL\](5) LOCATION (INTERRUPT 440);//
s/^TASK interrupt_handler;/VAR m: MAILBOX [BOOL](5);\
\
PROC key (c: character, k: device) IMPORTS hw_buffer, headpointer, tailpointer, m;\
    CONST index := (headpointer - hw_buff_start) DIV 2;\
    VAR next: INT;\
    hw_buffer(index).char := c;\
    hw_buffer(index).dev := k;\
    headpointer := headpointer + 2;\
    IF headpointer >= hw_buff_end THEN headpointer := hw_buff_start; END IF;\
    IF headpointer = tailpointer THEN\
        WRITELN("channel: the hard-wired buffer overflowed, input lost");\
    END IF;\
    next := headpointer + 2;\
    IF next >= hw_buff_end THEN next := hw_buff_start; END IF;\
    IF next = tailpointer THEN SEND (m, TRUE); END IF;\
    END PROC key;\
\
TASK keyboard (CONST s: STRING[ASCII], CONST k: device, CONST start, gap: INT);\
    DELAY_UNTIL (start);\
    FOR i: INT(1..s.LEN) REPEAT key (s(i), k); DELAY (gap); END REPEAT;\
    END TASK keyboard;\
\
TASK interrupt_handler IMPORTS m;/
# time_out, the polling period of read, is never declared
s/^FUNC read (dev:DEVICE) => CHARACTER IMPORTS buffers;/CONST time_out := 50;\
\
&/
