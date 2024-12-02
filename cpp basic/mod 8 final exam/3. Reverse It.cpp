#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string s;
    int cls;
    char sec;
    int id;
};


int main()
{
    int n;
    cin>>n;

    Student name[n];
    for (int i=0; i<n; i++){
        cin >> name[i].s >> name[i].cls >> name[n-i-1].sec >> name[i].id;
    }

    cout << "--" << endl;
    for (int i=0; i<n; i++){
        cout << name[i].s << " " << name[i].cls << " " << name[i].sec << " " << name[i].id << endl;
    }

    return 0;
}
