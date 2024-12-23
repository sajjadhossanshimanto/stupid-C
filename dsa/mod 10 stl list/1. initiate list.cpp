#include <bits/stdc++.h>
using namespace std;


int main(){
    // initiate list
    list<int> l;

    // initiate with size
    list<int> l2(10);

    // initiate with default value
    list<int> l3(5, -1);

    // copy another list
    list<int> l4(l2);

    // copy from vector 
    vector<int> v = {1, 2, 3, 4};
    list<int> l5(v.begin(), v.end());

    // copy from array 
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    list<int> l6(arr, arr+n);

    
    return 0;
}