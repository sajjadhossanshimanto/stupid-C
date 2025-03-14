#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, n, a;
    cin >> t;

    while (t--){
        cin >> n;
        long long total=0, prev_total, diff;
        for (int i=0; i<n-2; i++){
            cin >> a;
            total+=a;
        }
        cin >> prev_total;

        diff = prev_total-total;
        if ((diff&1)==0){
            cout << (diff/2+1)*2-1 << endl;
        }
        else{
            cout << (diff/2+1)*2 << endl;
        }
    }
    
    return 0;
}