#include <stdio.h>

struct TRANNING {
    int pilot_id;
    char pilot_name[50];
    char program_name[50];
    int program_hour;
    int certification;
};

int main(){
    struct TRANNING pilot1;

    printf("Enter pilot id, pilot name, tranning name, tranning hour, certification status of a student: ");
    scanf("%d %s %s %d %d", &pilot1.pilot_id, &pilot1.pilot_name, &pilot1.program_name, &pilot1.program_hour, &pilot1.certification);

    if (pilot1.certification)
    printf("student '%s' studing '%s' %d hour course is certified", pilot1.pilot_name, pilot1.program_name, pilot1.program_hour);
    else
    printf("student '%s' studing '%s' %d hour course is not certified", pilot1.pilot_name, pilot1.program_name, pilot1.program_hour);

    return 0;
}

