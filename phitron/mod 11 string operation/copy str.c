# include <stdio.h>


int main(){
    char a[10] = "abcd";
    char copy_a[10];

    for (int i=0; a[i]!='\0'; i++){
        copy_a[i] = a[i];
    }
    // copy_a[i]='\0';//good practise

    printf("%s", copy_a);
    
    return 0;
}