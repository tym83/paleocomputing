# the placeholders: the data are integers, the list is built from 1, 2, 3 by
# the driver function LIST_OF_NODES, R prints its argument
s/VAR DATA: some type;/VAR DATA: INTEGER;/
s/^     \.\.\.$//
s/P := list of nodes;/P := LIST_OF_NODES (3);/
