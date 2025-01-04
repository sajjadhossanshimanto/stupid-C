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


void insert_back(Node* &tail, int val){
    Node* node = new Node(val);
    if (tail==NULL){
        tail = node;// TODO: head = new_node
        return;
    }
    node->prev = tail;
    tail->next = node;
    tail = node;
}

bool is_palindrome(Node* head, Node* tail) {
    while (head != tail && head->prev != tail) {
        if (head->val != tail->val) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true){
        cin >> val;
        if (val==-1) break;
        insert_back(tail, val);
        if (head==NULL){
            head = tail;
        }
    }

    if (is_palindrome(head, tail)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}