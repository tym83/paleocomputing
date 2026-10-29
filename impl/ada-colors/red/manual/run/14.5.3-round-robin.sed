# Changes that make the round robin scheduler of 14.5.3 translate.
# task_start's region statement has ';' where DO belongs
s/^      REGION dlock;$/      REGION dlock DO/
# NEW is a reserved word (2.3, 8.1), so the scheduler's index cannot be called new
s/\([^A-Za-z_]\)new\([^A-Za-z_]\)/\1nxt\2/g
s/^\( *\)new :=/\1nxt :=/
