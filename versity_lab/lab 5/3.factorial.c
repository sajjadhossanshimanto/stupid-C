// sajjad hossan shimanto
// 24044017

# include <stdio.h>

int main(){
    int n, fac=1;

    do{
        printf("Enter a number: ");
        scanf("%d", &n);

        fac = 1;
        for (int i=1; i<=n; i++){
            fac*=i;
        }
        printf("%d! is: %d\n", n, fac);
    }while(1);


    return 0;
}
