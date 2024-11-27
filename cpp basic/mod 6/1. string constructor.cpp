#include <bits/stdc++.h>
using namespace std;


int main(){
    // 1. works as initialisor
    // string s = "hello world";
    string s("hello world");
    cout << s << endl;

    // 2. string slicing
    string s2("hello world", 4);
    cout << s2 << endl;

    // 3. slicing
    string t = "hwllo world";
    string s3(t, 4);
    cout << s3 << endl;
    
    // 4. string multiplicator -> only for single charector
    string s4(5, 'a');
    cout << s4 << endl;

    return 0;
}