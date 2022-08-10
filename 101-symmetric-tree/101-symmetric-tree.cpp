/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool recursive_helper(TreeNode *left, TreeNode *right)
    {
        if (left == NULL && right == NULL)
            return (true);
        if (left == NULL && right != NULL || left != NULL && right == NULL)
            return (false);
        if (left->val != right->val)
            return (false);
        return (recursive_helper(left->left, right->right) && (recursive_helper(left->right, right->left)));
    }
    
    bool isSymmetric(TreeNode* root) {
        if (root->left == NULL && root->right == NULL)
            return (true);
        return (recursive_helper(root->left, root->right));
    }
};