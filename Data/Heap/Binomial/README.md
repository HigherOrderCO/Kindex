# Binomial Data.Heap

A Binomial Data.Heap is represented as a list of tree nodes, ordered crescently on rank

A tree node of a Binomial Data.Heap is composed of:

- Its rank, which determines its size and how many children it has;
- Its root value, which is lower than the values from its children (The min-heap property);
- Its children, represented as a list of tree nodes.

Based on Chris Okasaki's "Purely Functional Data Structures", Chapter 6.2.2 - 1996
