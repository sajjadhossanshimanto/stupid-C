#include <bits/stdc++.h>
using namespace std;


void print_vec(vector<int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v = {1, 2, 3, 4};
    
    cout << "original: ";
    print_vec(v);
    cout << endl;

    v.push_back(5);
    cout << "push_back: ";
    print_vec(v);

    v.pop_back();
    print_vec(v);

    // v.insert(pos, value)//pos is a pointer
    v.insert(v.begin()+2, 100);
    print_vec(v);

    // insert arr or vector
    int arr[] = {200, 300, 400};
    v.insert(v.begin()+3, arr, arr+3);
    print_vec(v);
    
    // delete single element
    v.erase(v.begin()+5);// start point is inclusive
    print_vec(v);
    
    // delete multiple value
    v.erase(v.begin()+2, v.begin()+5);// end kpoint exclusive
    print_vec(v);
    

    return 0;
}