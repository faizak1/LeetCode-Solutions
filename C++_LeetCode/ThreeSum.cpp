class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    if(nums.size() <=2) return {};
    vector<vector<int> > res;
    sort(nums.begin(), nums.end());
    
    for(int i =0; i < nums.size();){
        int startPos = i+1, endPos = nums.size()-1;

        while(startPos < endPos){
            if(nums[i]+nums[startPos]+nums[endPos] == 0){
                res.push_back({nums[i],nums[startPos],nums[endPos]});
                startPos++;
                endPos--;
                while((startPos < endPos) && nums[startPos] == nums[startPos-1]) startPos++;
                while((startPos < endPos) && nums[endPos] == nums[endPos+1]) endPos--;

            }else if(nums[i]+nums[startPos]+nums[endPos]<0){
                startPos++;
                while((startPos < endPos) && nums[startPos] == nums[startPos-1]) startPos++;
            }else{
                endPos--;
                while((startPos < endPos) && nums[endPos] == nums[endPos+1]) endPos--;
            }
        }  
        i++;
        while((i < nums.size()) && nums[i] == nums[i-1])
            i++;
        
    }
    return res;
    }
};