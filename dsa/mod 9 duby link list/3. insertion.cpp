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
    head->prev = node;
    head = node;
}

void insert_tail(Node* &tail, int val){
    Node* node = new Node(val);
    if (tail==NULL){
        tail = node;// TODO: head = new_node
        return;
    }
    node->prev = tail;
    tail->next = node;
    tail = node;
}

void insert_middle(Node* &head, int pos, int val){
    Node* new_node = new Node(val);

    Node* node = head;// node at the pos
    for(int i=0; i<pos; i++){
        node = node->next;
    }

    new_node->next = node;
    new_node->prev = node->prev;
    node->prev->next = new_node;
    node->prev = new_node;
}


int ln[] = {0};
void insert_at_any_pos(Node* &head, Node* &tail, int pos, int val){
    if (pos==0){
        insert_head(head, val);
        if (tail==NULL){
            tail = head;
        }
    }
    else if (pos==ln[0]){
        insert_tail(tail, val);
    }
    else{
        insert_middle(head, pos, val);
        // can obtimise if needed to insert from the tail
    }
    ln[0]++;
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
    insert_head(head, 100);
    print_forward(head);

    insert_tail(tail, 500);
    print_forward(head);

    insert_middle(head, 2, 200);
    print_forward(head);
    
    return 0;
}