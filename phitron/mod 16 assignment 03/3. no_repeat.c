# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int couunter[100001];
    for(int i=0; i<100001; i++){
        couunter[i] = 0;
    }
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        couunter[arr[i]] += 1;
    }

    int c=0;
    for (int i=0; i<100001; i++){
        if (couunter[i]==1){
            c+=1;
        }
    }

    printf("%d", c);


    return 0;
}