#include <bits/stdc++.h>
using namespace std;


void print_list(list<int> l){
    for (auto i: l){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int> l = {10, 20, 30, 40};
    print_list(l);

    cout << l.front() << endl;
    // or 
    cout << *l.begin() << endl;

    cout << l.back() << endl;
    // cout << *l.end() << endl; // doesn't work as end points one step up


    // index
    cout << *next(l.begin(), 2);

    return 0;
}