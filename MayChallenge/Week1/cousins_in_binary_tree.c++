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
    int depth(TreeNode* root, int node, int d, int &parent){
        if(root->val == node)
            return d;

        int check =0;
        if(root->left != nullptr)
            check += depth(root->left, node, d+1, parent);
        if(root->right != nullptr)
            check += depth(root->right, node, d+1, parent);
        if(parent == -1 && check != 0)
            parent = root->val;
        return check;
    }

    bool isCousins(TreeNode* root, int x, int y) {
        int parent_x=-1, parent_y=-1;
        int x_depth = depth(root, x, 0, parent_x);
        int y_depth = depth(root, y, 0, parent_y);
        return (x_depth == y_depth && parent_x != parent_y);
    }
};
