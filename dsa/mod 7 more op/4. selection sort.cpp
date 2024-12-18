#include <bits/stdc++.h>
using namespace std;


// void swape(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void selection_sort(int n, int arr[]){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if (arr[i]>arr[j])
            swap(arr[i], arr[j]);
        }
    }
}

void print_arr(int n, int arr[]){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 300, 7, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    cout << "before: ";
    print_arr(n, arr);

    selection_sort(n, arr);
    cout << "after: ";
    print_arr(n, arr);



    return 0;
}