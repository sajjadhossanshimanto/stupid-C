#include <bits/stdc++.h>
using namespace std;


class MyStack{
    public:
    list<int> l;
    // not much chane in code. but a bit difference in behind. 
    // list is a doubly linked list where else vector is dynamic array
    // insertion tecnique is totally different is boths of them

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        // return *(l.end()-1);
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};

int main(){
    MyStack st;
    
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