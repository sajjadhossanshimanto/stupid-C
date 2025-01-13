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
int get_height_dfs(Node* root){
    if (root==NULL) return 0;

    int l = get_height_dfs(root->left);
    int r = get_height_dfs(root->right);
    return max(l, r)+1;
}

int get_height_bfs(Node* root){
    if (root==NULL) return 0;// edge case

    queue<Node*> q;
    q.push(root);

    int level = 0;
    while (!q.empty()){
        int size = q.size();
        for (int i=0; i<size; i++){
            Node* f = q.front();
            q.pop();

            if (f->left) q.push(f->left);
            if (f->right) q.push(f->right);
        }
        level++;
    }
    return level;
}

int main(){
    Node* root = input_tree();
    cout << get_height_dfs(root);
    cout << get_height_bfs(root);

    return 0;
}
