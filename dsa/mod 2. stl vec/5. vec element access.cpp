#include <bits/stdc++.h>
using namespace std;


void print_vec(vector<int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v = {1, 2, 3, 4, 2, 3, 2};
    
    // cout << v[0] << endl;
    cout << v.front() << endl;

    // cout << v[v.size()-1] << endl;
    cout << v.back() << endl;
    
    // cout << v[3] << endl;
    cout << v.at(3) << endl;

    return 0;
}