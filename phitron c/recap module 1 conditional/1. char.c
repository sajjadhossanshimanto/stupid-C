# include <stdio.h>


int main(){
    char c;
    scanf("%c", &c);


    // printf("%d", c);
    if('A'<=c && c<='Z'){
        printf("%c", c+32);
    } else {
        printf("%c", c-32);
    }

    return 0;
}