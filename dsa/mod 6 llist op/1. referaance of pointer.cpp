#include <bits/stdc++.h>
using namespace std;


void func(int* &pointer){
    // *pointer = 20;
    pointer = NULL;
}

int main(){
    int x = 20;

    int* p = &x;

    // int* p2;
    // &p2 = p;
    func(p);
    cout << "in main function: " << *p  << endl;
    
    return 0;
}