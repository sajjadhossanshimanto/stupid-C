# include <stdio.h>


int main(){
    int a;
    float b;
    char c;
    double d;
    long long int e;

    printf("Enter int, float, char, double, long int: ");
    scanf("%d %f %c %lf %lld", &a, &b, &c, &d, &e);
    printf("=> %d %f %c %lf %lld", a, b, c, d, e);

    return 0;
}