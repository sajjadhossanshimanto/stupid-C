#include <bits/stdc++.h>
using namespace std;

int cache[100005];

bool solve(int n){
    if (n==1) return true;
    if (n<=0) return false;

    if (solve(n-3)) return true;
    if ((n&1)==0 && solve(n/2)) return true;

    return false;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if (solve(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}