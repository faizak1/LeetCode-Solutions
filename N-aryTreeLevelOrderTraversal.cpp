/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if (!root) return result;
        vector<int> current;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int breadth = q.size();
            for (int i=0; i<breadth; i++){
                Node* temp = q.front(); 
                q.pop();
                current.push_back(temp->val);
                for (auto child: temp->children){
                        q.push(child);
                }
            }
            result.push_back(current);
            current.resize(0);
        }
        return result;
    }
};