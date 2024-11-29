#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    float math;
    float english;

    Student(string name, int roll, float math, float english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total(){
        cout << "total marks of " << this->name << " = " << english+math << endl;
    }
};

int main(){
    Student sakib("sakib ahmed", 01, 85, 90);
    sakib.total();
    Student rakib("rakib ahmed", 02, 60, 70);
    rakib.total();
}