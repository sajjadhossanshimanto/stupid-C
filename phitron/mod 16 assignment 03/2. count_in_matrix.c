# include <stdio.h>



void input_matrix(int n, int m, int matrix[n][m]){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main(){
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    int mat[n][m];

    int counter[1001];
    for (int i=0; i<1001; i++){
        counter[i] = 0;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &mat[n][m]);
            counter[mat[n][m]] +=1;
        }
    }

    int t;
    for (int i=0; i<x; i++){
        scanf("%d", &t);
        printf("output -> %d\n", counter[t]);
    }
    
    return 0;
}