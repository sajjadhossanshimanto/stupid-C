#include <bits/stdc++.h>
using namespace std;

void print_arr(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int n = 5;
    int arr[] = {100, 40, 8, 1, 20};
    
    //   start_pointer, end_pointer
    sort(arr, arr+n);// end point is excludive
    print_arr(n, arr);

    //               comperator
    sort(arr, arr+n, greater<int>());
    print_arr(n, arr);

    return 0;
}