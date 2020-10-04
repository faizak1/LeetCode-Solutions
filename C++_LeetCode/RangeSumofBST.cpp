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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            if (node!=NULL){
                if (L<=node->val && R>=node->val)
                    sum+=node->val;
                if (L<node->val)
                    st.push(node->left);
                if (R>node->val)
                    st.push(node->right);
            }
        }
        
        return sum;
    }
};