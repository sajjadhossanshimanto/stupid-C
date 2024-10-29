# include <stdio.h>
# include <string.h>

int main(){

    char s[1000001];
    // fgets(s, 1000001, stdin);
    scanf("%s", &s);

    int count[26];
    for (int i=0; i<26; i++){
        count[i]=0;
    }

    for (int i=0; s[i]!='\0'; i++){
        // scanf("%c", &c);
        // if (c=='\0'){
        //     break;
        // }
        count[s[i]-'a']+=1;
    }

    printf("%d", count[0]);

    return 0;
}