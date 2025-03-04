#include <bits/stdc++.h>
using namespace std;

int parent[1005];


int find(int node){
    if (parent[node]==-1){
        return node;
    }
    
    return find(parent[node]);
}

int main(){
    memset(parent, -1, sizeof(parent));

    // input -> by hand
    parent[0] = 1;
    parent[2] = 1;
    parent[3] = 1;
    parent[4] = 5;
    parent[5] = 3;

    cout << find(4);// parent is 1
    
    return 0;
}