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
void input_ll(Node* &head, Node* &tail){
    int val;
    while (true){
        cin >> val;
        if (val==-1) break;
        if (head==NULL){
            head = new Node(val);
            tail = head;
        }
        else{
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        Node* head = NULL;
        Node* tail = NULL;
        input_ll(head, tail);
        // print_linklist(head);
        int x;
        cin >> x;
        int pos = -1;
        while(head!=NULL){
            pos++;
            if (head->val==x) {
                cout << pos<< endl;
                break;
            }
            head = head->next;
        }
        if (head==NULL){
            cout << "-1" << endl;
        }
    }
    
    return 0;
}