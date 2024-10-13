# include <stdio.h>
# include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    int sum=0, t=0;
    do{
        scanf("%d", &t);
        sum+=t;
        n--;
    }while(0<n && getchar()!="\n");

    printf("%d", abs(sum));
}