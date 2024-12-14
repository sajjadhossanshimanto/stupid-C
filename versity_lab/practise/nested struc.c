#include <stdio.h>


struct Engine{
    char model[100];
    double maxspeed;
};

struct Wing{
    char model[100];
    double maxspeed;
};

struct Aircraft{
    char model[100];
    double maxspeed;

    struct Engine eng;
    struct Wing wing;
};


int main(){
    struct Aircraft sesna = {"a10", 2000, {"pistone", 1500}, {"biman", 500}};

    printf("%llf", sesna.wing.maxspeed);
    return 0;
}