#include <bits/stdc++.h>
using namespace std;


/*
3 4
1 2 3 4
5 6 7 8
9 10 11 12

*/

char grid[165][165];
bool vis[165][165];
vector<pair<int, int>> movement = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n,m;
bool is_valid(int x, int y){
    if (x<0 || x>=n || y<0 || y>=m)
        return false;
    return true;
}

void dfs(int x, int y){
    cout << x << " " << y << endl;
    vis[x][y] = true;

    for (auto i: movement){
        int cx = x+i.first;
        int cy = y+i.second;
        if (!is_valid(cx, cy) || vis[cx][cy]) continue;

        dfs(cx, cy);
    }
}

int main(){
    // input
    cin >> n >> m;
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<m; j++){
    //         cin >> grid[i][j];
    //     }
    // }
    memset(vis, false, sizeof(vis));

    // 
    dfs(1, 2);
    
    return 0;
}

/*
  0 1 2 3
0 - - - -
1 - - - -
2 - - - -
*/