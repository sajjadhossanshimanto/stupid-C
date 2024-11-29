#include <bits/stdc++.h>
using namespace std;


void range(int n, int arr[]){
    for (int i=0; i<n; i++){
        arr[i]=i;
    }
}


void print_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n=5;
    int *a = new int[n];
    range(n, a);// passing a which is adress 
    print_arr(n, a);

    return 0;
}