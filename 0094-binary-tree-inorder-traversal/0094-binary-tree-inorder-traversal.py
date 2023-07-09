# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def recursiveMethod(self, root, result):
        if (root is None):
            return ;
        self.recursiveMethod(root.left, result);
        result.append(root.val);
        self.recursiveMethod(root.right, result);
    def inorderTraversal(self, root):
        if root is None:
            return [];
        result = [];
        self.recursiveMethod(root, result);
        return (result);