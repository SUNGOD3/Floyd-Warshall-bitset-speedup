# Floyd-Warshall-bitset-speedup
Use bitset for Floyd-Warshall to handle the transitive closure problem.

# Problem Description
## Input
Give a n*n matrix, representing the n nodes of a graph and the connection relationship between each node. (see example below)
## Output
n*n matrix A, A[i][j] indicates whether i can reach j through the given edge of the input.

e.g. 

input:

4

1 1 1 0

0 1 0 1

1 0 1 0

0 0 0 1

means:

and you should output:

1 1 1 1

0 1 0 1

1 1 1 1

0 0 0 1

# Solution
