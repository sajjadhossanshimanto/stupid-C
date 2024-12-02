# include <stdio.h>
# include <string.h>


int main(){
    char s[100];
    fgets(s, 100, stdin);


    for (int l=0, r=strlen(s)-2; l<=r; l++, r--){
        if(s[l]!=s[r]){
            printf("not a palindrom.");
            return 0;
        }
    }
    printf("palindrom confirmed.");

    
    return 0;
}