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
    cout << "\n";
}

void insert_back(Node* &tail, int val){
    Node* newnode = new Node(val);
    if (tail==NULL){
        // passinf head to insert back totally seams ilogical to me
        tail = newnode;
        return ;
    }

    tail->next = newnode;
    tail = newnode;
}


void delete_head(Node* &head){
    Node* del_node = head;
    head = head->next;
    delete del_node;
}

void delete_tail(Node* &head){
    Node* node = head;// parent
    while (node->next->next!=NULL){
        node = node->next;
    }
    delete node->next;
    node->next = NULL;
}

void delete_at_pos(Node* &head, int pos){
    if (pos==0){
        delete_head(head);
        return;
    }
    Node* parent = head;
    for(int i=0; i<pos-1; i++){
        parent = head->next;
    }
    
    Node* del = parent->next ;
    parent->next = parent->next->next;
    delete del;
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insert_back(tail, 20);
    insert_back(tail, 30);
    insert_back(tail, 40);
    print_linklist(head);

    delete_tail(head);
    print_linklist(head);
    
    return 0;
}