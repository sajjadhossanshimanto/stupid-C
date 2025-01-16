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



int main(){
    vector<int> v;
    Node* root = input_tree();
    int x;
    cin >> x;
    
    queue<Node*> q;
    q.push(root);
    int level = 0;
    while (!q.empty()){
        int n = q.size();
        for (int i=0; i<n; i++){

            Node* node = q.front();
            if (level==x){
                cout << node->val << " ";
            }
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            q.pop();
        }
        level++;
    }
    if (x>=level){
        cout << "Invalid";
    }

    return 0;
}
