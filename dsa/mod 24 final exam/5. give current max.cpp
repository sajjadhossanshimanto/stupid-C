#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
        string name;
        int roll;
        int marks;
};


class cmp{
    public:
    bool operator()(Student l, Student r){
        if (l.marks==r.marks){
            return l.roll > r.roll;
        }
        return l.marks < r.marks;
    }
};

int main(){
    priority_queue<Student, vector<Student>, cmp> pq;    

    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        Student x;
        cin >> x.name >> x.roll >> x.marks;
        pq.push(x);
    }

    cin >> n;
    while (n--){
        int op;
        cin >> op;
        if (op==0){
            Student val;
            cin >> val.name >> val.roll >> val.marks;
            pq.push(val);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (op==1){
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (op==2){
            if (!pq.empty()){
                pq.pop();
                if (!pq.empty())
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    
    return 0;
}