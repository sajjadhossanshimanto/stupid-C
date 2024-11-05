# include <stdio.h>
# include <string.h>

int main(){
    char str[] = "hello world";
    char sub_s[] = "world";

    for (int i=0; str[i]!='\0'; i++){
        int temp = i;
        int j=0;
        for (;sub_s[j]!='\0'; j++){
            if (sub_s[j]!=str[i]){
                break;
            }
            i++;
        }
        if (sub_s[j]=='\0'){
            printf("sub_string match found");
            return 0;
        }
        i=temp;

    }

    printf("sub_string match not-found");
    return 0;
}