# include <stdio.h>

void input_arr(int arr[], int n){
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

int search(int ele, int arr[], int n){
    for(int i=0; i<n; i++){
        if (arr[i]==ele){
            return ele;
        }
    }

    return -1;
}

int main(){
    int n=10;
    int arr[n];
    //int arr[10] = {5, -3, 7, 6, 2, 1, 8, 3, 0, 4};

    printf("Enter 10 numbers: ");
    input_arr(arr, n);

    int ele;
    printf("Enter a number to search: ");
    scanf("%d", &ele);

    int pos = search(ele, arr, n);
    if (pos!=-1){
        printf("Number %d is at index: %d", ele, pos);
    }
    else{
        printf("Number is not present");
    }

    return 0;
}
