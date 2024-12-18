#include <bits/stdc++.h>
using namespace std;


void print_vec(vector<int> v){
    for (auto it=v.begin(); it<v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v = {1, 2, 3, 4, 2, 3, 2};
    
    print_vec(v);
    return 0;
}