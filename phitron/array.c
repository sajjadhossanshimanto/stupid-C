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


void swap(int arr[], int pos1, int pos2){
    int t;
    t = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = t;
}

void swipe_to_last(int arr[], int n, int pos){
    // here n expecte tobe size of array
    for(int i=pos; i<n-1; i++){
        swap(arr, i, i+1);
    }
}

void reverse_one(int arr[], int n){
    // array size is n+1
    // so last pos is n
    for(int i=n-1; i>=0; i--){
        swap(arr, i, n);// to last position
        swipe_to_last(arr, n+1, i);
    }
}