#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "hello ";
    cout << s << endl;
    s.append("world");
    // s += "world";
    cout << s << endl;

    // base function for append.
    s.push_back('1');// pushes only a single char
    cout << s << endl;
    s.pop_back();
    cout << s << endl;

    // strings are mutable-flexible
    s[0] = 'G';
    cout << s << endl;
    // s = "hi";
    s.assign("hi"); // not used as function
    cout << s << endl;
    
    return 0;
}