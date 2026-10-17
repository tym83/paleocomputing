# Fixes of the binary search tree (pp.1115-1116).
# 1. the key's representation is Zodiac; "key" is the name of a component
s/(CONST SearchKey: key, VAR t: Tree)/(CONST SearchKey: Zodiac, VAR t: Tree)/
# 2. the new node's links: newKey is declared nowhere; newTree is the NIL Tree
s/t^ := Node(SearchKey,newKey,newKey);/t^ := Node(SearchKey,newTree,newTree);/
# 3. the export list names NewTree, the constant is newTree (names are case
#    sensitive, p.994)
s/EXPORT NewTree,Search,=,#;/EXPORT newTree,Search,=,#;/
