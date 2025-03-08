#include <bits/stdc++.h>
using namespace std;


const int maxn = 1005;
int weight[maxn], val[maxn];
int cache[maxn][maxn];

int knap(int cur, int left_weight){
    if (cur<0 || left_weight<=0) return 0;// boundery checks must be before any king of indexing
    if (cache[cur][left_weight]!=-1) return cache[cur][left_weight];

    // take or not take
    int take = 0;
    if (weight[cur]<=left_weight) {
        take = knap(cur-1, left_weight-weight[cur]) + val[cur];
    }

    int not_take = knap(cur-1, left_weight);

    cache[cur][left_weight] = max(take, not_take);
    return cache[cur][left_weight];

}

// Time complexity: O(n * w)
// n -> total number of items
// w -> maximum weight capacity of the knapsack
int main(){
    for (int i=0; i<maxn; i++){
        for (int j=0; j<maxn; j++){
            cache[i][j] = -1;
        }
    }

    int n, w;
    cin >> n >> w;

    for (int i=0; i< w; i++){
        cin >> weight[i] >> val[i];
    }

    cout << knap(n-1, w);
    
    return 0;
}
