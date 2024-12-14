#include <stdio.h>


void print_array(int n, int arr[]){
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bouble_sort(int n, int arr[]){
    for (int i=0; i<n; i++){
        for (int j=1; j<n-i; j++){
            if (arr[j-1]>arr[j]){
                swap(&arr[j], &arr[j-1]);
            }
        }
    }
}

int binary_search(int n, int arr[], int ele){
    // returns the position
    int l =0, r=n-1;
    while (l<=r){
        int mid = (l+r)/2;
        if (arr[mid]==ele) return mid;
        if (arr[mid]>ele){
            r = mid-1;
        }
        else {
            l=mid+1;
        }
    }
    
    return -1;
}

int main(){
    int n=5;
    int arr[] = {2, 4, 3, 100, 19};
    print_array(n, arr);
    
    bouble_sort(n, arr);
    int pos = binary_search(n, arr, 5);
    printf("%d", arr[pos]);
}