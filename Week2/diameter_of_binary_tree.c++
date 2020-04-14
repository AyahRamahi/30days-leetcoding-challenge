/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int diameter = 0;
    int parseBinaryTree(TreeNode* root){
        if(root->left == nullptr && root->right == nullptr)
            return 0;
        int l = 0;
        if(root->left != nullptr)
            l = parseBinaryTree(root->left)+1;
        int r = 0;
        if(root->right != nullptr)
            r = parseBinaryTree(root->right)+1;
        diameter = max(diameter, l+r);
        return max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
            return 0;
        parseBinaryTree(root);
        return diameter;
    }
};