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

int main(){
    // from now on we will always use dynamic node
    Node* head = new Node(10);
    Node* b = new Node(20);
    
    // a.next = &b;
    (*head).next = b;

    cout << head->next->val << endl;

    return 0;
}