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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> current;
        
        while (!q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if (t==NULL){
                result.push_back(current);
                current.resize(0);
                if (q.size()>0) q.push(NULL);
            }
            else{
                current.push_back(t->val);
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
        }
        return result; 
    }
};