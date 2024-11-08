# include <stdio.h>


int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m];

    int false = 0;
    if (n!=m){
        false=1;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &arr[j]);
            
            if (false) continue;
            
            // checks all logics
            if (j==i || j==m-i-1){
                if (arr[j]!=1){
                    false = 1;
                }
            }
            else{
                if (arr[j]!=0){
                    false = 1;
                }
            }
        }
    }

    if (false) printf("NO");
    else printf("YES");
    return 0;
}