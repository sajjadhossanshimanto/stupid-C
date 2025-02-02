# include <stdio.h>
# include <stdlib.h>


void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);

    int *arr = (int *)calloc(10, sizeof(int));
    int i=-1;
    do {
        i+=1;
        scanf("%d", &arr[i]);
        arr = (int *)realloc(arr, (i+2)*sizeof(int));
    }while(i<n-1);

    print_arr(arr, n);
    return 0;
}