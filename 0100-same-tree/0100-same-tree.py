# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def traverseTree(self, q, p):
        if (q is None and p is None):
            return (True);
        if (q is None or p is None):
            return (False);
        if (q.val != p.val):
            return (False);
        return (self.traverseTree(q.left, p.left) and self.traverseTree(q.right, p.right));
    def isSameTree(self, p, q):
        return (self.traverseTree(q, p)); 