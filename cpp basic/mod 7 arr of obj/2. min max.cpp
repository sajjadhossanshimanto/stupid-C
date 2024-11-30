# include <bits/stdc++.h>
using namespace std;


class Student{
    public:
    string name;
    int marks;
};

int findmax(int n, Student arr[]){
    // mm = INT_MIN;
    int mm = arr[0].marks;
    for (int i=1; i<n; i++){
        mm = max(mm, arr[i].marks);
    }
    return mm;
}

int main(){
    // int arr[5];
    Student class_5[3];

    // input
    for (int i=0; i<3; i++){
        cin >> class_5[i].name >> class_5[i].marks;
    }
    
    // // output
    // for (int i=0; i<3; i++){
    //     cout << class_5[i].name << ' ' << class_5[i].marks << endl;
    // }

    cout << findmax(3, class_5) << endl;
    return 0;
}