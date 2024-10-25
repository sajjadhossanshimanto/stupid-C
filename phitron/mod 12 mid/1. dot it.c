# include <stdio.h>


int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }


    return 0;
}
