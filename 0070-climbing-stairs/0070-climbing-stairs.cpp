class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return func(n,dp);
           
    }
    int func(int i, vector<int>&dp){
        if(i<=1){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int tp1=func(i-1, dp);
        int tp2=func(i-2, dp);
        return dp[i]= tp1+tp2;
    }
};