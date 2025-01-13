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
/*
nodes can also be counted with bdf while taking inputs
*/
int count_leaf(Node* root){
    if (root==NULL) return 0;// its important to place this condition upper to avoid segmentation faut
    if (root->left==NULL && root->right==NULL) return 1;

    int l = count_leaf(root->left);
    int r = count_leaf(root->right);
    return l+r;
}

int main(){
    Node* root = input_tree();
    cout << count_leaf(root);

    return 0;
}
