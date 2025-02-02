# include <stdio.h>
# include <string.h>

int main(){

    char s[1000001];
    scanf("%s", &s);

    int count[26];
    for (int i=0; i<26; i++){
        count[i]=0;
    }

    for (int i=0; s[i]!='\0'; i++){
        count[s[i]-'a']+=1;
    }

    for (int i=0; i<26; i++){
        if (count[i]==0) continue;

        printf("%c : %d\n", i+'a', count[i]);
    }

    return 0;
}