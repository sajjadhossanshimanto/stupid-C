#include <stdio.h>

int main(){
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=2; i<=(int)pow(num, .5); i++){
        if (num%i==0){
            printf("%d is a composite number", num);
            return 0;
        }
    }

    printf("%d is not a composite number", num);
    return 0;
}
