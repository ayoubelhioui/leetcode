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
    void DFS(TreeNode* root, vector<int> &result)
    {
        if (!root)
            return ;
        result.push_back(root->val);
        DFS(root->left, result);
        DFS(root->right, result);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> result;
        DFS(root1, result);
        DFS(root2, result);
        sort(begin(result), end(result));
        return (result);
    }
};