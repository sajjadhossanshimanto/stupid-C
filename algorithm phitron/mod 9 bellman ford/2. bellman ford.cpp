#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, e;
    cin >> n >> e;
    vector<vector<int>> edges;
    vector<int> dist(n, INT_MAX);

    // input edges
    for(int i = 0; i < e; i++){
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    
    int src=0;// we can take this as user input
    dist[src] = 0;

    
    // bellman ford algorithm
    for (int i=0; i<=n-1; i++){
        for (auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            if(dist[u] != INT_MAX && dist[u] + w < dist[v]){// infinte check is important
                dist[v] = dist[u] + w;
            }
        }
    }
    return 0;
}