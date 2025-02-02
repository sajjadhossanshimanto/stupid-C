# include <stdio.h>


int main(){
    int n, a, b;
    scanf("%d", &n);

    while(n>0){
        scanf("%d %d", &a, &b);

        int t;
        if(a>b){
            t = a;
            a = b;
            b = t;
        }

        int sum=0;
        for(int i=a+1; i<b; i++){
            if(i&1){
                sum+=i;
            }
        }
        printf("%d\n", sum);
        n--;
    }



    return 0;
}