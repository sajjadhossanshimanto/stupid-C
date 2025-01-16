# https://leetcode.com/problems/leaf-similar-trees/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        
        def dfs(node, leafs):
            if not node: return leafs
            if node.left==None and node.right==None: 
                leafs.append(node.val)
                return leafs # important to return here
            
            dfs(node.left, leafs)
            dfs(node.right, leafs)
            return leafs
        
        l1 = dfs(root1, [])
        l2 = dfs(root2, [])
        return l1==l2
#%%
[2, 3]==[3, 2]
# %%
