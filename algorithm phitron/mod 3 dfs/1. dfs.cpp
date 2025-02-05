#include <bits/stdc++.h>
using namespace std;
/*
https://csacademy.com/app/graph_editor/

7 7
0 2
2 4
0 1
1 5
1 3
0 3
3 6
*/
vector<int> graph[1005];// max possible
bool vis[1005];

void dfs(int src){
    // base case

    // work
    cout << src << " ";
    vis[src] = true;
    for(int child: graph[src]){
        if (vis[child]) continue;

        dfs(child);
    }
}


int main(){
    int n, e;
    cin >> n>> e;

    while (e--){
        int a, b;
        cin >> a>> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    dfs(0);

    return 0;
}