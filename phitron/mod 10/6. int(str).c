# include <stdio.h>
# include <string.h>


int INT(char s[]){
    int num=0;
    for(int i=0; i<strlen(s); i++){
        num = num*10 + (s[i]-'0');
    }
    
    return num;
}

int main(){
    // no sefault function to do-so
    char s[100];
    
    printf("enter a number: ");
    scanf("%s", &s);

    printf("%d", INT(s));

    return 0;
}