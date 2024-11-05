# include <stdio.h>

// do while loop
int main(){
    int n, a=0, b=1, fib=0, i;

    printf("Enter n for fibonacci: ");
    scanf("%d", &n);

    i = 1;
    do{
        printf("%d ", &fib);
        fib = a+b;
        a = b;
        b = fib;
    }while( n<=i );
    printf("\n");
}