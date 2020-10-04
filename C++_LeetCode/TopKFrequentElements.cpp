class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> umap;
        
        for (int i=0; i<nums.size(); i++){
            umap[nums[i]]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto it = umap.begin(); it!=umap.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if (pq.size()> umap.size()-k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};