# include <stdio.h>
# include <string.h>


union Data {
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    data.i = 10;
    printf("Integer value: %f\n", data.f);

    data.f = 20.5;
    printf("Float value: %s\n", data.str);

    strcpy(data.str, "Hello, world!");
    printf("String value: %s\n", data.str);

    return 0;
}