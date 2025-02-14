#include <bits/stdc++.h>
using namespace std;


const int max_n = 1000+1;

char grid[max_n][max_n];
bool vis[max_n][max_n];
vector<pair<int, int>> movement = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n,m;
int dfs(int x, int y){
    vis[x][y] = true;// this same chaeck canbe done before dfs call

    int area = 1;// for the current cell
    for (auto i: movement){
        int cx = x+i.first;
        int cy = y+i.second;
        if (cx<0 || cx>=n || cy<0 || cy>=m || vis[cx][cy] || grid[cx][cy]=='-') continue;

        area+=dfs(cx, cy);
    }
    return area;
}

int main(){
    memset(vis, false, sizeof(vis));
    // input
    cin >> n >> m;

    for (int x=0; x<n; x++){
        for (int y=0; y<m; y++){
            cin >> grid[x][y];
        }
    }
    
    // iterate through cc
    int min_area=1000005;
    for (int x=0; x<n; x++){
        for (int y=0; y<m; y++){
            if (grid[x][y]=='.' && vis[x][y]==false){
                min_area = min(dfs(x, y), min_area);
            }
        }
    }
    
    if (min_area==1000005){
        cout << -1;// edge case where all the cell is not movable
    }
    else
        cout << min_area;

    return 0;
}
