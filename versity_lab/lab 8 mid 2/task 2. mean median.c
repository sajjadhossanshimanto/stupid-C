# include <stdio.h>

void input_arr(int n, int arr[n]){
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

float mean(int n, int arr[n]){
    float sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum/n;
}

float median(int n, int arr[n]){
    if (n&1){// odd
        return (float)arr[(n-1)/2];
    }

    int mid = n/2;
    return (float)(arr[mid]+arr[mid-1])/2;
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted elements: ");
    input_arr(n, arr);

    printf("Mean: %f\n", mean(n, arr));
    printf("Median: %f", median(n, arr));

    return 0;
}
