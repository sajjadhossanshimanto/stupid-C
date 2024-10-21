#include <stdio.h>

void greater_two(int a, int b, int c){
    printf("2 greater numbrs are ");
    if (a>b && a>c){
        printf("%d ", a);
        if (b>c){
            printf("%d ", b);
        }
        else{
            printf("%d ", c);
        }
    }
    else if (b>a && b>c){
        printf("%d ", b);
        if (a>c){
            printf("%d ", a);
        }
        else{
            printf("%d ", c);
        }
    }
    else{
        printf("%d ", c);
        if (a>b){
            printf("%d ", a);
        }
        else{
            printf("%d ", b);
        }
    }
}

int main(){
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    greater_two(a, b, c);

}
