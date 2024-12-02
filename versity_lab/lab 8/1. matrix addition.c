# include <stdio.h>

void input_matrix(int n, int m, int mat[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void print_matrix(int n, int m, int mat[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n, m;;
    printf("enter number of rows and col: ");
    scanf("%d %d", &n, &m);

    int mat1[n][m];
    printf("enter elements of %d*%d matrix A:\n", n, m);
    input_matrix(n, m, mat1);

    int mat2[n][m];
    printf("enter elements of %d*%d matrix B:\n", n, m);
    input_matrix(n, m, mat2);

    printf("the sum of (2A + 3B) is: \n");
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", 2*mat1[i][j]+3*mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}