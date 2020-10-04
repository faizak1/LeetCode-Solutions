class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        if (nums[0]!=0) return 0;
        for (int j= 0; j< nums.back(); j++){
            if (nums[j]!= nums[j+1]-1)
                return nums[j]+1;
        }
        return nums.back()+1;
    }
};