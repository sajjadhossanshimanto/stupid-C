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
        if (cx<0 || cy<0 || cx>=m || cy>=n || vis[cx][cy] || graph[cx][cy]=='#') continue;

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
    memset(vis, false, sizeof(vis));// don't forget
    
    int cc=0;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (!vis[i][j] && graph[i][j]=='.'){
                dfs(i, j);
                cc+=1;
            }
        }
    }
    
    cout << cc;
    return 0;
}