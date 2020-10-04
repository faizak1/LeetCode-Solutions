class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==0 || cost.size()==1) return 0;
        if (cost.size()==2) return min(cost[0],cost[1]);
        int dp[cost.size()+1];
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = min(cost[0], cost[1]);
        for (int i=3; i<=cost.size(); i++){
            dp[i] = min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
        }
        return dp[cost.size()];
    }
};