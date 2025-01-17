/*
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
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

void dfs_left(Node* node){
    if (node==NULL) return ;

    if (node->left) dfs_left(node->left);
    else dfs_left(node->right);
    cout << node->val << " ";
}

void dfs_right(Node* node){
    if (node==NULL) return ;

    cout << node->val << " ";
    if (node->right) dfs_right(node->right);
    else dfs_right(node->left);
}

int main(){
    vector<int> v;
    Node* root = input_tree();
    
    if (root->left) dfs_left(root->left);
    cout << root->val << " ";
    if (root->right) dfs_right(root->right);

    return 0;
}
