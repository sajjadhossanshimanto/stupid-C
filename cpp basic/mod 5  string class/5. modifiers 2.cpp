#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "hello world";
    cout << s << endl;
    
    // s.erase(5);// starting index not included 
    s.erase(6, 3);//(start, char_count)
    cout << s << endl;

    //       start, count, insert_word
    // s.replace(6, 2, "bangladesh");
    s.replace(6, 0, "bangladesh");// works as insert
    cout << s << endl;
    
    s.insert(6, "dear ");//  same as -> replace with zero removal
    cout << s << endl;
    
    return 0;
}