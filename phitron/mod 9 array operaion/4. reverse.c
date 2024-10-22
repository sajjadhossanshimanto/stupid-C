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

void reverse(int arr[], int n){
    // array size is n+1
    // so last pos is n
    for(int i=n-1; i>=0; i--){
        swap(arr, i, n);// to last position
        swipe_to_last(arr, n+1, i);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n+1];// changes
    input_arr(arr, n);
    arr[n]=0;

    printf("Before reverse ");
    print_arr(arr, n+1);


    reverse(arr, n);
    printf("After reverse ");
    print_arr(arr, n+1);

    return 0;
}
