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

void insert_back(Node* &tail, int val){
    Node* new_node = new Node(val);
    
    tail->next = new_node;
    tail = new_node;
}

void input_linklist(Node* &head, Node* &tail){
    int x;
    while (true){
        cin >> x;
        if (x==-1) return;
        
        if (tail==NULL){
            head = new Node(x);
            tail = head;
        }
        else{
            insert_back(tail, x);
        }
    }
}

void print_linklist(Node* head){
    Node* node = head;
    while (node!=NULL){
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

bool is_equal(Node* head1, Node* head2){
    Node* n1 = head1;
    Node* n2 = head2;
    while (n1!=NULL || n2!=NULL){
        if (n1->val!=n2->val) return false;

        n1 = n1->next;
        n2 = n2->next;
    }
    return true;
}

int main(){
    Node* h1 = NULL;
    Node* h2 = NULL;
    Node* t1 = NULL;
    Node* t2 = NULL;

    input_linklist(h1, t1);
    input_linklist(h2, t2);

    // print_linklist(head);
    if (is_equal(h1, h2)){ cout << "YES" << endl;}
    else {cout << "NO" << endl;}
    
    return 0;
}