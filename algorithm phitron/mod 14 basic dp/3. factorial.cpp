#include <bits/stdc++.h>
using namespace std;


int ficto(int n){
    if (n==1) return 1;

    return n*ficto(n-1);
}

int main(){
    
    cout << ficto(5);

    return 0;
}