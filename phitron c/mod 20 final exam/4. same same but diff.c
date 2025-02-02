# include <stdio.h>


int diff(char a[], char b[]){
    int c = 0;
    for (int i=0; a[i]!='\0'; i++){
        if (a[i]!=b[i]) c++;
    }
    return c;
}


int main(){
    char a[101], b[101], c[101];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    printf("%d", diff(a, b)+diff(a, c));

    return 0;
}