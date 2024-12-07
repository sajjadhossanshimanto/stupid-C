#include <stdio.h>
#include <string.h>


int main(){
    char str[] = "hello world";
    char str2[100];

    int n=strlen(str);
    for (int i=n-1; i>=0; i--){
        printf("%c", str[i]);
    }
    // printf("%d", n);

    // printf("%s", str2);

    return 0;
}