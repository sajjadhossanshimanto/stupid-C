# include <stdio.h>
# include <string.h>


int main(){

    char s[100];
    scanf("%s", s);

    int len=0;
    for(int i=0; s[i]!='\0'; i++){
        len++;
    }

    printf("len is %d\n", len);


    /// same thing
    printf("len is %lld", strlen(s));
    


    return 0;
}