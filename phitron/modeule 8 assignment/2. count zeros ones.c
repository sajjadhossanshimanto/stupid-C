# include <stdio.h>


int main(){
    int n, zeros=0, ones=0, t;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &t);
        if (t==0){
            zeros++;
        } else {
            ones++;
        }
    }

    printf("%d %d", zeros, ones);


    return 0;
}