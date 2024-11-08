# include <stdio.h>


void print_maatrix(int n, int m, int mat[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void input_maatrix(int n, int m, int mat[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    input_maatrix(n, m, mat);

    // col
    for (int i=0; i<m; i++){
        swap(&mat[0][i], &mat[n-1][i]);
    }
    // row
    for (int i=0; i<n; i++){
        swap(&mat[i][0], &mat[i][m-1]);
    }

    print_maatrix(n, m, mat);

    return 0;
}