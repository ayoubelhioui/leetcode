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
    // int flag = false;
    bool hasPathSumUtil(TreeNode* root, int sum) {
        if (!root) return false;
        
        if (!root->left && !root->right)
        {
            if (sum == root->val)
                return (true);
            return (false);
        }
            
        return (hasPathSumUtil(root->left, sum-root->val) || hasPathSumUtil(root->right, sum-root->val));
    }
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        
        return hasPathSumUtil(root, sum);
    }
};