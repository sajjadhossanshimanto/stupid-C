#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    char name[50];
    int roll;
    char section;// a, b, c
    double gpa;
};

int main(){
    Student a, b;
    // a.name = "shimanto"// error
    strcpy(a.name, "shimanto");
    a.roll = 17;
    a.section = 'a';
    a.gpa = 5.00;

    cout << "student: " << a.name << "\nRoll: " << a.roll << "\ngpa: " << a.gpa << endl;
}