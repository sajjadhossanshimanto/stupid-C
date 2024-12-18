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

void sort_link(Node* head){
    Node* parent = head;
    while (parent->next!=NULL){
        Node* child = parent->next;
        while (child!=NULL){
            if (parent->val>child->val){
                //swape
                swap(parent->val, child->val);
            }
            child = child->next;
        }
        parent = parent->next;
    }

}

int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insert_back(tail, 40);
    insert_back(tail, 30);
    insert_back(tail, 20);
    print_linklist(head);

    sort_link(head);
    print_linklist(head);
    
    return 0;
}