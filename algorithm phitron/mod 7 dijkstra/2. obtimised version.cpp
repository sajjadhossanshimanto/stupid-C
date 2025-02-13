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
vector<pair<int, int>> graph[max_node];


int dis[max_node];
void dijkstra(int src){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty()){
        int parent = pq.top().second;
        int parent_dis = pq.top().first;
        pq.pop();

        for (auto child: graph[parent]){
            int new_dis = parent_dis + child.second;
            if (new_dis >= dis[child.first]) continue;

            dis[child.first] = new_dis;
            pq.push({new_dis, child.first});// position swaped
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