# include <stdio.h>


int main(){

    int a = 5;

    int *x = &a;

    printf("%d\n", x);
    
    int *y = x;
    printf("%d\n",  y);

    int **z = &x;
    printf("%d\n", **z);

    return 0;
}