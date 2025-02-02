# include <stdio.h>
# include <math.h>


int main(){

    int a, b;
    int *x = &a; 
    int *y = &b; 

    scanf("%d %d", x, y);
    printf("%d", abs(*x-*y));

    return 0;
}