#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int find(int a){
    if (parent[a]==-1){
        return a;
    }

    int par = find(parent[a]);
    parent[a] = par;// path compression
    return par;
}

bool ds_union(int a, int b){
    int par_a = find(a);
    int par_b = find(b);

    if (par_a==par_b) return true;
    
    parent[par_a] = par_b;// unconditional
    return false;
}

int main(){
    memset(parent, -1, sizeof(parent));

    int n, e;
    cin >> n >> e;
    
    int cycle = 0;
    while (e--){
        int a, b;
        cin >> a >> b;
        if (ds_union(a, b)){
            cycle += 1;
        }
    }

    cout << cycle;
    
    return 0;
}