#include <bits/stdc++.h>
using namespace std;


long long int dp[1005];
int fibo(int n){
    if (dp[n]!=-1) return dp[n];

    if (n==0) return 1;
    if (n==1) return 1;

    dp[n] = fibo(n-1)+fibo(n-2);
    return dp[n];
}

int main(){
    memset(dp, -1, sizeof(dp));

    int a;
    cin >> a;
    
    cout << fibo(a);
    
    return 0;
}