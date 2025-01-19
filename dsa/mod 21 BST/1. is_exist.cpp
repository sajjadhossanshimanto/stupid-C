/*
18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
*/

#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree(){
    int val;
    cin >> val;
    Node* root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while (!q.empty()){
        Node* node = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l!=-1){
            node->left = new Node(l);
            q.push(node->left);
        }
        if (r!=-1){
            node->right = new Node(r);
            q.push(node->right);
        }
    }

    return root;
}

bool search(Node* root, int val){
    if (!root) return false;
    if (root->val == val) return true;

    if (val>root->val){
        return search(root->right, val);
    }
    return search(root->left, val);
}

int main(){
    Node* root = input_tree();
    int val;
    cin >> val;

    cout << search(root, val);
    return 0;
}
