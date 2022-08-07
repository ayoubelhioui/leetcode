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
int i;
int elements_counter;
// int test
class Solution {
public:
    void recursive(TreeNode *root, vector<vector<int>> &vec)
    {
        elements_counter = max(elements_counter, i);
        if (root == NULL)
        {
            i--;
            return ;
        }   
        if ((root->left == NULL && root->right == NULL))
        {
            vec[i].push_back(root->val);
            i--;
            return ;
        }
        vec[i].push_back(root->val);
        i++;
        recursive(root->left, vec);
        i++;
        recursive(root->right, vec);
        i--;
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        i = 0;
        elements_counter = 0;
        vector<vector<int>> vec(2000);
        if (root == NULL)
        {
            vec.resize(0);
            return (vec);
        }
        recursive(root, vec);
        vec.resize(elements_counter + 1);
        return (vec);
    }
};