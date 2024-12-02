// uses structure and user define function to calculate slope between 2 points
#include <stdio.h>

struct Point{
    float x;
    float y;
};

float calc_slop(struct Point p1, struct Point p2){
    if(p1.x==p2.x) return 0.0;
    return (p2.y-p1.y)/(p2.x-p1.x);
}

int main(){
    struct Point p1, p2;

    printf("Enter coordinates of the first point (X Y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter coordinates of the second point (X Y): ");
    scanf("%f %f", &p2.x, &p2.y);

    if(p1.x==p2.x){
        printf("The line is vertical");
    }
    else{
        printf("The slope of the line connecting the two points is: %f", calc_slop(p1, p2));
    }

    return 0;
}
