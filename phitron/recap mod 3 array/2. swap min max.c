# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);


    int arr[n], max_pos=0, min_pos=0;
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>arr[max_pos]){
            max_pos = i;
        }
        if( arr[i]<arr[min_pos]){
            min_pos = i;
        }
    }

    //swap
    int t;
    t = arr[max_pos];
    arr[max_pos] = arr[min_pos];
    arr[min_pos] = t;

    //print
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}