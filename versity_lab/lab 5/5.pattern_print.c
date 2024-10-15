// sajjad hossan shimanto
// 24044017

# include <stdio.h>

int main(){
    int n;

    do{
        printf("Enter height of triangle: ");
        scanf("%d", &n);

        for (int i=1; i<=n; i++){
            for (int j=0; j<i; j++){
                printf("*");
            }
            printf("\n");
        }
    }while(1);


    return 0;
}

