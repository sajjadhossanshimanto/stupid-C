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

void insert(int element, int index, int arr[], int n){
    // create space
    for (int i=n; i>=index; i--){
        arr[i+1] = arr[i];
    }

    arr[index] = element;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n+1];// one extra for inserting new element
    input_arr(arr, n);

    printf("before insertion ");
    print_arr(arr, n);

    int new_ele, index;
    printf("enter element & index :");
    scanf("%d %d", &new_ele, &index);

    insert(new_ele, index, arr, n);
    printf("After insertion ");
    print_arr(arr, n+1);

    return 0;
}
