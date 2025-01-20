/*
2 5 8 11 15 18
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

void printBT(const string& prefix, const Node* node, bool isLeft)
{
    if (node != nullptr)
    {
        cout << prefix;
        cout << (isLeft ? "|--" : "L--");
        // print the value of the node
        cout << node->val << endl;
        // enter the next tree level - left and right branch
        printBT(prefix + (isLeft ? "|   " : "    "), node->right, true);
        printBT(prefix + (isLeft ? "|   " : "    "), node->left, false);
    }
}
void printBT(const Node* node)
{
    printBT("", node, false);    
}


Node* create_tree(int arr[], int l, int r){
    if (l<0) return NULL;
    if (r<l) return NULL;
    // if (l==r) return new Node(arr[l]);

    int mid = (l+r)/2;
    Node* node = new Node(arr[mid]);

    node->left = create_tree(arr, l, mid-1);
    node->right = create_tree(arr, mid+1, r);

    return node;
}

int main(){
    int arr[] = {2, 5, 8, 11, 15, 18};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* root = create_tree(arr, 0, n-1);
    printBT(root);

    return 0;
}
