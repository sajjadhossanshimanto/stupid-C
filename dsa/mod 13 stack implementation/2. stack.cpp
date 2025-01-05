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
    
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    if (!st.empty()){
        // to avoid segmentation fault we have to always check before tring to access the top
        cout << st.top() << endl;
    }
    if (!st.empty()){
        // this check is also must before pop
        st.pop();
    }


    return 0;
}