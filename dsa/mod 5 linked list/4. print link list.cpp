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

void print_linklist(Node* head){
    Node* node = head;// temp variable
    while (node!=NULL){
        cout << node->val << " ";
        node = node->next;
    }
}

int main(){
    // from now on we will always use dynamic node
    Node* head = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    
    // a.next = &b;
    (*head).next = b;
    b->next = c;
    c->next = d;

    print_linklist(head);

    return 0;
}