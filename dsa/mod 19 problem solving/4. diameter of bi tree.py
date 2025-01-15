'''
https://leetcode.com/problems/diameter-of-binary-tree/description/
- it may or nay not involve root
'''
#%%
from typing import List, Optional


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root: return 0

        ans = [0]
        def dfs(node):
            l, r = 0, 0
            if node.left: l = dfs(node.left) + 1
            if node.right: r = dfs(node.right) + 1

            ans[0] = max(ans[0], l+r)
            return max(l, r)

        dfs(root)
        return ans[0]
