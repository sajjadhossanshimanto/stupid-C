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

int main(){
    int n, e;
    cin >> n>> e;
    vector<int> graph[n];

    while (e--){
        int a, b;
        cin >> a>> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i=0; i<n; i++){
        cout << i << " -> ";
        for (auto j: graph[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    /*
    0 -> 1 2 3
    1 -> 0 3
    2 -> 0
    3 -> 0 1 4
    4 -> 3
    */

    return 0;
}