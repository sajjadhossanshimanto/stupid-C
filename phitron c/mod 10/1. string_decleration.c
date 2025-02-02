# include <stdio.h>


int main(){
    char str[5] = "Hello";
    // printf("%s\n", str);// returns with juprish char

    char str2[6] = "Hello\0";
    // printf("%s\n", str2);// prints perfect

    char str3[] = "Hello\0";
    // printf("%s\n", str3);// prints perfect

    
    char str4[] = "Hello";// auto adds /0
    printf("%s", str4);

    return 0;
}