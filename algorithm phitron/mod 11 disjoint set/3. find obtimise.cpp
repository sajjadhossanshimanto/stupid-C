#include <bits/stdc++.h>
using namespace std;

int parent[1005];


int find(int node){
    if (parent[node]==-1){
        return node;
    }
    
    int par = find(parent[node]);
    parent[node] = par;
    
    return par;
}

int main(){
    memset(parent, -1, sizeof(parent));

    // input -> by hand
    parent[0] = 1;
    parent[2] = 1;
    parent[3] = 1;
    parent[4] = 5;
    parent[5] = 3;

    cout << find(4) << endl;// parent is 1
    
    // verity
    for (int i=0; i<5; i++){
        cout << "parent of " << i << "is " << parent[i] << endl;
    }

    return 0;
}
/*
time compleity:
normal find -> O(n) both for loop & recurtion implementiation.

with obtimisation -> O(nlogn)
*/