#include <stdio.h>


int odd_sum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if (i&1==1){
            sum+=i;
        }
    }

    return sum;
}


int main(){
    int num, sum;

    printf("Enter the value of n: ");
    scanf("%d", &num);

    sum = odd_sum(num);
    printf("\nEnter sum of odd number from 1 to %d is %d ", num, sum);
    return 0;
}
