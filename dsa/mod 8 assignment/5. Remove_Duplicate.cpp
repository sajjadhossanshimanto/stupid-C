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

void print_linklist(Node* head){
    Node* node = head;// temp variable
    while (node!=NULL){
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    vector<int> repeat(1001, 0);
    
    // cout << repeat[500];
    int x;
    while(true){
        cin >> x;
        if (x==-1) break;
        if (!repeat[x]){
            insert_back(head, tail, x);
            repeat[x] = 1;
        }
    }
    
    print_linklist(head);
    return 0;
}