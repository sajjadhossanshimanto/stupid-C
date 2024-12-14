#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *file;
    file = fopen("file.txt", "w");
    if (file==NULL){
        printf("ERROR");
        exit(1);
    }

    fprintf(file, "%s\n", "shimanto hossan");
    
    char name[100];
    fclose(file);
    file = fopen("file.txt", "r");
    fscanf(file, "%s", name);
    
    printf("%s", name);
}