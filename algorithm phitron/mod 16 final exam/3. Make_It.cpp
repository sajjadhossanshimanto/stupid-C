#include <bits/stdc++.h>
using namespace std;

int cache[100005];

bool solve(int n){
    if (cache[n]!=-1) return cache[n];
    if (n<=0) return false;

    bool ans = false;
    if (solve(n-3)) ans = true;
    if ((n&1)==0 && solve(n/2)) ans = true;

    cache[n] = ans;
    return ans;
}

int main(){
    // set default values
    memset(cache, -1, sizeof(cache));
    cache[0] = 0;
    cache[1] = true;

    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if (solve(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}