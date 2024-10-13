# include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int i=0, sum=0, t=0;
    do{
        scanf("%d", &t);
        sum+=t;
        i++;
    }while(i<n && getchar()!="\n");

    printf("%d", sum);
}