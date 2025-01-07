#include <bits/stdc++.h>
using namespace std;


class MyStack{
    public:
    list<int> l;

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

void input_stack(MyStack* st){
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        st->push(x);
    }
}

bool is_equal(MyStack* st, MyStack* st2){
    while (!st->empty()||!st2->empty()){
        if (st->top()!=st2->top()) return false;

        st->pop();
        st2->pop();
    }
    if (st->empty() && st2->empty()) return true;
    return false;

}

int main(){
    MyStack st, st2;
    
    input_stack(&st);
    input_stack(&st2);

    // output
    cout << is_equal(&st, &st2) << endl;

    return 0;
}