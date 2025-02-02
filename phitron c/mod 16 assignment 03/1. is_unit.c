# include <stdio.h>



void input_matrix(int n, int m, int matrix[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int mat[n][n];

    input_matrix(n, n, mat);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j) {
                if (mat[i][j]!=1){
                    printf("NO");
                    return 0;
                }
            }
            else if (mat[i][j]!=0){
                printf("NO");
                return 0;
            }

        }
    }
    
    printf("YES");
    return 0;
}