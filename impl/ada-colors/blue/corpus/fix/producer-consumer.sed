# the program prints, so it uses the implementation's TERMINAL segment
s/^MAIN SEGMENT PRODUCER_CONSUMER;/MAIN SEGMENT PRODUCER_CONSUMER USES (TERMINAL);/
# BUF is passed inout (4.3.2): CLEAR(# BUF)
s/CLEAR(BUF);/CLEAR(# BUF);/
# a misprint: BUFF for BUF
s/APPEND (ITEM # BUFF);/APPEND (ITEM # BUF);/
# semicolons missing after two assignments
s/B\.LASTPOINTER := 0$/B.LASTPOINTER := 0;/
s/B\.FIRSTPOINTER := 0$/B.FIRSTPOINTER := 0;/
# the elided code: the producer makes five items, the consumer prints them; an
# integer becomes a bitstring only in a machine-dependent part (3.6.6.1)
/PATH PRODUCER/,/END PATH PRODUCER/{
/VAR ITEM/{
n
c\
                  LOOP FOR I IN [1:5] DO\
                  SELECT OBJECT_MACHINE FROM\
                     PDP_11 --> ITEM := TO_BIT (I * 11)[56:63]; END;\
                  END SELECT;
}
/APPEND (ITEM/{
n
c\
                  END LOOP I;
}
}
/PATH CONSUMER/,/END PATH CONSUMER/{
/VAR ITEM/{
n
c\
                  LOOP FOR I IN [1:5] DO
}
/REMOVE (# BUF/{
n
c\
                  PUT_LINE ('consumed ' !! TO_CHAR (ITEM) !! ' = ' !! TO_CHAR (TO_FIXED (ITEM, 0)));\
                  END LOOP I;
}
}
