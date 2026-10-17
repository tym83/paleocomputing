# Fixes of the real-time monitor (p.1107).
# 1. ENDPROCESS repeats the name of the process, Clock (rule 17; names are
#    case sensitive, p.994)
s/^  ENDPROCESS clock;$/  ENDPROCESS Clock;/
# 2. the device signal is clockSignal
s/WAIT(clocksignal);/WAIT(clockSignal);/
# 3. a signal may not be exported from its monitor (X.E.4)
s/^  EXPORT time, tick, Pause;$/  EXPORT time, Pause;/
# 4. WORDLENGTH is the implementation's, and the monitor is closed (X.B.2):
#    it is imported from the standard prelude
s/^  IMPORT MyStandardConventions;$/  IMPORT MyStandardConventions, WORDLENGTH;/
# 5. Pause falls out of its bottom (IX.A.6)
s/^    ENDWHILE;$/    ENDWHILE; RETURN/
