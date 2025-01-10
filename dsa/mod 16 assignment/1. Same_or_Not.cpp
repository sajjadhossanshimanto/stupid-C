#include <bits/stdc++.h>
using namespace std;


bool is_equal(stack<int>* st, queue<int>* q){
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
    stack<int> st;
    queue<int> q;

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