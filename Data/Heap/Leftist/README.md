# Leftist Data.Heap implementation based on Okasaki's book

From (Okasaki, 1998): "Leftist heaps are heap-ordered binary trees that satisfy the
leftist property: the rank of any left child is at least as large as the rank of its
right sibling. The rank of a node is defined to be the length of its right spine
(i.e., the rightmost path from the node in question to an empty node). A simple
consequence of the leftist property is that the right spine of any node is always
the shortest path to an empty node"

The Tree constructor takes 4 parametres: rank, element, left subheap and right subheap
