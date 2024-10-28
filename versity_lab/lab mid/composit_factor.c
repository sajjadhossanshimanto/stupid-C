#include <stdio.h>


int is_prime(int num){
    for (int i=2; i<=(int)pow(num, .5); i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}

void factor(int num){
    printf("factors of %d are: ", num);
    for (int i=1; i<=num; i++){
        if (num%i==0){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int a, b, count=0;
    printf("Enter 2 number for the range: ");
    scanf("%d %d", &a, &b);

    for (int i=a; i<=b; i++){
        if (is_prime(i)){
            continue;
        }
        else{
            factor(i);
        }
    }


    return 0;
}
