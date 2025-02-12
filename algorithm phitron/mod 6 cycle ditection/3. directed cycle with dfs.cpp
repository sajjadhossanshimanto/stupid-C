#include <bits/stdc++.h>
using namespace std;
/*
a bit different than unweighted
as there may exists different cc in single commencted nodes

4 4
0 1
0 3
1 2
2 3
*/
const int max_n = 105+1;
vector<int> graph[max_n];
bool vis[max_n];
bool path_visit[max_n];

int parent[max_n];
bool cycle = false;
void dfs_cycle(int node){
    vis[node] = true;
    path_visit[node] = true;

    for (int child: graph[node]){
        if (path_visit[child] && child!=parent[node]){
            cycle = true;
        }
        if (vis[child]) continue;

        parent[child] = node;// don't forget
        dfs_cycle(child);
    }
    path_visit[node] = false;
}

int main(){
    int n, q;
    cin >> n >> q;

    while (q--){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        // graph[b].push_back(a);
    }

    // default values
    memset(vis, false, sizeof(vis));
    memset(path_visit, false, sizeof(path_visit));
    memset(parent, -1, sizeof(parent));


    cout << endl;
    // for different connected component
    for (int i=0; i<n; i++){
        if (!vis[i]){
            cycle = false;
            cout << "dfs at " << i << endl;
            dfs_cycle(i);
            cout << cycle << " ";
        }
    }
    
    return 0;
}