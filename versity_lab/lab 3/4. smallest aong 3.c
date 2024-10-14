#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c){
        if (b>c){
            printf("%d is the smallest number", c);
        }
        else{
            printf("%d is the smallest number", b);
        }
    }
    else if (b>a && b>c){
        if (a>c){
            printf("%d is the smallest number", c);
        }
        else{
            printf("%d is the smallest number", a);
        }
    }
    else{
        if (a>b){
            printf("%d is the smallest number", b);
        }
        else{
            printf("%d is the smallest number", a);
        }
    }

    return 0;
}
