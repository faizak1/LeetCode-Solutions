class Solution {
public:
    int fib(int N) {
        if(N==0) return 0;
        int dp[N+1];
        dp[0]=0;
        dp[1]=1;
        for (int i=1;i<N; i++){
            dp[i+1] = dp[i] +dp[i-1];
        }
        return dp[N];
    }
};