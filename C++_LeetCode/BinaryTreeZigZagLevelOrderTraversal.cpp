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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> current;
        if (!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int direction = 0;
        while (!q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if (t==NULL){
                if (direction%2==1) {
                    reverse(current.begin(), current.end());
                }
                result.push_back(current);
                current.resize(0);
                if(q.size()>0) q.push(NULL);
                direction++;
            }
            else {
                current.push_back(t->val);
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
        } 
        return result;
    }
};