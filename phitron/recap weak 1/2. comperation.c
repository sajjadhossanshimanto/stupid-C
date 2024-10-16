# include <stdio.h>


int main(){
    int a, b;
    char c;

    scanf("%d %c %d", &a, &c, &b);

    if(c=='='){
        if (a==b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    else if (c=='>'){
        if (a>b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    else if(c=='<'){
        if (a<b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    else{
        printf("nothing => .%c.\n", c);
    }


    return 0;
}