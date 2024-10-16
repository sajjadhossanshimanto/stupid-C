/*
In C and in C++ single quotes identify a single character,
while double quotes create a string literal. 
'a' is a single a character literal, 
while "a" is a string literal containing an 'a' and a null terminator (that is a 2 char array).
*/

# include <stdio.h>


int main(){
    int a, b;
    char c;

    scanf("%d %c %d", &a, &c, &b);

    if(c=='='){// works with single coute('=') fails with double coute("=")
        if (a==b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    else if (c=='>'){
        if (a>b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    else if(c=='<'){
        if (a<b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }
    else{
        printf("nothing => .%c.\n", c);
    }


    return 0;
}