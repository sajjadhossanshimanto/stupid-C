#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *datafile, *oddfile, *evenfile;
    datafile = fopen("data.txt", "r");
    oddfile = fopen("odd.txt", "w");
    evenfile = fopen("even.txt", "w");
    if (datafile==NULL || oddfile==NULL || evenfile==NULL){
        printf("ERROR");
        exit(1);
    }

    int num;
    while (fscanf(datafile, "%d", &num)!=EOF){
        if (num&1){
            fprintf(oddfile, "%d\n", num);
        }
        else{
            fprintf(evenfile, "%d\n", num);
        }
    }
    fclose(datafile);
    fclose(oddfile);
    fclose(evenfile);
}