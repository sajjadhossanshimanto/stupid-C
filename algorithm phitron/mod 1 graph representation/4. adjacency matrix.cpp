/*
adjacency matrix uses (n*n) matrix [n->number of nodes] to store the connection
- each cell value can eighter be 0 or 1
- matrix[a][b] indicating -> is there edge between a-->b
- but is doesn't indicate there is edge from b->a. for that check matrix[b][a]

by default we have to set the corner value of matrix to 1
because the value 0 signifies we can't go from node x to x. 
but why can't we reach x. we are already in node x. 


sample input:
5 5
0 1
0 2
3 0
1 3
3 4


*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, e;
    cin >> n>> e;
    
    int adj[n][n];
    
    // set to default value
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<n; j++){
    //         adj[i][j] = 0;
    //     }
    // }
    cout << sizeof(adj) << endl;
    memset(adj, 0, sizeof(adj));
    cout << sizeof(adj) << endl;

    // print_matrix(n, n, adj);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    // input
    while (e--){
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1; // revome while graph is directed
    }
    //corner value
    for (int i=0; i<n; i++){
        adj[i][i] = 1;
    }
    
    return 0;
}