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
    cout << endl;
}

void insert_back(Node* &head, int val){
    Node* newnode = new Node(val);
    if (head==NULL){
        head = newnode;
        return ;
    }

    Node* tail = head;
    while (tail->next!=NULL){
        tail = tail->next;
    }

    tail->next = newnode;
}

void insert_at_pos(Node* &head, int val, int pos){
    // zero indeing
    Node* newnode = new Node(val);
    if (head==NULL){
        head = newnode;
        return ;
    }

    Node* parent = head;
    pos--;
    while (pos){
        parent = parent->next;
        pos--;
    }

    newnode->next = parent->next;
    parent->next = newnode;
}

int main(){
    Node* head = new Node(10);

    insert_back(head, 20);
    insert_back(head, 30);
    insert_back(head, 40);
    print_linklist(head);

    insert_at_pos(head, 100, 1);
    insert_at_pos(head, 200, 2);
    print_linklist(head);
    
    return 0;
}