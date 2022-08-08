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
    void recursive_method(TreeNode* root, vector<int> &vec)
    {
        if (root == NULL)
            return ;
        recursive_method(root->left, vec);
        vec.push_back(root->val);
        recursive_method(root->right, vec);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        recursive_method(root, nodes);
        return (nodes);
    }
};