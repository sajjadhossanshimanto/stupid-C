
#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "hello woeld";

    cout << s.size() << endl;
    cout << s.max_size() << endl;// daliy life e kaje lage na
    cout << s.capacity() << endl;// daliy life e kaje lage na

    cout << s << endl;
    s.resize(7);
    cout << s << endl;
    // s.resize(17);
    s.resize(17, 'x');
    cout << s << endl;

    s.clear();
    cout << s.size() << endl;
    cout << s.empty() << endl;// actually size == 0
    
    return 0;
}