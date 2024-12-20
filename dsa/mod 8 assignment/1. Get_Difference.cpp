#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    long long int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node* head = NULL;
    Node* tail = NULL;

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
    
    long long int min_val=1000000001, max_val=-min_val;
    while (head!=NULL){
        max_val = max(max_val, head->val);
        min_val = min(min_val, head->val);
        head = head->next;
    }

    cout << max_val-min_val;
    return 0;
}