// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-06/challenges/shortest-distance-2
// - floyed warshell
#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int inf = LONG_LONG_MAX;
    

    int n, e;
    cin >> n >> e;

    // setup default vaues
    long long int adj_mat[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                adj_mat[i][j] = 0;
            }
            else{
                adj_mat[i][j] = inf;
            }
        }
    }

    // input edge
    long long int a, b, w;
    while (e--){
        cin >> a >> b >> w;
        adj_mat[a][b] = w;
    }

    // algo -> floyed warshell
    for (int k=0; k<n; k++){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (adj_mat[i][k]+adj_mat[k][j] < adj_mat[i][j] && adj_mat[i][k]!=inf && adj_mat[k][j]!=inf){
                    adj_mat[i][j] = adj_mat[i][k]+adj_mat[k][j];
                }
            }
        }
    }

    long long int q;
    cin >> q;
    while (q--){
        cin >> a >> b;

        if (adj_mat[a][b]==inf){
            cout << -1 << endl;
        }
        else{
            cout << adj_mat[a][b] << endl;
        }

    }
    
    return 0;
}