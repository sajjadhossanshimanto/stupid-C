# include <stdio.h>


int main(){
    int a;
    scanf("%d", &a);

    int sum = 0;
    for(int i=a; i>0; i=i/10){
        sum+=i%10;
    }
    printf("%d", sum);

    return 0;
}