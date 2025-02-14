#include <bits/stdc++.h>
using namespace std;


/*
3 4
1 2 3 4
5 6 7 8
9 10 11 12

*/
const int max_n = 1000+1;

char grid[max_n][max_n];
bool vis[max_n][max_n];
vector<pair<int, int>> movement = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n,m;
int srcx, srcy, dstx, dsty;

bool is_valid(int x, int y){
    if (x<0 || x>=n || y<0 || y>=m)
        return false;
    return true;
}

bool dfs(int x, int y){
    vis[x][y] = true;// this same chaeck canbe done before dfs call
    if (x==dstx && y==dsty) return true;

    for (auto i: movement){
        int cx = x+i.first;
        int cy = y+i.second;
        if (!is_valid(cx, cy) || vis[cx][cy] || grid[cx][cy]=='-') continue;

        if (dfs(cx, cy)) return true;
    }

    return false;
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

    cin >> srcx >> srcy;
    cin >> dstx >> dsty;
    
    
    if (grid[srcx][srcy]=='-')
        cout << "NO";
    else{
        if (dfs(srcx, srcy)){
            cout << "YES";
        }
        else
            cout << "NO";
    }

    return 0;
}
