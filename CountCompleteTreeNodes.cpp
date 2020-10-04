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
    int count =0;
    int countNodes(TreeNode* root) {
        if (root==NULL) return 0;
        
        TreeNode* t = root;
        
        if(root->left){
            count ++;
            countNodes(root->left);
        }
        if (root->right){
            count++;
            countNodes(root->right);
        }
        return count +1;
    }
};