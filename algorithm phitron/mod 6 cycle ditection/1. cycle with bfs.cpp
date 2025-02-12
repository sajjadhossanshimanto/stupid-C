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

bool bfs_cycle(int node){
    queue<int> q;
    int parent[max_n];// i may have use a queue of pair <node:int, parent:int>
    memset(parent, -1, sizeof(parent));

    q.push(node);
    vis[node] = true;

    bool cycle = false;
    while (!q.empty()){
        node = q.front();
        q.pop();

        for (int i: graph[node]){
            if (vis[i] && i!=parent[i]){
                // we can't just return without flaging all the other nnodes in the cycle
                cycle = true;
            }
            if (vis[i]) continue;
            vis[i] = true;

            parent[i] = node;
            q.push(i);
        }
    }

    return cycle;
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

    cout << endl;
    // for different connected component
    for (int i=0; i<n; i++){
        if (!vis[i]){
            cout << bfs_cycle(i)<< " ";
        }
    }
    
    return 0;
}