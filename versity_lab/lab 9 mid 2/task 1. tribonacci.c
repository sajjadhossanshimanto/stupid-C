# include <stdio.h>

void tribonacci(int n, int arr[n]){
    if (n>=1){
        arr[0] = 0;
    }
    if (n>=2){
        arr[1] = 1;
    }
    if (n>=3){
        arr[2] = 1;
    }
    if (n<=3){
        return;
    }

    for (int i=3; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
}

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int arr[n];
    tribonacci(n, arr);

    printf("Tribonacci Sequence: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
