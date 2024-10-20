# include <stdio.h>


int main(){
    int n, a;
    scanf("%d", &n);

    while(n>0){
        scanf("%d", &a);
        
        long long int fac=1;
        for(int i=1; i<=a; i++){
            fac*=i;
        }
        printf("%lld\n", fac);
        n--;
    }



    return 0;
}