#include <bits/stdc++.h>
using namespace std;


class Node {
    public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insert_back(Node* &tail, string val) {
    Node* node = new Node(val);
    if (tail == NULL) {
        tail = node;
        return;
    }
    node->prev = tail;
    tail->next = node;
    tail = node;
}


void find_node(Node* head, string address, Node* &cursor) {
    Node* node = head;
    while (node != NULL) {
        if (node->val == address) {
            cout << node->val << endl;
            cursor = node;
            return;
        }
        node = node->next;
    }
    cout << "Not Available\n";
}

int main() {
    string s;
    Node* head = NULL;
    Node* tail = NULL;

    while (cin >> s) {
        if (s == "end") break;
        insert_back(tail, s);
        if (head == NULL) {
            head = tail;
        }
    }


    int q;
    cin >> q;

    Node* current = head;
    while (q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "visit") {
            string address;
            cin >> address;
            find_node(head, address, current);
        } else if (cmd == "next") {
            if (current->next != NULL) {
                current = current->next;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (cmd == "prev") {
            if (current->prev != NULL) {
                current = current->prev;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}