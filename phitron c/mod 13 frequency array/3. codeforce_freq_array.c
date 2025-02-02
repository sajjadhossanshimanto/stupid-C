# include <stdio.h>


int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    int freq[m+1];
    for (int i=0; i<=m; i++){
        freq[i]=0;
    }
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        freq[arr[i]]+=1;
    }

    for (int j=1; j<=m; j++){
        printf("%d\n", freq[j]);
    }


    return 0;
}