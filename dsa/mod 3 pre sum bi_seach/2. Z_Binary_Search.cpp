#include <bits/stdc++.h>
using namespace std;

void input_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    
    int arr[n];
    input_arr(n, arr);
    sort(arr, arr+n);

    while (q--){
        int x, flag=0;
        cin >> x;

        int l=0, r=n-1;
        while (l<=r){
            int mid = (l+r)/2;
            if (arr[mid]==x){
                flag = 1;
                break;
            }
            else if (arr[mid] > x){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        if (flag) cout << "found" << endl;
        else cout << "not found" << endl;
        
    }
    
    
    return 0;
}