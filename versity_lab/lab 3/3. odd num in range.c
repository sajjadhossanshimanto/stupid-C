#include <stdio.h>

int main(){
    int num, i, sum;

    printf("Enter the value of n: ");
    scanf("%d", &num);

    sum = 0;
    i=1;
    while(i<=num){
        if (i%2==1){
            sum+=i;
        }
        i++;
    }

    printf("\nEnter sum of odd number from 1 to %d is %d ", num, sum);
    return 0;
}
