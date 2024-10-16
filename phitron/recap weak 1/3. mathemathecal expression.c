# include <stdio.h>


int main(){
    int a, b, c;
    char e;

    scanf("%d %c %d = %d", &a, &e, &b, &c);

    if (e=='+'){
        if (a+b==c){
            printf("Yes");
        }else{
            printf("%d", a+b);
        }
    }
    else if (e=='-'){
        if (a-b==c){
            printf("Yes");
        }else{
            printf("%d", a-b);
        }
    }
    else if (e=='*'){
        if (a*b==c){
            printf("Yes");
        }else{
            printf("%d", a*b);
        }
    }


    return 0;
}