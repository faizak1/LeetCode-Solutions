class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashmap;
        for (int i=0; i<nums.size(); i++){
            hashmap[nums[i]]++;
        }
        for (auto elem : hashmap){
            if (elem.second >1)
                return true;
        }
        return false;
    }
};