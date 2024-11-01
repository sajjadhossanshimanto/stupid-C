// demarits
// 1. time complexity heigh
// 2. change of error
// 3. memory leak
# include <stdio.h>
# include <stdlib.h>

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

int main(){
    // int *arr = (int *)malloc(5*sizeof(int));
    int *arr = (int *)calloc(5, sizeof(int));

    print_arr(arr, 5);// without assigning anything
    for (int i=0; i<5; i++){
        arr[i] = i+1;
    }
    print_arr(arr, 5);



    // reallowcation
    //           realloc(pointer, size);
    arr = (int *)realloc(arr, 10*sizeof(int));
    //we need to be carefull here
    if (arr==NULL){
        // that means there are not suffecient scape that we want.
        printf("memory error");
        // in that case 
    }

    for (int i=5; i<10; i++){
        arr[i] = 100*i;
    }
    print_arr(arr, 10);



    // de-allowcating the whole memory
    free(arr);
    return 0;
}