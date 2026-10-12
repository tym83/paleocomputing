% RED solution to DoD-1 contract test problem 1: Polled Asynchronous Interrupt
% Source: RED Rationale, Intermetrics, March 1979, Appendix B.2.1
%         (image pb-5example1.jpg, iment.com transcription)
%
% PURPOSE: program a device and interrupt handler relying primarily upon
% polling techniques.
% PROBLEM: a channel handler expects input by the function call
% 'read(DEVICE-NUMBER)' and returns a character from that device's input
% stream. Minimum delay between a character entering the circular buffer
% and being available to 'read'. No input shall be lost.
% ASSUMPTIONS: 16-bit byte-addressable machine; at least 10 asynchronous
% keyboards sharing I/O channels; hard-wired circular buffer of 128 bytes
% at byte location 500(8), with a headpointer (most recent input,
% maintained by the I/O channel) and a tailpointer (tail of the queue,
% maintained by the handler). Head /= tail means input occurred. An
% interrupt occurs only when the head pointer reaches the entry just below
% the tail (buffer about to overflow). Channel 0 interrupt location is
% 440(8). Context save/restore is automatic, no priority levels, no
% interrupt clearing. Each input is two bytes: byte 0 = ASCII character,
% byte 1 = device id 0-9.
% GUIDELINES: as hardware-independent as possible; clearly separate the
% hardware-dependent interface.
% ----------------------------------------------------------------------

CAPSULE channel_handler EXPORTS read;

% specification of the hardware buffers
EXPOSE bytes FROM Configuration;
CONST hw_buff_size := 64;
CONST hw_buff_start := OCTAL ("440");
CONST hw_buff_end   := hw_buff_start + hw_buff_size * 2;   % bytes

TYPE hw_buff : ARRAY int (0..hw_buff_size) OF mem
        REP SIZE (hw_buff_size * 2 * bytes),
            ARRAY NORMAL OF (SIZE (2*bytes));

TYPE mem:  RECORD [char: character, dev: device]
        REP SIZE (2*bytes), ALIGN (2*bytes),
            RECORD [char: SIZE (1*bytes),
                    dev:  SIZE (1*bytes) ];
        % allow interpretation of memory bytes as either characters
        % or device numbers.  Hardware stores a pair for each
        % character received.

VAR hw_buffer:  hw_buff LOCATION (OCTAL ("500"));
VAR headpointer: INT (hw_buff_start .. hw_buff_end)
                                    LOCATION (OCTAL ("474"));
VAR tailpointer: INT (hw_buff_start .. hw_buff_end)
                                    LOCATION (OCTAL("476"));

VAR d: DATA_LOCK;

CONST numdevices := 10;
ABBREV device:  INT(1..numdevices);
% We assume that we have 10 input devices.

ABBREV character: ASCII;
% Input is in terms of CHARACTERS.

CONST buffersize := 80;
ABBREV buffer: MAILBOX[CHARACTER](buffersize);
% The [software] buffer for each of the input devices is implemented
% as a RED MAILBOX.  This provides a simple and
% efficient realization of the queueing method.


VAR buffers: ARRAY DEVICE OF BUFFER;

% ACTivation variable for the interrupt_handler TASK created below.
VAR a:ACT;

PROC transfer_char (OUT dev: device, OUT didit: Bool)
        IMPORTS buffers, tailpointer;
    VAR ok:BOOL;
    VAR char: character;

    % first pick up a character from the hardware buffer, if one
    % insure, however, only one process looks at a time
    REGION d DO
        IF headpointer /= tailpointer THEN
            CONST index := (tailpointer - hw_buff_start) DIV 2;
            char := hw_buffer (index).char;
            dev :=  hw_buffer (index).dev;
            tailpointer := tailpointer + 2;
            IF tailpointer >= hw_buff_end THEN
                tailpointer := hw_buff_start;
                END IF;
            didit := TRUE;
        ELSE
            didit := FALSE;     % didn't pick up anything
        END IF;
     END REGION;
        % critical portion is now over
        % if a character is there, now it must be parceled
        % out the proper keyboard buffer
    IF didit THEN
        COND_SEND (buffers(dev), char, ok);
        IF NOT ok THEN
            % Here we have lost a character since the user "typed
            % ahead" too much.  We can print out some overflow
            % message, such as the TOPS10 control-G.
        END IF;
    END IF;
    END PROC transfer_chars;

PROC search_for_device(dev:DEVICE);
    VAR this_dev: DEVICE;
    VAR got_one:  BOOL;

  search  WHILE True REPEAT
        transfer_char (this_dev, got_one);
        IF NOT got_one THEN EXIT search;  END IF;
        IF this_dev = dev THEN EXIT search;  END IF;
    END REPEAT search;

    END PROC search_for_device;

TASK interrupt_handler;

   % Interrupt handling in RED uses MAILBOXes.  This MAILBOX
   % is set have a message put into it when the hardwired buffer is full.
   VAR m:MAILBOX [BOOL](5) LOCATION (INTERRUPT 440);

   WHILE TRUE REPEAT
        VAR i, b:BOOL;
        VAR dev: device;

        RECEIVE (m, i);         % This blocks this task until an interrupt
                                % received.
        transfer_char (dev, b);     % transfer out a character
                                % one could easily distribute the whole
                                % buffer at this point...
   END REPEAT;
   END TASK interrupt_handler;

%
% ------------  READ  :  called by user to get a character
%

FUNC read (dev:DEVICE) => CHARACTER IMPORTS buffers;
   VAR char:CHARACTER;
   % Check and see if the mailbox is empty.  If it is, call the procedure
   % interrupt_handler that reads characters from the hard_wired buffer.

   IF FULL_SLOTS (buffers(dev)) = 0 THEN search_for_device (dev); END IF;

   WHILE TRUE REPEAT
     WAIT
        WHEN RECEIVE (buffers(dev), char) => RETURN(char);
        % The delay here implements the idea of polling.  Each
        % time we do a delay, we search the hardware buffer
        % for the input from the termimal in question.
        WHEN DELAY (time_out) => search_for_device(dev);
     END WAIT;
   END REPEAT;

   END FUNC read;


% When exposed, set up the interrupt-level task.

CREATE interrupt_handler NAMED a;

END CAPSULE channel_handler;
