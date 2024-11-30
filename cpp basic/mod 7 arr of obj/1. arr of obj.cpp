# include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    string name;
    int roll;
};

int main(){
    // int arr[5];
    Student class_5[3];

    // input
    for (int i=0; i<3; i++){
        cin >> class_5[i].name >> class_5[i].roll;
    }
    
    // output
    for (int i=0; i<3; i++){
        cout << class_5[i].name << ' ' << class_5[i].roll << endl;
    }

    return 0;
}