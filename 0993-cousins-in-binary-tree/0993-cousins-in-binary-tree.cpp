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
    vector<int> depth;
    vector<int> parent;
    void    DFS(TreeNode *root, int p, int x, int y, int v)
    {
        if (!root)
            return ;
        if (root->val == x)
        {
            depth.push_back(v);
            parent.push_back(p);
        }
        else if (root->val == y)
        {
            depth.push_back(v);
            parent.push_back(p);
        }
        DFS(root->left, root->val, x, y, v + 1);
        DFS(root->right, root->val, x, y, v + 1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        DFS(root, -1, x, y, 0);
        return ((depth[0] == depth[1]) && (parent[0] != parent[1]));
    }
};