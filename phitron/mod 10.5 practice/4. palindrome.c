# include <stdio.h>
# include <string.h>

int main(){
    char arr[10001];
    scanf("%s", arr);

    int n = strlen(arr);

    for(int l=0, r=n-1; r>=l; r--, l++){
        if (arr[l]!=arr[r]){
            printf("NO");
            return 0;
        }
        // else
        // printf("%d != %d", arr[l], arr[r]);
    }

    printf("YES");
    return 0;
}
