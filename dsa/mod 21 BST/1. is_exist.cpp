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
/*
complexity of search ?

binary search in array is Oder of logn. as each time we are srinking our search area to half
but in binary search tree. it is not not mendatorily that our search area will srin too half.
it totally depnds upon tree structure. like
               10
             /    \
            /      \
           /        \
          6          23
           \        / \
            9     19  29
           /      /    \
          7     12     35
from root 10 if we go to the right 23. our area is not reduced by half.
as there are less nodes in let side.

the same way our in worse case our complexity may be O(n). if we have a linear tree

to the best ans to the question is -> O(h) [h->height of tree]
if our tree is a complete binar tree then height -> log(n)
thus the time complexity is O(logn)

*/