#include <bits/stdc++.h>
using namespace std;
/*
there will be mention of src and dst. 
we have to decide can we go to the dst from src


https://csacademy.com/app/graph_editor/
8 8
2 1
1 5
3 2
4 6
3 5
0 7
5 7
3 0

0
1 -> 3
4 -> -1
*/
vector<int> graph[1005];
bool vis[1005];
int level[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        // cout << node << endl;

        for (int child: graph[node]){
            if (vis[child]==true) continue;
            vis[child] = true;

            level[child] = level[node]+1;// one extra line
            q.push(child);

        }
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
    memset(level, -1, sizeof(vis));// we can set to inf


    int src, dst;
    cin >> src;
    cin >> dst;

    bfs(src);
    cout << level[dst] << endl;

    return 0;
}