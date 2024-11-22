#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    int id;
    char name[101];
    char sec;
    int marks;
};

int main(){
    int n;
    cin >> n;

    while (n){
        Student temp, max;
        max.marks = -1;
        for (int i=0; i<3; i++){
            cin >> temp.id >> temp.name >> temp.sec >> temp.marks;
            if (temp.marks > max.marks){
                max.id = temp.id;
                strcpy(max.name, temp.name);
                max.sec = temp.sec;
                max.marks = temp.marks;
            }
        }
        cout << max.id << ' '<< max.name << ' ' << max.sec << ' ' << max.marks << endl;
        n--;
    }
    
    return 0;
}