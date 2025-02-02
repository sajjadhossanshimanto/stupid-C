# include <stdio.h>
# include <string.h>


int main(){
    char a[600];

    // gets(a);
    // printf("%s", a);// hello world --> ok

    fgets(a, 20, stdin);// must import string.h
    printf("%s", a);

    return 0;
}


