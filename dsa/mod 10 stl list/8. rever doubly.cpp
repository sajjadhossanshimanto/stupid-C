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


void reverse(Node* head, Node* tail){
    for (Node *r=head, *l = tail; r!=l && r->prev!=l; r=r->next, l=l->prev){
        swap(l->val, r->val);
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    for (int val=10; val<40; val+=10){
        insert_back(tail, val);
        if (head==NULL){
            head = tail;
        }
    }
    print_forward(head);


    reverse(head, tail);
    print_forward(head);
    cout << tail->val;



    return 0;
}