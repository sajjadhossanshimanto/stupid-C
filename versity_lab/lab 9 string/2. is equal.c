# include <stdio.h>
# include <string.h>


int main(){
    char s1[100], s2[100];

    printf("enter a string: ");
    fgets(s1, 100, stdin);
    
    printf("enter another string: ");
    fgets(s2, 100, stdin);

    
    for (int i=0; s1[i]!='\0' || s2[i]!='\0'; i++){
        if (s1[i]!=s2[i]){
            printf("string are not equal.");
            return 0;
        }
    }
    printf("strings you entered are equal.");

    
    return 0;
}