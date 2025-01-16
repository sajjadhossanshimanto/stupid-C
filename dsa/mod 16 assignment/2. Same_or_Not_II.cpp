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

class MyQueue{
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    bool empty(){
        return l.empty();
    }

    int size(){
        return l.size();
    }

    int front(){
        return l.front();
    }

    int back(){
        return l.back();
    }
};


bool is_equal(MyStack* st, MyQueue* q){
    if (st->size()!=q->size()) return false;
    
    while (!st->empty()||!q->empty()){
        if (st->top()!=q->front()) return false;

        st->pop();
        q->pop();
    }
    if (st->empty() && q->empty()) return true;
    return false;

}

int main(){
    MyStack st;
    MyQueue q;

    int n, m;
    cin >> n >> m;

    // stack input
    while (n--){
        int x;
        cin >> x;
        st.push(x);
    }

    // queue
    while (m--){
        int x;
        cin >> x;
        q.push(x);
    }

    if (is_equal(&st, &q)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}