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

void del(int index, int arr[], int n){
    // shift space
    for (int i=index; i<n; i++){
        arr[i] = arr[i+1];
    }

    arr[n]=0;

}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    input_arr(arr, n);

    printf("before deletion ");
    print_arr(arr, n);

    int index;
    printf("enter index to delete value from :");
    scanf("%d", &index);

    del(index, arr, n);
    printf("After deletion ");
    print_arr(arr, n);

    return 0;
}
