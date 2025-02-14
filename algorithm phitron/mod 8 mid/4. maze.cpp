#include <bits/stdc++.h>
using namespace std;


const int max_n = 1000+1;

char grid[max_n][max_n];
bool vis[max_n][max_n];
//                                  right    left      up     down
vector<pair<int, int>> movement = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

int n,m;
bool dfs(int x, int y){
    if (grid[x][y]=='D') return true;
    grid[x][y] = 'X';

    for (auto i: movement){
        int cx = x+i.first;
        int cy = y+i.second;
        if (cx<0 || cx>=n || cy<0 || cy>=m || grid[cx][cy]=='X' || grid[cx][cy]=='#') continue;

        if (dfs(cx, cy)) return true;
    }
    
    grid[x][y] = '.';
    return false;
}

int main(){
    memset(vis, false, sizeof(vis));
    // input
    cin >> n >> m;
    int srcx, srcy;

    for (int x=0; x<n; x++){
        for (int y=0; y<m; y++){
            cin >> grid[x][y];
            if (grid[x][y]=='R'){
                srcx = x;
                srcy = y;
            }

        }
    }

    dfs(srcx, srcy);
    grid[srcx][srcy] = 'R';
    
    cout << endl;
    for (int x=0; x<n; x++){
        for (int y=0; y<m; y++){
            cout << grid[x][y];
        }
        cout << endl;
    } 
    return 0;
}