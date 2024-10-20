# include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    // n=2*n-1;

    for(int i=0; i<n; i++){
        // space
        for(int j=1; j<n-i; j++){
            printf(" ");
        }
        // star
        for(int j=1; j<=2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=n-1; i>=0; i--){   
        // space
        for(int j=1; j<n-i; j++){
            printf(" ");
        }
        // star
        for(int j=1; j<=2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
