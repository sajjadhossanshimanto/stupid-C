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

Student func(){
    Student karim(17, 'a', 4.00);
    return karim;
}

int main(){
    
    Student s1 = func();
    cout << s1.roll << " " << s1.sec << " " << s1.gpa << endl;
    
    return 0;
}