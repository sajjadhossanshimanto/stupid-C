// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

# include <stdio.h>

int main(){
    int n, t;
    scanf("%d", &n);

    // non array solution
    for (int i=0; i<n; i++){
        scanf("%d", &t);
        if(t<=10){
            printf("A[%d] = %d\n", i, t);
        }
    }

    return 0;
}