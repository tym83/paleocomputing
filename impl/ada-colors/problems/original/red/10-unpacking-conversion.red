% RED solution to DoD-1 contract test problem 10: Unpacking and Conversion of Data
% Source: RED Rationale, Intermetrics, Inc., March 1979, Appendix B.2.10
%         (packet format figure pb-55example1.jpg; code pb-57example1.jpg).
%         Transcribed from the page images.
%
% PURPOSE: An exercise to process a packed binary message header.
%
% PROBLEM: A packed binary message packet has been received and placed in a
% buffer by the line handler. The program must determine the classification,
% precedence and destination of the packet, reorder these data and place them
% in a queue entry for later processing by another program.
%
% ASSUMPTIONS: An 8-bit machine. The buffer is assigned from a buffer pool;
% its exact location is supplied to the program when it is invoked. The
% packet may be up to 256 bytes long. Queue entries are obtained from a common
% pool by calling the routine 'GET-A-QUEUE' (assume an infinite supply). A
% packet is passed to a program prior to this routine's termination.
%
% Packet format (figure pb-55example1.jpg, as printed):
%   BYTE 0 - BITS 0-2 : CLASSIFICATION  0 TOP-SECRET, 1 SECRET,
%                       2 CONFIDENTIAL, 3 UNCLASS, ALL OTHERS UNKNOWN
%            BITS 3-4 : PRECEDENCE      0 ROUTINE, 1 PRIORITY, 2 FLASH,
%                       4 UNKNOWN  (sic: "4" in a 2-bit field)
%            BITS 5-7   AND
%   BYTE 1 - BITS 0-7 : ADDRESSEE
%   BYTE 2 - BITS 0-7 : PACKET LENGTH IN BYTES
% Queue entry format ("5 QUEUE ENTRY FORMAT"):
%   BYTE 0       CLASSIFICATION, ASCII characters: T top-secret, S secret,
%                C confidential, U unclassified, X unknown
%   BYTE 1       PRECEDENCE: F flash, P priority, R routine, X unknown
%   BYTE 2 AND 3 ADDRESSEE (right justified, not converted)
%   BYTE 4       PACKET-LENGTH
%   BYTE 5       PACKET NUMBER
% ---------------------------------------------------------------------------

CAPSULE data_conversion EXPORTS packet, queue_entry, message_handler;

EXPOSE bytes FROM configuration;

TYPE packet(packet_length: INT(0..255)):
   RECORD[classification: ENUM['top_secret, 'secret, 'confidential,
                               'unclassified, 'x4, 'x5,'x6, 'x7],
              precedence: ENUM['routine, 'priority, 'flash, 'unknown],
               addressee: INT(0..2047),
                 message: ARRAY INT(1..(packet_length-3)) OF ASCII]
   REP SIZE(packet_length*BYTES), ALIGN(1*BYTES),
   RECORD[classification: SIZE(3),
              precedence: SIZE(2),
               addressee: SIZE(1*BYTES+3),
           packet_length: SIZE(1*BYTES),
                 message: SIZE((packet_length-3)*BYTES),
                     ARRAY NOBOUNDS OF (SIZE(8))];

% Pictorial representation
%    BIT
%    [--0--][--1--][--2--][--3--][--4--][--5--][--6--][--7--]
%BYTE
%  0 [---packet_class----][-packet_prec][----packet_addr-----
%  1 ---... packet_addr (cont'd) ...                      ---]
%  2 [--- ... length ...                                  ---]
%  3 [--- ... packet_msg(1) ...                           ---]
%  .
%  .
%  .
%  n [--- ... packet_msg(n-2) ... n= length-1             ---]

TYPE queue_entry:
   RECORD[classification:  ASCII,
          precedence:      ASCII,
          addressee:       INT(0..2047),
          packet_length:   INT(0..255),
          packet_number:   INT(0..255)]
  REP SIZE(6*BYTES), ALIGN(1*BYTES),
   RECORD[classification: SIZE(1*BYTES),      % right justified
          precedence:     SIZE(1*BYTES),
           addressee:     SIZE(2*BYTES),
      packet_length:  SIZE(1*BYTES),
      packet_number:  SIZE(1*BYTES)];

TYPE ptr_queue_entry: PTR queue_entry;

PRAGMAT SUPPRESS X_INIT; % specification of physical representation is
                         % incompatible with initialization checking bits


PROC message_handler (READONLY pckt: packet, VAR pqe: ptr_queue_entry);

  get_a_queue(pqe);  %Now pqe.ALL is a queue entry

  %Unpack the packet into the queue entry...

  %Classification...
  CASE pckt.classification
    WHEN 'top_secret   => pqe.classification := 'T;
    WHEN 'secret       => pqe.classification := 'S;
    WHEN 'confidential => pqe.classification := 'C;
    WHEN 'unclassified => pqe.classification := 'U;
    ELSE               => pqe.classification := 'X;
  END CASE;

  %Precedence...
  CASE pckt.precedence
    WHEN 'routine  => pqe.precedence := 'R;
    WHEN 'priority => pqe.precedence := 'P;
    WHEN 'flash    => pqe.precedence := 'F;
    WHEN 'unknown  => pqe.precedence := 'X;
  END CASE;

  %Addressee...
  pqe.addressee := pckt.addressee;

  %Packet length...
  pqe.packet_length := pckt.packet_length;

  %Packet number...
  pqe.packet_number := addr(pckt);

  END PROC message_handler;

END CAPSULE data_conversion;
