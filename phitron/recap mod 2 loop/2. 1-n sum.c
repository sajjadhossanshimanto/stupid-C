# include <stdio.h>


int main(){
    long long int n;
    scanf("%lld", &n);

    // no need of loop
    if(n>0){
        printf("%lld", ((n+1)*n)/2);
    }else{
        n = -n;
        printf("%lld", -((n+1)*n)/2);
    }


    return 0;
}