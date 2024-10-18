# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    // no need of loop
    if(n>0){
        printf("%d", ((n+1)*n)/2);
    }else{
        n = -n;
        printf("%d", -((n+1)*n)/2);
    }


    return 0;
}