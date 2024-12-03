# include <stdio.h>

void input_arr(int arr[], int n){
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

int max(int arr[], int n){
    int index_max = 0;
    for(int i=0; i<n; i++){
        if (arr[index_max]<arr[i]){
            index_max = i;
        }
    }

    return index_max;
}

int main(){
    int n=10;
    int arr[n];
    //int arr[10] = {5, -3, 7, 6, 2, 1, 8, 3, 0, 4};

    printf("enter 10 numbers: ");
    input_arr(arr, n);
    int max_index = max(arr, n);
    printf("Maxium value: %d (index: %d)", arr[max_index], max_index);

    return 0;
}
