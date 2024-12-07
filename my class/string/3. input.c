#include <stdio.h>
// #include <


int main(){
    char str[10];

    // for (int i=0; i<10; i++){
    //     scanf("%c", &str[i]);
    // }
    // scanf("%s", str);
    
    // with space
    // gets(str);
    fgets(str, 10, stdin);

    printf("%s", str);

    return 0;
}