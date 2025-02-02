# include <stdio.h>
# include <string.h>


char switch_case(char c){
    if ('a'<=c && c<='z'){
        return c-32;
    }
    else if ('A'<=c && c<='Z'){
        return c+32;
    }
    return ' ';
}

int main(){
    char s[100001];

    fgets(s, 100001, stdin);
    for (int i=0; i<strlen(s)-1; i++){
        printf("%c", switch_case(s[i]));
    }

    return 0;
}