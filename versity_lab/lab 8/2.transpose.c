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

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n, m;;
    printf("enter number of rows and col: ");
    scanf("%d %d", &n, &m);

    int mat1[n][m];
    printf("enter elements of %d*%d matrix A:\n", n, m);
    input_matrix(n, m, mat1);

    for (int i=0; i<n; i++){
        for (int j=i+1; j<m; j++){
            swap(&mat1[i][j], &mat1[j][i]);
        }
        printf("\n");
    }

    printf("matrix after transpose:\n");
    print_matrix(n, m, mat1);

    return 0;
}