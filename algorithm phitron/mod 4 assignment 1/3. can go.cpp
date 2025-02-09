#include <bits/stdc++.h>
using namespace std;


char graph[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>> movement = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int m, n;

bool dfs(int x, int y){
    if (graph[x][y]=='B') return true;
    vis[x][y] = true;

    for (auto i : movement){
        int cx = x+i.first;
        int cy = y+i.second;
        if (cx<0 || cy<0 || cx>=m || cy>=n || vis[cx][cy]) continue;

        if (dfs(cx, cy)) return true;
    }
    return false;
}

int main(){
    cin >> m>>n;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> graph[i][j];
        }
    }

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (graph[i][j]=='A'){
                if (dfs(i, j)){
                    cout << "YES";
                }
                return 0;
            }
        }
    }
    
    cout << "NO";
    return 0;
}