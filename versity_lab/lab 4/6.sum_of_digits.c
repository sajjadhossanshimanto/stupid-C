// sajjad hossan shimanto
// 24044017

# include <stdio.h>

int main(){
    int n, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("sum of all the digits in %d is: ", n);
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    printf("%d", sum);

    return 0;
}
