#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    int roll;
    char sec;
    double gpa;

    Student(int roll, char sec, double gpa){
        (*this).roll = roll;
        this->gpa = gpa;// arrow is the shoutcut of (*__).

        this->sec = sec;// vs code auto replaces the dot with arrow
    }
};

int main(){
    Student s1(17, 'a', 5.00);

    cout << s1.roll << " " << s1.sec << " " << s1.gpa << endl;
    
    return 0;
}