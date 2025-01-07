#include <bits/stdc++.h>
using namespace std;


void input_stack(stack<int>* st){
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        st->push(x);
    }
}

void input_queue(queue<int>* st){
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        st->push(x);
    }
}


bool is_equal(stack<int>* st, queue<int>* q){
    while (!st->empty()||!q->empty()){
        if (st->top()!=q->front()) return false;

        st->pop();
        q->pop();
    }
    if (st->empty() && q->empty()) return true;
    return false;

}

int main(){
    stack<int> st;
    queue<int> q;

    input_stack(&st);
    input_queue(&q);

    cout << is_equal(&st, &q) << endl;

    return 0;
}