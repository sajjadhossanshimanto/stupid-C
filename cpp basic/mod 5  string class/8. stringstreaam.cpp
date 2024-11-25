#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "hello world from new cpp coder"; 
    cout << s << endl;

    stringstream ss(s);

    string word;
    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    while (ss>>word){
        cout << word << endl;
    }
    
    return 0;
}