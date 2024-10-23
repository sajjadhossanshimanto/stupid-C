# include <stdio.h>
# include <string.h>
# include <stdlib.h>


char* concert(char a[], char b[]){
    int len = strlen(a) + strlen(b)-1;
    char* new = (char*)malloc(len * sizeof(char));
    // char new[strlen(a)+strlen(b)-1];

    int i=0;
    for (; a[i]!='\0'; i++){
        new[i] = a[i];
    }

    for (int j=0; b[j]!='\0'; i++, j++){
        new[i] = b[j];
    }

    return new;
}


int main(){

    char a[10]="hello";
    char b[10]=" world";

    printf("%s\n", concert(a, b));
    printf("%s\n", strcat(a, b));
    printf("%s\n", b);
    printf("%s\n", a);// a  is changed
    
    return 0;
}