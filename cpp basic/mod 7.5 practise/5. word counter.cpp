#include <bits/stdc++.h>
using namespace std;


int main(){
    string s, ss, word;
    getline(cin, s);
    cin >> ss;

    
    // cout << s << endl;
    // cout << ss << endl;

    stringstream sss(s);
    int c=0;
    while (sss>>word){
        if (word==ss) c+=1;
    }

    cout << c << endl;
    
    return 0;
}