#include <stdio.h>

int is_prime(int num){
    for (int i=2; i<=(int)pow(num, .5); i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a, b, count=0;
    printf("Enter 2 number for the range: ");
    scanf("%d %d", &a, &b);

    // count
    for (int i=a; i<=b; i++){
        if (is_prime(i)){
            count++;
        }
    }

    printf("There are %d prime numbers between %d %d which are: ", count, a, b);
    for (int i=a; i<=b; i++){
        if (is_prime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}
