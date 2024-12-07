# include <stdio.h>


int main(){
    int a[] = {10, 20, 90, 40, 50};

    int n=90;
    // search in array
    int i=0;
    for (; i<5; i++){
        if (a[i]==n){
            printf("preent\n");
            // return 0;
            break;
        }
    }

    if (i>5){
        printf("not present");
    }
    return 0;
}