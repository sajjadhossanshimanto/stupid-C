#include <bits/stdc++.h>
using namespace std;


// n -> 1
void recurtion(int n){
    if (n==0) return ;

    cout << n << endl;
    recurtion(n-1);
}

void one_n(int n){
    if (n==0) return ;

    one_n(n-1);
    cout << n << endl;
}

int main(){
    
    // recurtion(5);
    // cout << endl;
    one_n(5);

    return 0;
}