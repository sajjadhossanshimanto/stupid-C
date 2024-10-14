#include <stdio.h>

int main(){
    int voltage;

    printf("Enter voltage Level: ");
    scanf("%d", &voltage);

    if (voltage<18){
        printf("Warning: Critical Low Battery!");
    }
    else if (voltage<=24){
        printf("Warning: Low Battery!");
    }
    else if (voltage<=28){
        printf("Buttery voltage is normal");
    }
    else if (voltage<=35){
        printf("Warning: High Battery Voltage!");
    }
    else if (voltage>35){
        printf("Warning: Critical High Battery Voltage!");
    }

    return 0;
}
