/*
1st line of the input is cointaied (number of nodex ->n,  number of edge -> m)
for the next m line there will be 2 nodes (a, b) indicating an edge
this mightbe a direct edge indicating a->b or
undirected edge a<->b
depending upon question

sample:
5 6
0 3
0 1
0 4
0 2
3 4
1 2

              0
           / /|\
          / / | \
         3 1  |  2
          \   |
           \  |
            \ |
             4

to store this graph in memory there any tree ways:
- adjacency matrix
- adjacency list
- edge list
*/