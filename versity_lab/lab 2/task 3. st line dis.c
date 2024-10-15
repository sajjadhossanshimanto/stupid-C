#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;
    float dis;

    printf("Enter the takeoff cordinate => ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the landing cordinate => ");
    scanf("%d %d", &x2, &y2);

    dis = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("distance travelled %f", dis);

    return 0;
}
=
