# include <stdio.h>
# include <stdlib.h>


int main(){
    FILE *fptr;
    fptr = fopen("test_file.txt", "w");
    if (fptr == NULL){
        printf("ERROR!");
        exit(1);
    }

    char name[100];
    printf("enter your name: ");
    scanf("%s", name);

    fprintf(fptr, "your name is: %s", name);
    fclose(fptr);

    return 0;
}
