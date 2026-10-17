# Fixes of the convex hull template (pp.1108-1109).
# 1. an index representation needs its type: INTEGER [1..size+1]
s/pointlist = ARRAY(\[1..(size+1)\] OF point);/pointlist = ARRAY(INTEGER [1..(size+1)] OF point);/
# 2. the closing names differ from the opening ones (rules 13, 2, 15)
s/ENDPROCEDURE complexhull;/ENDPROCEDURE convexhull;/
s/ENDMODULE ComplexHullFinder;/ENDMODULE ConvexHullFinder/
s/ENDTEMPLATE ComplexHullMacro;/ENDTEMPLATE ConvexHullTemplate/
# 3. - is not associative: parentheses are needed with + (VIII.A)
s/d := a+b-c;/d := (a+b)-c;/
s|z := d\*ABS(d)/(a\*b);|z := (d*ABS(d))/(a*b);|
s/RETURN p.x\*(q.y-r.y)-p.y\*(q.x-r.x)+r.y\*q.x-r.x\*q.y/RETURN ((p.x*(q.y-r.y))-(p.y*(q.x-r.x))) + ((r.y*q.x)-(r.x*q.y))/
# 4. ABS is not a standard operation; the module is closed (X.B.2) and must
#    import it like EXPT
s/IMPORT MyStandardConventions, EXPT;/IMPORT MyStandardConventions, EXPT, ABS;/
# 5. convexhull falls out of its bottom (IX.A.6)
s/^      ENDLOOP grind$/      ENDLOOP grind; RETURN/
# 6. pointstatus is exported without TRANSPARENT, so it is opaque (X.B.3):
#    a user of getstatus cannot name inside, onhull or unknown
s/EXPORT reset,addpoint,getstatus,pointstatus,convexhull;/EXPORT reset,addpoint,getstatus,convexhull; EXPORT TRANSPARENT pointstatus;/
