#include <stdio.h>
#include <stdlib.h>

int main1(){
    //printf("name      : shimanto \n");
    //printf("department: Ame-avionics \n");
    //printf("roll      : 24044017 \n");
    //return 0;

    int integer1;
    int integer2;
    int sum;

    integer1 = 55;
    integer2 = 66;
    sum = integer1+integer2;

    printf("The total sum of %d and %d is %d\n", integer1, integer2, sum);

    return 0;
}

int main(){
    int a, b, c;
    printf("enter value for a => ");
    scanf("%d", &a);
    printf("enter value for b => ");
    scanf("%d", &b);

    c=a+b;
    printf("a+b = %d \n", c);
    c=a-b;
    printf("a-b = %d \n", c);
    c=a*b;
    printf("a*b = %d \n", c);
    c=a/b;
    printf("a/b = %d \n", c);
    c=a%b;
    printf("Remainder when a divided by b = %d \n", c);

    return 0;
}
