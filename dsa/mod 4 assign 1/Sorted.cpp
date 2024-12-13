#include <bits/stdc++.h>
using namespace std;


void input_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void copy_arr(int n, int arr1[], int arr2[]){
    for (int i=0; i<n; i++){
        arr2[i] = arr1[i];
    }
}

int main()
{
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int arr[n];
        input_arr(n, arr);

        int flag = 1;
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                flag = 0;
                break;
            }
        }
        if (flag) cout << "YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
