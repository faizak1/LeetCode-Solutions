// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1, last = n, mid;
        bool found = false;
        while (found=false){
            mid = (first+last)/2;
            while(!isBadVersion(mid)){
                first = mid;
                mid = (first+last)/2;
            }
            while(isBadVersion(mid)){
                mid = mid-1;
            }
            if (isBadVersion(mid) && !isBadVersion(mid-1)){
                found = true;
                break;
            }
        }
        return mid;
    }
};