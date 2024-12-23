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

void reverse(Node* &head, Node* &tail, Node* cursor){
    if (cursor->next==NULL){ // loop until end point
        head = cursor;
        return;
    }

    reverse(head, tail, cursor->next);
    cursor->next->next = cursor;
    cursor->next = NULL;
    tail = cursor;
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
    print_linklist(head);


    reverse(head, tail, head);
    print_linklist(head);
    cout << tail->val;

    
    return 0;
}