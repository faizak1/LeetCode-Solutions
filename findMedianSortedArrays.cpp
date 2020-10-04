class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median, temp;
        for (int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        if (nums1.size()==1) return nums1.front();
        if(nums1.size()==2) {
            temp = nums1.front() + nums1.back();
            median = temp/2;
        } 
        sort (nums1.begin(), nums1.end());
         
        int x = 0;
        int y = nums1.size()-1;
        while (x<y){
            x++;
            y--;
            if (x == y - 1){
                temp = (nums1[x] + nums1[y]);
                median = temp/2;
            }
            if (x ==y){
                median = nums1[x];
            }
        }
        return median;
    }
};