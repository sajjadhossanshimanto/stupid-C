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

    // both prints are necessary to confirm the correct connection both from fond and back
    print_forward(head);
    print_backward(tail);

    return 0;
}