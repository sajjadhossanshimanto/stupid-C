#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    int roll;
    char sec;
    double gpa;

    Student(int roll, char sec, double gpa){
        (*this).roll = roll;
        this->gpa = gpa;

        this->sec = sec;
    }
};

int main(){
    
    Student *s1 = new Student(17, 'a', 4.00);
    // if constructor was not implementeed then it would be more easier
    // Student* s1 = new Student;
    cout << (*s1).roll << " " << s1->sec << " " << s1->gpa << endl;
    // gurbage value printed

    return 0;
}