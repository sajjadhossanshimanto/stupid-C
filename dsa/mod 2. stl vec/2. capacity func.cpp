#include <bits/stdc++.h>
using namespace std;


void print_vec(vector<int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    // capacity
    vector<int> v = {1, 2, 3};
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.capacity() << endl;

    // size -> actual size
    cout << v.size() << endl;

    // maxsize -> maximum available in the system
    cout << v.max_size() << endl;

    // empty -> is empty function
    cout << v.empty() << endl;// returns 0, 1

    // clear -> psudo clear
    v.clear();
    // just the pointer is reposed.
    for (int i=0; i<3; i++){
        cout << v[i] << " ";// all the data are kept as it is.
    }
    cout << endl;

    
    // resize -> works both with decreasing & increasing
    v.resize(5);
    print_vec(v);// all the extra value are set to zero
    v.resize(7, -1);// only the extra values are set to -1
    print_vec(v);

    return 0;
}