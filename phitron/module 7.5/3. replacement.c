// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

# include <stdio.h>

int main(){
    int n, t;
    scanf("%d", &n);
    int arr[n];

    // for single line array instant output is buffered
    for (int i=0; i<n; i++){
        scanf("%d", &t);
        if(t<0){
            printf("2 ");
        }
        else if(t!=0){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }

    return 0;
}