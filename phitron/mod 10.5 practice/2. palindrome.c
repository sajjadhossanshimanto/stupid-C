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


int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    input_arr(arr, n);

    for(int l=0, r=n-1; r>=l; r--, l++){
        if (arr[l]!=arr[r]){
            printf("NO");
            return 0;
        }
        // else
        // printf("%d != %d", arr[l], arr[r]);
    }

    printf("YES");
    return 0;
}
