# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        
        for (int j=1; j<a; j++){
            printf("%d ", j);
        }
        for (int j=a; j>0; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}