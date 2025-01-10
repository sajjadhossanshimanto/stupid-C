#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Doubly{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int len=0;

    void push_back(int val){
        Node* node = new Node(val);
        if (tail==NULL){
            tail = node;
            head = node;
            return;
        }
        node->prev = tail;
        tail->next = node;
        tail = node;

        this->len+=1;
    }

    void push_front(int val){
        Node* node = new Node(val);
        node->next = head;
        head->prev = node;
        head = node;
        if (!tail){
            tail = head;
        }
        this->len++;
    }

    void pop_back(){
        if (tail == NULL) return;

        Node* temp = tail;
        if (tail->prev != NULL) {
            tail = tail->prev;
            tail->next = NULL;
        } else {
            // Single node case
            head = NULL;
            tail = NULL;
        }
        delete temp;
        len--;
    }

    void pop_front(){
        if (head == NULL) return;
        
        Node* temp = head;
        if (head->next != NULL) {
            head = head->next;
            head->prev = NULL;
        } else {
            // Single node case
            head = NULL;
            tail = NULL;
        }
        delete temp;
        len--;
    }

    bool empty(){
        return len == 0;
    }

    int front(){
        if (this->head){
            return this->head->val;
        }
        else {
            return -1;
        }
    }

    int back(){
        if (this->tail){
            return this->tail->val;
        }
        else {
            return -1;
        }
    }

    int size(){
        return this->len;
    }
};

class MyStack{
    public:
    Doubly v;


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
    Doubly l;

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