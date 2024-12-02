// uses while loop and user define function to calculate factorial
#include <stdio.h>


int factorial(int n){
    if (n==0) return 1;

    int fac = 1;
    int i=1;
    while(i<=n){
        fac*=i;
        i++;
    }

    return fac;
}


int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The factorial of %d is %d.", n, factorial(n));
    return 0;
}
