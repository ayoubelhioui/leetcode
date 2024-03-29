/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void    recursive(Node *root, vector<int> &vec)
    {
        vec.push_back(root->val);
        for (int i = 0; i < root->children.size();i++)
        {
            recursive(root->children[i], vec);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> vec;
        if (!root)
            return (vec);
        recursive(root, vec);
        return (vec);
    }
};