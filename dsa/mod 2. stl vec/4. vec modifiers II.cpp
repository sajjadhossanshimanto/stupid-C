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
    
    cout << "original: ";
    print_vec(v);
    cout << endl;

    replace(v.begin(), v.end()-1, 2, 200);// end exclusive
    print_vec(v);

    // stupid find function works with iterable
    auto it = find(v.begin(), v.end(), 4);
    if (it==v.end()){
        cout << "not found";
    }
    else{
        cout << "found";
    }
    cout << *it << endl;//prints the given nuumber
    return 0;
}