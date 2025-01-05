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
    cout << "L -> ";
    Node* node = head;
    while (node!=NULL){
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    cout << "R -> ";
    Node* node = tail;
    while (node!=NULL){
        cout << node->val << " ";
        node = node->prev;
    }
    cout << endl;
}

void insert_head(Node* &head, int val){
    Node* node = new Node(val);
    if (head==NULL){
        head = node;
        return;
    }
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


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int len=0;

    int q;
    cin >> q;

    int index, val;
    while (q--){
        cin >> index >> val;
        if (index<0 || index>len) {
            cout << "Invalid" << endl;
            continue;
        }

        if (index==0){
            insert_head(head, val);
            if (tail==NULL){
                tail = head;
            }
        }
        else if (index==len){
            insert_tail(tail, val);
            if (head==NULL){
                head = tail;
            }
        }
        else{
            insert_middle(head, index, val);
        }
        len++;
        print_forward(head);
        print_backward(tail);
    }

    return 0;
}