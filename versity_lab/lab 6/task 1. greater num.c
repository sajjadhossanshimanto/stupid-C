#include <stdio.h>

void greater_two(int a, int b, int c, int *greater1, int *greater2){
    if (a>b && a>c){
        *greater1 = a;
        if (b>c){
            *greater2 = b;
        }
        else{
            *greater2 = c;
        }
    }
    else if (b>a && b>c){
        *greater1 = b;
        if (a>c){
            *greater2 = a;
        }
        else{
            *greater2 = c;
        }
    }
    else{
        *greater1 = c;
        if (a>b){
            *greater2 = a;
        }
        else{
            *greater2 = b;
        }
    }
}

int main(){
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int g1, g2;
    greater_two(a, b, c, &g1, &g2);
    printf("2 greater numbrs are %d %d", g1, g2);
}