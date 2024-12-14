#include <stdio.h>
#include <stdlib.h>


void print_array(int n, int arr[]){
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n = 5;
    FILE *file;
    file = fopen("file.bin", "rb+");
    if (file==NULL){
        printf("ERROR");
        exit(1);
    }

    int arr[] = {1, 2, 3, 4, 5};
    fwrite(arr, sizeof(int), n, file);
    // fclose(file);
    
    rewind(file);
    int arr1[n];
    // file = fopen("file.bin", "rb");
    fread(arr1, sizeof(int), n, file);
    print_array(n, arr);
    print_array(n, arr1);
}