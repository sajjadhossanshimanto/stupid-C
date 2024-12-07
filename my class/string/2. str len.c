#include <stdio.h>
#include <string.h>


int main(){
    char arr[] = "apple";

    // // print string
    // int len=0;
    // for (int i=0; arr[i]!='\0'; i++){
    //     len++;
    // }

    int len = strlen(arr);

    printf("%d", len);

    // printf("%s", arr);
    return 0;
}