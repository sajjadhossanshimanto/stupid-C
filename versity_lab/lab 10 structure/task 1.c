#include <stdio.h>

struct SCHEDULE{
    int inspectoin_id;
    char part_name[50];
    char schedule_date[30];
    char inspector_name[50];
};

int main(){
    struct SCHEDULE sec1;

    int id = 1;
    printf("Enter inspector id, parts name, schedule date, inspector name for schedule maintanance: ");
    scanf("%d %s %s %s", &sec1.inspectoin_id, &sec1.part_name, &sec1.schedule_date, &sec1.inspector_name);
    sec1.inspectoin_id = id;
    id++;

    printf("inspector '%s' has a scheduled maintanance for '%s' part on '%s'", sec1.inspector_name, sec1.part_name, sec1.schedule_date);

    return 0;
}
