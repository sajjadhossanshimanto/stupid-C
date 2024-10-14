#include <stdio.h>

int main(){
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("factors are-> 1 ");
    for (i=2; i<=(int)pow(num, .5); i++){
        if (num%i==0){
            printf("%d %d ", i, num/i);
        }
    }
    printf("%d", num);

    return 0;
}
