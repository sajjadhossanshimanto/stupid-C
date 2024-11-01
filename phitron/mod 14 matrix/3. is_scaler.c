# include <stdio.h>



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
    int n=3, m=3;
    int mat[3][3];

    input_matrix(3, 3, mat);

 
    int flag = mat[0][0];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i==j) {
                if (mat[i][j]!=flag){
                    printf("False");
                    return 0;
                }
            }
            else if (mat[i][j]!=0){
                printf("False");
                return 0;
            }

        }
    }
    
    printf("True");
    return 0;
}