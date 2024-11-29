#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "hello world";
    int a[] = {1, 2, 3, 4, 5};

    reverse(s.begin(), s.end());
    reverse(a, a+5);

    for (int i: a){
        cout << i << " ";
    }
    cout << endl;
    cout << s << endl;
    
    return 0;
}