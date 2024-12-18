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

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true){
        cin >> val;
        if (val==-1) break;

        insert_back(tail, val);
        if (head==NULL){
            head = tail;
        }
    }


    print_linklist(head);
    
    return 0;
}