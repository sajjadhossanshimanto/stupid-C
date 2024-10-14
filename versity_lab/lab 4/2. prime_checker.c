// sajjad hossan shimanto
// 24044017

# include <stdio.h>
# include <math.h>

int main(){
    int n;

    do{
        printf("Enter a valid number( greater than 1): ");
        scanf("%d", &n);
    }while(n<=1);

    if (n==2){
        printf("the number entered is a prime number\n");
        return 0;
    }
    for(int i=2; i<=(int)pow(n, .5); i++){
        if (n%i==0){
            printf("the number entered is not a prime number\n");
            return 0;
        }
    }

    printf("the number entered is a prime number\n");
    return 0;
}
