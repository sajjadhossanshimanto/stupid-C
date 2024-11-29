#include <bits/stdc++.h>
using namespace std;


int main(){
    int *a = new int;
    *a = 5;
    
    int *arr = new int[3];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;

    // delete single value
    delete a;
    cout << a<< endl;
    
    // delete array
    delete[] a;

    return 0;
}