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

int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insert_back(tail, 20);
    insert_back(tail, 30);
    insert_back(tail, 40);
    print_linklist(head);

    delete_head(head);
    print_linklist(head);
    
    return 0;
}