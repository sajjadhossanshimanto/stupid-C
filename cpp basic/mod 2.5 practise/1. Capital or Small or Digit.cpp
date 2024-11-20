#include <bits/stdc++.h>

using namespace std;


int main(){
    char s;

    cin >> s;
    if (s>=48 && s<=57){
        cout << "IS DIGIT" << endl;
    }
    else if (s>=97 && s<=122){
        cout << "ALPHA\nIS SMALL" << endl;
    }
    else if (s>=65 && s<=90){
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    // cout << (int)'Z' << endl;

    return 0;
}