#include <stdio.h>
#include <string.h>


int main(){
    // lexical oder
    char str1[] = "aaa";
    char str2[] = "aab";

    // int n = strlen(str1);
    // for (int i=0; i<=n; i++){
    //     if (str1[i]  > str2[i]){
    //         printf("string 1 is begger");
    //         break;
    //     }
    // }

    int n = strcmp(str1, str2);// str2 - str1
    if (n==0){
        printf("strings are equal");
    }
    else if (n<0){
        printf("string 1 is bigger");
    }
    else{
        printf("string 2 is bigger");
    }

    // printf("%d", n);

    return 0;
}