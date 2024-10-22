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

int copy_arr[100000];
int* copy(int arr[], int n){

    for(int i=0; i<n; i++){
        copy_arr[i] = arr[i];
    }

    return copy_arr;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    input_arr(arr, n);

    print_arr(copy(arr, n), n);


    return 0;
}