#include <stdio.h>

int main(){
    char arr[100] = {'a', 'p', 'p', 'l', 'e', '\0'};
    char arr[] = {'a', 'p', 'p', 'l', 'e', '\0'};
    char arr[6] = "apple";
    char arr[] = "apple";

    // print string
    for (int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }

    // printf("%s", arr);
    return 0;
}