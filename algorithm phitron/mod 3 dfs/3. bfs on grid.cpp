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

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;

    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // work done
        cout << x << " " << y << endl;

        for (auto i: movement){
            int cx = x+i.first;
            int cy = y+i.second;
            if (!is_valid(cx, cy) || vis[cx][cy]) continue;

            vis[cx][cy] = true;
            q.push({cx, cy});
        }

    }
}

int main(){
    // input
    cin >> n >> m;

    memset(vis, false, sizeof(vis));

    // 
    bfs(1, 2);
    
    return 0;
}

/*
  0 1 2 3
0 - - - -
1 - - - -
2 - - - -
*/