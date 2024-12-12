#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=36;

    for (int i=1; i<=sqrt(n); i++){// i ++ place e gun ba vag thaakle
        if (n%i==0){
            cout << i << " " << n/i << " ";
        }
    }
    return 0;
}