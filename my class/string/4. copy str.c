#include <stdio.h>
#include <string.h>


int main(){
    char str[] = "hello";
    char str2[100];

    // for (int i=0; str[i]!='\0'; i++){
    //     str2[i] = str[i];
    // }

    strcpy(str2, str);
    printf("%s", str2);

    return 0;
}