class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1, -1));
        int rett=func(0,n,coins,amount,dp);
        if(rett==1e8){
            return -1;
        }return rett;
        
    }
    int func( int i, int n, vector<int>&coins, int amount,vector<vector<int>>&dp){
        if(amount==0){
            return 0;
        }
        if(i>=n){
            return 1e8;
        }
        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        int tp1=func(i+1, n, coins, amount,dp);
        int tp2=1e8;
        if(coins[i]<=amount){
            tp2=1+func(i+1,n, coins, amount-coins[i],dp);
        }
        int tp3=1e8;
        if(coins[i]<=amount){
            tp3=1+func(i, n,coins, amount-coins[i],dp);
        }
        return dp[i][amount]=min({tp1, tp2, tp3});
    }
};