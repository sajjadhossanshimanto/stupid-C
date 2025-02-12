/*
in bfs we use visit array to decide eighter to go to the next node or node
but in dijkstra we only visit the next node if we can apply `path relaxation`
`path relaxation` -> is the current distance from the source is less than the written distance

we may need to visit the same node again and again for path relaxation regardless of visit list
previously we checked -> if node is not in visit
now we will check -> can the path be relaxed
*/

#include <bits/stdc++.h>
using namespace std;
#define inf (INT_MAX)

/*
5 8
1 4 3
1 0 10
3 4 5
3 0 4
2 0 7
2 1 1
2 3 1
2 4 5
*/
const int max_node = 105+1;
vector<pair<int, int>> graph[max_node];//  pair<node, weight>


int dis[max_node];// distance is ambigious
void dijkstra(int src){
    queue<pair<int, int>> q; // pair<node: int, distance: int>
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty()){
        int parent = q.front().first;
        int parent_dis = q.front().second;
        q.pop();

        for (auto child: graph[parent]){
            int new_dis = parent_dis + child.second;
            if (new_dis >= dis[child.first]) continue;

            dis[child.first] = new_dis;
            q.push({child.first, new_dis});
        }
    }
}

int main(){
    // issue is memset doesn't works with inf
    // memset(dis, inf, sizeof(dis));
    for (int i=0; i<max_node; i++){
        dis[i] = inf;
    }

    int n, e;
    cin >> n >> e;
    while (e--){
        int a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    }

    dijkstra(0);
    for (int i=0; i<n; i++){
        cout << dis[i] <<" ";
    }

    return 0;
}