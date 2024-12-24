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



bool ditect_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while (fast->next!=NULL && slow->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (slow==fast) return true;
    }
    return false;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    for (int val=10; val<=50; val+=10){
        insert_back(tail, val);
        if (head==NULL){
            head = tail;
        }
    }
    print_forward(head);


    // tail->next = head->next;
    cout << ditect_cycle(head);

    return 0;
}