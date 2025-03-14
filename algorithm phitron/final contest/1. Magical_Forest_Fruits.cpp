#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000005;
long long int presum[maxn];
int nums[maxn];

long long int range_sum(int l, int r){
    l--;r--;

    if (l==0) return presum[r];
    return presum[r] - presum[l-1];// one indexed
}

int main(){
    memset(nums, 0, sizeof(nums));
    memset(presum, 0, sizeof(presum));

    int n, q;
    cin >> n >> q;

    for (int i=0; i<n; i++){
        cin >> nums[i];
    }

    presum[0] = nums[0];
    for (int i=1; i<n; i++){
        presum[i] = nums[i] + presum[i-1];
    }


    // for (int i=0; i<n; i++){
    //     cout << presum[i] << " ";
    // }
    // cout << endl;

    int l, r;
    while (q--){
        cin >> l >> r;
        cout << range_sum(l, r)<< endl;
    }
    return 0;
}