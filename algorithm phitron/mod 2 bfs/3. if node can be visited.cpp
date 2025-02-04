#include <bits/stdc++.h>
using namespace std;
/*
there will be mention of src and dst. 
we have to decide can we go to the dst from src


https://csacademy.com/app/graph_editor/
7 5
0 1
1 3
3 2
4 6
3 5
0
4 -> no
3 -> yes
*/
vector<int> graph[1005];
bool vis[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        // cout << node << endl;

        for (int child: graph[node]){
            if (vis[child]==true) continue;
            vis[child] = true;

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

    int src, dst;
    cin >> src;
    cin >> dst;
    
    bfs(src);
    if (vis[dst]){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}