# https://leetcode.com/problems/same-tree/

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if p==None and q==None: return True
        if not (p and q): return False

        if p.val!=q.val: return False
        if not self.isSameTree(p.left, q.left): return False
        if not self.isSameTree(p.right, q.right): return False

        return True