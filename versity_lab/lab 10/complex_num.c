#include <stdio.h>
# include <string.h>

typedef struct{
    float real;
    float complex;
}Complex;

Complex add_num(Complex a, Complex b){
    Complex sum;

    sum.real = a.real + b.real;
    sum.complex = a.complex + b.complex;

    return sum;
}

int main(){
    Complex a, b;

    printf("Enter real & complex part of a complex(a+ib) number: ");
    scanf("%f %f", &a.real, &a.complex);

    printf("Enter real & complex part of a complex(a+ib) number: ");
    scanf("%f %f", &b.real, &b.complex);

    Complex sum = add_num(a, b);
    printf("Sum is: %.2f+%.2fi", sum.real, sum.complex);
    return 0;
}
