# include <stdio.h>
# include <string.h>


int main(){
    char s1[1001], s2[1001], s3[1001];
    scanf("%s %s %s", s1, s2, s3);

    if (strcmp(s1, s2)<=0 && strcmp(s1, s3)<=0){// s1 min
        printf("%s\n", s1);
    }
    else if (strcmp(s2, s1)<=0 && strcmp(s2, s3)<=0){
        printf("%s\n", s2);
    }
    else{
        printf("%s\n", s3);
    }


    if (strcmp(s1, s2)>=0 && strcmp(s1, s3)>=0){// s1 max
        printf("%s\n", s1);
    }
    else if (strcmp(s2, s1)>=0 && strcmp(s2, s3)>=0){
        printf("%s\n", s2);
    }
    else{
        printf("%s\n", s3);
    }

    return 0;
}

