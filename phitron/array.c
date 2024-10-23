# include <stdio.h>


int is_equ(int arr1[], int arr2[], int n){
    // returns bool
    for (int i=0; i<n; i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}


void copy_arr(int arr[], int to_arr[], int n){
    for (int i=0; i<n; i++){
        to_arr[i] = arr[i];
    }
}
