#include <bits/stdc++.h>
using namespace std;


const int max_n = 1000+1;

char grid[max_n][max_n];
bool vis[max_n][max_n];
pair<int, int> parent[max_n][max_n];
//                                  right    left      up     down
vector<pair<int, int>> movement = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n,m;
void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        // not necissary. there no way to over write parent list as every node is marked as visited before adding to queue
        // if (x==dstx && y==dsty) return ;

        for (auto i: movement){
            int cx = x+i.first;
            int cy = y+i.second;
            if (cx<0 || cx>=n || cy<0 || cy>=m || vis[cx][cy] || grid[cx][cy]=='#') continue;
            vis[cx][cy] = true;
    
            parent[cx][cy] = {x, y};
            q.push({cx, cy});
        }
    }
}

int main(){
    memset(vis, false, sizeof(vis));
    // memset(parent, {-1, -1}, sizeof(parent));// will for work
    for (int x=0; x<n; x++){
        for (int y=0; y<m; y++){
            parent[x][y] = {-1, -1};
        }
    }
    
    // input
    cin >> n >> m;
    int srcx, srcy, dstx, dsty;

    for (int x=0; x<n; x++){
        for (int y=0; y<m; y++){
            cin >> grid[x][y];
            if (grid[x][y]=='R'){
                srcx = x;
                srcy = y;
            }
            else if (grid[x][y]=='D'){
                dstx = x;
                dsty = y;
            }

        }
    }

    // logic
    bfs(srcx, srcy);

    // back tracking
    if (vis[dstx][dsty]){
        dstx = parent[dstx][dsty].first;
        dsty = parent[dstx][dsty].second;// to preserve the D
        
        while (grid[dstx][dsty]!='R'){
            grid[dstx][dsty] = 'X';
            pair<int, int> prev = parent[dstx][dsty];// main bug was here
            dstx = prev.first;
            dsty = prev.second;
        }
    }

    // print
    cout << endl;
    for (int x=0; x<n; x++){
        for (int y=0; y<m; y++){
            cout << grid[x][y];
        }
        cout << endl;
    }

    return 0;
}