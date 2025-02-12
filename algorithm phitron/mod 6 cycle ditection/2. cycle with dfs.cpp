#include <bits/stdc++.h>
using namespace std;
/*
6 5
0 1
1 2
2 3
3 0
4 5
*/
const int max_n = 105;
vector<int> graph[max_n];
bool vis[max_n];

int parent[max_n];// i may have use a 2nd paramiter in the dfs function
bool cycle = false;
void dfs_cycle(int node){
    vis[node] = true;

    for (int child: graph[node]){
        if (vis[child] && child!=parent[node]){
            cycle = true;
        }
        if (vis[child]) continue;

        parent[child] = node;// don't forget
        dfs_cycle(child);
    }
}

int main(){
    int n, q;
    cin >> n >> q;

    while (q--){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // default values
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));// code executuion must be inside of a function

    cout << endl;
    // for different connected component
    for (int i=0; i<n; i++){
        if (!vis[i]){
            cycle = false;
            dfs_cycle(i);
            cout << cycle << " ";
        }
    }
    
    return 0;
}