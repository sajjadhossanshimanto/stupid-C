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

void dfs(Node* node, vector<int>* leaf){
    if (node==NULL) return ;
    if (node->left==NULL && node->right==NULL){
        leaf->push_back(node->val);
        return ;
    }

    dfs(node->left, leaf);
    dfs(node->right, leaf);
}

int main(){
    vector<int> v;
    Node* root = input_tree();
    
    dfs(root, &v);
    sort(v.begin(), v.end(), greater<int>());
    for (auto i:v){
        cout << i << " ";
    }

    return 0;
}
