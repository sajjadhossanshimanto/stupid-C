#include <bits/stdc++.h>
using namespace std;
/*
there will be mention of src and dst. 
we have to decide can we go to the dst from src


https://csacademy.com/app/graph_editor/
7 7
0 1
1 4
1 3
3 2
3 5
2 5
5 6

0
6
*/
vector<int> graph[1005];
bool vis[1005];

// process effitient
// vector<int> path[1005]
// vector<int> bfs(int src, int dst){
//     queue<pair<int, vector<int>>> q;
//     q.push({src, vector<int>});
//     vis[src] = true;

//     while (!q.empty()){
//         int node = q.front().first;
//         vector<int> path = q.front().second;
//         q.pop();
//         if (node==dst){
//             return path;
//         }

//         path.push_back(node);
//         for (int child: graph[node]){
//             if (vis[child]==true) continue;
//             vis[child] = true;

//             q.push({child, path});
//         }
//         path.pop_back();
//     }
// }


// memory effitient
int parent[1005];
void bfs(int src, int dst){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        if (node==dst){
            return ;// obtimisation
        }

        for (int child: graph[node]){
            if (vis[child]==true) continue;
            vis[child] = true;

            parent[child] = node;
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
    memset(parent, -1, sizeof(vis));// we can set to inf


    int src, dst;
    cin >> src;
    cin >> dst;

    bfs(src, dst);
    // kind of dfs recurtion simulation
    if (parent[dst]==-1){
        cout << "not rechable";
    }
    else{
        while (1){
            cout << dst << endl;
            if (dst==src) break;

            dst = parent[dst];
        }
    }

    return 0;
}