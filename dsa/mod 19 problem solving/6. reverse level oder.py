# https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/
'''
copy code from:
https://leetcode.com/problems/binary-tree-level-order-traversal/description/
'''
#%%
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from typing import List, Optional
from collections import deque


class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root: return []

        res = deque([[root.val]])

        stack = deque([root])
        pop_count = 0
        while stack:
            res.appendleft([])
            for _ in range(len(stack)):
                node = stack.popleft()

                if node.left:
                    res[0].append(node.left.val)
                    stack.append(node.left)
                if node.right:
                    res[0].append(node.right.val)
                    stack.append(node.right)
        
        if not res[0]:
            res.popleft()

        return list(res)