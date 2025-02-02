// need to find abs diff between 2 diogonal
# include <stdio.h>
# include <math.h>

void input_matrix(int n, int m, int matrix[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}
void print_matrix(int n, int m, int matrix[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}



int main(){

    int n;
    scanf("%d", &n);
    int mat[n][n];

    input_matrix(n, n, mat);
    // print_matrix(n, n, mat);

    int d1 = 0, d2 = 0;
    for (int i=0; i<n; i++){
        d1 += mat[i][i];
        d2 += mat[i][n-i-1];
    }

    // printf("%d %d\n", d1, d2);
    int diff_sum = d1 - d2;
    if (diff_sum<0){
        printf("%d", -diff_sum);
    }
    else{
        printf("%d", diff_sum);
    }


    return 0;
}