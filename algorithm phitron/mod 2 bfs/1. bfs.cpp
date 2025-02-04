#include <bits/stdc++.h>
using namespace std;
/*
uses array of vector to store.

5 5
0 1
0 2
3 0
1 3
3 4
*/
vector<int> graph[1005];// max possible
bool vis[1005];// visit is reserved by std

void bfs(int src){
    // "this is the only difference. in level oder we do not need to track visit array"
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << endl;

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

    bfs(0);

    return 0;
}