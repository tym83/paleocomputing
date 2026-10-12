# Changes that make GREEN contract problem 2 (1979) translate.
#
# The interrupt vectors at 20..34 (octal) are hardware; representation
# specifications are read and ignored, and the interrupts are raised by the
# test program through SIGNAL, added to the package together with SHUT_DOWN,
# which stops the tasks at the end
s/^package INTERRUPT_HANDLING;$/package INTERRUPT_HANDLING is\
   procedure SIGNAL(L : INTEGER);  -- the hardware raising interrupt L\
   procedure SHUT_DOWN;\
end INTERRUPT_HANDLING;/
s/^\(      for INT_[0-3] use at 8#[0-9]*;\)$/   -- \1/
s/^begin -- initialization of INTERRUPT_HANDLING$/   procedure SIGNAL(L : INTEGER) is\
   begin\
      case L of\
         when 0 => DISPATCH.INT_0;\
         when 1 => DISPATCH.INT_1;\
         when 2 => DISPATCH.INT_2;\
         when others => DISPATCH.INT_3;\
      end case;\
   end SIGNAL;\
\
   procedure SHUT_DOWN is\
   begin\
      abort DISPATCH, HANDLER(LEVEL'FIRST .. LEVEL'LAST);\
   end SHUT_DOWN;\
\
&/
