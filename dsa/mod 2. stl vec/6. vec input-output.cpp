#include <bits/stdc++.h>
using namespace std;


void print_vec(vector<int> v){
    for (auto it=v.begin(); it<v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    // array way
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i=0; i<=n; i++){
        cin >> v[i];
    }
    print_vec(v);


    // list way
    vector<int> vec;
    int x;
    for (int i=0; i<10; i++){
        cin >> x;
        vec.push_back(x);
    }
    return 0;
}