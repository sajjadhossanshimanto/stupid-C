# include <stdio.h>

int sum(int arr[], int start, int n){
    if (start==n){
        return 0;
    }

    return arr[start] + sum(arr, start+1, n);
}

int main(){

    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d", sum(arr, 0, n));

    return 0;
}