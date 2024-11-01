# include <stdio.h>


void input_matrix(int n, int m, int matrix[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

int matrix_search(int s, int n, int m, int matrix[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(matrix[i][j]==s) return 1;
        }
    }

    return 0;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int mat[n][m];
    input_matrix(n, m, mat);

    int s;
    scanf("%d", &s);
    if (matrix_search(s, n, m, mat)){
        printf("will not take number");
    }else{
        printf("will take number");
    }


    return 0;
}