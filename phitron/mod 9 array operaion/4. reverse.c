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

void reverse(int arr[], int n){
    for (int i=n-1; i>=0; i--){
        arr[n]=arr[i];
        printf("\n");
        print_arr(arr, n+1);
        for (int j=i; j<=n-1; j++){
            arr[j] = arr[j+1];
        }
        print_arr(arr, n+1);
    }

    arr[n]=0;

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
    print_arr(arr, n);

    return 0;
}
