# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def DFS(self, root, low, high, count):
        if root is None:
            return ;
        if (root.val >= low and root.val <= high):
            count[0] += root.val;
        self.DFS(root.left, low, high, count);
        self.DFS(root.right, low, high, count);        
    def rangeSumBST(self, root, low, high):
        count = [0];
        self.DFS(root, low, high, count);
        return (count[0]);
        