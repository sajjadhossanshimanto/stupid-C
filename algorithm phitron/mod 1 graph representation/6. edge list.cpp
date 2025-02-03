#include <bits/stdc++.h>
using namespace std;
/*
store the input as it is

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
    vector<pair<int, int>> graph;

    while (e--){
        int a, b;
        cin >> a>> b;
        graph.push_back({a, b});
    }

    cout << endl;
    for (auto j: graph){
        cout << j.first << " " << j.second << endl;
    }
    cout << endl;

    return 0;
}