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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if (root==NULL) return result; 
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        double sum = 0, count = 0;
        
        while(!q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if (t==NULL){
                result.push_back(sum/count);
                sum = 0;
                count =0;
                if (q.size()>0) q.push(NULL);
            }
            else{
                count++;
                sum = sum+(t->val);
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
        }
        
        return result;
    }
};