# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def DFS(self, root, target, isFound, targetSum):
        if (root is None):
            return ;
        target[0] += root.val;
        if (root.left is None and root.right is None):
            if (target[0] == targetSum):
                isFound[0] = True;
        elif (isFound[0] == False):
            self.DFS(root.left, target, isFound, targetSum);
            self.DFS(root.right, target, isFound, targetSum);
        target[0] -= root.val;
    def hasPathSum(self, root, targetSum):
        if (root is None):
            return (False);
        target = [0];
        isFound = [False];
        self.DFS(root, target, isFound, targetSum);
        return (isFound[0]);
        