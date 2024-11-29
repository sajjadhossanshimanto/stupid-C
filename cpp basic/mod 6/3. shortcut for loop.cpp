#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "hello world";

    for (char c: s){
        cout << c << endl;
    }

    // works with any array
    int a[] = {1, 2, 3, 4, 5};

    for (int c: a){
        cout << c << endl;
    }
    
    return 0;
}