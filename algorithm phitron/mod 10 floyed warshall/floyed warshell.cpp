#include <bits/stdc++.h>
using namespace std;

/*
4 5
0 1 3
0 2 6
1 2 2
1 3 5
2 3 4
*/

int main(){
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];

    // set default values
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                adj_mat[i][j] = 0;
            }
            else
                adj_mat[i][j] = INT_MAX;
        }
    }

    // input 
    while (e--){
        int a, b, w;
        cin >> a >> b >> w;
        // directed graph
        adj_mat[a][b] = w;
    }

    // main logic
    for (int k=0; k<n; k++){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (adj_mat[i][k]!=INT_MAX && adj_mat[k][j]!=INT_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]){
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    // print the distace matrix
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (adj_mat[i][j]==INT_MAX){
                cout << "inf" << " ";
            }
            else{
                cout << adj_mat[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
/*
time complexity: O(n^3)
*/