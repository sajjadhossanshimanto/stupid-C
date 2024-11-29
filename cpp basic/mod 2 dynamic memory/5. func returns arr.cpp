#include <bits/stdc++.h>
using namespace std;


void print_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* stac_arr(){
    int arr[] = {1, 2, 3};
    return arr;
}

int* dynamic_arr(){
    int* arr = new int[3];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;

    return arr;
}

int main(){
    int *a1 = stac_arr();
    int *a2 = dynamic_arr();
    
    // print_arr(3, a1);// segment error
    print_arr(3, a2);
    
    return 0;
}