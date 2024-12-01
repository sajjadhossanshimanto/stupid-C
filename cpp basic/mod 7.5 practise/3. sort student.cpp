# include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    float marks;
};

void input_class(int n, Student obj_arr[]){
    for (int i=0; i<n; i++){
        cin >> obj_arr[i].name >> obj_arr[i].roll >> obj_arr[i].marks;
    }
}

void print_class(int n, Student obj_arr[]){
    for (int i=0; i<n; i++){
        cout << obj_arr[i].name << ' ' << obj_arr[i].roll << ' ' << obj_arr[i].marks << endl;
    }
}

bool cmp(Student l, Student r){
    return (l.marks==r.marks) ? l.roll>r.roll : l.marks>r.marks;
}

int main(){
    int t;
    cin >> t;

    Student class_x[t];
    input_class(t, class_x);
    
    sort(class_x, class_x+t, cmp);
    print_class(t, class_x);

    return 0;
}