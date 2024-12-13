#include <bits/stdc++.h>
using namespace std;


void print_arr(int n, long long int arr[]){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, q;
    cin >>  n >> q;
    n++;
    long long int arr[n];
    for (int i=1; i<n; i++){
        cin >> arr[i];
    }

    long long int pre_sum[n];
    pre_sum[0] = arr[0] = 0;
    pre_sum[1] = arr[1];
    for (int i=2; i<n; i++){
        pre_sum[i] = arr[i] + pre_sum[i-1];
    }

    // print_arr(n, pre_sum);
    int l, r;
    while (q--){
        cin >> l >> r;

        cout << pre_sum[r] - pre_sum[l-1] << endl;
    }
    
    return 0;
}