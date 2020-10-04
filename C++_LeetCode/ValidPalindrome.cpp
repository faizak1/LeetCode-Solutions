class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), left = 0, right = n - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            if (toupper(s[left++]) != toupper(s[right--])) {
                return false;
            }
        }
        return true;
    }
};