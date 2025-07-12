class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return func(prices,0,n,1,dp);
    }
    int func(vector<int>&prices, int i, int n, int count, vector<vector<int>>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i][count]!=-1){
            return dp[i][count];
        }
        int profit=0;
        if(count==1){
            int buy=-prices[i]+func(prices,i+1,n,0,dp);
            int go=func(prices,i+1,n,1,dp);
            profit=max(buy,go);
        }else{
            int sell=prices[i]+func(prices,i+1,n,1,dp);
            int hold=func(prices,i+1,n,0,dp);
            profit=max(sell,hold);
        }
        return dp[i][count]=profit;
    }
};