class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        
        for (int i=2; i<n; i++){
            dp[i+1] = dp[i] + dp[i-1];
        }
        return dp[n];
    }
};