# include <stdio.h>
# include <string.h>


int main(){
    char s[10001];
    char sub[] = "hello";
    scanf("%s", s);

    int i=0, j=0;
    for (; i<strlen(s) || j<5; i++){
        if (s[i]==sub[j]){
            j++;
        }
    }

    if (j>=5){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}