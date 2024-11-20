// constructor use korle obossoi call korte hoy, normal define kore rakha jay na
// constructor age void hoy na
// constructor funtion name huboho function name onujay
#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    char name[50];
    int roll;
    char section;
    double gpa;
    
    Student(char n[], int r, char s, double g){
        strcpy(name, n);
        roll = r;
        section = s;
        gpa = g;
    }
};


int main(){
    // Student s1;//error
    Student s1("shimanto", 17, 'a', 5.00);

    cout << s1.name << " " << s1.roll << " " << s1.section << " " << s1.gpa << endl;
}