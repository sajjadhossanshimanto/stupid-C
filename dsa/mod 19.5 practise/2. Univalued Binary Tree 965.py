# https://leetcode.com/problems/univalued-binary-tree/description/

#%%
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isUnivalTree(self, root: Optional[TreeNode]) -> bool:
        def dfs(node):
            # if node==None: return True
            if node.val!=root.val: return False
            
            if node.left: 
                if not dfs(node.left): return False
            if node.right:
                if not dfs(node.right): return False
            
            return True

        return dfs(root)

