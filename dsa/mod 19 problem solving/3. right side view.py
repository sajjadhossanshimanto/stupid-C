'''
https://leetcode.com/problems/binary-tree-right-side-view/description/
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
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if not root: return []

        ans = []
        level_cache = set()
        def dfs(node, level):
            if not node: return
            if level not in level_cache:
                ans.append(node.val)
                level_cache.add(level)
            
            dfs(node.right, level+1)
            dfs(node.left, level+1)

        dfs(root, 0)
        return ans
