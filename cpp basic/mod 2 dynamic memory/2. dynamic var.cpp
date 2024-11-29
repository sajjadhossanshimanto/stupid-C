#include <bits/stdc++.h>
using namespace std;


int main(){
    // 1. new kw allocates memory inside the heap memory
    // 2. returns the pointer of the memery
    int *p  = new int;
    *p = 100;
    cout << *p << endl;
}