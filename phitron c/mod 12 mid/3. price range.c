# include <stdio.h>


int main(){
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    int arr[n], c=0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if (arr[i]<=r && arr[i]>=l){
            c++;
        }
    }
    printf("%d", c);

    return 0;
}
