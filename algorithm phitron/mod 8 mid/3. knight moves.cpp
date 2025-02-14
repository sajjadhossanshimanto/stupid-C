#include <bits/stdc++.h>
using namespace std;


const int max_n = 1000+1;

vector<pair<int, int>> movement = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

int n,m;
int bfs(int x, int y, int dstx, int dsty){
    bool vis[max_n][max_n];
    memset(vis, false, sizeof(vis));

    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;

    int level = 0;
    while (!q.empty()){
        int size = q.size();
        for (int j=0; j <size; j++){
            x = q.front().first;
            y = q.front().second;
            q.pop();

            if (x==dstx && y==dsty) return level;

            for (auto i: movement){
                int cx = x+i.first;
                int cy = y+i.second;
                if (cx<0 || cx>=n || cy<0 || cy>=m || vis[cx][cy]) continue;
        
                vis[cx][cy] = true;
                q.push({cx, cy});
            }
        }
        level++;
    }

    return -1;
}

int main(){
    // input
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        
        int srcx, srcy, dstx, dsty;
        cin >> srcx >> srcy;
        cin >> dstx >> dsty;

        // int min_area=-1;
        // min_area = max(bfs(srcx, srcy), min_area);
        // cout << min_area;
        
        cout << bfs(srcx, srcy, dstx, dsty) << endl;
    }

    return 0;
}
