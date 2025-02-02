# include <stdio.h>


int main(){
    int n, x;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);
    arr[x] = !arr[--x];

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}