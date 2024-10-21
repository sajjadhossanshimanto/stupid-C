# include <stdio.h>


int calculateRectangularWingArea(int length, int width){
    return length*width;
}

int calculateTrapezoidalWingArea(int base1, int base2, int height){
    return .5*(base1+base2)*height;
}

int main(){
    int n;
    printf("\nTo calculate wing area chose option: \n1. Rectangular Wing\n2. Trapezoidal Wing\n\n Press a number according to the option: ");
    scanf("%d", &n);

    if(n==1){
        int len, wid;
        printf("Enter length & width: ");
        scanf("%d %d", &len, &wid);
        printf("Area is %d", calculateRectangularWingArea(len, wid));
    }
    else if(n==2){
        int b1, b2, hei;
        printf("Enter 2 bases & Height: ");
        scanf("%d %d %d", &b1, &b2, &hei);
        printf("Area is %d", calculateTrapezoidalWingArea(b1, b2, hei));
    }
    else{
        printf("Wrong input..");
    }

    return 0;
}