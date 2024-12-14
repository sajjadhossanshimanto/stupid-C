#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *file;
    file = fopen("file.txt", "r+");
    if (file==NULL){
        printf("ERROR");
        exit(1);
    }

    fprintf(file, "%s", "shimanto hossan");
    rewind(file);
    
    char name[100];
    fgets(name, 100, file);
    
    printf("%s", name);
}