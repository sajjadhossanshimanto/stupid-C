#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    string s;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};

bool cmp(Student l, Student r){
    if (l.eng!=r.eng) return l.eng>r.eng;
    if (l.math!=r.math) return l.math>r.math;
    return l.id<r.id;

}

int main()
{
    int n;
    cin>>n;

    Student students[n];
    for (int i=0; i<n; i++){
        cin >> students[i].s >> students[i].cls >> students[i].sec >> students[i].id >> students[i].math >> students[i].eng;
    }

    cout << endl;
    sort(students, students+n, cmp);
    for (int i=0; i<n; i++){
        cout << students[i].s << " " << students[i].cls << " " << students[i].sec << " " << students[i].id << " " << students[i].math << " " << students[i].eng << endl;
    }

    return 0;
}
