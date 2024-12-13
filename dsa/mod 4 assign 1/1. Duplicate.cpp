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
    sort(arr, arr+n);

    for (int i=0; i<n-1; i++){
        if (arr[i+1]==arr[i]){
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}