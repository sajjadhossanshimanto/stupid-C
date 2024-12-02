# include <stdio.h>
# include <stdio.h>


int main(){
    char s[100];
    fgets(s, 100, stdin);

    int len=0;
    for (int i=0; s[i]!='\0'; i++){
        len++;
    }
    printf("len of inputed str is: %d", len);

    
    return 0;
}