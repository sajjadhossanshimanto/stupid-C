#include <bits/stdc++.h>
using namespace std;


void input_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int main(){
    int n=3;
    int arr[n];

    input_arr(n, arr);
    int max = arr[0];
    int min = arr[0];
    for (int i=1; i<n; i++){
        if (max<arr[i]){
            max = arr[i];
        }
        if (min>arr[i]){
            min = arr[i];
        }
    }
    cout << min << ' ' << max << endl;
    
    return 0;
}