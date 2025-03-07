#include <bits/stdc++.h>
using namespace std;



int main(){
    vector<long long int> cache = {0, 1, 1, 2};
    int n;
    cin >> n;
    
    for (int i=4; i<=n; i++){
        cache.push_back(cache[i-1]+cache[i-2]+cache[i-3]+cache[i-4]);
    }
    cout << cache[n];
    
    return 0;
}