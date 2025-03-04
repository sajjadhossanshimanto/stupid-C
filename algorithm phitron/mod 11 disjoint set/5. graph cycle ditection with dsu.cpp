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


int group_size[1005];
void dsu_union(int a, int b){// union is a fix key word in cpp
    int par_a = find(a);
    int par_b = find(b);

    // we will use size to ditermine new leader
    if (group_size[par_a]>group_size[par_b]){
        parent[b] = a;
        group_size[par_a] += group_size[par_b];
    }
    else{
        parent[a] = b;
        group_size[par_b] += group_size[par_a];
    }
}

int main(){
    memset(parent, -1, sizeof(parent));
    memset(group_size, 1, sizeof(group_size));

    // input -> by hand
    dsu_union(0, 1);
    dsu_union(2, 1);
    dsu_union(3, 1);
    dsu_union(4, 5);
    dsu_union(5, 3);

    // graph input
    int n, e;
    cin >> n >> e;
    bool cycle = false;
    while (e--){
        int a, b;
        cin >> a >> b;

        if (find(a)==find(b)){
            cycle = true;
        }
        else{
            dsu_union(a, b);
        }
    }

    if (cycle){
        cout << "Cycle ditected";
    }
    else{
        cout << "NO cycle";
    }

    return 0;
}
/*
cycle 
3 3
1 2
1 3
2 3

this cycle ditection only works for undirected graph
does not work with directed graph
*/
