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
    Node* head1 = NULL;
    Node* tail1 = NULL;
    input_ll(head1, tail1);
    // print_linklist(head);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    input_ll(head2, tail2);
    
    while(head1!=NULL && head2!=NULL){
        
        if (head1->val!=head2->val) {
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1==NULL && head2==NULL)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}