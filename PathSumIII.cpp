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
    int path =0;
    int pathSum(TreeNode* root, int sum) {
        if (!root) return 0;
        else {
            helper(root, sum);
            pathSum(root->left, sum);
            pathSum(root->right, sum);
        }
        return path;
    }
    void helper (TreeNode* root, int sum){
        if (!root) return;
        if (root->val ==sum) path++;
        helper(root->left, sum-root->val);
        helper(root->right, sum-root->val);
    }
};