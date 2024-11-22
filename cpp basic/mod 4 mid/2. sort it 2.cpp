#include <bits/stdc++.h>
using namespace std;


void input_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int* sort_it(int n) {
    int *arr = new int[n];
    input_arr(n, arr);

    sort(arr, arr+n, greater<int>());
    return arr;
}

int main()
{
    int n;
    cin >> n;
    
    int *sorted  = sort_it(n);
    for (int i=0; i<n; i++){
        cout << sorted[i] << ' ';
    }
    cout << endl;

    return 0;
}
