# Floyd-Warshall-bitset-speedup
Use bitset for Floyd-Warshall to handle the transitive closure problem.

# Problem Description
## Input
Give a n*n matrix, representing the n nodes of a graph and the connection relationship between each node. (see example below)
## Output
n*n matrix A, A[i][j] indicates whether i can reach j through the given edge of the input.

e.g. 

input: &emsp;&emsp;&ensp; output:

4 <br>
1 1 1 0 &emsp;&emsp; 1 1 1 1 <br>
0 1 0 1 &emsp;&emsp; 0 1 0 1 <br>
1 0 1 0 &emsp;&emsp; 1 1 1 1 <br>
0 0 0 1 &emsp;&emsp; 0 0 0 1 

which means: <br>
(Output explanation: 1->2->4 | 3->1->2 | 3->1->2->4)<br>
<img src="README_IMG/input.png" width="25%">  

# Solution

