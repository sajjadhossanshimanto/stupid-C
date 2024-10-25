# include <stdio.h>


int main(){

    int n, t;
    scanf("%d %d", &n, &t);
    
    int arr[n], sum=0, c=0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
        if (sum<=t){
            c+=1;
        }
    }

    printf("%d", c);




    return 0;
}