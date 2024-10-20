# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);


    int arr[n], min=100001;
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if( arr[i]<min){
            min = arr[i];
        }
    }
    // printf("%d\n", min);

    int counter=0;
    for(int i=0; i<n; i++){
        if (arr[i]==min){
            counter+=1;
        }
    }
    // printf("%d\n", counter);

    if(counter&1){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }


    return 0;
}