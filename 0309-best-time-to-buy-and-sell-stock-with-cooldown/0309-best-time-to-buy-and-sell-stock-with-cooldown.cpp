class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(), vector<vector<int>>(2,vector<int>(2,-1)));
        return func(prices,0,true,false,dp);
    }
    int func(vector<int>&prices, int i,bool canbuy, bool cooldown,vector<vector<vector<int>>>&dp){
        if(i>=prices.size()){
            return 0;
        }
        if(dp[i][canbuy][cooldown]!=-1){
            return dp[i][canbuy][cooldown];
        }
        int profit=0;
        if(cooldown){
            int go=func(prices,i+1,true,false,dp);
            profit=go;
        }else if(canbuy && !cooldown){
            int buy=-prices[i]+func(prices,i+1,false,false,dp);
            int go=func(prices,i+1,true,false,dp);
            profit=max(buy,go);
        }else{
            int sell=prices[i]+func(prices,i+1,true,true,dp);
            int hold=func(prices,i+1,false,false,dp);
            profit=max(sell,hold);
        }
        return dp[i][canbuy][cooldown]=profit;
    }
};