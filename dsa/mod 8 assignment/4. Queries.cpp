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

// insertion
void insert_back(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if (head==NULL){
        tail = newnode;
        head = newnode;
        return ;
    }

    tail->next = newnode;
    tail = newnode;
}

void insert_head(Node* &head, Node* &tail, int val){
    Node* node = new Node(val);
    node->next = head;
    head = node;
    if (tail==NULL){
        tail = head;
    }
}

// deletion
void delete_head(Node* &head){
    Node* del_node = head;
    head = head->next;
    delete del_node;
}

void delete_tail(Node* &head, Node* &tail){
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node* node = head;
    while (node->next->next != NULL) {
        node = node->next;
    }
    delete node->next;
    node->next = NULL;
    tail = node;
}

void delete_at_pos(Node* &head, int pos){
    if (pos==0){
        delete_head(head);
        return;
    }
    Node* parent = head;
    for(int i=0; i<pos-1; i++){
        parent = parent->next;
    }
    
    Node* del = parent->next ;
    parent->next = parent->next->next;
    delete del;
}

// generale
void print_linklist(Node* head){
    Node* node = head;// temp variable
    while (node!=NULL){
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    Node* head = NULL;
    Node* tail = NULL;
    int len=0;
    while (t--){
        int x, v;
        cin >> x >> v;
        
        if (x==0){
            insert_head(head, tail, v);
            print_linklist(head);
            len++;
        }
        else if (x==1){
            insert_back(head, tail, v);
            print_linklist(head);
            len++;
        }
        else{
            if (v<len){
                if (len-1==v){
                    delete_tail(head, tail);
                }
                else{
                    delete_at_pos(head, v);
                }
                len--;
            }
            print_linklist(head);
        }
        
    }
    
    return 0;
}