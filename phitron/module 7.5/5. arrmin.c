// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

# include <stdio.h>

int main(){
    int n, t, low_pos, lowest=100000;
    scanf("%d", &n);

    // non array solution
    for (int i=0; i<n; i++){
        scanf("%d", &t);
        if(t<lowest){
            lowest = t;
            low_pos = i;
        }
    }


    printf("%d %d", lowest, low_pos+1);
    return 0;
}