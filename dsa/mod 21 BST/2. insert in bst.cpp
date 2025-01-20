/*
10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1

               10
             /    \
            /      \
           /        \
          6          23
           \        / \
            9     19  29
           /      /    \
          7     12     35
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

void insert(Node* &root, int val){
    if (root==NULL){
        root = new Node(val);
        return ;
    }

    if (val>root->val){
        if (root->right==NULL)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
    else{
        if (root->left==NULL)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
}

void level_oder(Node* root){
    queue<Node*> q;
    q.push(root);

    while (!q.empty()){
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";
        if (f->left) q.push(f->left);//if condition dite vul hoy
        if (f->right) q.push(f->right);
    }
    cout << endl;
}

int main(){
    Node* root = input_tree();


    level_oder(root);
    insert(root, 21);
    level_oder(root);
    insert(root, 11);
    level_oder(root);

    return 0;
}
