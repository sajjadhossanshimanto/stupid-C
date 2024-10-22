#include <stdio.h>

int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year%100==0){
        if(year%400==0){
            printf("leap-Year");
        }
        else{
            printf("not leap-Year");
        }
    }
    else if (year%4==0){
        printf("leap-Year");
    }
    else{
        printf("not leap-Year");
    }


    return 0;
}