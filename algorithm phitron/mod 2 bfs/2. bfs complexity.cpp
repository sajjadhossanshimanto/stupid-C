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
    queue<int> q;
    q.push(src);
    vis[src] = true;

    /*
    there are 2 nested loops -> so complexity O(n^2)   <-- not that much simple

    the outer loops will run until while queue not empty.
    queue will not contain any dublicate because of visit list.so at max the queue can hold n nodes
    tc: O(num of nodes)

    inner loops depends upon with how many nodes a certain node is connected to
    at max it will be (num of edge) not num of nodes
    if there is n nodes it is not that there will be n edges.
    tc: O(num of edges)

    total tc: O(edges*nodes)
    tc: O(V*E) 
        V -> num of nodes (vertices)
        E -> number of edges
    */

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