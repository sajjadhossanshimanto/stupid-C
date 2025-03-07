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

class MyQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int len = 0;

    void push(int val){
        // insert at tail
        Node* node = new Node(val);

        if (!tail){
            tail = node;
            head = tail;
        }
        else{
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
        len++;
    }

    void pop(){
        // int val = head->val;
        Node* temp = head;
        head = head->next;
        // head->prev = NULL; // wrong way

        if (head==NULL){
            tail = NULL;

        }
        else{
            head->prev = NULL;
        }
        delete temp;
        len--;
        // return val;
    }

    bool empty(){
        return len==0;
    }

    int size(){
        return len;
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }
};


int main(){
    // cout << (bool)NULL << endl;
    
    return 0;
}