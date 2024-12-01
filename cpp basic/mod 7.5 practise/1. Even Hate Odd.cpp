# include <bits/stdc++.h>
using namespace std;


void input_arr(int n, int arr[]){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        
        int arr[n];
        input_arr(n, arr);
        if (n&1){
            cout << -1 << endl;
            continue;
        }
        
        int odd = 0, even = 0;
        for (int i: arr){
            if (i&1){
                odd++;
            }
            else{
                even++;
            }
        }

        if (odd==even){
            cout << 0 << endl;
        }
        else{
            cout << n/2 - min(odd, even) << endl;
        }

    }
    return 0;
}