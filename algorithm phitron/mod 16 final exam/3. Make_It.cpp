#include <bits/stdc++.h>
using namespace std;


bool solve(int n){
    if (n==1) return true;
    if ((n-1)%3==0) return true;
    if (n%2==0) return true;

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