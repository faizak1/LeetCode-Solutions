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
    bool isBalanced(TreeNode* root){
        if (!root) return true;
        findHeight(root);
        //isBalanced(root->left);
        //isBalanced(root->right);
        return abs((findHeight(root->left))-findHeight(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right); 
    }
    int findHeight(TreeNode* root){
        if (root==NULL) return -1;
        int height = 1 + max(findHeight(root->left), findHeight(root->right));        
        return height;
    }
};