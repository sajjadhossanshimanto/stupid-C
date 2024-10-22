#include <stdio.h>

int main(){
    float lowerPresure, upperPresure, wingArea, lift;

    printf("Enter upperPresure, lowerPresure, wingArea => ");
    scanf("%f %f %f", &lowerPresure, &upperPresure, &wingArea);

    lift = (lowerPresure-upperPresure)*wingArea;
    printf("lift of the aircraft = %f", lift);

    return 0;
}
