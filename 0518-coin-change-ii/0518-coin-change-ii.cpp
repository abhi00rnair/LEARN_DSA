class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1, -1));
        return func(0,n,coins, amount, dp);

    }
    int func(int i, int n, vector<int>&coins, int target, vector<vector<int>>&dp){
        if(target==0){
            return 1;
        }
        if(i>=n){
            return 0;
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        int tp1=func(i+1,n,coins, target, dp);
        int tp2=0;
        if(target>=coins[i]){
            tp2=func(i, n, coins, target-coins[i], dp);
        }
        return dp[i][target]=tp1+tp2;
    }
};