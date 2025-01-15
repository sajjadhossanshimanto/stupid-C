# https://leetcode.com/problems/search-in-a-binary-search-tree/
#%%
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        node = root
        while 1:
            if not node: return 
            if node.val == val: return node

            if node.val>val:
                node = node.left
            else:
                node = node.right
