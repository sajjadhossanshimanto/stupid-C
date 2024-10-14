#include <stdio.h>

int main(){
    int code, alt=0, speed=0, heading=0;

    while (1){
        printf("\nManu\nOpton 1: Set Altitude, Speed, heading\nOption 2: Get last set data\nOption 3: Exits the program.\n\n");
        printf("Enter any Option: ");
        scanf("%d", &code);
        switch(code){
            case 1:
                printf("Enter Altitude, speed, heading: ");
                scanf("%d %d %d", &alt, &speed, &heading);
                break;
            case 2:
                printf("Last entered Altitude, speed, heading is %d, %d, %d \n", alt, speed, heading);
                break;
            case 3:
                exit(0);
            default:
                printf("An invalid option prompts the user to try again\n");
                break;
        }
    }

    return 0;
}
