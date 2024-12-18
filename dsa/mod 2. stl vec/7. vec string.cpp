#include <bits/stdc++.h>
using namespace std;


void print_vec(vector<int> v){
    for (auto it=v.begin(); it<v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    vector<string> vec(n);
    // wiyhout space
    // for(int i=0; i<n; i++){
    //     cin >> vec[i];
    // }

    cin.ignore();
    // with space
    for (int i=0; i<n; i++){
        getline(cin, vec[i]);
    }


    // output
    for(string s: vec){
        cout << s << endl;
    }

    return 0;
}