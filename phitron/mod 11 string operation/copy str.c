# include <stdio.h>
# include <string.h>


int main(){
    char a[10] = "abcd";
    char copy_a[10]="hello";

    // for (int i=0; a[i]!='\0'; i++){
    //     copy_a[i] = a[i];
    // }
    // // copy_a[i]='\0';//good practise

    //     dst,  source --> ulta
    strcpy(copy_a, a);

    printf("%s", copy_a);
    
    return 0;
}