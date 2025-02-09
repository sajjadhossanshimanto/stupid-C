#include <bits/stdc++.h>
using namespace std;


vector<int> graph[1000005];// max possible


int main(){
    int n, e, q;
    cin >> n>> e;

    while (e--){
        int a, b;
        cin >> a>> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }


    cin >> q;
    while (q--){
        int src;
        cin >> src;
        if (graph[src].empty()){
            cout << -1;
        }
        else{
            sort(graph[src].begin(), graph[src].end(), greater<int>());
            for (int i: graph[src]){
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}