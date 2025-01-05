#include <bits/stdc++.h>
using namespace std;


class MyStack{
    public:
    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        // return *(v.end()-1);
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
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