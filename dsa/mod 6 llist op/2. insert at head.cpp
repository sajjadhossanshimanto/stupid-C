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

void insert_head(Node* &head, int val){
    Node* node = new Node(val);
    node->next = head;
    head = node;
}

int main(){
    Node* head = new Node(10);

    insert_head(head, 100);
    insert_head(head, 200);
    print_linklist(head);
    
    return 0;
}