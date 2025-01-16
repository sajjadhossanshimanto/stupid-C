/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
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

bool dfs(Node* node, int level, int tree_height){
    if (node==NULL) return true;
    if (node->left==NULL && node->right!=NULL) return false;
    if (node->left==NULL && node->right==NULL){
        return level==tree_height;
    }

    if (!dfs(node->left, level+1, tree_height)) return false;
    if (!dfs(node->right, level+1, tree_height)) return false;
    
    return true;
}

int node_counter(Node* node){
    if (node==NULL) return 0;

    int l = node_counter(node->left);
    int r = node_counter(node->right);

    return l+r+1;
}

int main(){
    Node* root = input_tree();
    
    int n = node_counter(root);
    bool b = dfs(root, 1, (int)log2(n+1));
    if (b) cout<< "YES";
    else cout<< "NO";
    
    return 0;
}
