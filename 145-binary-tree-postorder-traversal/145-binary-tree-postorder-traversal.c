/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int a[100];
int o;
void    do_it_recursively(struct TreeNode* root)
{
    if (!root)
        return ;
    do_it_recursively(root->left);
    do_it_recursively(root->right);
    a[o] = root->val;
    o++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    o = 0;
    do_it_recursively(root);
    *returnSize = o;
    return (a);
}