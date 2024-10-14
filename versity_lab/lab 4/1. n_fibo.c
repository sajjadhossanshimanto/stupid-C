// sajjad hossan shimanto
// 24044017

# include <stdio.h>

int main(){
    int a=0, b=1, i=1, n, fib=0;

    printf("Enter number of fibonacci you want: ");
    scanf("%d", &n);

    do{
        printf("%d ", a);
        fib = a+b;
        a = b;
        b = fib;
        i++;
    }while(i<=n);


    return 0;
}
