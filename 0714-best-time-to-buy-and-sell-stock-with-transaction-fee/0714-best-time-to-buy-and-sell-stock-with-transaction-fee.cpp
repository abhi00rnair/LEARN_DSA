class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size(), vector<int>(2,-1));
        return func(prices,fee,0,true,dp);
    }

    int func(vector<int>& prices, int fee, int i, bool canbuy,vector<vector<int>>&dp){
        if(i>=prices.size()){
            return 0;
        }
        if(dp[i][canbuy]!=-1){
            return dp[i][canbuy];
        }
        int profit=0;
        if(canbuy){
            int buy=-prices[i]+func(prices,fee,i+1,false,dp);
            int go=func(prices,fee,i+1,true,dp);
            profit=max(buy,go);
        }else{
            int sell=(prices[i]-fee)+func(prices,fee,i+1,true,dp);
            int hold=func(prices,fee,i+1,false,dp);
            profit=max(sell,hold);
        }
        return dp[i][canbuy]=profit;
    }
};