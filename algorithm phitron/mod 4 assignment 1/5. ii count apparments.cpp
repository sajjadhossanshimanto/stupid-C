#include <bits/stdc++.h>
using namespace std;


char graph[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>> movement = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int m, n;

int dfs(int x, int y){
    vis[x][y] = true;

    int room = 1; // current node
    for (auto i : movement){
        int cx = x+i.first;
        int cy = y+i.second;
        if (cx<0 || cy<0 || cx>=m || cy>=n || vis[cx][cy] || graph[cx][cy]=='#') continue;

        room += dfs(cx, cy);
    }
    
    return room;
}

int main(){
    cin >> m>>n;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> graph[i][j];
        }
    }
    memset(vis, false, sizeof(vis));// don't forget
    
    vector<int> count;
    // leaf couniting problem
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (!vis[i][j] && graph[i][j]=='.'){
                // cout << dfs(i, j) << " ";
                count.push_back(dfs(i, j));
            }
        }
    }
    
    sort(count.begin(), count.end());
    for (int i: count){
        cout << i << " ";
    }
    return 0;
}