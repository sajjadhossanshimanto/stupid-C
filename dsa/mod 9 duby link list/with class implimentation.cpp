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

class Doubly{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int len=0;

    void push_back(int val){
        Node* node = new Node(val);
        if (tail==NULL){
            tail = node;
            head = node;
            return;
        }
        node->prev = tail;
        tail->next = node;
        tail = node;

        this->len+=1;
    }

    void push_front(int val){
        Node* node = new Node(val);
        node->next = head;
        head->prev = node;
        head = node;
        if (!tail){
            tail = head;
        }
        this->len++;
    }

    void pop_back(){
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;

        delete temp;
        if (tail==NULL){
            head = NULL;
        }
        this->len--;
    }

    void pop_front(){
        Node* temp = head;
        head->next->prev = NULL;// TODO: cummon mistake
        head = head->next;

        delete temp;
        if (head==NULL){
            tail = NULL;
        }
        this->len--;
    }

    bool empty(){
        return !(this->len>0);
    }

    int front(){
        if (this->head){
            return this->head->val;
        }
        else {
            return -1;
        }
    }

    int back(){
        if (this->tail){
            return this->tail->val;
        }
        else {
            return -1;
        }
    }

    int size(){
        return this->len;
    }
};
