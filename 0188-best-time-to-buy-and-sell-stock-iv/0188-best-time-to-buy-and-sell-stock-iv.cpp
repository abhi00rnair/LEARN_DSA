class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(k+1,vector<int>(2,-1)));
        return func(k,prices,0,true,dp);
    }

    int func(int k , vector<int>&prices, int i, bool canbuy,vector<vector<vector<int>>>&dp){
        if(i>=prices.size() || k==0){
            return 0;
        }
        if(dp[i][k][canbuy]!=-1){
            return dp[i][k][canbuy];
        }
        int profit=0;
        if(canbuy){
            int buy=-prices[i]+func(k,prices,i+1,false,dp);
            int go=func(k,prices,i+1,true,dp);
            profit=max(buy, go);
        }else{
            int sell=prices[i]+func(k-1,prices,i+1,true,dp);
            int hold=func(k,prices,i+1,false,dp);
            profit=max(sell,hold);
        }
        return dp[i][k][canbuy]=profit;
    }
};