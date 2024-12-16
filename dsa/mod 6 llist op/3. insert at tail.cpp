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

int main(){
    Node* head = new Node(10);

    insert_back(head, 20);
    insert_back(head, 30);
    insert_back(head, 40);
    print_linklist(head);
    
    return 0;
}