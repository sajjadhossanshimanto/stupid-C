// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-06/challenges/can-go-again
#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, e;
    cin >> n >> e;
    vector<vector<long long int>> graph;
    vector<long long int> dist(n+1, INT_MAX);// n+1 because n should be accessable

    long long int a, b, w;
    while (e--){
        cin >> a >> b >> w;
        graph.push_back({a, b, w});
    }

    long long int src;
    cin >> src;
    dist[src] = 0;

    // algo 
    for (int i=0; i<n-1; i++){
        for (auto eg: graph){
            long long int a = eg[0];
            long long int b = eg[1];
            long long int w = eg[2];
            if (dist[a] != INT_MAX && dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
            }
        }
    }

    // cycle ditection
    bool cycle = false;
    for (auto eg: graph){
        a = eg[0];
        b = eg[1];
        w = eg[2];
        if (dist[a] != INT_MAX && dist[a] + w < dist[b]){
            cycle = true;
            break;
        }
    }
    if (cycle){
        cout << "Negative Cycle Detected" << endl;
    }

    long long int t, dst;
    cin >> t;
    while (t--){
        cin >> dst;
        if (dist[dst]==INT_MAX){
            cout << "Not Possible" << endl;
        }
        else if (!cycle){
            cout << dist[dst] << endl;
        }
    }


    return 0;
}