class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(2,-1)));
        return func(prices,2,0,n,1,dp);
    }
    int func(vector<int>&prices,int limit,int i, int n,int count,vector<vector<vector<int>>>&dp){
        if(i>=n || limit==0){
            return 0;
        }
        if(dp[i][limit][count]!=-1){
            return dp[i][limit][count];
        }
        int profit=0;
        if(count==1){
            int buy=-prices[i]+func(prices,limit,i+1,n,0,dp);
            int go=func(prices,limit,i+1,n,1,dp);
            profit=max(buy,go);
        }else{
            int sell=prices[i]+func(prices,limit-1,i+1,n,1,dp);
            int hold=func(prices,limit,i+1,n,0,dp);
            profit=max(sell,hold);
        }
        return dp[i][limit][count]=profit;
    }
};