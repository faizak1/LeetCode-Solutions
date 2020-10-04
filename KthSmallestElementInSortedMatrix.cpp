class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int a = matrix.size();
        int b = matrix[0].size();
        priority_queue<int>pq;
        
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                pq.push(matrix[i][j]);
                if (pq.size() > k)
                    pq.pop();
            }
        }
        
        return pq.top();
    }
};