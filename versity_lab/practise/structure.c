#include <stdio.h>



int main(){
    int n=5;
    int arr[] = {2, 4, 3, 100, 19};
    print_array(n, arr);
    
    bouble_sort(n, arr);
    int pos = binary_search(n, arr, 5);
    printf("%d", arr[pos]);
}