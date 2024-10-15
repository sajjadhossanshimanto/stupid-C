#include <stdio.h>

int main(){
    int days, mon, day;
    scanf("%d", &days);

    mon = days/30;
    day = days - (mon*30);
    printf("%d days => %d month %d day", days, mon, day);

    return 0;
}
