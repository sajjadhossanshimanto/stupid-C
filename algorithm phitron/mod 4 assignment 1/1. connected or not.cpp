#include <bits/stdc++.h>
using namespace std;


vector<int> graph[1000005];// max possible

bool solution(int src, int dst){
    if (src==dst) return true;//edge case
    
    for (auto i: graph[src]){
        if (i==dst) return true;
    }
    return false;
}

int main(){
    int n, e, q;
    cin >> n>> e;

    while (e--){
        int a, b;
        cin >> a>> b;
        graph[a].push_back(b);
        // graph[b].push_back(a);
    }


    cin >> q;
    while (q--){
        int src, dst;
        cin >> src >> dst;

        if (solution(src, dst)){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }

    return 0;
}