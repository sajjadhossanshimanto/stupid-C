/*
10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
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

int tree_sum(Node* node){
    if (node->left==NULL && node->right==NULL){
        return 0;
    }
    
    int l=0, r=0;
    if (node->left) l = tree_sum(node->left);
    if (node->right) r = tree_sum(node->right);

    return node->val + l + r;
}

int main(){
    Node* root = input_tree();
    cout << tree_sum(root) << endl;

    return 0;
}
