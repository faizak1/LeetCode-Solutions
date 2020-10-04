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
    int sumNumbers(TreeNode* root) {
        if (root==NULL) return 0;
        int sum =0;
        findSum(root, 0, sum);
        return sum;
    }
    void findSum (TreeNode* root, int val, int& sum){
        int current = val*10 + (root->val);
        if (!root->left && !root->right){
            sum = sum+current;
            return;
        }
        if (root->left) findSum(root->left, current, sum);
        if (root->right) findSum(root->right, current, sum);
        
    }
};