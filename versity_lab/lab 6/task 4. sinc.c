# include <stdio.h>
# include <math.h>

float pi = 3.1416;


float sinc(float x){
    float rad = x*pi/180;
    if (x == 0) {
        return 1.0;
    }
    return sin((rad*pi))/(pi*rad);
}

int main(){
    float a,b;
    printf("Enter 2 angles: ");
    scanf("%f %f", &a, &b);

    int num_values = 21;
    float step_size = (b - a) / (num_values - 1);

    printf("21 values of sinc in between (%.2f-%.2f) is ", a, b);
    for (float i = a; i <= b; i += step_size) {
        printf("%f -> %.6f \n",i, sinc(i));
    }

    return 0;
}