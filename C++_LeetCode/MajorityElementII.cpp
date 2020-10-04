class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash; 
        int n = nums.size();
        for (int i=0; i< n; i++) hash[nums[i]]++;
        int count = n/3;
        nums.clear();
        for (auto elem : hash){
            if (elem.second > count){
                nums.push_back(elem.first);
            }
        }
        return nums;
    }
};