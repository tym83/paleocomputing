# The Report elides the bodies with "...": they are filled in, and the
# modules import the types they use (a module is a closed scope, X.B.2)
s/^  EXPORT f;$/  IMPORT Colors, Flavors;\
  EXPORT f;/
s/^    EXPORT f;$/    IMPORT Colors;\
    EXPORT f;/
s/^      \.\.\.body of f\.\.\.$/      RETURN x = Colors Orange/
s/^    \.\.\.body of extension\.\.\.$/    RETURN x = Flavors Orange/
/^  \.\.\.body of M\.\.\.$/d
