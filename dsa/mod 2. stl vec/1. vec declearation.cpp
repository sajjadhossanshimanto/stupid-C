#include <bits/stdc++.h>
using namespace std;


void print_vec(vector<int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    // // type 1
    // vector<int> v;// create empty vector
    // cout << v.size() << endl;

    // // type 2
    // vector<int> v = {1, 2, 3, 4};
    // print_vec(v);

    // // type 3
    // vector<int> v(5);// fix the size
    // cout << v.size() << endl;

    // // type 4
    // vector<int> v(5, -1);// fix the size with diz value
    // print_vec(v);

    // // type 5
    // vector<int> v1 = {1, 2, 3, 4};
    // vector<int> v(v1);// copy another vector
    // print_vec(v);

    // type 6
    int arr[] = {1, 2, 3, 4};
    vector<int> v(arr, arr+4);// copy array
    print_vec(v);


    return 0;
}