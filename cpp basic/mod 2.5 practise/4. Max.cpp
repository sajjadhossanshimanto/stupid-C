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
    int max = arr[0];
    for (int i=1; i<n; i++){
        if (max<arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
    
    return 0;
}