#include <bits/stdc++.h>
using namespace std;



class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class MyQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int len = 0;

    void push(int val){
        // insert at tail
        Node* node = new Node(val);

        if (!tail){
            tail = node;
            head = tail;
        }
        else{
            tail->next = node;
            tail = node;
        }
        len++;
    }

    void pop(){
        // int val = head->val;
        Node* temp = head;
        head = head->next;
        if (head==NULL){
            tail = NULL;
        }
        delete temp;
        len--;
        // return val;
    }

    bool empty(){
        return len==0;
    }

    int size(){
        return len;
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }
};


int main(){
    MyQueue q;

    // input
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        q.push(val);
    }

    // output
    cout << "size " << q.size() << ":" << endl;
    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}