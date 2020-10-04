class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        int current = nums[0];
        for (int i=1; i<nums.size(); i++){
            current= nums[i-1];
            if (i%2!=0){
                while (nums[i-1]!=0){
                    res.push_back(nums[i]);
                    nums[i-1]--;
                }
            }    
        }
        return res;
    }
};