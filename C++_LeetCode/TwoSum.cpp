class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> hmap;
        int diff;
        for (int i=0; i<nums.size(); i++){
            diff = target - nums[i];
            if (hmap.find(diff)!= hmap.end() && hmap.find(diff)->second!= i){
                res.push_back(i);
                res.push_back(hmap.find(diff)->second);
            }
            hmap[nums[i]] = i;
        }
        return res;
    }
};