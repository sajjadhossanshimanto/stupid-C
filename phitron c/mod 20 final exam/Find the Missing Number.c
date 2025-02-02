# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    long long int m, a, b, c;
    for (int i=0; i<n; i++){
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        int mul = (a*b*c);

        if (m==0){
            printf("0\n");
        }
        else if(m<mul || m%mul!=0){
            printf("-1\n");
        }
        else{
          printf("%lld\n", m/mul);
        }
    }

    return 0;
}