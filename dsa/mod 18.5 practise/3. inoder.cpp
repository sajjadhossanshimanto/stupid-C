/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
void backtrack(TreeNode* node, vector<int>* v){
    if (node==NULL){
        return ;
    }

    backtrack(node->left, v);
    v->push_back(node->val);
    backtrack(node->right, v);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        backtrack(root, &v);

        return v;
    }
};