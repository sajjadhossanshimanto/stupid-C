# include <stdio.h>
# include <string.h>


int main(){

    char a[21];
    char b[21];

    scanf("%s", &a);
    scanf("%s", &b);

    if (strcmp(a, b)>=0){
        printf("%s", b);
    }
    else{ 
        printf("%s", a);
    }

    return 0;
}