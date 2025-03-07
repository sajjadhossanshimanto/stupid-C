#include <bits/stdc++.h>
using namespace std;

long long int cache[31];

long long int tetra(int n){
    if (cache[n]!=-1) return cache[n];

    long long int res = tetra(n-1) + tetra(n-2) + tetra(n-3) + tetra(n-4);
    cache[n] = res;
    return res;
}

int main(){
    memset(cache, -1, sizeof(cache));
    cache[0] = 0;
    cache[1] = 1;
    cache[2] = 1;
    cache[3] = 2;
    
    int n;
    cin >> n;
    cout << tetra(n);
    
    return 0;
}