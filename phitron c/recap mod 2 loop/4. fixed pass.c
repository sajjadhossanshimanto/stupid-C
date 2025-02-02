# include <stdio.h>


int main(){
    int x;
    do{
        scanf("%d", &x);
        if(x==1999){
            printf("Correct\n");
            return 0;
        }
        else{
            printf("Wrong\n");
        }

    }while(1);
}