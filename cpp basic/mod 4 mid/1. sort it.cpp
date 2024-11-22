#include <bits/stdc++.h>

using namespace std;


void input_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void print_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    input_arr(n, arr);
    sort(arr, arr+n);
    print_arr(n, arr);
    // sort(arr, arr+n, greater<int>());
    for (int i=n-1; i>=0; i--){
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
