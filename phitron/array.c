# include <stdio.h>


void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void input_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

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
