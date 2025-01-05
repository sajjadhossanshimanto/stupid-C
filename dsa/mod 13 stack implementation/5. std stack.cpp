#include <bits/stdc++.h>
using namespace std;


int main(){
    list<int> l;
    vector<int> v;
    // in the same way 
    stack<int> st;

    // std stack has 5+2 extra, total 7 functions
    // st.emplace;
    // st.swap;

    
    // input
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        st.push(x);
    }

    // output
    while (!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    
    return 0;
}