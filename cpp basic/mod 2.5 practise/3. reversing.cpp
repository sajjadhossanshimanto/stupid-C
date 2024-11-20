#include <bits/stdc++.h>

using namespace std;


void print_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

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
    for (int l=0, r=n-1;  l<r; l++, r--){
        swap(arr[l], arr[r]);
    }
    print_arr(n, arr);

    
    return 0;
}