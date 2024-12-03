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
    long long int total;
};

bool cmp(Student l, Student r){
    return (l.total==r.total) ? l.id<r.id : l.total >= r.total;
}

int main()
{
    int n;
    cin>>n;

    Student students[n];
    for (int i=0; i<n; i++){
        cin >> students[i].s >> students[i].cls >> students[i].sec >> students[i].id >> students[i].math >> students[i].eng;
        students[i].total = students[i].math + students[i].eng;
    }

    // cout << endl;
    sort(students, students+n, cmp);
    for (int i=0; i<n; i++){
        cout << students[i].s << " " << students[i].cls << " " << students[i].sec << " " << students[i].id << " " << students[i].math << " " << students[i].eng << endl;
    }

    return 0;
}
