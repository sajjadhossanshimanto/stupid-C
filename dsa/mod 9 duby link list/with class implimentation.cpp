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
        if (tail == NULL) return;

        Node* temp = tail;
        if (tail->prev != NULL) {
            tail = tail->prev;
            tail->next = NULL;
        } else {
            // Single node case
            head = NULL;
            tail = NULL;
        }
        delete temp;
        len--;
    }

    void pop_front(){
        if (head == NULL) return;
        
        Node* temp = head;
        if (head->next != NULL) {
            head = head->next;
            head->prev = NULL;
        } else {
            // Single node case
            head = NULL;
            tail = NULL;
        }
        delete temp;
        len--;
    }

    bool empty(){
        return len == 0;
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
