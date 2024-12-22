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

void print_forward(Node* head){
    Node* node = head;
    while (node!=NULL){
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* node = tail;
    while (node!=NULL){
        cout << node->val << " ";
        node = node->prev;
    }
    cout << endl;
}

void insert_head(Node* &head, int val){
    Node* node = new Node(val);
    node->next = head;
    head = node;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;

    a->next = b;
    a->prev = head;

    b->next = c;
    b->prev = a;

    c->prev = b;

    Node* tail = c;


    print_forward(head);
    print_backward(tail);
    
    return 0;
}