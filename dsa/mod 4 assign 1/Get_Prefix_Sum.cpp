#include <bits/stdc++.h>
using namespace std;

void input_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    input_arr(n, arr);

    long long int pre_sum[n];
    pre_sum[0] = arr[0];
    for (int i=1; i<n; i++){
        pre_sum[i] = arr[i] + pre_sum[i-1];
    }
    
    for (int i=n-1; i>=0; i--){
        cout << pre_sum[i] << " "; 
    }
    return 0;
}