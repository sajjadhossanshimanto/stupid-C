# include <stdio.h>
# include <string.h>

void solve(){
    char a[51];
    char b[51];

    scanf("%s %s", &a, &b);

    

    if (strlen(a)<=strlen(b)){
        int i=0;
        for (; i<strlen(a); i++){
            printf("%c%c", a[i], b[i]);
        }

        for (; b[i]!='\0'; i++){
            printf("%c", b[i]);
        }
    }
    else if (strlen(a)>strlen(b)){
        int i=0;
        for (; i<strlen(b); i++){
            printf("%c%c", a[i], b[i]);
        }
        
        for (; a[i]!='\0'; i++){
            printf("%c", a[i]);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    while (n){
        solve();
        printf("\n");
        n--;
    }


    return 0;
}