#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
        string name;
        int roll;
        int marks;

        Student(string name, int roll, int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};


class cmp{
    public:
        bool operator()(Student l, Student r){
            // if (l.marks < r.marks) return true;
            // return false;
            return l.marks < r.marks;
        }
};

int main(){
    priority_queue<Student, vector<Student>, cmp> pq;

    pq.push(Student("shima", 10, 88));
    pq.push(Student("anto", 13, 98));
    pq.push(Student("ojib", 15, 79));


    // print priority queue
    while (!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " "<< pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}