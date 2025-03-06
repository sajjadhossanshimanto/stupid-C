#include <bits/stdc++.h>
using namespace std;


int weight[1005], val[1005];

int knap(int cur, int left_weight){
    if (cur<0 || left_weight<=0) return 0;

    // take or not take
    int take = 0;
    if (weight[cur]<=left_weight) {
        take = knap(cur-1, left_weight-weight[cur]) + val[cur];
    }

    int not_take = knap(cur-1, left_weight);

    return max(take, not_take);

}

int main(){
    int n, w;
    cin >> n >> w;

    for (int i=0; i< w; i++){
        cin >> weight[i] >> val[i];
    }

    cout << knap(n-1, w);
    
    return 0;
}