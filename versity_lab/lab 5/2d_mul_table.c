# include <stdio.h>

int main(){
    int n;

    do{
        printf("Enter a number: ");
        scanf("%d", &n);

        printf(" ");
        for(int i=1; i<=10; i++){
            printf("%8d", i);
        }
        printf("\n");
        for(int i=1; i<=80; i++){
            printf(".");
        }
        printf("\n");

        for (int i=1; i<=n; i++){
            printf("%d", i);
            for (int j=1; j<=10; j++){
                printf("%8d", i*j);
            }
            printf("\n");
        }
    }while(1);


    return 0;
}
